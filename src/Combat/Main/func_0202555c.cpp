#include <globaldefs.h>
#include "Combat/ActionDisplay.h"
#include "GameState/GameState.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

struct Struct_02020fc4_3;
struct Struct_02024518_3 {
    char unknown_0_[8];
    Struct_02020fc4_3* unknown_8_;
};
struct Struct_02024518_2;
struct Struct_0202441c;
struct Struct_02024d48;
struct Struct_0202555c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
struct Struct_02000c9c_20 {
    char unknown_0_[0x28];
};
struct Struct_0202555c_2 {
    char unknown_0_[0x18];
    int unknown_18_;
    int unknown_1c_;
    char unknown_20_[0xc];
    Struct_0202555c* unknown_2c_;
    int unknown_30_;
    char unknown_34_[4];
    fix32_t unknown_38_;
    int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
    char unknown_4c_[0x74 - 0x4c];
    int unknown_74_;
    char unknown_78_[0x94 - 0x78];
    int unknown_94_;
    char unknown_98_[0xe8 - 0x98];
    Struct_02000c9c_20 unknown_e8_[1];
    char unknown_110_[0x55c - 0x110];
    unsigned char unknown_55c_;
    char unknown_55d_[0x5b0 - 0x55d];
    fix32_t unknown_5b0_;
#if defined(jpn)
    char unknown_5b4_[0x914 - 0x5b4];
#else
    char unknown1_5b4_[0x9c0 - 0x5b4];
#endif
    unsigned char unknown_9c0_;
};
extern "C" void* func_0203b628();
extern "C" void* func_02012fe4();
extern "C" void func_0203b718(void*, int, int, int);
extern "C" Struct_02024518_3* func_02027878(Struct_02024518_2*, int);
extern "C" void func_0203bcb8(Struct_02020fc4_3*, int, int);
extern "C" void func_0202441c(Struct_0202441c*);
extern "C" int func_020243b8(void*, int);
extern "C" int func_02024d48(Struct_020236dc*, int);
extern "C" void func_0202756c(void*, int, int, int, unsigned char, unsigned char, unsigned short, unsigned char, int, int);
extern "C" void func_0205afdc(int, void*, int);

