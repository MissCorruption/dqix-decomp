#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Main/BattleList.h"

struct Struct_ov024_021fdf04 {
    PrimaryCombatStats unknown_0_;
    unsigned int unknown_14_;
    unsigned char unknown_18_[0x21 - 0x18];
    unsigned char unknown_21_;
    unsigned char unknown_22_[0x58 - 0x22];
    signed int unknown_58_0_ : 3;
    signed int unknown_58_3_ : 3;
    signed int unknown_58_6_ : 3;
    signed int unknown_59_1_ : 3;
    signed int unknown_59_4_ : 3;
    signed int unknown_59_7_ : 3;
    signed int unknown_5a_2_ : 3;
    signed int unknown_5a_5_ : 3;
};
struct Struct_ov024_021fdf04_7 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_0_ : 11;
    unsigned short unknown_b_3_ : 1;
};
struct Struct_ov024_021fdf04_8 {
    unsigned char unknown_0_[4];
    short unknown_4_;
    unsigned char unknown_6_[0x138 - 6];
    Struct_ov024_021fdf04* unknown_138_;
    unsigned char unknown_13c_[0x144 - 0x13c];
#if defined(jpn)
    union {
        Struct_ov024_021fdf04_7* unknown_144_;
        unsigned char* unknown_150_;
    };
    unsigned char unknown_148_[0x17c - 0x148];
#else
    Struct_ov024_021fdf04_7* unknown_144_;
    unsigned char unknown1_148_[0x150 - 0x148];
    unsigned char* unknown_150_;
    unsigned char unknown_154_[0x17c - 0x154];
#endif
    unsigned char unknown_17c_;
    unsigned char inline_ov024_021fdf04() const { return unknown_17c_; }
};
struct Struct_ov024_021fdf04_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 20;
    unsigned int unknown_1c_0_ : 14;
    unsigned int unknown_1d_6_ : 5;
    unsigned int unknown_1e_3_ : 13;
    unsigned int unknown_20_[4];
    short unknown_30_;
};
struct Struct_ov024_021fdf04_3 {
    unsigned char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};
struct Struct_ov024_021fdf04_4 {
    float unknown_0_;
    unsigned char unknown_4_, unknown_5_, unknown_6_, unknown_7_, unknown_8_;
    Struct_ov024_021fdf04_3 unknown_9_;
    unsigned char unknown_a_[2];
};
struct Struct_ov024_021f6a1c {
    Struct_ov024_021fdf04_4 unknown_0_[16];
    int unknown_c0_;
    float unknown_c4_;
    Struct_ov024_021f6a1c() { memset(this, 0, sizeof(*this)); }
};
struct Struct_ov024_021fdf04_5 {
    unsigned char unknown_0_[8];
    Struct_ov024_021fdf04_8* unknown_8_;
    unsigned char unknown_c_[0x7c - 0xc];
    Struct_ov024_021fdf04_8* unknown_7c_[8];
    int unknown_9c_;
    unsigned char unknown_a0_[0x64c - 0xa0];
    Struct_ov024_021fdf04_2* unknown_64c_;
};
struct Struct_ov024_021fdf04_6 { unsigned int unknown_0_0_ : 1; unsigned int unknown_0_1_ : 1; };
struct Struct_ov024_021fefea { unsigned char unknown_0_; unsigned char unknown_1_; };
extern const Struct_ov024_021fefea data_ov024_021fefea[];

extern "C" int func_02053c6c(unsigned char*);
extern "C" void* func_020797dc();
extern "C" void func_ov024_021f8bd8(Struct_ov024_021fdf04_5*, float*, Struct_ov024_021fdf04_8*, Struct_ov024_021fdf04_2*);
extern "C" void __clear(void*, int);
struct Struct_ov024_021fa7ec_7;
extern "C" int func_ov024_021fb460(Struct_ov024_021fa7ec_7*);
struct Struct_ov024_021fa7ec_8;
extern "C" int func_ov024_021fb478(Struct_ov024_021fa7ec_8*);
extern "C" float func_020748d0(int arg0);
extern "C" float func_020748a8(int arg0);
extern "C" float func_02074938(int arg0);
extern "C" int func_ov024_021e67b0(GameObject*);
extern "C" float func_ov024_021f875c(Struct_ov024_021fdf04_5*, Struct_ov024_021fdf04_8*, Struct_ov024_021fdf04_2*, int);
extern "C" int func_020882f8(unsigned char*);
struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(Struct_ov024_021da670_7*);
struct Struct_ov024_021dced0_2;
extern "C" int func_ov024_021dd010(Struct_ov024_021dced0_2*);
struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(Struct_ov024_021de124*);
struct Struct_ov024_021da670_8;
extern "C" int func_ov024_021da9c8(Struct_ov024_021da670_8*);
struct Struct_021fa76c;
extern "C" int func_ov024_021fa76c(Struct_021fa76c*);
extern "C" void func_ov024_021f6a1c(Struct_ov024_021f6a1c*, void*);
extern "C" void func_ov024_021f9874(Struct_ov024_021fdf04_5*, Struct_ov024_021f6a1c*, int, int);

