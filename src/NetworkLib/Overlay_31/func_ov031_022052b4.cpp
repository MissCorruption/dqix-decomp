#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/ProcessorContext.h"

struct SOCLSocket022052b4 {
    char cpsSocket[0x64];
    void* receivePipe;
    void* sendPipe;
    int result;
    short state;
    signed char blockFlag, modeFlag;
    unsigned short localPort, remotePort;
    unsigned int remoteAddress;
    SOCLSocket022052b4* next;
};
struct QueueJob022052b4 {
    int (*callback)(void*);
    SOCLSocket022052b4* socket;
    void* resultQueue;
    signed char modeFlag, blockFlag;
    unsigned char padding[2];
};
int PopQueueEntryOrWait020c7fe0(void*, unsigned int*, int);
void CallGlobalWithArg_02205174(int);
extern "C" int func_020c7ea0(void*, unsigned int*, int);
extern "C" int func_020c7e0c(void*, unsigned int, int);

// USA: func_ov031_022052b4
extern "C" ARM void func_ov031_022052b4(void* queue) {
    unsigned int message;
    int interruptState;
    while (1) {
        PopQueueEntryOrWait020c7fe0(queue, &message, 1);
        QueueJob022052b4* job = (QueueJob022052b4*)message;
        if (job == NULL) break;
        int result = job->callback(job);
        interruptState = DisableIRQInterrupts();
        AddContextSwitchLock();
        func_020c7ea0(queue, NULL, 0);
        job = (QueueJob022052b4*)message;
        if (job->socket) job->socket->result = result;
        job = (QueueJob022052b4*)message;
        if (job->resultQueue) func_020c7e0c(job->resultQueue, result, 0);
        CallGlobalWithArg_02205174(message);
        RemoveContextSwitchLock();
        SetIRQInterruptState(interruptState);
    }
}

