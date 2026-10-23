#include <globaldefs.h>

struct Struct_0205bb04 {
    int unknown_0_;
    char unknown_4_[4];
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[4];
    int unknown_14_;
    char unknown_18_[0x24 - 0x18];
    int* unknown_24_;
    int* unknown_28_;
    int* unknown_2c_;
};

// USA: func_0205bb04
extern "C" ARM void func_0205bb04(struct Struct_0205bb04* arg0, int arg1) {
    if (arg1 < 0) return;
    if (arg1 >= arg0->unknown_0_) return;
    int var0 = arg0->unknown_c_ * arg0->unknown_8_;
    if (var0 == 0) return;
    arg0->unknown_14_ = arg1 / var0;
    arg1 = arg1 % var0;
    *arg0->unknown_2c_ = arg1 % *arg0->unknown_24_;
    *arg0->unknown_28_ = arg1 / *arg0->unknown_24_;
}
