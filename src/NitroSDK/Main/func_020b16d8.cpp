#include <globaldefs.h>

struct Struct_020b16d8_2 {
    unsigned char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_[3];
    unsigned int unknown_10_;
};

struct Struct_020b10b4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    signed char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

struct Struct_020b10b4_2 {
    unsigned char unknown_0_;
    signed char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[3];
    unsigned char unknown_7_;
    struct Struct_020b10b4* unknown_8_;
};

struct Struct_020b16d8_3 {
    struct Struct_020b10b4_2* unknown_0_;
};

struct Struct_020b16d8_4 {
    signed char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_;
};

struct Struct_020b16d8_5 {
    const struct Struct_020b16d8_4* unknown_0_;
    const unsigned char* unknown_4_;
};

struct Struct_020b16d8_6 {
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

union Struct_020b16d8 {
    unsigned int unknown_0_;
    struct {
        unsigned unknown_0_0_ : 8;
        unsigned unknown_1_0_ : 8;
    } unknown1_0_;
};

extern "C" unsigned int func_020b10b4(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5);
extern "C" void func_020b1300(struct Struct_020b16d8_6* arg0);

static inline int inline_020b1540(const struct Struct_020b16d8_2* arg0) {
    return 8 * 8 * arg0->unknown_c_ / 8;
}

static inline unsigned char inline_020b16d8(const struct Struct_020b16d8_3* arg0) {
    return arg0->unknown_0_->unknown_8_->unknown_1_;
}

static inline unsigned char inline_020b16d8_2(const struct Struct_020b16d8_3* arg0) {
    return arg0->unknown_0_->unknown_8_->unknown_0_;
}

static inline unsigned char inline_020b16d8_3(const struct Struct_020b16d8_3* arg0) {
    return arg0->unknown_0_->unknown_8_->unknown_6_;
}

// USA: func_020b16d8
extern "C" ARM void func_020b16d8(const struct Struct_020b16d8_2* arg0, const struct Struct_020b16d8_3* arg1, int arg2, int arg3, int arg4, const struct Struct_020b16d8_5* arg5) {
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5, var6;
    int var7;
    unsigned char var8;
    unsigned char var9;
    int var10;

    var10 = inline_020b1540(arg0);

    {
        int var11;
        int var12;

        unsigned int var13 = (unsigned int)arg0->unknown_4_;
        unsigned int var14 = (unsigned int)arg0->unknown_8_;

        unsigned int var15;
        unsigned int var16;
        unsigned int var17;
        unsigned int var18;

        var8 = arg5->unknown_0_->unknown_1_;
        var9 = inline_020b16d8(arg1);

        if (var8 <= 0) {
            return;
        }

        if ((arg2 + var8 < 0) || (arg3 + var9) < 0) {
            return;
        }

        var15 = (arg2 <= 0) ? 0 : ((unsigned int)arg2 / 8);
        var17 = (arg3 <= 0) ? 0 : ((unsigned int)arg3 / 8);

        var16 = (unsigned int)(arg2 + var8 + 7) / 8;
        if (var16 >= var13) {
            var16 = var13;
        }

        var18 = (unsigned int)(arg3 + var9 + 7) / 8;
        if (var18 >= var14) {
            var18 = var14;
        }

        var11 = (int)(var16 - var15);
        var12 = (int)(var18 - var17);

        if ((var11 < 0) || (var12 < 0)) {
            return;
        }

        var6 = (int)var15;
        var7 = (int)var17;

        var0 = (arg2 < 0) ? arg2 : arg2 & 0x7;
        var2 = (arg3 < 0) ? arg3 : arg3 & 0x7;
        var3 = var0 - 8 * var11;
        var4 = var2 - 8 * var12;
    }

    {
        struct Struct_020b16d8_6 var19;
        unsigned char* const var20 = arg0->unknown_0_;
        union Struct_020b16d8 var21;

        var19.unknown_4_ = arg5->unknown_4_;
        var19.unknown_10_ = var8;
        var19.unknown_14_ = var9;
        var19.unknown_24_ = (unsigned int)(arg4 - 1);
        var19.unknown_1c_ = inline_020b16d8_3(arg1);
        var19.unknown_20_ = arg0->unknown_c_;
        var19.unknown_18_ = inline_020b16d8_2(arg1) * var19.unknown_1c_;

        var21.unknown_0_ = arg0->unknown_10_;

        {
            const unsigned int var22 = (unsigned int)arg0->unknown_4_;
            const unsigned int var23 = (unsigned int)arg0->unknown_8_;
            const unsigned int var24 = var21.unknown1_0_.unknown_0_0_;
            const unsigned int var25 = var21.unknown1_0_.unknown_1_0_;

            for (; var2 > var4; var2 -= 8) {
                var19.unknown_c_ = var2;
                var5 = var6;
                for (var1 = var0; var1 > var3; var1 -= 8) {
                    const unsigned int var26 = func_020b10b4((unsigned int)var5, (unsigned int)var7, var22, var23, var24, var25);

                    var19.unknown_8_ = var1;
                    var19.unknown_0_ = var20 + var26 * var10;

                    func_020b1300(&var19);
                    var5++;
                }
                var7++;
            }
        }
    }
}
