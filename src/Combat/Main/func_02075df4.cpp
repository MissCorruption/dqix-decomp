#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"

extern const fix16_t data_020e9450[4096 * 2];

struct Struct_02075df4 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    short unknown_6_;
};

struct Struct_02075df4_2 {
    fix32_t unknown_0_;
    fix32_t unknown_4_;
};

struct Struct_02075df4_3 {
    int** unknown_0_;
    int** unknown_4_;
    int** unknown_8_;
    int** unknown_c_;
    short* unknown_10_;
    Struct_02075df4* unknown_14_;
    char unknown_18_[0x10];
    Struct_02075df4_2 unknown_28_;
    unsigned short unknown_30_;
    char unknown_32_[0xa];
    int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
    int unknown_50_;
};

static inline fix32_t inline_0205b0d8(int arg0) {
    return data_020e9450[arg0 * 2];
}

static inline fix32_t inline_0205b0d8_2(int arg0) {
    return data_020e9450[arg0 * 2 + 1];
}

static inline bool inline_02075df4(int arg0) {
    return arg0 == 0x100 || arg0 == 0x300;
}

// USA: func_02075df4
extern "C" ARM int func_02075df4(Struct_02075df4_3* arg0, int arg1, int arg2, int arg3) {
    int* var0 = arg0->unknown_8_[arg1];
    int* var1 = arg0->unknown_c_[arg1];
    int* var2 = arg0->unknown_0_[arg1];
    int* var3 = arg0->unknown_4_[arg1];
    bool var4 = false;
    if (inline_02075df4(arg0->unknown_4c_)) {
        var4 = true;
    }
    Struct_0205ac40_3* var5 = NULL;
    Struct_0205ac40_3 var6;
    Struct_0205ac40_3 var7;
    Struct_0205ac40_3 var8;
    short var9;

    if (var4) {
        unsigned short var10 = arg0->unknown_30_;
        Struct_02075df4_2 var11 = arg0->unknown_28_;
        fix32_t var12 = inline_0205b0d8_2(var10 >> 4);
        func_020c111c(&var8, inline_0205b0d8(var10 >> 4), var12);
        func_020c1128(&var8, &var6, var11.unknown_0_, var11.unknown_4_);
        func_020c1128(&var8, &var7, fix32_Divide(0x1000, var11.unknown_0_),
                                        fix32_Divide(0x1000, var11.unknown_4_));
        var5 = &var6;
    }
    if (var5 != NULL) {
        Struct_02075df4* var13 = arg0->unknown_14_;
        var13[0].unknown_6_ = var7.unknown_0_[0] >> 4;
        var13[1].unknown_6_ = var7.unknown_0_[1] >> 4;
        var13[2].unknown_6_ = var7.unknown_0_[2] >> 4;
        var13[3].unknown_6_ = var7.unknown_0_[3] >> 4;
    }
    for (var9 = 0; var9 < arg0->unknown_10_[arg1]; var9++) {
        int var14 = var0[var9];
        int var15 = var1[var9];
        if (var5 != NULL) {
            var14 = (arg0->unknown_28_.unknown_0_ * var14) >> 12;
            var15 = (arg0->unknown_28_.unknown_4_ * var15) >> 12;
        }
        {
            int var16;
            int var17;
            Struct_02075df4* var18;
            int var19;
            int var20;
            int var21;
            int var22;
            int var23;
            int var24;
            int var25;
            int var26;
            var16 = var14 + arg2;
            var17 = var15 + arg3;
            var18 = &arg0->unknown_14_[var9];
            var26 = arg0->unknown_44_;
            var25 = arg0->unknown_3c_;
            var24 = var2[var9];
            var23 = arg0->unknown_50_;
            var22 = var3[var9];
            var21 = arg0->unknown_4c_;
            var20 = arg0->unknown_48_;
            var19 = arg0->unknown_40_;
            if (inline_02075df4(var21)) {
                if (var20 == 3) {
                    var18->unknown_0_ = var21 | ((var22 | (((var17 & 0xff) | (var26 << 25)) | (var20 << 10))) |
                                            ((var16 & 0x1ff) << 16));
                } else {
                    var18->unknown_0_ = var21 | ((var22 | (((var17 & 0xff) | ((var26 << 25) | (var23 << 13))) |
                                                      (var20 << 10))) |
                                            ((var16 & 0x1ff) << 16));
                }
            } else {
                if (var20 == 3) {
                    var18->unknown_0_ = var21 | ((var22 | ((var17 & 0xff) | (var20 << 10))) | ((var16 & 0x1ff) << 16));
                } else {
                    var18->unknown_0_ = var21 | ((var22 | ((var17 & 0xff) | (var23 << 13) | (var20 << 10))) |
                                            ((var16 & 0x1ff) << 16));
                }
            }
            var18->unknown_4_ = (var24 | (var19 << 10)) | (var25 << 12);
        }
    }
    return arg0->unknown_10_[arg1];
}
