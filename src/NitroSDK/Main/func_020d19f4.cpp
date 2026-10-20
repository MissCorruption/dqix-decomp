#include <globaldefs.h>
#include <NitroSDK/Interrupts.h>
#include <NitroSDK/Memory.h>
#include <NitroSDK/ProcessorContext.h>

struct CartridgeTask020d19f4;

typedef unsigned long (*CartridgeTaskFunction020d19f4)(CartridgeTask020d19f4* task);

struct CartridgeTask020d19f4 {
    CartridgeTaskFunction020d19f4 task;
    CartridgeTaskFunction020d19f4 callback;
    unsigned long result;
    unsigned char* data;
    unsigned char* address;
    unsigned long offset;
    unsigned long size;
    unsigned char* dst;
    unsigned short sectorCount;
    unsigned char busy;
    unsigned char param[1];
};

struct CartridgeTaskWork020d19f4 {
    unsigned char thread[0xc0];
    CartridgeTask020d19f4* volatile list;
    CartridgeTask020d19f4 endTask;
};

struct TaskData020d19f4 {
    CartridgeTaskWork020d19f4* taskWork;
    CartridgeTask020d19f4 taskList;
};

struct TaskCopy020d19f4 {
    unsigned long words[sizeof(CartridgeTask020d19f4) / 4];
};

extern TaskData020d19f4 data_02112328;

// USA: func_020d19f4
extern "C" ARM void func_020d19f4(void* arg) {
    CartridgeTaskWork020d19f4* const p = (CartridgeTaskWork020d19f4*)arg;

    for (;;) {
        CartridgeTask020d19f4 task;

        VectorizedMemset(&task, 0, sizeof(CartridgeTask020d19f4));
        {
            int priorState = DisableIRQInterrupts();
            while (!p->list) {
                BlockCurrentContext(NULL);
            }
            *(TaskCopy020d19f4*)&task = *(TaskCopy020d19f4*)p->list;
            SetIRQInterruptState(priorState);
        }

        if (task.task) {
            task.result = task.task(&task);
        }

        {
            int priorState = DisableIRQInterrupts();
            CartridgeTaskFunction020d19f4 callback = task.callback;

            data_02112328.taskList.busy = false;
            if (callback) {
                callback(&task);
            }
            if (data_02112328.taskWork == NULL) {
                break;
            }
            p->list = NULL;
            SetIRQInterruptState(priorState);
        }
    }

    ContextExecutionReturnProc();
    return;
}
