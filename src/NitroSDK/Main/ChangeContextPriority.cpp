#include "System/Interrupts.h"
#include "System/ProcessorContext.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c7a90
ARM bool ChangeContextPriority(ProcessorContext *context, unsigned int priority) {
    ProcessorContext *t   = data_021112e0.substruct_24.firstContext;
    ProcessorContext *pre = NULL;
    int priorState        = DisableIRQInterrupts();

    while (t != NULL && t != context) {
        pre = t;
        t   = t->pNext;
    }

    if (t == NULL || t == &data_021112e0.contextA) {
        SetIRQInterruptState(priorState);
        return false;
    }

    if (t->priority != priority) {
        if (pre == NULL) {
            data_021112e0.substruct_24.firstContext = context->pNext;
        } else {
            pre->pNext = context->pNext;
        }

        context->priority = priority;
        InsertContextIntoGlobalList(context);

        SwitchContext();
    }

    SetIRQInterruptState(priorState);
    return true;
}
