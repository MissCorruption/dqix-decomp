#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov000_0215b5a0 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x22 - 0x18];
    unsigned short unknown_22_0_ : 14;
    unsigned short unknown_23_6_ : 1;
    unsigned short unknown_23_7_ : 1;
    unsigned char unknown_24_;
};

struct Struct_ov000_0215b5a0_2 {
    Random unknown_0_;
    char unknown_20_[0x8e00 - sizeof(Random)];
    unsigned char unknown_8e00_;
    unsigned char unknown_8e01_;
    unsigned char unknown_8e02_;
    char unknown_8e03_[0x8e24 - 0x8e03];
    int unknown_8e24_;
};

struct Struct_ov000_0215b5a0_3 { unsigned short unknown_0_; char unknown_2_[0xb - 2]; unsigned char unknown_b_; };
struct Struct_ov000_0215b5a0_4 { char unknown_0_[0x1c]; short unknown_1c_; short unknown_1e_; unsigned short unknown_20_, unknown_22_, unknown_24_; char unknown_26_[0x30 - 0x26]; int unknown_30_; };
struct Struct_ov000_0215b5a0_5 { char unknown_0_[0xe]; short unknown_e_[4]; char unknown_16_; unsigned char unknown_17_; };
struct Struct_ov000_021584e8 { char unknown_0_[0x20]; int unknown_20_; };
struct Struct_ov000_0215440c { unsigned short unknown_0_; char unknown_2_[9 - 2]; unsigned char unknown_9_; };

struct Struct_02010088;
extern "C" Struct_ov000_0215b5a0_5* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" int func_02010088(Struct_02010088*);
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" int func_020882f8(unsigned char*);
extern "C" int func_ov000_02156038(GameObject*);
extern "C" int func_ov000_02156050(GameObject*);
extern "C" int func_020881c4(unsigned char*);
extern "C" Struct_ov000_0215b5a0_3* func_ov000_0215e9d8(void*);
extern "C" void func_ov000_02160030(void*);
extern "C" Struct_ov000_0215b5a0_4* func_ov000_0215e918(void*);
extern "C" Struct_ov000_0215b5a0_5* func_ov000_0215e938(void*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" void func_02088150(void*);
extern "C" void func_02088220(void*, int);
extern "C" void func_ov000_0215ffc4(void*, void*, int);
extern "C" void func_ov000_0215a88c(void*, void*, int);
struct Struct_ov000_0215767c_7; struct Struct_ov000_0215767c_6; struct Struct_ov000_0215767c_5; struct Struct_ov000_0215767c_4;
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*, Struct_ov000_0215767c_6*);
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*, Struct_ov000_0215767c_4*);
extern "C" void func_ov000_0215ccbc(int, Struct_ov000_021584e8*, GameObject*, short, short, short, unsigned long long, unsigned char);
extern "C" Struct_ov000_021584e8* func_ov000_0215e958(void*);
extern "C" int func_ov000_02159f18(void*, unsigned long long, int);

