#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0204f174 {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    char unknown_c_[0x9c - 0xc];
    int unknown_9c_;
    int unknown_a0_;
    int unknown_a4_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xc2 - 0xb0];
    short unknown_c2_;
    char unknown_c4_;
    unsigned char unknown_c5_;
    char unknown_c6_[2];
    short unknown_c8_;
    short unknown_ca_;
    char unknown_cc_[4];
    int unknown_d0_;
    unsigned short* unknown_d4_;
};

extern "C" void func_0204f914(Struct_0204f174* arg0, int arg1, short arg2, short arg3, short arg4, short arg5);
extern "C" void func_0204ea5c(Struct_0204f174* arg0);
extern "C" void func_0204ecb4(Struct_0204f174* arg0, int arg1, int arg2, short arg3, short arg4, signed char* arg5);

// USA: func_0204f174
extern "C" ARM void func_0204f174(Struct_0204f174* arg0, short arg1, short arg2, short arg3, short arg4,
                                  unsigned char arg5, unsigned char arg6, unsigned char arg7,
                                  signed char* arg8) {
    arg0->unknown_ac_ = arg1;
    arg0->unknown_ae_ = arg2;
    arg0->unknown_c2_ = arg5;
    if (arg6) {
        arg0->unknown_c5_ |= 4;
    } else {
        arg0->unknown_c5_ &= ~4;
    }
    if (arg7) {
        arg0->unknown_c5_ |= 0x10;
    } else {
        arg0->unknown_c5_ &= ~0x10;
    }
    int var0 = arg3 * arg4 * 2;
    if (arg0->unknown_c5_ & 1) {
        if (arg0->unknown_a8_ < arg3) arg3 = arg0->unknown_a8_;
        if (arg0->unknown_aa_ < arg4) arg4 = arg0->unknown_aa_;
        arg0->unknown_c8_ = arg3;
        arg0->unknown_ca_ = arg4;
        arg0->unknown_d0_ = var0;
        memset(arg0->unknown_8_, 0, arg0->unknown_a4_);
        if (!arg6) {
            short var1 = 0;
            short var2 = 0;
            short var3 = arg3 << 3;
            short var4 = arg4 << 3;
            if (arg8) {
                var2 += arg8[0];
                var4 -= arg8[0] + arg8[1];
                var1 += arg8[2];
                var3 -= arg8[2] + arg8[3];
            }
            func_0204f914(arg0, 0x11, var1, var2, var3, var4);
        }
    } else {
        arg0->unknown_c5_ |= 1;
        arg0->unknown_a8_ = arg3;
        arg0->unknown_aa_ = arg4;
        arg0->unknown_a4_ = arg3 * arg4 * 32;
        memset(arg0->unknown_8_, 0, arg0->unknown_a4_);
        if (!arg6) {
            short var5 = 0;
            short var6 = 0;
            short var7 = arg3 << 3;
            short var8 = arg4 << 3;
            if (arg8) {
                var6 += arg8[0];
                var8 -= arg8[0] + arg8[1];
                var5 += arg8[2];
                var7 -= arg8[2] + arg8[3];
            }
            func_0204f914(arg0, 0x11, var5, var6, var7, var8);
        }
        memset(arg0->unknown_d4_, 0, var0);
        short var9 = arg0->unknown_a8_;
        short var10 = arg0->unknown_aa_;
        arg0->unknown_c8_ = var9;
        arg0->unknown_ca_ = var10;
        arg0->unknown_d0_ = var0;
        arg0->unknown_9c_ = 1;
    }
    if (!arg7) {
        if (!arg6) func_0204ea5c(arg0);
        func_0204ecb4(arg0, 0, 0, arg3, arg4, arg8);
    } else {
        arg0->unknown_c5_ |= 0x80;
    }
}
