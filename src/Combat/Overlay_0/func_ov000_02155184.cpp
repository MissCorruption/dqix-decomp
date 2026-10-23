#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_ov000_02155184;
extern "C" Struct_ov000_02155184* func_0200fea4(GameState*, int);
struct Struct_02070b6c_3;
struct Struct_0206f01c_2;
extern "C" void* func_02070fd0(Struct_02070b6c_3*, int);
extern "C" void* func_0206f4f0(Struct_0206f01c_2*, int);

struct Struct_ov000_02155184 {
    char unknown_0_[2]; unsigned short unknown_2_; char unknown_4_[0x138-4];
    unsigned char* unknown_138_; char unknown_13c_[8]; unsigned short* unknown_144_;
    char unknown_148_[0x17c-0x148]; unsigned char unknown_17c_, unknown_17d_, unknown_17e_;
    char unknown_17f_[5]; unsigned char unknown_184_; char unknown_185_;
    unsigned short unknown_186_; char unknown_188_[4]; unsigned char unknown_18c_;
};
struct Struct_ov000_02155184_4 {
    unsigned short unknown_0_0_:3, unknown_0_3_:11, unknown_1_6_:1, unknown_1_7_:1;
    unsigned short unknown_2_, unknown_4_;
    unsigned char unknown_6_, unknown_7_, unknown_8_, unknown_9_;
};
struct Struct_ov000_02155184_5 { char unknown_0_[22]; unsigned char unknown_16_, unknown_17_; };
struct Struct_ov000_02155184_6 {
    char unknown_0_[0x81b4]; Struct_ov000_02155184_5 unknown_81b4_[3];
    char unknown_81fc_[0x8d66-0x81fc]; Struct_ov000_02155184_4 unknown_8d66_[12];
    char unknown_8dde_[0x8e18-0x8dde]; char* unknown_8e18_;
    char unknown_8e1c_[12]; int unknown_8e28_; int unknown_8e2c_; int unknown_8e30_; int unknown_8e34_;
};
struct Struct_ov000_02155184_2 { char unknown_0_[8]; int unknown_8_; unsigned short unknown_c_; };
struct Struct_ov000_02155184_3 { char unknown_0_[10]; unsigned short unknown_a_0_:12, unknown_b_4_:1, unknown_b_5_:3; };

static inline int inline_ov000_02155184(Struct_ov000_02155184* arg0) { return arg0->unknown_17c_; }
static inline int inline_ov000_02155184_2(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov000_02155184
extern "C" ARM void func_ov000_02155184(Struct_ov000_02155184_6* arg0, int arg1, int arg2) {
    if (inline_ov000_02155184_2(arg1)) return;
    Struct_ov000_02155184* var0 = func_0200fea4(GameState::GetInstance(), arg1);
    if (!var0) return;
    char* var1 = arg0->unknown_8e18_ + 0x284;
    unsigned short var2 = var0->unknown_2_;
    Struct_ov000_02155184_2* var3;
    char* var4 = arg0->unknown_8e18_ + 0x678;
    int var5 = var0->unknown_17c_;
    if (var0->unknown_184_) { var2 = var0->unknown_186_; var5 = var0->unknown_18c_; }
    var3 = (Struct_ov000_02155184_2*)func_02070fd0((Struct_02070b6c_3*)(var1 + 0x400), var2);
    if (!var3) return;
    Struct_ov000_02155184_3* var6 = (Struct_ov000_02155184_3*)func_0206f4f0((Struct_0206f01c_2*)var4, (short)var2);
    if (!var6 || var0->unknown_17d_) return;
    int var7 = 0;
    if (!(arg2 & 0x10) && !(arg2 & 0x20)) {
        arg0->unknown_8e28_ += var3->unknown_8_;
        arg0->unknown_8e2c_ += var3->unknown_c_;
        var7 = 1;
        if (var6 && var6->unknown_b_4_) arg0->unknown_8e34_ += var3->unknown_8_;
        var0->unknown_17d_ = 1;
    }
    Struct_ov000_02155184_4* var8;
    int var9 = 0;
    for (int var10 = 0; var10 < arg0->unknown_8e30_; var10++) {
        var8 = &arg0->unknown_8d66_[var10];
        if (var8->unknown_2_ == var2 && var5 == var8->unknown_0_0_) {
            Struct_ov000_02155184_5* var11 = &arg0->unknown_81b4_[var8->unknown_0_0_];
            var8->unknown_0_3_ = (unsigned short)(var8->unknown_0_3_ + 1);
            var8->unknown_1_6_ = var11->unknown_17_;
            var8->unknown_1_7_ = var11->unknown_16_;
            var8->unknown_6_ |= var0->unknown_17e_;
            unsigned char var12 = var0->unknown_138_[0x3d];
            var12 = var8->unknown_7_ | var12;
            var8->unknown_7_ = var12;
            var8->unknown_8_ |= var7;
            if ((arg2 & 0x10) || (arg2 & 0x20)) var8->unknown_9_++;
            var9 = 1;
            break;
        }
    }
    if (var9) return;
    if (arg0->unknown_8e30_ >= 12) return;
    if (inline_ov000_02155184(var0) >= 3) return;
    {
        Struct_ov000_02155184_5* var13 = &arg0->unknown_81b4_[var0->unknown_17c_];
        var8 = &arg0->unknown_8d66_[arg0->unknown_8e30_];
        memset(var8, 0, sizeof(*var8));
        var8->unknown_2_ = var2;
        var8->unknown_0_0_ = (unsigned short)var5;
        var8->unknown_0_3_ = 1;
        var8->unknown_1_6_ = var13->unknown_17_;
        var8->unknown_1_7_ = var13->unknown_16_;
        var8->unknown_6_ |= var0->unknown_17e_;
        unsigned char var14 = var0->unknown_138_[0x3d];
            var14 = var8->unknown_7_ | var14;
            var8->unknown_7_ = var14;
        var8->unknown_8_ |= var7;
        if ((arg2 & 0x10) || (arg2 & 0x20)) var8->unknown_9_++;
        if (var0->unknown_144_) var8->unknown_4_ = var0->unknown_144_[8];
        arg0->unknown_8e30_++;
    }
}
