#include <globaldefs.h>

#include "std_library_functions.h"
#include "Combat/Main/BattleList.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

struct Struct_ov024_021f9874_4 {
    unsigned char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov024_021f9874_6 {
    float unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    struct Struct_ov024_021f9874_4 unknown_9_;
    char unknown_a_[2];
};

struct Struct_ov024_021f9874_7 {
    unsigned short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    float unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_ov024_021f9874_8 {
    struct Struct_ov024_021f9874_6 unknown_0_[16];
    int unknown_c0_;
    float unknown_c4_;
};

struct Struct_ov024_021f9874_9 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0xc];
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
};

struct Struct_ov024_021f9874 {
    unsigned short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov024_021f9874_2 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 5;
    unsigned int unknown_1_1_ : 23;
};

struct Struct_ov024_021f9874_3 {
    int unknown_0_;
    char unknown_4_[2];
    unsigned char unknown_6_;
    char unknown_7_[1];
    GameObject* unknown_8_;
    char unknown_c_[8];
    unsigned char unknown_14_;
    char unknown_15_[0x17];
    unsigned char unknown_2c_;
    char unknown_2d_[3];
    float unknown_30_;
    unsigned char unknown_34_;
    char unknown_35_[3];
    int unknown_38_;
    int unknown_3c_;
    unsigned char unknown_40_;
    char unknown_41_[3];
    float unknown_44_[4];
    unsigned char unknown_54_[0x28];
    GameObject* unknown_7c_[8];
    int unknown_9c_;
    char unknown_a0_[0x24];
    int unknown_c4_[25];
    int unknown_128_;
    char unknown_12c_[4];
    int unknown_130_;
    char unknown_134_[5];
    unsigned char unknown_139_;
    char unknown_13a_[0x32];
    int unknown_16c_;
    char unknown_170_[0x238];
    struct Struct_ov024_021f9874_7 unknown_3a8_[4];
    struct Struct_ov024_021f9874_7 unknown_3d8_[4];
    struct Struct_ov024_021f9874_7 unknown_408_[4];
    struct Struct_ov024_021f9874_7 unknown_438_[4];
    char unknown_468_[0x30];
    struct Struct_ov024_021f9874_7 unknown_498_[4];
    struct Struct_ov024_021f9874_7 unknown_4c8_[4];
    char unknown_4f8_[0x30];
    struct Struct_ov024_021f9874_7 unknown_528_[4];
    struct Struct_ov024_021f9874_7 unknown_558_[4];
    struct Struct_ov024_021f9874_7 unknown_588_[4];
    struct Struct_ov024_021f9874_7 unknown_5b8_[4];
    char unknown_5e8_[0x60];
    struct Struct_ov024_021f9874* unknown_648_;
    struct Struct_ov024_021f9874_9* unknown_64c_;
    int unknown_650_;
    char unknown_654_[1];
    unsigned char unknown_655_;
};

struct Struct_ov024_021f9874_5 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_[2];
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    char unknown_c_[2];
};