static inline Struct_ov000_0215b5a0* inline_ov000_0215b5a0(GameObject* arg0) { return (Struct_ov000_0215b5a0*)arg0->currentStats_; }
static inline short inline_ov000_021584e8(GameObject* arg0) { return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_021584e8_2(GameObject* arg0) { return arg0->currentStats_->primaryStats.currMP; }
static inline bool inline_ov000_021537b8(short arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov000_0215b5a0
extern "C" ARM void func_ov000_0215b5a0(Struct_ov000_0215b5a0_2* arg0, Struct_ov000_0215440c* arg1) {
    short var0[8] = {-1};
    static const int sSleepChance[4] = {100, 50, 25, 25};
    short var1 = 0;
    for (int var2 = 0; var2 < arg1->unknown_9_; var2++) {
        Struct_ov000_0215b5a0_5* var3 = func_ov000_021600f8(arg1, var2);
        if (!var3) continue;
        short var4 = var3->unknown_e_[(signed char)(var3->unknown_17_ - 1)];
        bool var5 = false;
        for (int var6 = 0; var6 < var1; var6++) {
            if (var4 == var0[var6]) { var5 = true; break; }
        }
        if (!var5) var0[var1++] = var4;
    }
    for (int var7 = 0; var7 < var1; var7++) {
        Struct_ov000_0215b5a0_3* var8; Struct_ov000_0215b5a0_4* var9; Struct_ov000_0215b5a0_5* var10; Struct_ov000_021584e8* var11;
        GameState* var12 = GameState::GetInstance();
        short var13 = var0[var7];
        GameObject* var14 = var12->GetCombatantByIndex(var13);
        if (!var14) continue;
        if (!inline_ov000_0215b5a0(var14)->unknown_23_6_) continue;
        inline_ov000_0215b5a0(var14)->unknown_23_6_ = 0;
        if (func_02010088((Struct_02010088*)var14)) continue;
        if (func_ov000_02153c0c(var14)) continue;
        if (func_020882f8((unsigned char*)var14->currentStats_)) continue;
        if (func_ov000_02156038(var14)) continue;
        if (func_ov000_02156050(var14)) continue;
        if (inline_ov000_0215b5a0(var14)->unknown_14_ & 0x1000000) continue;
        if (!func_020881c4((unsigned char*)var14->currentStats_)) continue;
        int var15 = inline_ov000_0215b5a0(var14)->unknown_24_;
        if (NextRandomMax(&arg0->unknown_0_, 100) >= sSleepChance[var15]) continue;

        var8 = func_ov000_0215e9d8(arg0);
        if (!var8) continue;
        func_ov000_02160030(var8);
        var9 = func_ov000_0215e918(arg0);
        if (!var9) continue;
        memset(var9, 0, 0x30); var9->unknown_1c_ = -1; var9->unknown_30_ = 0;
        var10 = func_ov000_0215e938(arg0);
        if (!var10) continue;
        func_ov000_02157cdc(var10);
        var11 = func_ov000_0215e958(arg0);
        if (!var11) continue;
        memset(var11, 0, 0x20); var11->unknown_20_ = 0;
        var8->unknown_0_ = 0x3a0;
        unsigned long long var16 = 0;
        var16 |= 1ULL << 36;
        if (var15 + 1 >= 4) {
            func_02088150(var14->currentStats_);
            var16 |= 1ULL << 7;
        } else {
            func_02088220(var14->currentStats_, var15 + 1);
        }
        int var17 = 0;
        switch (var15 + 1) {
        case 1: var17 = 0x31; break;
        case 2: var17 = 0x32; break;
        case 3: var17 = 0x33; break;
        case 4: var17 = 0x34; break;
        }
        var9->unknown_20_ = var0[var7];
        var9->unknown_22_ = var14->currentStats_->primaryStats.currHP;
        var9->unknown_24_ = var14->currentStats_->primaryStats.currMP;
        {
            short var18 = inline_ov000_021584e8_2(var14);
            short var19 = inline_ov000_021584e8(var14);
            func_ov000_0215ccbc((int)arg0, var11, var14, var15 + 1, var19, var18, var16, 0);
        }
        func_ov000_0215a88c(arg0, var11, var17);
        var10->unknown_e_[0] = var0[var7];
        var10->unknown_17_ = 1;
        func_ov000_0215ffc4(var10, var11, 0);
        func_ov000_02160068((Struct_ov000_0215767c_7*)var8, (Struct_ov000_0215767c_6*)var9);
        func_ov000_021600cc((Struct_ov000_0215767c_5*)var8, (Struct_ov000_0215767c_4*)var10);
        var8->unknown_b_ |= 4;
        arg0->unknown_8e24_++; arg0->unknown_8e00_++; arg0->unknown_8e01_++; arg0->unknown_8e02_++;

        if (!func_ov000_02159f18(arg0, var16, 7)) continue;
        var8 = func_ov000_0215e9d8(arg0);
        if (!var8) continue;
        func_ov000_02160030(var8);
        var9 = func_ov000_0215e918(arg0);
        if (!var9) continue;
        memset(var9, 0, 0x30); var9->unknown_1c_ = -1; var9->unknown_30_ = 0;
        var10 = func_ov000_0215e938(arg0);
        if (!var10) continue;
        func_ov000_02157cdc(var10);
        var11 = func_ov000_0215e958(arg0);
        if (!var11) continue;
        memset(var11, 0, 0x20); var11->unknown_20_ = 0;
        int var20 = inline_ov000_021537b8(var13);
        var8->unknown_0_ = var20 ? 0x39c : 0x39d;
        var9->unknown_20_ = var0[var7];
        var9->unknown_22_ = var14->currentStats_->primaryStats.currHP;
        var9->unknown_24_ = var14->currentStats_->primaryStats.currMP;
        var8->unknown_b_ |= 4;
        {
            short var21 = inline_ov000_021584e8_2(var14);
            short var22 = inline_ov000_021584e8(var14);
            func_ov000_0215ccbc((int)arg0, var11, var14, 0, var22, var21, 0, 0);
        }
        func_ov000_0215a88c(arg0, var11, 0x35);
        var10->unknown_e_[0] = var0[var7];
        var10->unknown_17_ = 1;
        func_ov000_0215ffc4(var10, var11, 0);
        arg0->unknown_8e02_++;
        func_ov000_02160068((Struct_ov000_0215767c_7*)var8, (Struct_ov000_0215767c_6*)var9);
        func_ov000_021600cc((Struct_ov000_0215767c_5*)var8, (Struct_ov000_0215767c_4*)var10);
        arg0->unknown_8e24_++; arg0->unknown_8e00_++; arg0->unknown_8e01_++; arg0->unknown_8e02_++;
    }
}
