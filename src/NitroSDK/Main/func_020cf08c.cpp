#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" int func_020cf88c(void);

struct Struct_02111818 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned char unknown_18_[4];
    unsigned int unknown_1c_;
    unsigned int unknown_20_;
    unsigned int unknown_24_;
};

extern struct Struct_02111818 data_02111818;

// USA: func_020cf08c
extern "C" ARM int func_020cf08c(int arg0, int arg1, int arg2) {
    unsigned int var0 = DisableIRQInterrupts();
    if (data_02111818.unknown_c_ != 0) {
        SetIRQInterruptState(var0);
        return 1;
    }
    data_02111818.unknown_c_ = 1;
    SetIRQInterruptState(var0);
    data_02111818.unknown_20_ = 0;
    data_02111818.unknown_24_ = 0;
    data_02111818.unknown_14_ = arg0;
    data_02111818.unknown_10_ = arg1;
    data_02111818.unknown_1c_ = arg2;
    return func_020cf88c() ? 0 : 3;
}
