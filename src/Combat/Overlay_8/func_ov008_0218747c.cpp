#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_ov008_0218747c { char unknown_0_[0x3c]; Struct_020ac4f8 unknown_3c_[2]; };
#if defined(jpn)
enum { Enum_ov008_0218747c_29956 = 0x72c4, Enum_ov008_0218747c_24 = 0x14 };
#else
enum { Enum_ov008_0218747c_29956 = 0x7504, Enum_ov008_0218747c_24 = 0x18 };
#endif
struct Struct_01ff91ac_37 { char unknown_0_[Enum_ov008_0218747c_29956]; Struct_ov008_0218747c unknown_7504_; };
struct Struct_ov008_0218747c_2 {
    char unknown_0_[0xb10];
    signed char unknown_b10_;
    unsigned char unknown_b11_;
    char unknown_b12_[6];
    unsigned int unknown_b18_;
    char unknown_b1c_[Enum_ov008_0218747c_24];
    int unknown_b34_;
    char unknown_b38_[8];
    Struct_020ac4f8 unknown_b40_[2];
};
struct Struct_ov008_0218747c_3 { char unknown_0_[0x100d]; unsigned char unknown_100d_; };
struct Struct_020103f0;
struct Struct_020104cc;
extern "C" void func_020103f0(Struct_020103f0*, unsigned short*, unsigned char*, unsigned char*);
extern "C" Struct_ov008_0218747c_3* func_0202ae18();
extern "C" int func_0202ba00(int*);
extern "C" void func_020104cc(Struct_020104cc*, unsigned short*, unsigned char*, unsigned char*);
extern "C" void func_020ac614(Struct_020ac4f8*, int);
extern "C" void func_020ac644(Struct_020ac4f8*, int);
static inline Struct_ov008_0218747c* inline_ov008_0218747c(GameState* arg0) { return &((Struct_01ff91ac_37*)arg0)->unknown_7504_; }

// USA: func_ov008_0218747c
extern "C" ARM void func_ov008_0218747c(Struct_ov008_0218747c_2* arg0, int arg1) {
    if (arg0->unknown_b34_) return;
    if (arg0->unknown_b10_ == 12 && arg0->unknown_b11_ < 6) return;
    GameState* var0 = GameState::GetInstance();
    Struct_020ac4f8* var1 = 0;
    Struct_ov008_0218747c* var2 = inline_ov008_0218747c(var0);
    Struct_020ac4f8* var3 = 0;
    unsigned short var4 = 0;
    unsigned char var5 = 0;
    unsigned char var6 = 0;
    Struct_020ac4f8* var7 = &var2->unknown_3c_[0];
    Struct_020ac4f8* var8 = var7 + 1;
    if (arg1 == 0) {
        var1 = &arg0->unknown_b40_[0];
        var3 = var7;
        func_020103f0((Struct_020103f0*)var0, &var4, &var5, &var6);
    } else if (arg1 == 1) {
        var1 = &arg0->unknown_b40_[1];
        var3 = var8;
        Struct_ov008_0218747c_3* var9 = func_0202ae18();
        int var10 = func_0202ba00((int*)var9);
        int var11 = var9->unknown_100d_;
        if ((var10 == 5 && var11 > 1) || var10 == 6) {
            func_020104cc((Struct_020104cc*)var0, &var4, &var5, &var6);
        } else {
            var4 = 0;
            var5 = 0;
            var6 = 0;
        }
    }
    if (!var1 || !var3) return;
    unsigned char var12 = var1->unknown_2_;
    func_ov008_02184598(var1);
    func_020ac614(var1, (unsigned short)(var3->unknown_0_ + var4));
    func_020ac644(var1, (unsigned char)(var3->unknown_2_ + var5));
    var1->unknown_3_ += (unsigned char)(var3->unknown_3_ + var6);
    unsigned char var13 = var1->unknown_3_;
    if (var13 > 59) {
        unsigned char var14 = var13 / 60;
        if (var1->unknown_0_ == 9999 && var1->unknown_2_ + var14 > 59) {
            var1->unknown_0_ = 9999;
            var1->unknown_2_ = 59;
            var1->unknown_3_ = 59;
        } else {
            func_020ac644(var1, var14);
            var1->unknown_3_ %= 60;
        }
    }
    if (var1->unknown_2_ != var12) {
        if (arg1 == 0) arg0->unknown_b18_ |= 0x800;
        else if (arg1 == 1) arg0->unknown_b18_ |= 0x1000;
    }
}
