#include "Filesystem/FSInnerDefs.h"
#include "System/BiosData.h"
#include "System/Memory.h"
#include "System/Interrupts.h"
#include "System/Cache.h"
#include "System/DMA.h"
#include <globaldefs.h>
#include <asmhacks.h>

#define ADDR_ITCM_START 0x01ff8000
#define ADDR_ITCM_END 0x02000000

#define ADDR_GAMECARD_BUS_ROMCTRL 0x040001a4
#define ADDR_GAMECARD_RECEIVED_DATA 0x04100010
#define GAMECARD_BUS_COMMAND_BYTE(n) *(unsigned char*)(0x040001a8 + n)

#define ROMCTRL_FLAG_WORD_READY (1u << 23)
#define ROMCTRL_FLAG_BUSY (1u << 31)

void SendTaskToReadContext(CardReadManager::ReadProc);

unsigned int GetDataTcmRegionBase_020c89e4(void);
void StartDmaWithFlush020ca8e8(unsigned int chan, unsigned int addr, unsigned int len, unsigned int size);
void RegisterType0x11Handler_020d1118(void);
void SyncIfBufferValueChanged_020d1234(unsigned int id);

void WaitForReadManagerIdle_Internal();
Struct_02111f20::LowLevelReadProc GetLowLevelCartridgeReadProc();

extern "C" bool TransferScratchBuffer(Struct_02111f20* input);

void SendGamecardBusCommand(unsigned int firstWord, unsigned int secondWord);

void ReadSingleSegmentFromCartridge();

void DMAChainSegmentInterruptHandler();

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0a5c
extern "C" bool TryReadViaDMA(Struct_02111f20* handler)
{
    CardReadManager* readManager = &data_021118e0;
    unsigned int length = readManager->writeLength;

    bool canDoDMARead = false;
    bool readAlignedToCartridgeSegments = false;
    bool destinationIsSuitableMemoryType = false;
    bool destinationIsCacheAligned = false;

    unsigned int destination = (unsigned int)readManager->writeDst;
    unsigned int alignmentMod32 = (unsigned int)destination & 0x1f;

    if (alignmentMod32 == 0 && ((readManager->dmaChannel <= 3)))
        destinationIsCacheAligned = true;

    if (destinationIsCacheAligned)
    {
        unsigned int dtcmBase = GetDataTcmRegionBase_020c89e4();
        bool isDTCM = true;
        bool isITCM = false;
        if (destination + length > ADDR_ITCM_START && destination < ADDR_ITCM_END)
            isITCM = true;

        if (!isITCM && (dtcmBase >= destination + length || dtcmBase + 0x4000 <= destination))
            isDTCM = false;

        if (!isDTCM)
            destinationIsSuitableMemoryType = true;
    }

    if (destinationIsSuitableMemoryType && ((readManager->cartridgeReadOffset | length) & 0x1ff) == 0)
        readAlignedToCartridgeSegments = true;

    if (readAlignedToCartridgeSegments && length != 0)
        canDoDMARead = true;

    handler->control_4 = (data_020f22cc->gamecardBusControlNormalSettings & ~0x07000000) | 0xa1000000;

    if (canDoDMARead)
    {
        int oldState = DisableIRQInterrupts();
        if (length < readManager->instructionCacheCleanThreshold)
            InvalidateInstructionCacheRange((void*)destination, length);
        else
            InvalidateInstructionCache();

        if (length < readManager->dataCacheCleanThreshold)
        {
            if (alignmentMod32 != 0)
            {
                destination -= alignmentMod32;
                CleanCacheRange((void*)destination, 0x20);
                CleanCacheRange((void*)(destination + length), 0x20);
                length += 0x20;
            }
            InvalidateDataCacheRange((void*)destination, length);
            DrainWriteBuffer();
        }
        else
        {
            CleanInvalidateDataCache();
        }

        SetInterruptHandler(IRQ_MASK_GAMECARD_DATA_TRANSFER_DONE, &DMAChainSegmentInterruptHandler);
        AcknowledgeSpecificInterrupts(IRQ_MASK_GAMECARD_DATA_TRANSFER_DONE);
        EnableSpecificInterrupts(IRQ_MASK_GAMECARD_DATA_TRANSFER_DONE);
        SetIRQInterruptState(oldState);
        ReadSingleSegmentFromCartridge();
    }

    return canDoDMARead;
}

extern "C" void ReadBlocksFromCartridge(Struct_02111f20* handler);

unsigned int SetupNormalGamecardBusCommandMode();

extern "C" void SafeReadBlocksFromCartridge(CardReadManager*);

void LoadDataFromCartridgeToMemory(unsigned int dmaChannel,
    unsigned int cartridgeOffset, void* dest, unsigned int length,
    CardReadManager::CompletionCallback onComplete, NitroHandle* handle, CBool async);

void InitializeCardReading();

void WaitForReadManagerIdle_Internal();

Struct_02111f20::LowLevelReadProc GetLowLevelCartridgeReadProc();

void IPCCommand11Proc(unsigned int command, unsigned int argument, unsigned int flag);

void CartridgeReadContextLoop();
