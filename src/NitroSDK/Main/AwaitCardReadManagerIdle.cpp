#include "Filesystem/CardReadManager.h"
#include "Filesystem/FSInnerDefs.h"
#include "System/Interrupts.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cff50
ARM bool AwaitCardReadManagerIdle()
{
    CardReadManager* manager = &data_021118e0;
    int priorState = DisableIRQInterrupts();
    goto test;
loop:
    BlockCurrentContext(&manager->ongoingReadBlock);
test:
    if (manager->flags & (1 << READ_MANAGER_FLAG_HARDWARE_READ_IN_PROGRESS))
        goto loop;
    SetIRQInterruptState(priorState);
    return manager->pSharedData->unknown_0 == 0;
}
