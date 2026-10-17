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

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cfcbc
void SendTaskToReadContext(CardReadManager::ReadProc task)
{
    CardReadManager* readManager = (CardReadManager*)&data_021118e0;
    ChangeContextPriority(&readManager->cartridgeReadContext, data_021118e0.contextPriority_108);
    readManager->currentTaskExecutionContext = &readManager->cartridgeReadContext;
    readManager->cartridgeReadProc = task;
    readManager->flags |= (1 << READ_MANAGER_FLAG_CONTEXT_HAS_TASK_PENDING);
    MarkContextReadyAndSwitch(&readManager->cartridgeReadContext);
}

void LockCardReadManager(unsigned short ownerID, int taskType);


void UnlockCardReadManager(unsigned short ownerID, int taskType);


void InitializeCardReadManager();


int IsCardReadManagerInitialized();


void VerifyCardReadManagerInitialized();


void MarkCardReadManagerInitialized(int to);


bool AwaitCardReadManagerIdle();


bool IsCardReadManagerIdle();


int GetCardReadManagerSharedStatus();

