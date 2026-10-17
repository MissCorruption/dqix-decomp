#include "Filesystem/CardReadManager.h"
#include "System/BiosData.h"
#include "System/Interrupts.h"
#include "System/Cache.h"
#include "System/IPC.h"
#include "System/Memory.h"
#include "Filesystem/FSInnerDefs.h"
#include <asmhacks.h>



#if defined(jpn)

#define data_02111860 data_02111500
#endif

extern "C"
{
    // memset but tries to do 32 bytes at a time
    void func_020ca458(int value, void* dst, unsigned len);

    // abort() or fatal error or similar
    void func_020c9be0();
}
// is card read manager initialized
extern int data_02111860;

void MarkCardReadManagerInitialized(int to);

void SendTaskToReadContext(CardReadManager::ReadProc task);


void LockCardReadManager(unsigned short ownerID, int taskType);


void UnlockCardReadManager(unsigned short ownerID, int taskType);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cfe08
void InitializeCardReadManager()
{
    CardReadManager* manager = &data_021118e0;
    volatile CardReadManager* volatileManager = manager;

    // two of these need to be volatile and definitely owner
    volatileManager->lock.owner = -3;
    volatileManager->lock.multiplicity = 0;
    manager->lock.taskType = 0;
    manager->pSharedData = &data_02111880;
    
    func_020ca458(0, &data_02111880, sizeof(Arm7CardReadData));
    CleanInvalidateCacheRange(&data_02111880, sizeof(Arm7CardReadData));
    manager->instructionCacheCleanThreshold = 0xffffffff;
    manager->dataCacheCleanThreshold = 0xffffffff;
    
    if (!IsDownloadPlay())
        VectorizedInvertedMemcpy((void*)BIOS_ADDR_CARTRIDGE_HEADER, (void*)0x027ffa80, 0x160);
    
    manager->contextPriority_108 = 4;
    manager->lock.waitingContexts.last = 0;
    manager->lock.waitingContexts.first = 0;
    manager->ongoingReadBlock.last = 0;
    manager->ongoingReadBlock.first = 0;

    PopulateContext(&manager->cartridgeReadContext, (unsigned int)&CartridgeReadContextLoop, 0, (unsigned int)(&data_021118e0 + 1), 0x400, manager->contextPriority_108);
    MarkContextReadyAndSwitch(&manager->cartridgeReadContext);
    SetArm9IPCCommandHandler(11, &IPCCommand11Proc);

    if (IsDownloadPlay())
    {
        DECLARE_ASM_NOP();
        return;
    }
    MarkCardReadManagerInitialized(true);    
}

int IsCardReadManagerInitialized();


void VerifyCardReadManagerInitialized();


void MarkCardReadManagerInitialized(int to);


bool AwaitCardReadManagerIdle();


bool IsCardReadManagerIdle();


int GetCardReadManagerSharedStatus();

