#include <globaldefs.h>

struct Struct_020439b0_3 {
    unsigned char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
};

// USA: func_020e2d2c
extern "C" ARM void func_020e2d2c(struct Struct_020439b0_3* arg0, int arg1, int arg2, int arg3, int arg4) {
    arg0->unknown_14_ = arg1;
    arg0->unknown_18_ = arg2;
    arg0->unknown_1c_ = arg1 + arg3;
    arg0->unknown_20_ = arg2 + arg4;
}