// USA: func_ov024_021fdf04
extern "C" ARM void func_ov024_021fdf04(Struct_ov024_021fdf04_5* arg0, int arg1) {
    Struct_ov024_021fdf04_8* var0 = arg0->unknown_8_;
    func_02053c6c((unsigned char*)var0);
    func_020797dc();

    Struct_ov024_021fdf04_2* var1 = arg0->unknown_64c_;
    if (var1->unknown_9_0_ == 2) return;

    float var2 = 1.0f;
    func_ov024_021f8bd8(arg0, &var2, var0, var1);

    int var3 = arg0->unknown_9c_;
    float var4[8];
    Struct_ov024_021fdf04_8** var5 = arg0->unknown_7c_;
    __clear(var4, sizeof(var4));

    for (int var6 = 0; var6 < var3; var6++) {
        Struct_ov024_021fdf04_8* var7 = var5[var6];
        float var8 = 1.0f;
        float var9 = var2;

        if (var1->unknown_10_ & 1) {
            if (func_ov024_021fb460((Struct_ov024_021fa7ec_7*)var7) && var1->unknown_18_5_ != 2) {
                var8 = var8 * func_020748d0((signed char)var7->unknown_138_->unknown_5a_2_);
            }
        }
        if (var1->unknown_10_ & 4) {
            if (func_ov024_021fb478((Struct_ov024_021fa7ec_8*)var7)) {
                var8 = var8 * func_020748a8((signed char)var7->unknown_138_->unknown_5a_5_);
            }
        }
        if (var1->unknown_10_ & 0x10) {
            if (var7->unknown_138_->unknown_21_ <= 3) {
                var8 = var8 * func_02074938((signed char)var7->unknown_138_->unknown_21_);
            } else if (func_ov024_021e67b0((GameObject*)var7)) {
                var8 = var8 * func_02074938(1);
            }
        }
        var8 = var8 * func_ov024_021f875c(arg0, var7, var1, 1);
        var4[var6] = var9 * var8;
    }

    int var10 = var1->unknown_17_4_;
    if (var10 == 5) {
        unsigned char* var11 = var0->unknown_150_ + 0x2f4;
        if (var11) {
            Struct_ov024_021fdf04_6* var12 = (Struct_ov024_021fdf04_6*)var11;
            if (var12->unknown_0_1_) var10 = 3;
            else if (var12->unknown_0_0_) var10 = 4;
            else var10 = 2;
        }
    }
    if (var10 != 2 && var10 != 4 && var10 != 3) return;

    unsigned int var13 = var1->unknown_1d_6_;
    unsigned char var14;
    unsigned char var15;
    if (var13 <= 11) {
        var15 = data_ov024_021fefea[var13].unknown_1_;
        var14 = data_ov024_021fefea[var13].unknown_0_;
    } else {
        return;
    }

    Struct_ov024_021f6a1c var16;
    memset(&var16, 0, sizeof(var16));
    Struct_ov024_021fdf04_4 var17;

    int var18 = 0;
    int var19 = 0;

    for (long var20 = 0; var20 < arg0->unknown_9c_; var20++) {
        int var21 = 1;
        var18++;
        Struct_ov024_021fdf04_8* var22 = var5[var20];

        if (var1->unknown_10_ & 0x400) {
            if (var22->unknown_138_->unknown_14_ & 0x200) var19 = 1;
        }
        if (var4[var20] < 30.0f) var21 = 0;

        if (var21) {
            int var23 = 5;
            int var24 = 0;
            int var25 = 0;
            float var26 = 33.3f;

            if (arg1 == 4) {
                if (func_020882f8((unsigned char*)var22->unknown_138_) == 0) var24 = 1;
                var25 = 1;
                var26 = 35.0f;
            } else if (arg1 == 5) {
                if ((var22->unknown_138_->unknown_14_ & 0x40) == 0) var24 = 1;
                var25 = 1;
                var26 = 35.0f;
            } else if (arg1 == 3) {
                if (func_ov024_021da9b0((Struct_ov024_021da670_7*)var22) == 0) var24 = 1;
                var25 = 1;
            } else if (arg1 == 6) {
                if (func_ov024_021dd010((Struct_ov024_021dced0_2*)var22) == 0) var24 = 1;
                var25 = 1;
            } else if (arg1 == 7) {
                if (func_ov024_021de25c((Struct_ov024_021de124*)var22) == 0) var24 = 1;
                var25 = 1;
                var26 = 35.0f;
            } else if (arg1 == 8) {
                if (func_ov024_021da9c8((Struct_ov024_021da670_8*)var22) == 0) var24 = 1;
                var25 = 1;
                if (var1->unknown_30_ == 2) {
                    Struct_ov024_021fdf04_7* var27 = var22->unknown_144_;
                    if (var27 != 0) {
                        if (var27->unknown_b_3_) var24 = 0;
                    }
                }
                var26 = 50.0f;
            } else if (arg1 == 9) {
                if (var4[var20] >= 30.0f) var24 = 1;
                var23 = 2;
            } else if (arg1 == 0x11) {
                Struct_ov024_021fdf04* var28 = var22->unknown_138_;
                if (var28->unknown_58_0_ >= -1) var24 = 1;
                if (var28->unknown_0_.attack <= 40) var24 = 0;
                var23 = 5;
            } else if (arg1 == 0x12) {
                Struct_ov024_021fdf04* var29 = var22->unknown_138_;
                if (var29->unknown_58_3_ >= -1) var24 = 1;
                if (var29->unknown_0_.defense <= 20) var24 = 0;
                var23 = 5;
            } else if (arg1 == 0x13) {
                Struct_ov024_021fdf04* var30 = var22->unknown_138_;
                if (var30->unknown_58_6_ >= -1) var24 = 1;
                if (var30->unknown_0_.agility <= 40) var24 = 0;
                var23 = 5;
            } else if (arg1 == 0x14) {
                Struct_ov024_021fdf04* var31 = var22->unknown_138_;
                if (var31->unknown_59_4_ >= -1) var24 = 1;
                if ((unsigned short)var31->unknown_0_.magicalMight <= 100) var24 = 0;
                var23 = 5;
            } else if (arg1 == 0x15) {
                Struct_ov024_021fdf04* var32 = var22->unknown_138_;
                if (var32->unknown_59_7_ >= -1) var24 = 1;
                if ((unsigned short)var32->unknown_0_.magicalMending <= 100) var24 = 0;
                var23 = 5;
            } else if (arg1 == 0x16) {
                if (var22->unknown_138_->unknown_5a_2_ >= -1) var24 = 1;
                var23 = 5;
            }

            if (!var25 || func_ov024_021fa76c((Struct_021fa76c*)var22)) {
                if (var4[var20] < var26) var24 = 0;
                if (var24) {
                    var17.unknown_0_ = var1->unknown_30_;
                    var17.unknown_6_ = var20;
                    var17.unknown_4_ = arg1;
                    var17.unknown_5_ = 1;
                    var17.unknown_7_ = var4[var20];
                    var17.unknown_8_ = var23;
                    var17.unknown_9_.unknown_0_0_ = var14;
                    var17.unknown_9_.unknown_0_6_ = var15;
                    func_ov024_021f6a1c(&var16, &var17);
                }
            } else {
                continue;
            }
        }

        int var33 = 0;
        if (var20 == arg0->unknown_9c_ - 1) var33 = 1;
        else if (var10 == 2) var33 = 1;
        else if (var10 == 4) {
            if (var22->inline_ov024_021fdf04() != var5[(int)var20 + 1]->inline_ov024_021fdf04()) var33 = 1;
        }
        if (!var33) continue;
        if (var18 >= 2) {
            if (var15) var19 = 1;
        }
        if (var18 <= 1) var15 = 0;
        if (!var19) {
            int var34 = (unsigned char)var22->unknown_4_;
            int var35 = var22->inline_ov024_021fdf04();
            if (var10 == 4) var34 = 0xff;
            else if (var10 == 3) { var34 = 0xff; var35 = var34; }
            func_ov024_021f9874(arg0, &var16, var35, var34);
        }
        memset(&var16, 0, sizeof(var16));
        var18 = 0;
        var19 = 0;
    }
}
