#include <globaldefs.h>

struct Struct_020b1540 {
    signed char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_;
};

struct Struct_020b27c8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    signed char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

struct Struct_020b27c8 {
    unsigned char unknown_0_;
    signed char unknown_1_;
    unsigned short unknown_2_;
    Struct_020b1540 unknown_4_;
    unsigned char unknown_7_;
    Struct_020b27c8_2* unknown_8_;
};

struct Struct_020b1020 {
    Struct_020b27c8* unknown_0_;
};

struct Struct_020b1540_2 {
    const Struct_020b1540* unknown_0_;
    const unsigned char* unknown_4_;
};

struct Struct_020b1540_3 {
    unsigned char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_[3];
    unsigned int unknown_10_;
};

struct Struct_020b1300 {
    const unsigned char* unknown_0_;
    const unsigned char* unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    unsigned int unknown_24_;
};

extern "C" void func_020b1300(Struct_020b1300* arg0);

static inline int inline_020b1540(const Struct_020b1540_3* arg0) {
    return 8 * 8 * arg0->unknown_c_ / 8;
}

static inline unsigned char inline_020b1540_2(const Struct_020b1020* arg0) {
    return arg0->unknown_0_->unknown_8_->unknown_1_;
}

static inline unsigned char inline_020b1540_3(const Struct_020b1020* arg0) {
    return arg0->unknown_0_->unknown_8_->unknown_0_;
}

static inline unsigned char inline_020b1540_4(const Struct_020b1020* arg0) {
    return arg0->unknown_0_->unknown_8_->unknown_6_;
}

// USA: func_020b1540
extern "C" ARM void func_020b1540(const Struct_020b1540_3* arg0, const Struct_020b1020* arg1, int arg2, int arg3, int arg4, const Struct_020b1540_2* arg5) {
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    unsigned int var5;
    unsigned char* var6;
    unsigned char var7;
    unsigned char var8;
    int var9;

    var9 = inline_020b1540(arg0);

    {
        int var10;
        int var11;
        const unsigned int var12 = (unsigned int)arg0->unknown_4_;
        const unsigned int var13 = (unsigned int)arg0->unknown_8_;
        unsigned char* const var14 = arg0->unknown_0_;
        const Struct_020b1540* const var15 = arg5->unknown_0_;

        unsigned int var16;
        unsigned int var17;
        unsigned int var18;
        unsigned int var19;

        var7 = var15->unknown_1_;
        var8 = inline_020b1540_2(arg1);

        if (var7 <= 0) {
            return;
        }

        if ((arg2 + var7 < 0) || (arg3 + var8) < 0) {
            return;
        }

        var16 = (arg2 <= 0) ? 0 : ((unsigned int)arg2 / 8);
        var18 = (arg3 <= 0) ? 0 : ((unsigned int)arg3 / 8);

        var17 = (unsigned int)(arg2 + var7 + (8 - 1)) / 8;
        if (var17 >= var12) {
            var17 = var12;
        }
        var19 = (unsigned int)(arg3 + var8 + (8 - 1)) / 8;
        if (var19 >= var13) {
            var19 = var13;
        }

        var10 = (int)(var17 - var16);
        var11 = (int)(var19 - var18);

        if ((var10 < 0) || (var11 < 0)) {
            return;
        }

        var6 = var14 + (arg0->unknown_10_ * var18 + var16) * var9;

        var5 = (arg0->unknown_10_ - var10) * var9;

        var0 = (arg2 < 0) ? arg2 : arg2 & 0x7;
        var2 = (arg3 < 0) ? arg3 : arg3 & 0x7;
        var3 = var0 - 8 * var10;
        var4 = var2 - 8 * var11;
    }

    {
        Struct_020b1300 var20;

        var20.unknown_4_ = arg5->unknown_4_;
        var20.unknown_10_ = var7;
        var20.unknown_14_ = var8;
        var20.unknown_24_ = (unsigned int)(arg4 - 1);
        var20.unknown_1c_ = inline_020b1540_4(arg1);
        var20.unknown_20_ = arg0->unknown_c_;
        var20.unknown_18_ = inline_020b1540_3(arg1) * var20.unknown_1c_;

        for (; var2 > var4; var2 -= 8) {
            var20.unknown_c_ = var2;
            for (var1 = var0; var1 > var3; var1 -= 8) {
                var20.unknown_0_ = var6;
                var20.unknown_8_ = var1;
                func_020b1300(&var20);
                var6 += var9;
            }
            var6 += var5;
        }
    }
}
