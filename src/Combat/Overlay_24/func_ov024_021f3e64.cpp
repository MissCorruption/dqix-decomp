#include <globaldefs.h>
#include <std_library_functions.h>
#include <GameState/GameState.h>
#include <Combat/Overlay_0/GetCombatantByID.h>

struct Struct_ov024_021da670_6;
struct Struct_ov024_021dd028_5;
struct Struct_ov024_021eda78_6;
struct Struct_ov024_021e4604;
struct Struct_ov024_021eda78_5;
struct Struct_ov024_021eda78_8;
struct Struct_ov024_021eda78_7;
struct Struct_ov024_021eda78_9;
struct Struct_02088660;
struct Struct_ov024_021f26fc;
struct Struct_ov024_021e2bd0_4 {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
    char unknown_1c_[0x3c];
    unsigned int unknown_58_0_ : 21;
    signed int unknown_5a_5_ : 3;
    signed int unknown_5b_0_ : 3;
    signed int unknown_5b_3_ : 3;
};

extern unsigned short data_ov024_021fea3c[4];
extern "C" int func_ov000_0215e9fc(int, unsigned short*, int, int);
extern "C" int func_ov024_021da998(Struct_ov024_021da670_6*);
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
extern "C" int func_ov024_021eda60(GameObject*);
extern "C" int func_ov024_021edbc0(GameObject*);
extern "C" int func_ov024_021edbd8(GameObject*);
extern "C" int func_ov024_021edbf0(GameObject*);
extern "C" int func_ov024_021edc20(Struct_ov024_021eda78_6*);
extern "C" int func_ov024_021e47dc(Struct_ov024_021e4604*);
extern "C" int func_ov024_021edc08(Struct_ov024_021eda78_5*);
extern "C" int func_ov024_021edc50(Struct_ov024_021eda78_8*);
extern "C" int func_ov024_021edc38(Struct_ov024_021eda78_7*);
extern "C" int func_ov024_021edc68(Struct_ov024_021eda78_9*);
extern "C" int func_02088660(Struct_02088660*);
extern "C" int func_ov024_021f273c(Struct_ov024_021f26fc*);

// USA: func_ov024_021f3e64
extern "C" ARM int func_ov024_021f3e64(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    unsigned short var0[4];
    unsigned short* var1 = var0;
    unsigned short* var2 = data_ov024_021fea3c;
    int var3 = 4;
    do {
        unsigned short* var4 = var1++;
        *var4 = *var2++;
    } while (--var3);
    int var5 = func_ov000_0215e9fc(*arg0, var0, 4, 1);
    if (var5 <= 0) return 0;
    int var6 = 0;
    *arg3 = 0;
    for (int var7 = 0; var7 < var5; ++var7) {
        GameObject* var8 = GetCombatantByID(*arg0, (short)var0[var7]);
        if (!var8) continue;
        if (func_ov024_021da998((Struct_ov024_021da670_6*)var8)
            || func_ov024_021dd260((Struct_ov024_021dd028_5*)var8)
            || func_ov024_021eda60(var8)
            || func_ov024_021edbc0(var8)
            || func_ov024_021edbd8(var8)
            || func_ov024_021edbf0(var8)
            || func_ov024_021edc20((Struct_ov024_021eda78_6*)var8)
            || func_ov024_021e47dc((Struct_ov024_021e4604*)var8)
            || func_ov024_021edc08((Struct_ov024_021eda78_5*)var8)
            || func_ov024_021edc50((Struct_ov024_021eda78_8*)var8)
            || func_ov024_021edc08((Struct_ov024_021eda78_5*)var8)
            || func_ov024_021edc38((Struct_ov024_021eda78_7*)var8)
            || func_ov024_021edc68((Struct_ov024_021eda78_9*)var8)
            || func_02088660((Struct_02088660*)var8->currentStats_)
            || func_ov024_021f273c((Struct_ov024_021f26fc*)var8)
            || (((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_18_ & 2)
            || (((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_18_ & 4)
            || (((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_18_ & 0x200)
            || (((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_18_ & 0x400)
            || (((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_18_ & 0x100)
            || var8->currentStats_->attackBuff > 0
            || var8->currentStats_->defenseBuff > 0
            || var8->currentStats_->agilityBuff > 0
            || var8->currentStats_->charmBuff != 0
            || var8->currentStats_->magicalMightBuff > 0
            || var8->currentStats_->magicalMendingBuff != 0
            || var8->currentStats_->unknown_5a_2_ > 0
            || ((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_5a_5_ != 0
            || ((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_5b_0_ != 0
            || ((Struct_ov024_021e2bd0_4*)var8->currentStats_)->unknown_5b_3_ != 0) var6 = 1;
    }
    if (!var6) return 0;
    *arg3 = var5;
    memcpy(arg4, var0, 8);
    return 1;
}
