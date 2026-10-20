#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"

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
    QueueJob022052b4* job;
    int interruptState;
    int result;
    while (1) {
        PopQueueEntryOrWait020c7fe0(queue, (unsigned int*)&job, 1);
        if (job == NULL) break;
        result = job->callback(job);
        interruptState = DisableIRQInterrupts();
        AddContextSwitchLock();
        func_020c7ea0(queue, NULL, 0);
        if (job->socket) job->socket->result = result;
        if (job->resultQueue) func_020c7e0c(job->resultQueue, result, 0);
        CallGlobalWithArg_02205174((int)job);
        RemoveContextSwitchLock();
        SetIRQInterruptState(interruptState);
    }
}
