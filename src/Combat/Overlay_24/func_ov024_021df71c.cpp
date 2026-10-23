#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_02053f7c;
struct Struct_ov000_021626a0_2 { char unknown_0_[8]; short unknown_8_; };
struct Struct_ov000_0215ab88 : GameObject { char unknown_13c_[8]; Struct_ov000_021626a0_2* unknown_144_; };
struct Struct_ov024_021df71c { char unknown_0_[0x22]; unsigned short unknown_22_0_ : 2; unsigned short unknown_22_2_ : 4; unsigned short unknown_22_6_ : 10; };
struct Struct_ov024_021df71c_2 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 5;
    unsigned int unknown_1_6_ : 1;
    unsigned int unknown_1_7_ : 1;
    unsigned int unknown_2_0_ : 16;
    int unknown_4_[3];
};
struct Struct_ov024_021df71c_3 { unsigned char unknown_0_; char unknown_1_[3]; Struct_ov024_021df71c_2 unknown_4_[1]; };
struct Struct_ov024_021fe9b8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
};
extern Struct_ov024_021fe9b8 data_ov024_021fe9b8[];
extern "C" int* func_02094d6c();
extern "C" int func_02086aec(Struct_02053f7c*, int);
extern "C" int func_020882f8(unsigned char*);

// USA: func_ov024_021df71c
extern "C" ARM int func_ov024_021df71c(Struct_ov000_0215ab88* arg0, unsigned int arg1, int arg2, unsigned short* arg3, unsigned short* arg4, unsigned short* arg5) {
    Struct_ov024_021df71c_3* var0 = (Struct_ov024_021df71c_3*)func_02094d6c();
    if (!var0->unknown_0_) return 0;
    Struct_02053f7c* var1 = (Struct_02053f7c*)func_02010828(GameState::GetInstance());
    int var2 = 0;
    if (arg0->unknown_144_) var2 = arg0->unknown_144_->unknown_8_;
    for (int var3 = 0; var3 < var0->unknown_0_; ++var3) {
        Struct_ov024_021df71c_2* var4 = var0->unknown_4_;
        if (var4[var3].unknown_1_7_) continue;
        if (var4[var3].unknown_1_6_) continue;
        for (int var5 = 0; var5 < 7; ++var5) {
            Struct_ov024_021fe9b8* var6 = &data_ov024_021fe9b8[var5];
            if (var6->unknown_0_ != var4[var3].unknown_0_0_ || var2 != var6->unknown_2_) continue;
            if (arg2 != 0 && var6->unknown_c_ == 0) continue;
            if (arg2 == 0 && var6->unknown_c_ != 0) continue;
            if (func_02086aec(var1, (short)var6->unknown_a_) > 0) continue;
            if (var6->unknown_4_ != 0) {
                if (var6->unknown_4_ == 1) {
                    if (!func_020882f8((unsigned char*)arg0->currentStats_)) continue;
                } else if (var6->unknown_4_ == 2) {
                    if (arg0->currentStats_->primaryStats.currHP > 700) continue;
                } else if (var6->unknown_4_ == 3) {
                    if (((Struct_ov024_021df71c*)arg0->currentStats_)->unknown_22_2_ != 3) continue;
                }
            }
            unsigned int var7 = var6->unknown_6_;
            if (var7) {
                if (var7 >= 40000) {
                    var7 = 40000;
                    if (arg1 < var7) continue;
                } else if ((int)var7 / 100 != (int)arg1 / 100) continue;
            }
            if (var6->unknown_8_ != 0 && var6->unknown_8_ != arg1) continue;
            *arg3 = var6->unknown_a_;
            *arg4 = var6->unknown_2_;
            *arg5 = var6->unknown_0_;
            return 1;
        }
    }
    return 0;
}
