#include <globaldefs.h>

ARM unsigned int DisableIRQInterrupts();
ARM unsigned int SetIRQInterruptState(int mask);
struct Struct_020c9384;
extern "C" ARM void func_020c9384(struct Struct_020c9384* arg0);

struct Struct_020c949c {
    unsigned int unknown_0_;
    char unknown_4_[0x20];
    unsigned int unknown_24_;
};

// USA: func_020c949c
extern "C" ARM void func_020c949c(struct Struct_020c949c* arg0) {
    unsigned int var0 = DisableIRQInterrupts();
    arg0->unknown_24_ = 1;
    if (arg0->unknown_0_ == 0) {
        SetIRQInterruptState(var0);
        return;
    }
    func_020c9384((struct Struct_020c9384*)arg0);
    arg0->unknown_0_ = 0;
    SetIRQInterruptState(var0);
}
