#include <globaldefs.h>

extern "C" void* func_ov023_021e2418(void*, int);

struct Struct_ov023_021e24b0 {
    char unknown_0_[3];
    unsigned char unknown_3_0_ : 4;
    unsigned char unknown_3_4_ : 4;
    char unknown_4_[8];
    int unknown_c_;
    unsigned char unknown_10_0_ : 4;
    unsigned char unknown_10_4_ : 1;
    unsigned char unknown_10_5_ : 1;
    unsigned char unknown_10_6_ : 1;
    unsigned char unknown_10_7_ : 1;
};

// USA: func_ov023_021e24b0
extern "C" ARM void func_ov023_021e24b0(void* arg0, int arg1, int arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7, unsigned char arg8) {
    Struct_ov023_021e24b0* var0 = (Struct_ov023_021e24b0*)func_ov023_021e2418(arg0, arg1);
    if (!var0) return;
    var0->unknown_c_ = arg2;
    var0->unknown_3_0_ = arg3;
    var0->unknown_3_4_ = arg4;
    var0->unknown_10_4_ = arg5;
    var0->unknown_10_0_ = arg6;
    var0->unknown_10_5_ = arg7;
    var0->unknown_10_6_ = arg8;
}
