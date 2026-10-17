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


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cfd7c
void UnlockCardReadManager(unsigned short ownerID, int taskType)
{
    CardReadManager* manager = &data_021118e0;
    volatile CardReadManager* volMan = manager;
    int priorState = DisableIRQInterrupts();
    if (volMan->lock.owner != ownerID || volMan->lock.multiplicity == 0)
    {
        func_020c9be0();
    }
    else
    {
        if (manager->lock.taskType != taskType)
            func_020c9be0();
        int multiplicity = volMan->lock.multiplicity;
        multiplicity--;
        volMan->lock.multiplicity = multiplicity;
        if (multiplicity == 0)
        {
            volMan->lock.owner = -3;
            manager->lock.taskType = 0;
            UnblockContexts(&manager->lock.waitingContexts);
        }
    }
    
    manager->pSharedData->unknown_0 = 0;
    SetIRQInterruptState(priorState);
}

void InitializeCardReadManager();


int IsCardReadManagerInitialized();


void VerifyCardReadManagerInitialized();


void MarkCardReadManagerInitialized(int to);


bool AwaitCardReadManagerIdle();


bool IsCardReadManagerIdle();


int GetCardReadManagerSharedStatus();