// USA: func_0202555c
extern "C" ARM void func_0202555c(Struct_0202555c_2* arg0) {
    char* var0;
    GameObject* var1;
    void* var2;
    int var3;
    int var4;
    fix32_t var5;
    int var6;
    int var7;
    int var8;
    int var9;
    fix32_t var10;
    int var11;
    int var12;
    int var13;
    Struct_02024518_3* var14;
    int var15;
    Struct_020236dc* var16;
    int var17;
    int var18;
    int var19;
    int var20;
    fix32_t var21;
    var1 = GameState::GetInstance()->GetUnknownGameObject();
    var2 = func_0203b628();
    func_02012fe4();
    Vector3i var22 = var1->obj3D_.position_;
    Struct_020236dc var23[17];
    unsigned char var24[32];
    memset(var24, 0, sizeof(var24));
    var3 = func_020236dc(var23, var24, &var22);
    var21 = arg0->unknown_38_;
    var4 = (int)((float)FIX32_MULTIPLY(var22.x, var21) / 4096.0f);
    var5 = arg0->unknown_5b0_;
    var6 = (int)((float)FIX32_MULTIPLY(arg0->unknown_5b0_, var21) / 4096.0f);
    var7 = (int)((float)FIX32_MULTIPLY(var22.z, var21) / 4096.0f);
    var8 = var6 - var7;
    var9 = var7 - var6;
    if (var9 > 0x1e) {
        arg0->unknown_5b0_ += fix32_Divide((var9 - 0x1e) << 12, var21);
    } else if (var8 > 0x37) {
        arg0->unknown_5b0_ -= fix32_Divide((var8 - 0x37) << 12, var21);
    }
    var10 = FIX32_MULTIPLY(var5, arg0->unknown_5b0_);
    if (var10 < 0) {
        arg0->unknown_5b0_ = 0;
    }
    var21 = arg0->unknown_38_;
    var6 = (int)((float)FIX32_MULTIPLY(arg0->unknown_5b0_, var21) / 4096.0f);
    var11 = var4 < 0 ? var4 / 8 - 1 : var4 / 8;
    var12 = var6 < 0 ? var6 / 8 - 1 : var6 / 8;
    if (arg0->unknown_1c_ - var12 + 14 != 0 || var6 % 8 != 0) {
        if (var9 > 0) {
            arg0->unknown_5b0_ = fix32_Divide((var7 - 0x1e) << 12, var21);
        } else if (var8 > 0) {
            arg0->unknown_5b0_ = fix32_Divide((var7 + 0x37) << 12, var21);
        }
    }
    var6 = (int)((float)FIX32_MULTIPLY(arg0->unknown_5b0_, arg0->unknown_38_) / 4096.0f);
    var12 = var6 < 0 ? var6 / 8 - 1 : var6 / 8;
    arg0->unknown_44_ = var4;
    arg0->unknown_48_ = var6;
    if (arg0->unknown_40_ != var12) {
        arg0->unknown_55c_ = 1;
    }
    arg0->unknown_3c_ = var11;
    arg0->unknown_40_ = var12;
    if (arg0->unknown_55c_) {
        arg0->unknown_55c_ = 0;
        func_0203b718(var2, 1, 0, arg0->unknown_74_);
        for (var13 = 0; var13 < arg0->unknown_30_; ++var13) {
            var14 = func_02027878((Struct_02024518_2*)arg0, arg0->unknown_2c_[var13].unknown_4_);
            if (var14) {
                func_0203bcb8((Struct_02020fc4_3*)((char*)var14 + 8), arg0->unknown_2c_[var13].unknown_8_,
                                    arg0->unknown_1c_ + arg0->unknown_2c_[var13].unknown_c_ - var12 + 16);
            }
        }
    }
    func_0202441c((Struct_0202441c*)arg0);
    for (var15 = 0; var15 < var3; ++var15) {
        var16 = &var23[var15];
        if (!func_020243b8(arg0, var16->unknown_14_)) {
            continue;
        }
        var21 = arg0->unknown_38_;
        var17 = (int)((float)FIX32_MULTIPLY(var16->unknown_0_.x, var21) / 4096.0f) - (arg0->unknown_18_ << 3);
        var18 = (int)((float)FIX32_MULTIPLY(var16->unknown_0_.z, var21) / 4096.0f) - arg0->unknown_48_;
        if (var16->unknown_f_ >= 0) {
            var19 = var24[var16->unknown_10_] - 1;
            var17 += data_020e70f0[var19][var16->unknown_f_][0];
            var18 += data_020e70f4[var19][var16->unknown_f_][0];
        }
        var20 = var16->unknown_e_ == 0x74;
        if (var20) {
            func_0202756c(arg0, (var17 - 4) << 12, (var18 + 0x5c) << 12, var16->unknown_c_, var16->unknown_e_, 0,
                                     var16->unknown_d_, 0xff, 0x1000, 0x1000);
            continue;
        }
        if (!func_02024d48(var16, arg0->unknown_9c0_)) {
            continue;
        }
        var0 = (char*)arg0->unknown_e8_ + (short)var16->unknown_c_ * (short)40;
        if (var16->unknown_13_) {
            ColorEffect_ConfigureAlphaBlend(0x04001050, 0, 3, 8, 8);
            func_0205afdc((int)&arg0->unknown_94_, var0, 1);
        } else {
            func_0205afdc((int)&arg0->unknown_94_, var0, 0);
        }
        func_0202756c(arg0, (var17 - 4) << 12, (var18 + 0x5c) << 12, var16->unknown_c_, var16->unknown_e_, 0,
                                 var16->unknown_d_, 0xff, 0x1000, 0x1000);
    }
    func_02023b5c(arg0, arg0->unknown_18_ << 3, arg0->unknown_48_, -4, 0x5c, 0);
    func_02023d84(arg0, var23, var3, arg0->unknown_18_ << 3, arg0->unknown_48_, -4, 0x5c, 0);
}
