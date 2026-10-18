#include "Filesystem/CardReadManager.h"
#include "Filesystem/FSInnerDefs.h"
#include "System/Interrupts.h"
#include <globaldefs.h>

extern "C" void func_020c9be0();

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cfcf8
ARM void LockCardReadManager(unsigned short ownerID, int taskType)
{
    CardReadManager* const manager = &data_021118e0;
    int priorState = DisableIRQInterrupts();
    if (manager->lock.owner == ownerID)
    {
        if (manager->lock.taskType != taskType)
            func_020c9be0();
    }
    else
    {
        goto test;
    loop:
        BlockCurrentContext(&manager->lock.waitingContexts);
    test:
        if (manager->lock.owner != -3)
            goto loop;
        manager->lock.owner = ownerID;
        manager->lock.taskType = taskType;
    }

    manager->lock.multiplicity++;
    manager->pSharedData->unknown_0 = 0;
    SetIRQInterruptState(priorState);
}
