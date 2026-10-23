#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021e6a90_9 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    char unknown_1c_[0x21 - 0x1c];
    unsigned char unknown_21_;
    char unknown_22_[0x24 - 0x22];
    signed char unknown_24_;
    char unknown_25_[0x3e - 0x25];
    unsigned char unknown_3e_;
    unsigned char unknown_3f_;
    unsigned char unknown_40_;
    unsigned char unknown_41_;
    unsigned char unknown_42_;
    unsigned char unknown_43_;
    unsigned char unknown_44_;
    char unknown_45_[0x58 - 0x45];
    int unknown_58_0_ : 18;
    int unknown_5a_2_ : 3;
    int unknown_5a_5_ : 3;
    int unknown_5b_0_ : 8;
};

struct Struct_ov024_021e6a90_8 {
    unsigned int unknown_0_0_ : 1;
    unsigned int unknown_0_1_ : 1;
    unsigned int unknown_0_2_ : 30;
};

struct Struct_ov024_021e6a90_10 {
    char unknown_0_[0x34];
    unsigned short unknown_34_;
};

struct Struct_ov024_021e6a90_11 {
    char unknown_0_[0x134];
    struct Struct_ov024_021e6a90_10* unknown_134_;
    struct Struct_ov024_021e6a90_9* unknown_138_;
#if defined(jpn)
    char unknown1_13c_[0x144 - 0x13c];
#else
    char unknown_13c_[0x150 - 0x13c];
#endif
    unsigned char* unknown_150_;
};

struct Struct_ov024_021e6a90 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 12;
    unsigned int unknown_a_6_ : 5;
    unsigned int unknown_b_3_ : 5;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 20;
    unsigned int unknown_1c_0_ : 14;
    unsigned int unknown_1d_6_ : 18;
    unsigned int unknown_20_[3];
    unsigned int unknown_2c_0_ : 27;
    unsigned int unknown_2f_3_ : 1;
    unsigned int unknown_2f_4_ : 4;
};

struct Struct_ov024_021e6a90_2 {
    char unknown_0_[0xb];
    unsigned char unknown_b_0_ : 3;
    unsigned char unknown_b_3_ : 1;
    unsigned char unknown_b_4_ : 1;
    unsigned char unknown_b_5_ : 3;
};

struct Struct_ov024_021e6a90_3 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 1;
    unsigned char unknown_1c_1_ : 1;
    unsigned char unknown_1c_2_ : 1;
    unsigned char unknown_1c_3_ : 3;
    unsigned char unknown_1c_6_ : 1;
    unsigned char unknown_1c_7_ : 1;
};

struct Struct_ov024_021e6a90_4 {
    char unknown_0_[0x8e38];
    int unknown_8e38_;
    char unknown_8e3c_[0x8e83 - 0x8e3c];
    signed char unknown_8e83_;
    char unknown_8e84_[0x8e94 - 0x8e84];
    unsigned char unknown_8e94_;
};

struct Struct_ov024_021e6a90_5 {
    char unknown_0_[4];
    struct Struct_ov024_021e6a90_2* unknown_4_;
    char unknown_8_[4];
    struct Struct_ov024_021e6a90_3* unknown_c_;
    struct Struct_ov024_021e6a90_4* unknown_10_;
    char unknown_14_[0x47 - 0x14];
    unsigned char unknown_47_;
    char unknown_48_[0x76 - 0x48];
    unsigned char unknown_76_;
};

struct Struct_ov024_021e6a90_6 {
    char unknown_0_[0x16c];
    unsigned short unknown_16c_[1];
#if defined(jpn)
    char unknown_16e_[0x8b8 - 0x16e];
#else
    char unknown1_16e_[0x950 - 0x16e];
#endif
    int unknown_950_;
};

