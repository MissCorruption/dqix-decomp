#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_0224f620_5 {
    unsigned char unknown_0_[0x18];
    int unknown_18_;
};
extern Struct_ov031_0224f620_5 data_ov031_0224f620;
extern "C" int func_ov031_0220d214();

// USA: func_ov031_0221f158
extern "C" THUMB int func_ov031_0221f158() {
    int var0 = DisableIRQInterrupts();
    if (data_ov031_0224f620.unknown_18_ == 7) {
        if (func_ov031_0220d214() == 3) {
            data_ov031_0224f620.unknown_18_ = 4;
            SetIRQInterruptState(var0);
            return 1;
        }
    }
    SetIRQInterruptState(var0);
    return 0;
}
