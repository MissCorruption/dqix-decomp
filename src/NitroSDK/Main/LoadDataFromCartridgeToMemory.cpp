#include "Filesystem/FSInnerDefs.h"
#include "Filesystem/CardReadManager.h"
#include "System/Interrupts.h"
#include "System/DMA.h"
#include <globaldefs.h>

#if defined(jpn)
#define data_02111f20 data_02111bc0
#endif

// NitroSDK card_rom.c: static CARDRomStat rom_stat ATTRIBUTE_ALIGN(32);
extern Struct_02111f20 data_02111f20 __attribute__((aligned(32)));

extern "C" bool TryReadViaDMA(Struct_02111f20* rawHandler);
extern "C" void SafeReadBlocksFromCartridge(CardReadManager* readManager);
void WaitForReadManagerIdle_Internal();

// NitroSDK card_common.h: CARDi_WaitTask
static inline void WaitAndBeginCardReadTask(CardReadManager* manager,
    CardReadManager::CompletionCallback onComplete, NitroHandle* handle)
{
    int priorState = DisableIRQInterrupts();
    while (manager->flags & (1 << READ_MANAGER_FLAG_HARDWARE_READ_IN_PROGRESS))
        BlockCurrentContext(&manager->ongoingReadBlock);
    manager->flags |= (1 << READ_MANAGER_FLAG_HARDWARE_READ_IN_PROGRESS);
    manager->onComplete = onComplete;
    manager->handle = handle;
    SetIRQInterruptState(priorState);
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0dcc
ARM void LoadDataFromCartridgeToMemory(unsigned int dmaChannel,
    unsigned int cartridgeOffset, void* dest, unsigned int length,
    CardReadManager::CompletionCallback onComplete, NitroHandle* handle, CBool async)
{
    Struct_02111f20* const rawHandler = &data_02111f20;
    CardReadManager* const manager = &data_021118e0;

    VerifyCardReadManagerInitialized();

    WaitAndBeginCardReadTask(manager, onComplete, handle);

    manager->dmaChannel = dmaChannel;
    manager->cartridgeReadOffset = cartridgeOffset + data_02111f00.number;
    manager->writeDst = (unsigned char*)dest;
    manager->writeLength = length;
    if (dmaChannel <= 3)
        ResetDMAChannel(dmaChannel);

    if (TryReadViaDMA(rawHandler))
    {
        if (!async)
            WaitForReadManagerIdle_Internal();
    }
    else if (async)
    {
        SendTaskToReadContext(&SafeReadBlocksFromCartridge);
    }
    else
    {
        manager->currentTaskExecutionContext = data_02111304.activeContext;
        SafeReadBlocksFromCartridge(manager);
    }
}