struct Struct_ov024_021e6a90_11* GetCombatantByID(int, int);
struct GameObject;
extern "C" int func_ov024_021e7ba8(GameObject*);
struct Struct_ov024_021da670_6;
extern "C" int func_ov024_021da998(Struct_ov024_021da670_6*);
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
extern "C" float func_02074738(int arg0, int arg1);
extern "C" int func_ov000_02156068(struct Struct_ov024_021e6a90_4* arg0, int arg1, int arg2, int arg3);
extern "C" struct Struct_ov024_021e6a90_6* func_ov000_02153710(struct Struct_ov024_021e6a90_4* arg0, int arg1);
extern "C" int func_ov000_02159dbc(struct Struct_ov024_021e6a90_4* arg0, int arg1);
float CalculateTensionBonus(int tension, int level);
struct Struct_ov024_021e6a90_7;
extern "C" int func_ov024_021ea7fc(void*, Struct_ov024_021e6a90_7*, int);
struct Random;
extern "C" float func_02074838(int, int, Random*);
extern "C" float func_ov000_02156b38(struct Struct_ov024_021e6a90_4* arg0, int arg1, int arg2);
extern "C" int func_02085748(unsigned char* arg0);
struct Struct_020886b0;
extern "C" int func_020886b0(Struct_020886b0*);
struct Struct_020886f8;
extern "C" int func_020886f8(Struct_020886f8*);
struct Struct_02088740;
extern "C" int func_02088740(Struct_02088740*);
struct Struct_02088788;
extern "C" int func_02088788(Struct_02088788*);
struct Struct_020887d0;
extern "C" int func_020887d0(Struct_020887d0*);
struct Struct_02088660;
extern "C" int func_02088660(Struct_02088660*);
extern "C" float func_02085968(char*);
extern "C" float func_02085818(unsigned char* arg0);
extern "C" float func_02085a10(char*);
struct Struct_02085a48;
extern "C" float func_02085a48(Struct_02085a48*);
extern "C" float func_020859d8(char*);
extern "C" float func_020859a0(char*);
extern "C" float func_02085930(char*);
extern "C" float func_02085850(unsigned char* arg0);
extern "C" float func_020858f8(unsigned char* arg0);
struct Struct_02085a80;
extern "C" float func_02085a80(Struct_02085a80*);
extern "C" float func_020858c0(unsigned char* arg0);
extern "C" float func_02085888(unsigned char* arg0);
extern "C" float func_020748d0(int arg0);
extern "C" float func_020748a8(int arg0);
extern "C" float func_02074938(int arg0);
extern "C" int func_ov024_021e67b0(GameObject*);
struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" void func_ov000_0215a8d4(unsigned char*, int);
extern "C" int func_02085154(unsigned char* arg0);
extern "C" int func_020851d8(unsigned char* arg0);
int NextRandomMax(Random*, int);
extern "C" int func_02085128(unsigned char* arg0);
extern "C" void func_ov000_0215cd80(void*);

extern signed char data_ov024_021fe798[];
struct Struct_ov024_021fe778 { float unknown_0_[4]; };
extern struct Struct_ov024_021fe778 data_ov024_021fe778;

