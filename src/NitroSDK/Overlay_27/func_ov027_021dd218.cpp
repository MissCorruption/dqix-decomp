#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Interrupts.h"

struct WaitNode021dd218 {
    WaitNode021dd218* next;
    unsigned int isActive : 1;
    unsigned int priority : 31;
    void (*onDequeue)(WaitNode021dd218*);
    void (*onComplete)(WaitNode021dd218*);
};

struct QueueContext021dd218 {
    ProcessorContext ctx;
    WaitNode021dd218* volatile queueHead;
    WaitNode021dd218 sentinel;
};

// USA: func_ov027_021dd218
extern "C" ARM void func_ov027_021dd218(QueueContext021dd218* obj) {
    for (;;) {
        WaitNode021dd218* node = NULL;
        {
            int state = DisableIRQInterrupts();
            while (obj->queueHead == NULL) {
                ChangeContextPriority((ProcessorContext*)obj, 0);
                BlockCurrentContext(NULL);
            }
            node = obj->queueHead;
            obj->queueHead = obj->queueHead->next;
            ChangeContextPriority((ProcessorContext*)obj, node->priority);
            SetIRQInterruptState(state);
        }

        if (node->onDequeue != NULL) node->onDequeue(node);

        {
            int state = DisableIRQInterrupts();
            void (*onComplete)(WaitNode021dd218*) = node->onComplete;
            const unsigned int currentPriority = GetContextPriority((ProcessorContext*)obj);
            unsigned int newPriority;
            if (obj->queueHead == NULL) {
                newPriority = 0;
            } else if (currentPriority < obj->queueHead->priority) {
                newPriority = obj->queueHead->priority;
            } else {
                newPriority = currentPriority;
            }
            if (newPriority != currentPriority) {
                ChangeContextPriority((ProcessorContext*)obj, newPriority);
            }

            node->next = NULL;
            node->isActive = 0;
            if (onComplete != NULL) onComplete(node);

            if (node == &obj->sentinel) break;
            SetIRQInterruptState(state);
        }
    }
    ContextExecutionReturnProc();
}
