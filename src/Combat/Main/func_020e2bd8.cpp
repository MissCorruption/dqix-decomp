#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_020439b0;
extern "C" void func_020e2cc4(struct Struct_020439b0*, int);
struct Struct_020e2bd8_2;
extern "C" void func_020e2c7c(struct Struct_020e2bd8_2*);

struct Struct_020e2bd8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned char unknown_14_[0x10];
};

// USA: func_020e2bd8
extern "C" ARM void func_020e2bd8(struct Struct_020e2bd8* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = 0;
    arg0->unknown_1_ = arg1;
    arg0->unknown_2_ = arg2;
    VectorizedMemset(arg0->unknown_14_, 0, 0x10);
    arg0->unknown_4_ = 5;
    arg0->unknown_8_ = 1;
    arg0->unknown_c_ = 0x1f;
    arg0->unknown_10_ = 1;
    func_020e2cc4((struct Struct_020439b0*)arg0, 0);
    func_020e2c7c((struct Struct_020e2bd8_2*)arg0);
}
