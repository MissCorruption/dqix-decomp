#include <globaldefs.h>

struct Struct_ov024_021f6a1c { char unknown_0_[0xc0]; int unknown_c0_; };

extern "C" void func_ov024_021f6a4c(void* arg0, void* arg1);

// USA: func_ov024_021f6a1c
extern "C" ARM void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1) {
    if (arg0->unknown_c0_ < 0x10) {
        func_ov024_021f6a4c((char*)arg0 + arg0->unknown_c0_ * 0xc, arg1);
        arg0->unknown_c0_ = arg0->unknown_c0_ + 1;
    }
}
