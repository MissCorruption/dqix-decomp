#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021da670_6;
struct Struct_ov024_021dd028_5;
struct Struct_ov024_021e4604;
struct Struct_ov024_021eda78_5;
struct Struct_ov024_021dced0_2;
struct Struct_02088660;
struct Struct_ov024_021fa7ec_5;
struct Struct_ov024_021fa7ec_6;
struct Struct_ov024_021fc754_5;
extern "C" int func_ov024_021da998(Struct_ov024_021da670_6*);
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
extern "C" int func_ov024_021e47dc(Struct_ov024_021e4604*);
extern "C" int func_ov024_021edc08(Struct_ov024_021eda78_5*);
extern "C" int func_ov024_021dd010(Struct_ov024_021dced0_2*);
extern "C" int func_02088660(Struct_02088660*);
extern "C" int func_ov024_021fb430(Struct_ov024_021fa7ec_5*);
extern "C" int func_ov024_021fb448(Struct_ov024_021fa7ec_6*);
extern "C" int func_ov024_021eadfc(GameObject*);
extern "C" int func_ov024_021fcac0(Struct_ov024_021fc754_5*);

struct Struct_ov024_021fc754_6 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[0x58 - 0x1c];
    signed int unknown_58_0_ : 3;
    signed int unknown_58_3_ : 3;
    signed int unknown_58_6_ : 3;
    signed int unknown_59_1_ : 3;
    signed int unknown_59_4_ : 3;
    signed int unknown_59_7_ : 3;
    signed int unknown_5a_2_ : 3;
    signed int unknown_5a_5_ : 3;
    signed int unknown_5b_0_ : 3;
    signed int unknown_5b_3_ : 3;
    unsigned int unknown_5b_6_ : 2;
};
static inline Struct_ov024_021fc754_6* inline_ov024_021fc754(GameObject* arg0) {
    return (Struct_ov024_021fc754_6*)arg0->currentStats_;
}
struct Struct_ov024_021fc754 { unsigned char unknown_0_; signed char unknown_1_; };
struct Struct_ov024_021fc754_2 { signed char unknown_0_; signed char unknown_1_; };
union Struct_ov024_021ff026 { Struct_ov024_021fc754 unknown_0_[22]; signed char unknown1_0_[44]; };
union Struct_ov024_021fefd6 { Struct_ov024_021fc754_2 unknown_0_[10]; signed char unknown1_0_[20]; };
extern const Struct_ov024_021ff026 data_ov024_021ff026;
extern const Struct_ov024_021fefd6 data_ov024_021fefd6;
struct Struct_ov024_021fc754_3 { float unknown_0_; unsigned char unknown_4_, unknown_5_, unknown_6_, unknown_7_, unknown_8_; };
struct Struct_ov024_021f6a1c { Struct_ov024_021fc754_3 unknown_0_[16]; int unknown_c0_; float unknown_c4_; };
extern "C" void func_ov024_021f6a1c(Struct_ov024_021f6a1c*, void*);
struct Struct_ov024_021fc754_4 {
    unsigned char unknown_0_[4];
    short unknown_4_;
    unsigned char unknown_6_[0x7c - 6];
    GameObject* unknown_7c_[8];
    int unknown_9c_;
};
extern "C" int func_ov024_021fe698(Struct_ov024_021fc754_4*, int);
extern "C" void func_ov024_021f9874(Struct_ov024_021fc754_4*, Struct_ov024_021f6a1c*, int, int);

