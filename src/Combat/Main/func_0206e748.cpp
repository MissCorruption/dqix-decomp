#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0206e748_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_[4];
    unsigned char unknown_7_[9];
    unsigned char unknown_10_[4];
    unsigned char unknown_14_[8];
};

struct Struct_0206e748 {
    Struct_0206e748_2 unknown_0_[5];
    unsigned char unknown_8c_[0x334 - 0x8c];
    Struct_0206e748_2 unknown_334_[5];
    unsigned char unknown_3c0_[0x44];
    int unknown_404_;
    int unknown_408_;
    unsigned char unknown_40c_[0xf];
};

// USA: func_0206e748
extern "C" ARM void func_0206e748(Struct_0206e748* arg0, unsigned char arg1, unsigned char arg2, unsigned short arg3, int arg4) {
    if (arg1 == 0) {
        unsigned int var0 = arg3 / 8;
        unsigned char var1 = 1 << (arg3 % 8);
        if (var0 < 0x42) {
            if (arg4) {
                if (arg0->unknown_3c0_[var0] & var1) return;
                arg0->unknown_3c0_[var0] |= var1;
            } else {
                if (!(arg0->unknown_3c0_[var0] & var1)) return;
                arg0->unknown_3c0_[var0] &= ~var1;
            }
        }
    } else if (arg1 == 1) {
        unsigned int var2 = arg3 / 8 + 0x40;
        unsigned char var3 = 1 << (arg3 % 8);
        if (var2 < 0x42) {
            if (arg4) {
                arg0->unknown_3c0_[var2] |= var3;
            } else {
                arg0->unknown_3c0_[var2] &= ~var3;
            }
        }
        arg0->unknown_408_ = 1;
        return;
    } else if (arg1 == 2) {
        if (arg2 < 5) {
            unsigned char var4 = (arg4 >> 10) & 0x1f;
            unsigned char var5 = (arg4 >> 5) & 0x1f;
            unsigned char var6 = arg4 & 0x1f;
            if (var4 != arg0->unknown_334_[arg2].unknown_0_) {
                memset(arg0->unknown_334_[arg2].unknown_3_, 0, 4);
                memset(arg0->unknown_334_[arg2].unknown_10_, 0, 4);
            } else if (var5 != arg0->unknown_334_[arg2].unknown_1_) {
                memset(arg0->unknown_334_[arg2].unknown_10_, 0, 4);
            }
            arg0->unknown_334_[arg2].unknown_0_ = var4;
            arg0->unknown_334_[arg2].unknown_1_ = var5;
            arg0->unknown_334_[arg2].unknown_2_ = var6;
            if (arg4 & 0x8000) {
                arg0->unknown_0_[arg2].unknown_0_ = var4;
                arg0->unknown_0_[arg2].unknown_1_ = var5;
                arg0->unknown_0_[arg2].unknown_2_ = var6;
            }
        }
    } else if (arg1 == 3) {
        if (arg2 < 5) {
            unsigned int var7 = arg3 / 8;
            unsigned char var8 = 1 << (arg3 % 8);
            if (arg4) {
                if (arg0->unknown_334_[arg2].unknown_3_[var7] & var8) return;
                arg0->unknown_334_[arg2].unknown_3_[var7] |= var8;
            } else {
                if (!(arg0->unknown_334_[arg2].unknown_3_[var7] & var8)) return;
                arg0->unknown_334_[arg2].unknown_3_[var7] &= ~var8;
            }
            arg0->unknown_408_ = 1;
            return;
        }
    } else if (arg1 == 5) {
        if (arg2 < 5) {
            unsigned int var9 = arg3 / 8;
            unsigned char var10 = 1 << (arg3 % 8);
            if (arg4) {
                if (arg0->unknown_334_[arg2].unknown_10_[var9] & var10) return;
                arg0->unknown_334_[arg2].unknown_10_[var9] |= var10;
            } else {
                if (!(arg0->unknown_334_[arg2].unknown_10_[var9] & var10)) return;
                arg0->unknown_334_[arg2].unknown_10_[var9] &= ~var10;
            }
            arg0->unknown_408_ = 1;
            return;
        }
    } else if (arg1 == 7) {
        if (arg3 >= 0xae) {
            unsigned char var11 = arg3 - 0xae;
            unsigned char var12 = var11 % 2;
            unsigned char var13 = var11 / 2;
            if (var12) {
                unsigned char var14 = arg0->unknown_40c_[var13] >> 4;
                var14 = (var14 & 0xc) | arg4;
                arg0->unknown_40c_[var13] &= 0xf;
                arg0->unknown_40c_[var13] |= var14 << 4;
            } else {
                unsigned char var15 = arg0->unknown_40c_[var13] & 0xf;
                var15 = (var15 & 0xc) | arg4;
                arg0->unknown_40c_[var13] &= 0xf0;
                arg0->unknown_40c_[var13] |= var15;
            }
        }
    }
    arg0->unknown_404_ = 1;
}
