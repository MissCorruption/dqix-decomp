#include <globaldefs.h>

struct Struct_020b1d48_2 {
    int unknown_0_;             // 0x0
    int unknown_4_;             // 0x4
    int unknown_8_;             // 0x8
    unsigned char unknown_c_;   // 0xc
    unsigned char unknown_d_[3];  // 0xd..0xf
    int unknown_10_;            // 0x10
    int unknown_14_;            // 0x14
};

// USA: func_020b1d48
extern "C" ARM void func_020b1d48(struct Struct_020b1d48_2* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    arg0->unknown_4_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_c_ = arg4;
    arg0->unknown_0_ = arg1;
    arg0->unknown_14_ = arg5;
    arg0->unknown_10_ = arg6;
}