extern "C" void* __clear(void* arg0, int arg1);
extern "C" void func_ov024_021f6830(void* arg0, struct Struct_ov024_021f9874_7* arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_ov024_021eadfc(GameObject* arg0);

static inline unsigned short inline_ov024_021dc700(GameObject* arg0) { return arg0->currentStats_->primaryStats.maxHP; }
static inline unsigned short inline_ov024_021dc540_2(GameObject* arg0) { return arg0->currentStats_->primaryStats.maxMP; }
static inline unsigned short inline_ov000_0215cd44_2(GameObject* arg0) { return arg0->currentStats_->primaryStats.currMP; }
static inline unsigned int inline_ov024_021f9874(GameObject* arg0) { return arg0->baseStats_->primaryStats.defense; }

extern unsigned char data_ov024_021ffc98[12];
extern unsigned char data_ov024_021ffca4[33];
extern unsigned char data_ov024_021ffcc5[39];

// USA: func_ov024_021f9874
extern "C" ARM void func_ov024_021f9874(struct Struct_ov024_021f9874_3* arg0, struct Struct_ov024_021f9874_8* arg1, unsigned char arg2, unsigned char arg3) {
    char var0[0x38];
    int var1[8];
    float var2[8];
    struct Struct_ov024_021f9874_5 var3;
    float var4[14];
    float var5[8];
    int var6[4];
    int var7[4];
    float var8[4];
    struct Struct_ov024_021f9874_7 var9;
    float var10;
    float var11;
    float var12;
    float var13;
    float var14;
    float var15;
    float var16;
    int var17;
    float var18;
    int var19;

    memset(var0, 0, 0x38);
    __clear(var1, 0x20);
    __clear(var2, 0x20);
    __clear(&var3, 0xe);
    __clear(var4, 0x38);
    __clear(var5, 0x20);
    __clear(var6, 0x10);
    __clear(var7, 0x10);

    var17 = 0;

    for (int var20 = 0; var20 < arg1->unknown_c0_; var20++) {
        struct Struct_ov024_021f9874_6* var21 = &arg1->unknown_0_[var20];
        if (var21->unknown_8_ != 0) continue;
        if (var21->unknown_5_ == 0) continue;
        {
            int var22 = var21->unknown_6_;
            float var23 = var21->unknown_0_ * var21->unknown_9_.unknown_0_0_;
            if (arg0->unknown_34_ != 0) var23 *= 1.2f;
            var2[var22] += var23;
            if (var2[var22] >= arg0->unknown_c4_[var22]) var1[var22] = 10;
            var3.unknown_2_ = 1;
            if (var21->unknown_9_.unknown_0_6_) var17 = 1;
        }
    }

    var19 = 0;
    if (arg0->unknown_14_ != 0) {
        for (int var24 = 0; var24 < arg1->unknown_c0_; var24++) {
            struct Struct_ov024_021f9874_6* var25 = &arg1->unknown_0_[var24];
            if (var25->unknown_8_ != 2) continue;
            if (var25->unknown_5_ == 0) continue;
            var5[var25->unknown_6_] = 0.01f * var25->unknown_7_;
            var3.unknown_2_ = 1;
            var19 = 1;
            if (var25->unknown_9_.unknown_0_6_) var17 = 1;
        }
        if (var19) {
            float var26;
            int var27;
            for (var27 = 0; var27 < arg1->unknown_c0_; var27++) {
                float var28;
                var3.unknown_2_ = 1;
                var28 = arg0->unknown_c4_[var27];
                var26 = var28 - var2[var27];
                if (var26 <= 0.0f) continue;
                {
                    float var29 = var5[var27];
                    if (arg0->unknown_6_ != 0) {
                        double var30 = var29;
                        double var31 = 0.005 * (double)arg0->unknown_650_;
                        var29 = (float)(var30 - var31);
                    }
                    {
                        float var32 = var29 * var29;
                        float var33 = var32;
                        if (var32 > 0.9f) var33 = 0.9f;
                        var2[var27] += var26 * var33;
                    }
                }
            }
        }
    }

    for (int var34 = 0; var34 < arg1->unknown_c0_; var34++) {
        struct Struct_ov024_021f9874_6* var35 = &arg1->unknown_0_[var34];
        if (var35->unknown_8_ == 3) {
            if (var35->unknown_5_ != 0) continue;
            var6[var35->unknown_6_] += var35->unknown_0_;
            var3.unknown_6_ = 1;
        }
        if (var35->unknown_8_ == 4 && var35->unknown_5_ == 0) {
            var7[var35->unknown_6_] += var35->unknown_0_;
            var3.unknown_7_ = 1;
        }
    }

    var4[13] = arg0->unknown_650_;
    if (arg0->unknown_648_->unknown_3_ != 0) var4[13] += 30.0f;

    if (var3.unknown_2_ != 0) {
        float* var36 = var2;
        for (int var37 = 0; var37 < arg0->unknown_9c_; var37++) {
            float var38 = var36[var37];
            int var39;
            if (var38 <= 0.0f) continue;
            var39 = arg0->unknown_c4_[var37];
            if (var38 >= var39) var38 = var39;
            var4[2] += 100.0f * var38 / inline_ov024_021dc700(arg0->unknown_7c_[var37]);
        }
        if (arg0->unknown_648_->unknown_3_ != 0 && arg0->unknown_6_ != 0) var4[2] = 0.0f;
    }

    if (var3.unknown_6_ != 0) {
        for (int var40 = 0; var40 < 4; var40++) {
            int var41 = var6[var40];
            if (var41 == 0) continue;
            {
                float var42 = 100.0f * var41 / inline_ov024_021dc700(GetCombatantByID(arg0->unknown_0_, (short)var40));
                if (var40 == arg0->unknown_128_) var42 *= 2.0f;
                var4[6] += var42;
            }
        }
        if (arg0->unknown_650_ != 0) {
            if (arg0->unknown_648_->unknown_0_ == 0x310) {
                if (arg0->unknown_130_ >= 2) var4[6] *= 0.66f;
                else var4[6] *= 0.55f;
                if (arg0->unknown_139_ == 0) var4[6] = 0.0f;
            } else if (arg0->unknown_648_->unknown_0_ == 0x21) {
                var4[6] *= 0.9f;
            }
        }
    }

    for (int var43 = 0; var43 < arg1->unknown_c0_; var43++) {
        struct Struct_ov024_021f9874_6* var44 = &arg1->unknown_0_[var43];
        if (var44->unknown_8_ == 5 && var44->unknown_5_ == 0) {
            var4[5] += var44->unknown_7_;
            var3.unknown_5_ = 1;
        }
    }

    if (arg0->unknown_648_->unknown_0_ == 0x28) {
        var3.unknown_6_ = 1;
        var4[6] = 400.0f;
    }

    for (int var45 = 0; var45 < arg1->unknown_c0_; var45++) {
        struct Struct_ov024_021f9874_6* var46 = &arg1->unknown_0_[var45];
        int var47;

        var47 = 1;
        if (var46->unknown_9_.unknown_0_7_) {
            var18 = 0.01f * arg0->unknown_54_[arg0->unknown_3c_];
            var47 = arg0->unknown_40_;
        } else {
            var18 = 0.01f * arg0->unknown_54_[arg0->unknown_38_];
        }
        __clear(var8, 0x10);

        if (var46->unknown_8_ == 8) {
            if (var46->unknown_5_ != 0) continue;
            var8[0] = 10.0f;
            {
                int var48;
                for (var48 = 0; var48 < 6; var48++) {
                    unsigned int var49 = data_ov024_021ffc98[var48 * 2 + 1];
                    if (var46->unknown_4_ == data_ov024_021ffc98[var48 * 2]) var8[0] = var49;
                }
            }
        } else if (var46->unknown_8_ == 7) {
            int var50;
            if (var46->unknown_5_ != 0) continue;
            var50 = var46->unknown_6_;
            if (var46->unknown_4_ == 0xd) {
                var8[1] = arg0->unknown_16c_ * 13 / 100;
                if (var46->unknown_4_ == 0x11 && arg0->unknown_64c_->unknown_17_4_ == 2) {
                    if (var50 >= 0 && var50 < 4) var8[1] *= arg0->unknown_44_[var50];
                }
            } else {
                int var51;
                for (var51 = 0; var51 < 0xb; var51++) {
                    int var52 = data_ov024_021ffca4[var51 * 3 + 1];
                    unsigned int var53 = data_ov024_021ffca4[var51 * 3 + 2];
                    if (var46->unknown_4_ != data_ov024_021ffca4[var51 * 3]) continue;
                    {
                        var8[var52] = var53;
                        if (var47 == 0) var8[var52] = 0.0f;
                        if (var46->unknown_4_ == 0x11 && arg0->unknown_64c_->unknown_17_4_ == 2) {
                            if (var50 >= 0 && var50 < 4) var8[var52] *= arg0->unknown_44_[var50];
                        }
                        if (var46->unknown_0_ < 0.0f) {
                            var8[var52] = -3.0f * var53;
                        }
                        break;
                    }
                }
            }
        } else if (var46->unknown_8_ == 6) {
            if (var46->unknown_5_ == 0) continue;
            var8[3] += var46->unknown_0_;
        } else if (var46->unknown_8_ == 5) {
            int var54;
            if (var46->unknown_5_ == 0) continue;
            var54 = var46->unknown_6_;
            if (var1[var54] != 0) continue;
            if (var46->unknown_4_ == 0x12) {
                GameObject* var55 = arg0->unknown_7c_[var54];
                if (var55 != 0) {
                    unsigned int var56 = inline_ov024_021f9874(var55);
                    unsigned short var57 = inline_ov024_021dc700(var55);
                    float var58 = 100.0f * (int)(var56 >> 2);
                    var58 = var58 / var57;
                    if (var58 > 29.0f) var58 = 29.0f;
                    var8[2] = var58;
                }
            } else {
                int var59;
                for (var59 = 0; var59 < 0xd; var59++) {
                    int var60 = data_ov024_021ffcc5[var59 * 3 + 1];
                    unsigned int var61 = data_ov024_021ffcc5[var59 * 3 + 2];
                    if (var46->unknown_4_ != data_ov024_021ffcc5[var59 * 3]) continue;
                    var8[var60] = var61;
                    if (var47 == 0) var8[var60] = 0.0f;
                }
            }
        }

        if (var8[0]) {
            float var62 = var8[0] * var46->unknown_7_;
            var62 = 0.01f * var62;
            var4[8] += var62;
            var3.unknown_8_ = 1;
        }
        if (var8[1]) {
            float var63 = var8[1] * var46->unknown_7_;
            var63 = 0.01f * var63;
            var63 = var18 * var63;
            var4[9] += var63;
            var3.unknown_9_ = 1;
        }
        if (var8[2]) {
            float var64 = var8[2] * var46->unknown_7_;
            var64 = 0.01f * var64;
            var64 = var18 * var64;
            var4[10] += var64;
            var3.unknown_a_ = 1;
        }
        if (var8[3]) {
            float var65 = var8[3] * var46->unknown_7_;
            var65 = 0.01f * var65;
            var65 = var18 * var65;
            var4[11] += var65;
            var3.unknown_b_ = 1;
        }
    }

    {
        struct Struct_ov024_021f9874* var66 = arg0->unknown_648_;
        var9.unknown_0_ = var66->unknown_0_;
        var9.unknown_2_ = var66->unknown_2_;
        var9.unknown_3_ = var66->unknown_3_;
        var9.unknown_a_ = arg2;
        var9.unknown_b_ = arg3;
        var9.unknown_8_ = (unsigned short)arg0->unknown_650_;
    }

    var10 = 0.0f;
    if (var3.unknown_2_ != 0) {
        var10 = var4[2];
        if (arg0->unknown_2c_ != 0) var10 += var4[11];
        if (var17 != 0) var10 *= arg0->unknown_30_;
        var9.unknown_4_ = var10 - 0.01f * var4[13];
        func_ov024_021f6830(arg0->unknown_408_, &var9);
        if (0.0f == var4[13]) {
            func_ov024_021f6830(arg0->unknown_438_, &var9);
        }
    }

    if (var3.unknown_5_ != 0) {
        var9.unknown_4_ = var4[5] - 0.1f * var4[13];
        func_ov024_021f6830(arg0->unknown_498_, &var9);
    }
    if (arg0->unknown_655_ != 0 && var3.unknown_6_ != 0) {
        var9.unknown_4_ = var4[6] - 0.1f * var4[13];
        func_ov024_021f6830(arg0->unknown_4c8_, &var9);
    }

    var14 = 0.1f;
    if (arg0->unknown_6_ == 0) var14 = 0.01f;
    var15 = 0.0f; var12 = 0.0f; var13 = 0.0f;

    if (var3.unknown_8_ != 0) {
        float var67 = var4[8] - 0.1f * var4[13];
        var67 += 0.01f * var4[6];
        var9.unknown_4_ = var67;
        func_ov024_021f6830(arg0->unknown_528_, &var9);
    }
    if (arg0->unknown_6_ == 2 && arg0->unknown_64c_->unknown_4_0_ != 0x1f9) {
        var10 *= 0.3f;
    }
    if (var3.unknown_9_ != 0) {
        var15 = var4[9] - var4[13] * var14;
        var9.unknown_4_ = var15;
        func_ov024_021f6830(arg0->unknown_558_, &var9);
    }
    if (var3.unknown_a_ != 0) {
        var12 = var4[10] - var4[13] * var14;
        var9.unknown_4_ = var12;
        func_ov024_021f6830(arg0->unknown_588_, &var9);
    }
    if (var3.unknown_b_ != 0) {
        var13 = var4[11] - var4[13] * var14;
        var9.unknown_4_ = var13;
        func_ov024_021f6830(arg0->unknown_5b8_, &var9);
    }

    if (arg0->unknown_6_ != 0 && arg0->unknown_64c_->unknown_4_0_ == 1) {
        unsigned char* var68 = (unsigned char*)func_02053c6c((unsigned char*)arg0->unknown_8_);
        int var69;
        int var70;
        if (var68 != 0 && *(short*)(var68 + 0x2ac) > 0 &&
            ((struct Struct_ov024_021f9874_2*)(var68 + 0x29c))->unknown_0_4_ == 3 &&
            !func_ov024_021eadfc(arg0->unknown_8_) &&
            (var69 = arg1->unknown_0_[0].unknown_6_, var69 >= 0) && var69 < 8 &&
            arg0->unknown_7c_[var69] != 0 &&
            (var70 = arg0->unknown_7c_[var69]->currentStats_->primaryStats.currMP, var70 > 0)) {
            var16 = (float)inline_ov000_0215cd44_2(arg0->unknown_8_) / inline_ov024_021dc540_2(arg0->unknown_8_);
            if (var16 <= 0.1f) arg1->unknown_c4_ += 50.0f;
            if (var16 <= 0.3f) arg1->unknown_c4_ += 30.0f;
            if (var16 <= 0.5f) arg1->unknown_c4_ += 10.0f;
        }
    }

    var11 = arg1->unknown_c4_ + var15;
    var11 = var12 + var11;
    var11 = var13 + var11;
    var11 = var10 + var11;
    var9.unknown_4_ = var11 - var4[13] * var14;
    func_ov024_021f6830(arg0->unknown_3a8_, &var9);

    if (!(var10 > 0.0f) || arg0->unknown_650_ <= 0) {
        func_ov024_021f6830(arg0->unknown_3d8_, &var9);
    }
}
