#include <globaldefs.h>
#include "NitroSDK/IPC.h"
#include "NitroSDK/Cache.h"

extern "C" unsigned int func_ov031_0221b8b4(int, int, int);
extern "C" int func_ov031_0221b284(int, int, unsigned short, int);
extern "C" void WaitByLoop(int);

// USA: func_ov031_0221b6f0
extern "C" ARM int func_ov031_0221b6f0(int arg0, int arg1, int arg2) {
    InvalidateDataCacheRange((const void*)arg2, arg1);
    while (IsIPCCommandHandlerRegistered(4, IPCSide_Arm7) == 0) {
    }
    SetArm9IPCCommandHandler(4, (IPCCommandHandler)func_ov031_0221b8b4);
    for (;;) {
        if (func_ov031_0221b284(1, arg0, arg1, arg2) == 1) {
            break;
        }
        WaitByLoop(0x40000);
    }
    InvalidateDataCacheRange((const void*)arg2, arg1);
    return 1;
}