static inline int inline_ov000_02169850(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021e6a90
extern "C" ARM int func_ov024_021e6a90(struct Struct_ov024_021e6a90_5* arg0, int arg1, int arg2,
                                                          struct Struct_ov024_021e6a90* arg3, unsigned int arg4) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov024_021e6a90_11* var1 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    struct Struct_ov024_021e6a90_11* var2 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    int var3;
    if (arg0->unknown_c_->unknown_1c_7_) {
        var3 = 1;
    } else {
        var3 = 0;
    }
    float var4 = arg4;
    float var5 = var4;

    if (arg3->unknown_4_0_ != 0x150 && func_ov024_021e7ba8((GameObject*)var2) &&
        arg3->unknown_9_0_ == 1) {
        arg0->unknown_c_->unknown_1c_6_ = 1;
        if ((arg3->unknown_10_ & 0x2000) &&
            (func_ov024_021da998((Struct_ov024_021da670_6*)var1) ||
             func_ov024_021dd260((Struct_ov024_021dd028_5*)var1))) {
            arg0->unknown_47_ = 1;
            if (func_ov024_021dd260((Struct_ov024_021dd028_5*)var1)) {
                arg0->unknown_47_ = 2;
            }
        }
        return 0;
    }

    if (arg0->unknown_76_ && (arg3->unknown_10_ & 0x2000) &&
        (func_ov024_021da998((Struct_ov024_021da670_6*)var1) ||
         func_ov024_021dd260((Struct_ov024_021dd028_5*)var1))) {
        if (arg4 != 0 || (arg3->unknown_4_0_ != 0x70 && arg3->unknown_4_0_ != 0x48)) {
            float var6;
            if (inline_ov000_02169850(arg1)) {
                var6 = func_02074738(var1->unknown_138_->unknown_24_, 0);
            } else {
                var6 = func_02074738(var1->unknown_138_->unknown_24_, 1);
            }
            var4 = var4 * var6;
            unsigned char var7 = 1;
            if (inline_ov000_02169850(arg1)) {
                if (func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1)) {
                    var7 = 0;
                }
            }
            if (var7) {
                signed char var8;
                if (inline_ov000_02169850(arg1)) {
                    struct Struct_ov024_021e6a90_6* var9 = func_ov000_02153710(arg0->unknown_10_, arg1);
                    var8 = var9->unknown_16c_[var9->unknown_950_];
                } else {
                    var8 = func_ov000_02159dbc(arg0->unknown_10_, arg1);
                }
                var4 = var4 + CalculateTensionBonus(var1->unknown_138_->unknown_24_, var8);
            }
        }
        arg0->unknown_47_ = 1;
        if (func_ov024_021dd260((Struct_ov024_021dd028_5*)var1)) {
            arg0->unknown_47_ = 2;
        }
    }

    if (var3 && func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1)) {
        if (arg3->unknown_10_ & 0x1000000) {
            var4 = var5;
        }
    }

    if (func_ov024_021ea7fc(arg0, (Struct_ov024_021e6a90_7*)arg3, var3)) {
        unsigned char var10 = 0;
        int var11 = arg4;
        float var12 = 0.0f;
        if (arg3->unknown_4_0_ == 1 || arg3->unknown_4_0_ == 0xdb || arg3->unknown_4_0_ == 0x1f9) {
            var11 = var1->unknown_134_->unknown_34_;
            var10 = 1;
            var12 = arg4;
            if (inline_ov000_02169850(arg1)) {
                struct Struct_ov024_021e6a90_11* var13 = (struct Struct_ov024_021e6a90_11*)func_0200ff1c(var0, arg1);
                if (var13) {
                    struct Struct_ov024_021e6a90_8* var14 = (struct Struct_ov024_021e6a90_8*)(var13->unknown_150_ + 0x2f4);
                    if (var14 && (var14->unknown_0_1_ || var14->unknown_0_0_)) {
                        var10 = 0;
                        var11 = arg4;
                        var12 = 0.0f;
                    }
                }
            }
        }
        var4 = 1.2f * var4;
        float var15 = func_02074838((short)var11, var10, (Random*)arg0->unknown_10_);
        if (var4 < var15) {
            var4 = var15;
        }
        if (var4 < var12) {
            var4 = var12;
        }
    }

    var4 = var4 * func_ov000_02156b38(arg0->unknown_10_, arg2, arg3->unknown_a_6_);

    int var16 = 0;
    signed char* var17 = data_ov024_021fe798;
    struct Struct_ov024_021e6a90_11* var18 = (struct Struct_ov024_021e6a90_11*)func_0200ff1c(var0, arg1);
    if (var18) {
        for (; *var17 != -1; var17 += 2) {
            if (var17[1] == func_02085748(var18->unknown_150_)) {
                var16 = var17[0];
                break;
            }
        }
    }

    int var19 = 0;
    float var20 = 0;
    if (inline_ov000_02169850(arg1) && func_0200ff1c(var0, arg1) &&
        (arg3->unknown_10_ & 0x40000) && var16 >= 1 && var16 <= 7) {
        var20 = var4 * func_ov000_02156b38(arg0->unknown_10_, arg2, var16);
        var19 = 1;
    }

    float var21 = 0;
    if (var2 && arg3->unknown_a_6_ == 8 && arg3->unknown_4_0_ != 0x1f9 && arg3->unknown_4_0_ != 0x205) {
        if (func_020886b0((Struct_020886b0*)var1->unknown_138_)) {
            var21 = 1.1f * var4;
            var21 = var21 * (var2->unknown_138_->unknown_3e_ / 100.0f);
        } else if (func_020886f8((Struct_020886f8*)var1->unknown_138_)) {
            var21 = 1.1f * var4;
            var21 = var21 * (var2->unknown_138_->unknown_3f_ / 100.0f);
        } else if (func_02088740((Struct_02088740*)var1->unknown_138_)) {
            struct Struct_ov024_021e6a90_9* var22 = var2->unknown_138_;
            float var23 = 1.1f * var4;
            var23 = var23 * (var22->unknown_41_ / 100.0f);
            float var24 = 1.1f * var4;
            var24 = var24 * (var22->unknown_40_ / 100.0f);
            var21 = var24;
            if (var24 < var23) {
                var21 = var23;
            }
        } else if (func_02088788((Struct_02088788*)var1->unknown_138_)) {
            struct Struct_ov024_021e6a90_9* var25 = var2->unknown_138_;
            float var26 = 1.1f * var4;
            var26 = var26 * (var25->unknown_43_ / 100.0f);
            float var27 = 1.1f * var4;
            var27 = var27 * (var25->unknown_42_ / 100.0f);
            var21 = var27;
            if (var27 < var26) {
                var21 = var26;
            }
        } else if (func_020887d0((Struct_020887d0*)var1->unknown_138_)) {
            var21 = 1.1f * var4;
            var21 = var21 * (var2->unknown_138_->unknown_44_ / 100.0f);
        }
        if (func_02088660((Struct_02088660*)var1->unknown_138_)) {
            var19 = 1;
        }
    }

    if (var19) {
        if (var20 <= var21) {
            var4 = var21;
        } else {
            var4 = var20;
        }
    }

    if (inline_ov000_02169850(arg1)) {
        struct Struct_ov024_021e6a90_11* var28 = (struct Struct_ov024_021e6a90_11*)func_0200ff1c(var0, arg1);
        if (var28 && (arg3->unknown_10_ & 0x40000)) {
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 1, 0)) {
                var4 = var4 * func_02085968((char*)var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 2, 0)) {
                var4 = var4 * func_02085818(var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 3, 0)) {
                var4 = var4 * func_02085a10((char*)var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 4, 0)) {
                var4 = var4 * func_02085a48((Struct_02085a48*)var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 5, 0)) {
                var4 = var4 * func_020859d8((char*)var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 6, 0)) {
                var4 = var4 * func_020859a0((char*)var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 7, 0)) {
                var4 = var4 * func_02085930((char*)var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 8, 0)) {
                var4 = var4 * func_02085850(var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 9, 0)) {
                var4 = var4 * func_020858f8(var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 10, 0)) {
                var4 = var4 * func_02085a80((Struct_02085a80*)var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 11, 0)) {
                var4 = var4 * func_020858c0(var28->unknown_150_);
            }
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 12, 0)) {
                var4 = var4 * func_02085888(var28->unknown_150_);
            }
        }
    }

    unsigned char var29;
    if (var2) {
        struct Struct_ov024_021e6a90_9* var30 = var2->unknown_138_;
        unsigned int var31 = var30->unknown_18_;
        if ((var31 & 2) && arg3->unknown_a_6_ == 1) {
            var4 = 0.75f * var4;
        }
        if ((var31 & 4) && arg3->unknown_a_6_ == 2) {
            var4 = 0.75f * var4;
        }
        if ((var30->unknown_14_ & 0x20000000) && func_ov000_02156068(arg0->unknown_10_, arg1, 8, 0)) {
            var4 = 0.5f * var4;
        }
        if (arg3->unknown_10_ & 1) {
            if ((var2->unknown_138_->unknown_14_ & 0x10000) && arg3->unknown_18_5_ != 2) {
                var4 = var4 * func_020748d0((signed char)var2->unknown_138_->unknown_5a_2_);
            }
        }
        if ((arg3->unknown_10_ & 4) && (var2->unknown_138_->unknown_14_ & 0x20000)) {
            var4 = var4 * func_020748a8((signed char)var2->unknown_138_->unknown_5a_5_);
        }
        if ((arg3->unknown_10_ & 0x10) && var2 && arg0->unknown_10_->unknown_8e94_ == 0) {
            if (var2->unknown_138_->unknown_21_ <= 3) {
                var4 = var4 * func_02074938((signed char)var2->unknown_138_->unknown_21_);
            }
            if (func_ov024_021e67b0((GameObject*)var2)) {
                var4 = var4 * func_02074938(1);
            }
            if (func_02086ef0((Struct_02048150*)(func_02010828(GameState::GetInstance())), arg2) &&
                var2 && var2->unknown_138_->unknown_21_ == 1) {
                func_ov000_0215a8d4((unsigned char*)arg0->unknown_10_, 0);
            }
        }
    }

    if (arg3->unknown_4_0_ == 0x82 && var2->unknown_138_->unknown_21_ != 3) {
        var4 = 1.0f;
    }

    var29 = 0;
    if (inline_ov000_02169850(arg1)) {
        struct Struct_ov024_021e6a90_11* var32 = (struct Struct_ov024_021e6a90_11*)func_0200ff1c(var0, arg1);
        if (var32) {
            if (arg3->unknown_10_ & 0x80000) {
                if (func_02085154(var32->unknown_150_)) {
                    arg0->unknown_c_->unknown_1c_2_ = 0;
                }
            }
            if ((arg3->unknown_10_ & 0x40000) && func_020851d8(var32->unknown_150_)) {
                var4 = 1.0f;
                var29 = 1;
                arg0->unknown_c_->unknown_1c_2_ = 0;
                arg0->unknown_c_->unknown_1c_1_ = 0;
            }
        }
    }

    if (var4 > 0) {
        if (var4 > 0 && arg0->unknown_c_->unknown_1c_2_) {
            var4 = 0;
        }
        if (var4 > 0 && arg0->unknown_c_->unknown_1c_1_) {
            var4 = 0;
        }
    }

    if (func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1) && (arg3->unknown_10_ & 0x1000000) &&
        (arg3->unknown_9_0_ == 1 || arg3->unknown_4_0_ == 0xdb) && !var3 && arg3->unknown_4_0_ != 0x205 &&
        arg3->unknown_4_0_ != 0x82) {
        if (!var29) {
            var4 = 0;
        }
    }

    if (var4 <= 0) {
        int var33 = 1;
        if (arg0->unknown_c_->unknown_1c_2_) {
            var33 = 0;
        }
        if (arg0->unknown_c_->unknown_1c_1_) {
            var33 = 0;
        }
        if (arg3->unknown_4_0_ == 0x70) {
            var33 = 0;
        }
        if (arg3->unknown_4_0_ == 0x48) {
            var33 = 0;
        }
        if (func_ov000_02156b38(arg0->unknown_10_, arg2, arg3->unknown_a_6_) <= 0) {
            var33 = 0;
        }
        if (func_ov000_02156b38(arg0->unknown_10_, arg2, var16) <= 0) {
            var33 = 0;
        }
        if (arg3->unknown_4_0_ == 0x1b) {
            var33 = 0;
        }
        if (func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1) && !(arg3->unknown_10_ & 0x1000000)) {
            var33 = 0;
        }
        if (var33) {
            var4 = NextRandomMax((Random*)arg0->unknown_10_, 2);
        }
    }

    if (func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1)) {
        if (!var3 && (arg3->unknown_4_0_ == 0x40 || arg3->unknown_4_0_ == 0x7e)) {
            var4 = 1.0f + NextRandomMax((Random*)arg0->unknown_10_, 2);
        }
        if (inline_ov000_02169850(arg1)) {
            struct Struct_ov024_021e6a90_11* var34 = (struct Struct_ov024_021e6a90_11*)func_0200ff1c(var0, arg1);
            if (var34 && (arg3->unknown_10_ & 0x40000) && func_02085128(var34->unknown_150_)) {
                var4 += 1.0f;
            }
        }
        if (arg0->unknown_76_ && (arg3->unknown_10_ & 0x2000) &&
            (func_ov024_021da998((Struct_ov024_021da670_6*)var1) ||
             func_ov024_021dd260((Struct_ov024_021dd028_5*)var1))) {
            float var35;
            if (inline_ov000_02169850(arg1)) {
                var35 = func_02074738(var1->unknown_138_->unknown_24_, 0);
            } else {
                var35 = func_02074738(var1->unknown_138_->unknown_24_, 1);
            }
            var4 = var4 * var35;
        }
    }

    if (func_ov024_021dd260((Struct_ov024_021dd028_5*)var2) && arg3->unknown_18_5_ == 1) {
        var4 = 0.5f * var4;
    }

    if (arg3->unknown_2f_3_ && var4 >= 1.0f) {
        struct Struct_ov024_021fe778 var36 = data_ov024_021fe778;
        signed char var37 = arg0->unknown_10_->unknown_8e83_;
        if (var37 > 3) {
            var37 = 3;
        }
        var4 = var4 * var36.unknown_0_[var37];
        arg0->unknown_4_->unknown_b_3_ = 0;
        if (var37 != 0) {
            arg0->unknown_4_->unknown_b_5_ = var37;
        }
    } else {
        func_ov000_0215cd80(arg0->unknown_10_);
    }

    int var38 = var4;
    if (arg3->unknown_1c_0_ != 0 && arg3->unknown_1c_0_ < var38) {
        var38 = arg3->unknown_1c_0_;
    }
    if (arg3->unknown_4_0_ == 0xaf) {
        arg0->unknown_10_->unknown_8e38_ = 0.25f * var38;
    }
    return var38;
}
