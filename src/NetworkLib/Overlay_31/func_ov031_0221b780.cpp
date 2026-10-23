#include <globaldefs.h>
#include "NitroSDK/IPC.h"
#include "NitroSDK/Cache.h"

extern "C" unsigned int func_ov031_0221b8b4(int, int, int);
extern "C" int func_ov031_0221b284(int, int, int, int);
extern "C" void WaitByLoop(int);

// USA: func_ov031_0221b780
extern "C" ARM int func_ov031_0221b780(int arg0, int arg1, int arg2) {
    while (IsIPCCommandHandlerRegistered(4, IPCSide_Arm7) == 0) {
    }
    SetArm9IPCCommandHandler(4, (IPCCommandHandler)func_ov031_0221b8b4);
    CleanCacheRange((const void*)arg2, arg1);
    for (;;) {
        int var0 = func_ov031_0221b284(2, arg0, arg1, arg2);
        if (var0 == 1) {
            return var0;
        }
        WaitByLoop(0x40000);
    }
}
