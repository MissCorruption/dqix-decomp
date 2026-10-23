#include <globaldefs.h>
#include "Resource/ActionDataTables.h"

class GameState {
public:
    static GameState* GetInstance();
};

struct Struct_ov024_021f9030_3 {
    unsigned short unknown_0_;
    char unknown_2_[0x16];
    unsigned int unknown_18_;
};

struct GameObject {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x12a];
    unsigned int* unknown_130_;
    char unknown_134_[4];
    struct Struct_ov024_021f9030_3* unknown_138_;
    char unknown_13c_[0x40];
    unsigned char unknown_17c_;
};

struct Struct_02053dc0;

struct Struct_ov024_021f9030_4 {
    unsigned short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov024_021f9030_5 {
    char unknown_0_[0x8e18];
    unsigned char* unknown_8e18_;
};

struct Struct_ov024_021f9030_6 {
#if defined(jpn)
    char unknown_0_[0x8b4];
#else
    char unknown1_0_[0x94c];
#endif
    int unknown_94c_;
};

struct Struct_ov024_021f9030_7 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 20;
    unsigned int unknown_b_4_ : 1;
    unsigned int unknown_b_5_ : 3;
    char unknown_c_[0xc];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 20;
    char unknown_1c_[0x10];
    unsigned int unknown_2c_0_ : 14;
    unsigned int unknown_2d_6_ : 6;
    unsigned int unknown_2e_4_ : 12;
};