// USA: func_ov024_021fc754
extern "C" ARM void func_ov024_021fc754(Struct_ov024_021fc754_4* arg0) {
    if (!func_ov024_021fe698(arg0, 1)) return;
    int var0 = 0;
    for (int var1 = 0; var1 < arg0->unknown_9c_; var1++) {
        GameObject* var2 = arg0->unknown_7c_[var1];
        if (!var2) continue;
        int var3 = 0;
        Struct_ov024_021ff026 var4 = data_ov024_021ff026;
        var4.unknown_0_[0].unknown_0_ = func_ov024_021da998((Struct_ov024_021da670_6*)var2);
        var4.unknown_0_[1].unknown_0_ = func_ov024_021dd260((Struct_ov024_021dd028_5*)var2);
        var4.unknown_0_[2].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x200) != 0;
        var4.unknown_0_[3].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x8000000) != 0;
        var4.unknown_0_[4].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x10000000) != 0;
        var4.unknown_0_[5].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x20000000) != 0;
        var4.unknown_0_[6].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x100000) != 0;
        var4.unknown_0_[7].unknown_0_ = func_ov024_021e47dc((Struct_ov024_021e4604*)var2);
        var4.unknown_0_[8].unknown_0_ = func_ov024_021edc08((Struct_ov024_021eda78_5*)var2);
        var4.unknown_0_[9].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x40000000) != 0;
        var4.unknown_0_[10].unknown_0_ = func_ov024_021dd010((Struct_ov024_021dced0_2*)var2);
        var4.unknown_0_[11].unknown_0_ = func_ov024_021edc08((Struct_ov024_021eda78_5*)var2);
        var4.unknown_0_[12].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x200000) != 0;
        var4.unknown_0_[13].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_14_ & 0x80000000) != 0;
        var4.unknown_0_[14].unknown_0_ = func_02088660((Struct_02088660*)var2->currentStats_);
        var4.unknown_0_[15].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_18_ & 8) != 0;
        var4.unknown_0_[16].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_18_ & 0x10) != 0;
        var4.unknown_0_[17].unknown_0_ = func_ov024_021fb430((Struct_ov024_021fa7ec_5*)var2);
        var4.unknown_0_[18].unknown_0_ = func_ov024_021fb448((Struct_ov024_021fa7ec_6*)var2);
        var4.unknown_0_[19].unknown_0_ = func_ov024_021eadfc(var2);
        var4.unknown_0_[20].unknown_0_ = func_ov024_021fcac0((Struct_ov024_021fc754_5*)var2);
        var4.unknown_0_[21].unknown_0_ = (inline_ov024_021fc754(var2)->unknown_18_ & 0x100) != 0;
        for (int var5 = 0; var5 < 22; var5++) {
            unsigned char var6 = (unsigned char)var4.unknown1_0_[var5 * 2];
            int var7 = var4.unknown1_0_[var5 * 2 + 1];
            if (var6) var3 += var7;
        }
        Struct_ov024_021fefd6 var8 = data_ov024_021fefd6;
        var8.unknown_0_[0].unknown_0_ = inline_ov024_021fc754(var2)->unknown_58_0_;
        var8.unknown_0_[1].unknown_0_ = inline_ov024_021fc754(var2)->unknown_58_3_;
        var8.unknown_0_[2].unknown_0_ = inline_ov024_021fc754(var2)->unknown_58_6_;
        var8.unknown_0_[3].unknown_0_ = inline_ov024_021fc754(var2)->unknown_59_1_;
        var8.unknown_0_[4].unknown_0_ = inline_ov024_021fc754(var2)->unknown_59_4_;
        var8.unknown_0_[5].unknown_0_ = inline_ov024_021fc754(var2)->unknown_59_7_;
        var8.unknown_0_[6].unknown_0_ = inline_ov024_021fc754(var2)->unknown_5a_2_;
        var8.unknown_0_[7].unknown_0_ = inline_ov024_021fc754(var2)->unknown_5a_5_;
        var8.unknown_0_[8].unknown_0_ = inline_ov024_021fc754(var2)->unknown_5b_0_;
        var8.unknown_0_[9].unknown_0_ = inline_ov024_021fc754(var2)->unknown_5b_3_;
        for (int var9 = 0; var9 < 10; var9++) {
            int var10 = var8.unknown1_0_[var9 * 2];
            int var11 = var8.unknown1_0_[var9 * 2 + 1];
            if (var10 > 0) var3 += var11 * var10;
            else if (var10 < 0) var3 += var11 * var10 * 3;
        }
        var0 += var3;
    }
    if (var0 > 0) {
        Struct_ov024_021f6a1c var12;
        memset(&var12, 0, sizeof(var12));
        Struct_ov024_021fc754_3 var13;
        var13.unknown_0_ = var0;
        var13.unknown_5_ = 1;
        var13.unknown_6_ = 0;
        var13.unknown_7_ = 100;
        var13.unknown_8_ = 6;
        func_ov024_021f6a1c(&var12, &var13);
        func_ov024_021f9874(arg0, &var12, 0, (unsigned char)arg0->unknown_4_);
    }
}
