#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" int func_020d41e8(void);
extern "C" int func_020d424c(int arg0, int arg1);
#include "NitroSDK/IPC.h"

extern "C" void func_020d468c(void);
void SetArm9IPCCommandHandler(int command, IPCCommandHandler handler);

struct Struct_021142e0_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[2];
    unsigned int unknown_4_;
};

extern struct Struct_021142e0_2 data_021142e0;

// USA: func_020d3fdc
extern "C" ARM int func_020d3fdc(void) {
    unsigned int var0 = DisableIRQInterrupts();
    if (func_020d41e8() != 0) {
        SetIRQInterruptState(var0);
        return 3;
    }
    int var1 = func_020d424c(1, 0);
    if (var1 != 0) {
        return var1;
    }
    func_020d468c();
    SetArm9IPCCommandHandler(0xa, 0);
    data_021142e0.unknown_4_ = 0;
    data_021142e0.unknown_0_ = 0;
    SetIRQInterruptState(var0);
    return 0;
}
