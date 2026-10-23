#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02169850_3 { unsigned short unknown_0_; unsigned char unknown_2_; unsigned char unknown_3_; unsigned char unknown_4_; };
struct Struct_02053dc0;
extern "C" Struct_ov000_02169850_3* func_02053dc0(Struct_02053dc0*);
struct Struct_ov000_02169850 {
    char unknown_0_[0x1d];
    unsigned char unknown_1d_;
    char unknown_1e_[0x10];
    signed char unknown_2e_;
    char unknown_2f_[0x1d];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x438];
#else
    char unknown1_50_[0x3f8];
#endif
};
struct Struct_ov000_02169850_2 {
#if defined(jpn)
    char unknown_0_[0x21c];
#else
    char unknown1_0_[0x2a0];
#endif
    unsigned char* unknown_2a0_;
#if defined(jpn)
    char unknown_220_[0x34fc];
#else
    char unknown_2a4_[0x34bc];
#endif
    char unknown_3760_[0x958];
    Struct_ov000_02169850 unknown_40b8_[4];
#if defined(jpn)
    char unknown_5294_[0x8ac];
#else
    char unknown_51d8_[0x778];
#endif
    unsigned char unknown_5950_;
};
struct Struct_ov000_02169850_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[4];
    short unknown_6_;
    unsigned short unknown_8_;
};
struct Struct_ov000_0215767c_8 { char unknown_0_[0x16]; unsigned short unknown_16_; };
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_ov000_02162c14(Struct_ov000_02169850_2*, int, Struct_ov000_02169850_4*);
extern "C" Struct_ov000_0215767c_8* func_ov000_02171d90(Struct_ov000_02169850*, int);
extern "C" int func_ov000_021761c8(char*, int);
extern "C" int func_ov000_021761ec(char*, int);
extern "C" void func_02049458(unsigned char*, unsigned char);
static inline int inline_ov000_02169850(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov000_02169850
extern "C" ARM void func_ov000_02169850(Struct_ov000_02169850_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0; var1 < 4; ++var1) {
        if (!func_020a35e0(arg0->unknown_2a0_, var1)) continue;
        GameObject* var2 = func_0200ff1c(var0, var1);
        if (!var2) continue;
        Struct_ov000_02169850_3* var3 = func_02053dc0((Struct_02053dc0*)var2);
        if (!var3) continue;
        int var4;
        Struct_ov000_02169850* var5;
        if (inline_ov000_02169850(var1)) {
            for (int var6 = 0; var6 < 4; ++var6) {
                if (var1 == arg0->unknown_40b8_[var6].unknown_4c_) {
                    var5 = &arg0->unknown_40b8_[var6];
                    goto found;
                }
            }
        }
        var5 = 0;
    found:
        if (!var5) continue;
        Struct_ov000_02169850_4 var7;
        func_ov000_02162c14(arg0, var1, &var7);
        var4 = 1;
        if (var7.unknown_1_ == 0) {}
        else if (var7.unknown_1_ == 1) var4 = var7.unknown_8_;
        else if (var7.unknown_1_ == 2) var4 = 3;
        else if (var7.unknown_1_ == 3) var4 = var7.unknown_8_;
        else if (var7.unknown_1_ == 4) {
            Struct_ov000_0215767c_8* var8 = func_ov000_02171d90(var5, var7.unknown_6_);
            if (var8) var4 = var8->unknown_16_;
        } else if (var7.unknown_1_ == 5) var4 = var7.unknown_8_;
        else if (var7.unknown_1_ == 6) {
            if (arg0->unknown_5950_ == 3 || arg0->unknown_5950_ == 4) {
                var4 = 0;
                var3->unknown_4_ |= 1;
            } else var4 = 0x1f6;
        }
        var3->unknown_0_ = var4;
        int var9 = var5->unknown_2e_;
        unsigned char var10 = var5->unknown_1d_;
        if (inline_ov000_02169850(var9)) {
            var3->unknown_3_ = 0;
            var3->unknown_2_ = var9;
        } else if (var10 >= 8) {
            var3->unknown_3_ = 0;
            var3->unknown_2_ = 0;
        } else {
            var3->unknown_3_ = func_ov000_021761c8(arg0->unknown_3760_, var10);
            var3->unknown_2_ = func_ov000_021761ec(arg0->unknown_3760_, var10);
        }
        func_02049458((unsigned char*)var2, var3->unknown_2_);
    }
}
