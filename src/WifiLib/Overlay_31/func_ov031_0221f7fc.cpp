#include <globaldefs.h>

struct Struct_ov031_0224f670_5 {
    int unknown_0_[11];
    int unknown_2c_;
};

extern Struct_ov031_0224f670_5 data_ov031_0224f670;
extern "C" int func_ov031_0220cce4(void);
extern "C" int func_ov031_0221f630(void);
int DisableIRQInterrupts();
int SetIRQInterruptState(int);

// USA: func_ov031_0221f7fc
extern "C" THUMB int func_ov031_0221f7fc(void) {
    int var0 = DisableIRQInterrupts();
    if (data_ov031_0224f670.unknown_2c_ == 3) {
        if (func_ov031_0220cce4() != 3) {
            SetIRQInterruptState(var0);
            return 0;
        }
        data_ov031_0224f670.unknown_2c_ = 2;
        SetIRQInterruptState(var0);
        return 1;
    }
    if (func_ov031_0221f630() == 1) {
        data_ov031_0224f670.unknown_2c_ = 2;
        SetIRQInterruptState(var0);
        return 1;
    }
    SetIRQInterruptState(var0);
    return 0;
}
