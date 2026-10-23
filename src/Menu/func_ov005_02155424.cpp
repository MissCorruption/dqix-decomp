#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include "globaldefs.h"

struct Struct_ov005_0215436c_4 { unsigned char unknown_0_[0x70]; };
struct Struct_ov005_02155424 {
    unsigned char unknown_0_[0x1c];
    int unknown_1c_, unknown_20_, unknown_24_;
    unsigned char unknown_28_[0x88 - 0x28];
};
struct Struct_ov005_02155424_2 {
    int unknown_0_;
    Struct_ov005_0215436c_4* unknown_4_;
    Struct_ov005_02155424* unknown_8_;
    int unknown_c_, unknown_10_;
    unsigned char unknown_14_[8];
};
struct Struct_ov005_02155424_3 {
    unsigned char unknown_0_[0x304];
    Struct_ov005_0215436c_4 unknown_304_[24];
    unsigned char unknown_d84_[R(0x2d08, 0x2d90) - 0x304 - 24 * 0x70];
    Struct_ov005_02155424_2 unknown_2d90_[24];
    Struct_ov005_02155424 unknown_3030_[24];
};

extern "C" ARM void func_ov005_02155424(Struct_ov005_02155424_3* arg0) {
    for (int var0 = 0; var0 < 8; ++var0) {
        Struct_ov005_02155424_2* var1 = &arg0->unknown_2d90_[var0];
        var1->unknown_4_ = &arg0->unknown_304_[var0];
        var1->unknown_8_ = &arg0->unknown_3030_[var0];
        var1->unknown_c_ = 133 << 12;
        var1->unknown_10_ = 22 << 12;
        Struct_ov005_02155424* var2 = var1->unknown_8_;
        var2->unknown_1c_ = 133 << 12;
        var2->unknown_20_ = 22 << 12;
        var2->unknown_24_ = 0;
    }
    for (int var3 = 0; var3 < 16; ++var3) {
        Struct_ov005_02155424_2* var4 = &arg0->unknown_2d90_[var3 + 8];
        var4->unknown_4_ = &arg0->unknown_304_[var3 + 8];
        var4->unknown_8_ = &arg0->unknown_3030_[var3 + 8];
        int var5 = (var3 % 16) % 4;
        int var6 = (var3 % 16) / 4;
        int var7 = (var5 * 26 + 141) << 12;
        int var8 = (var6 * 26 + 52) << 12;
        var4->unknown_c_ = var7;
        var4->unknown_10_ = var8;
        Struct_ov005_02155424* var9 = var4->unknown_8_;
        var9->unknown_1c_ = var7;
        var9->unknown_20_ = var8;
        var9->unknown_24_ = 0;
    }
}
