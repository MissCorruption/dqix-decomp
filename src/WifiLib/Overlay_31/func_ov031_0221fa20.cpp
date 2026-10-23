#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_0224f670_11 {
    char unknown_0_[0x68];
    int unknown_68_;
    int unknown_6c_;
};

extern Struct_ov031_0224f670_11 data_ov031_0224f670;
extern void* data_ov031_0224f6f4[4];

// USA: func_ov031_0221fa20
extern "C" THUMB void* func_ov031_0221fa20() {
    int var0 = DisableIRQInterrupts();
    int var1 = data_ov031_0224f670.unknown_6c_;
    void* var2;
    if (data_ov031_0224f670.unknown_68_ == var1) {
        var2 = 0;
    } else {
        var2 = data_ov031_0224f6f4[var1];
        data_ov031_0224f670.unknown_6c_ = var1 + 1;
        if (data_ov031_0224f670.unknown_6c_ >= 4) data_ov031_0224f670.unknown_6c_ = 0;
    }
    SetIRQInterruptState(var0);
    return var2;
}