struct Struct_ov024_021f9030 {
    short unknown_0_;
    char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov024_021f9030_2 {
    struct Struct_ov024_021f9030_5* unknown_0_;
    short unknown_4_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    struct GameObject* unknown_8_;
    int unknown_c_;
    char unknown_10_[0x6c];
    struct GameObject* unknown_7c_[8];
    int unknown_9c_;
    char unknown_a0_[0x64];
    int unknown_104_[4];
    float unknown_114_[4];
    float unknown_124_;
    int unknown_128_;
    char unknown_12c_[4];
    int unknown_130_;
    char unknown_134_[0x40];
    int unknown_174_;
    struct Struct_ov024_021f9030 unknown_178_[0x134];
    struct Struct_ov024_021f9030* unknown_648_;
    struct Struct_ov024_021f9030_7* unknown_64c_;
    int unknown_650_;
};

struct Struct_ov024_021fefc2 {
    unsigned short unknown_0_[10];
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" int func_ov024_021e6798(GameObject* arg0);
extern "C" Struct_ov024_021f9030_4* func_02053dc0(Struct_02053dc0* arg0);
extern "C" Struct_ov024_021f9030_7* func_02079e2c(char* arg0, int arg1);
extern "C" int func_ov000_02155f9c(Struct_ov024_021f9030_5* arg0, int arg1, int arg2);
extern "C" void func_ov024_021f7478(Struct_ov024_021f9030_2* arg0);
extern "C" int func_ov024_021f8874(Struct_ov024_021f9030_2* arg0, Struct_ov024_021f9030_7* arg1, GameObject* arg2, int* arg3);
extern "C" void func_ov024_021fa7ec(Struct_ov024_021f9030_2* arg0, float* arg1, float* arg2, float* arg3,
                                    int* arg4, float arg5, float arg6, int arg7,
                                    GameObject* arg8, int arg9);
extern "C" float func_ov024_021db358(GameObject* arg0);

extern Struct_ov024_021fefc2 data_ov024_021fefc2;

// USA: func_ov024_021f9030
extern "C" ARM void func_ov024_021f9030(Struct_ov024_021f9030_2* arg0, Struct_ov024_021f9030_5* arg1, int arg2, unsigned short* arg3) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg2);
    Struct_ov024_021f9030_6* var2 = (Struct_ov024_021f9030_6*)func_02053c6c((unsigned char*)var1);
    Struct_02108e10* var3 = func_020797dc();
    unsigned char var4 = (signed char)var2->unknown_94c_;
    if (var4 >= 5) {
        return;
    }
    if (func_ov000_02155f9c(arg1, arg2, 0) != 0 || *arg3 != 1) {
        return;
    }
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg2;
    arg0->unknown_124_ = 0.4f;
    if (arg0->unknown_6_ == 2) {
        arg0->unknown_124_ = 0.25f;
    }
    arg0->unknown_6_ = var4;
    arg0->unknown_7_ = 1;
    Struct_ov024_021fefc2 var5 = data_ov024_021fefc2;
    unsigned char var6[10];
    __clear(var6, sizeof(var6));
    short var7[10];
    __clear(var7, sizeof(var7));
    unsigned char var8;
    unsigned char var9;
    unsigned char var10;
    int var11 = 0;
    int var12 = arg0->unknown_6_ == 0;
    int var13 = 1;
    if (arg0->unknown_6_ != 1 && arg0->unknown_6_ != 4) {
        var13 = 0;
    }
    int var14 = arg0->unknown_6_ == 2;
    int var15 = arg0->unknown_6_ == 3;
    func_ov024_021f7478(arg0);
    int var16;
    var8 = 0;
    var9 = 0;
    var10 = 0;
    for (var16 = 0; var16 < 4; var16++) {
        GameObject* var17 = func_0200ff1c(var0, var16);
        if (var17 == 0) continue;
        if (!func_020a35e0(arg0->unknown_0_->unknown_8e18_, var16)) continue;
        if (func_ov024_021e6798(var17)) continue;
        if (*var17->unknown_130_ & 1) continue;
        if (var17->unknown_138_->unknown_18_ & 0x800) {
            var8 = 1;
        }
        Struct_ov024_021f9030_4* var18 = func_02053dc0((Struct_02053dc0*)var17);
        if (var18 == 0) continue;
        unsigned short var19 = var18->unknown_0_;
        if (var19 == 0x201) {
            var9 = 1;
            continue;
        }
        if (var19 == 0xb9 || var19 == 0x92 || var19 == 0xb6) {
            var10 = 1;
        }
    }
    for (var16 = 0; var16 < arg0->unknown_174_; var16++) {
        Struct_ov024_021f9030* var20 = &arg0->unknown_178_[var16];
        Struct_ov024_021f9030_7* var21 = func_02079e2c((char*)var3, var20->unknown_0_);
        int var22 = 0;
        if (var21->unknown_18_5_ == 2) {
            if (func_ov024_021f8874(arg0, var21, var1, &var22)) {
                if (var20->unknown_3_ == 0) {
                    var11 = 1;
                }
            }
            continue;
        }
        if (!var21->unknown_b_4_ && var21->unknown_2d_6_ == 0) continue;
        if (!func_ov024_021f8874(arg0, var21, var1, &var22)) continue;
        if (arg0->unknown_6_ == 4 && var22 != 0) continue;
        for (int var23 = 0; var23 < 10; var23++) {
            if (var5.unknown_0_[var23] == var21->unknown_4_0_) {
                var6[var23] = 1;
                var7[var23] = var22;
                break;
            }
        }
    }
    if (var6[0] && !var8 && !var9 && !var12 && (!var13 || arg0->unknown_c_ > 2)) {
        if (var11) {
            float var24 = arg0->unknown_124_;
            if (arg0->unknown_128_ != arg0->unknown_4_ && arg0->unknown_114_[arg0->unknown_128_] < var24) goto skipRevive;
        }
        Struct_ov024_021f9030_4* var25 = func_02053dc0((Struct_02053dc0*)var1);
        var25->unknown_0_ = 0x201;
        *arg3 = 0x201;
        var25->unknown_3_ = 0;
        var25->unknown_2_ = var1->unknown_4_;
        return;
    }
skipRevive:
    if (var6[1] && arg0->unknown_9c_ <= 1 && (var12 || var13 || var14)) {
        GameObject* var26 = arg0->unknown_7c_[0];
        arg0->unknown_64c_ = func_02079e2c((char*)var3, 0x45);
        arg0->unknown_650_ = arg0->unknown_64c_->unknown_8_0_;
        float var27;
        float var28;
        float var29;
        int var30;
        var27 = 0;
        var28 = 0;
        var29 = 0;
        var30 = -1;
        func_ov024_021fa7ec(arg0, &var27, &var28, &var29, &var30, 0, 0, 0, var26, 0);
        if (var28 > var26->unknown_138_->unknown_0_) {
            Struct_ov024_021f9030_4* var31 = func_02053dc0((Struct_02053dc0*)var1);
            var31->unknown_0_ = 0x45;
            *arg3 = 0x45;
            var31->unknown_3_ = var26->unknown_17c_;
            var31->unknown_2_ = var26->unknown_4_;
            return;
        }
    }
    if (!(func_ov024_021db358(arg0->unknown_8_) > 0.25f) && !var8 && !var9 && var15 && !var11) {
        int var32 = 3;
        if (var6[5]) {
            var32 = 0x87;
        }
        Struct_ov024_021f9030_4* var33 = func_02053dc0((Struct_02053dc0*)var1);
        var33->unknown_0_ = (unsigned short)var32;
        *arg3 = (unsigned short)var32;
        var33->unknown_3_ = 0;
        var33->unknown_2_ = var1->unknown_4_;
        return;
    }
    if (!var6[7] && !var6[8] && !var6[6]) return;
    if (!var15 || arg0->unknown_130_ == 0) return;
    if (var8 || var9 || var10 || var11) return;
    if (func_ov024_021db358(var1) < 0.5f) return;
    int var34 = arg0->unknown_4_;
    int var35 = arg0->unknown_128_;
    if (var35 == var34) return;
    if (var35 < 0 || var35 > 4) return;
    if (var34 < 0 || var34 > 4) return;
    if (arg0->unknown_104_[var34] < arg0->unknown_104_[var35] * 2) return;
    int var36 = 0;
    if (arg0->unknown_130_ >= 2 && var6[7]) {
        var36 = 0xb6;
    } else if (var6[8]) {
        var36 = 0xb9;
    } else if (var6[6]) {
        var36 = 0x92;
    } else if (var6[7]) {
        var36 = 0xb6;
    }
    if (var36 == 0) return;
    Struct_ov024_021f9030_4* var37 = func_02053dc0((Struct_02053dc0*)var1);
    var37->unknown_0_ = (unsigned short)var36;
    *arg3 = (unsigned short)var36;
    var37->unknown_3_ = 0;
    var37->unknown_2_ = var36 == 0xb6 ? var1->unknown_4_ : arg0->unknown_128_;
}
