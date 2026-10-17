#include "System/Interrupts.h"
#include "System/ProcessorContext.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c79bc
ARM void CycleCurrentPriorityContexts() {
    ProcessorContext *pre        = NULL;
    ProcessorContext *lastThread = NULL;
    int samePriorityThread       = 0;
    int priorState;
    ProcessorContext *current    = data_021112e0.substruct_24.activeContext;
    priorState                   = DisableIRQInterrupts();

    ProcessorContext *t    = data_021112e0.substruct_24.firstContext;
    ProcessorContext *tPre = NULL;

    while (t != NULL) {
        if (t == current) {
            pre = tPre;
        }

        if (current->priority == t->priority) {
            lastThread = t;
            samePriorityThread++;
        }

        tPre = t;
        t    = t->pNext;
    }

    if (samePriorityThread <= 1 || lastThread == current) {
        SetIRQInterruptState(priorState);
        return;
    }

    if (pre == NULL) {
        data_021112e0.substruct_24.firstContext = current->pNext;
    } else {
        pre->pNext = current->pNext;
    }

    current->pNext    = lastThread->pNext;
    lastThread->pNext = current;

    SwitchContext();

    SetIRQInterruptState(priorState);
}
