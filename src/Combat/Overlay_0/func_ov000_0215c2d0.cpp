#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215c2d0 {
    char unknown_0_[0x20];
    int unknown_20_;
};

struct Struct_ov000_0215767c_8 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x1c - 8];
    short unknown_1c_;
    short unknown_1e_;
    unsigned short unknown_20_;
    char unknown_22_[0x27 - 0x22];
    unsigned char unknown_27_;
    char unknown_28_[0x30 - 0x28];
    int unknown_30_;
};

struct Struct_ov000_0215767c_9 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x17 - 0x10];
    unsigned char unknown_17_;
};

struct Struct_ov000_0215767c_10 {
    unsigned short unknown_0_;
    char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x8e00];
    unsigned char unknown_8e00_;
    unsigned char unknown_8e01_;
    unsigned char unknown_8e02_;
    char unknown_8e03_[0x8e24 - 0x8e03];
    int unknown_8e24_;
};

struct Struct_ov000_0215440c_2;
extern "C" Struct_ov000_0215767c_8* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" Struct_ov000_0215767c_10* func_ov000_0215e9d8(void* arg0);
extern "C" Struct_ov000_0215767c_8* func_ov000_0215e918(void* arg0);
extern "C" Struct_ov000_0215767c_9* func_ov000_0215e938(void* arg0);
extern "C" void func_ov000_02160030(void* arg0);
extern "C" void func_ov000_02157cdc(void* arg0);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
struct Struct_ov000_0215767c_6;
struct Struct_ov000_0215767c_7;
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*, Struct_ov000_0215767c_6*);
struct Struct_ov000_0215767c_4;
struct Struct_ov000_0215767c_5;
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*, Struct_ov000_0215767c_4*);
extern "C" Struct_ov000_0215c2d0* func_ov000_0215e958(void* arg0);
struct Struct_ov000_021584e8;
extern "C" void func_ov000_0215ccbc(int, Struct_ov000_021584e8*, GameObject*, short, short, short, unsigned long long, unsigned char);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);

static inline GameObject* inline_ov000_02153aa4(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return var0->GetCombatantByIndex(arg0);
}

static inline short inline_ov000_021584e8(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_021584e8_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

// USA: func_ov000_0215c2d0
extern "C" ARM void func_ov000_0215c2d0(Struct_ov000_0215767c_2* arg0, Struct_ov000_0215767c_10* arg1) {
    for (int var0 = 0; var0 < arg1->unknown_8_; var0++) {
        Struct_ov000_0215767c_8* var1 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, var0);
        if (var1 == 0) {
            continue;
        }
        GameObject* var2 = inline_ov000_02153aa4((short)var1->unknown_20_);
        if (var2 == 0) {
            continue;
        }
        int var3 = var1->unknown_27_;
        if (var3 <= 0) {
            continue;
        }
        Struct_ov000_0215767c_10* var4 = func_ov000_0215e9d8(arg0);
        if (var4 == 0) {
            continue;
        }
        func_ov000_02160030(var4);
        Struct_ov000_0215767c_8* var5 = func_ov000_0215e918(arg0);
        if (var5 == 0) {
            continue;
        }
        memset(var5, 0, 0x30);
        var5->unknown_1c_ = -1;
        var5->unknown_30_ = 0;
        Struct_ov000_0215767c_9* var6 = func_ov000_0215e938(arg0);
        if (var6 == 0) {
            continue;
        }
        func_ov000_02157cdc(var6);
        Struct_ov000_0215c2d0* var7 = func_ov000_0215e958(arg0);
        if (var7 == 0) {
            continue;
        }
        memset(var7, 0, 0x20);
        var7->unknown_20_ = 0;
        var4->unknown_0_ = 0x3b0;
        memcpy(var5, var1, sizeof(Struct_ov000_0215767c_8));
        var1->unknown_4_ = 0;
        var1->unknown_27_ = 0;
        var1->unknown_1c_ = -1;
        var1->unknown_1e_ = 0;
        func_ov000_0215ccbc((int)arg0, (Struct_ov000_021584e8*)var7, var2, 0, inline_ov000_021584e8(var2), inline_ov000_021584e8_2(var2), 0, 0);
        var6->unknown_e_ = var1->unknown_20_;
        var6->unknown_17_ = 1;
        func_ov000_0215ffc4(var6, var7, 0);
        var4->unknown_b_ |= 4;
        func_ov000_02160068((Struct_ov000_0215767c_7*)var4, (Struct_ov000_0215767c_6*)var5);
        func_ov000_021600cc((Struct_ov000_0215767c_5*)var4, (Struct_ov000_0215767c_4*)var6);
        arg0->unknown_8e24_++;
        arg0->unknown_8e00_++;
        arg0->unknown_8e01_++;
        arg0->unknown_8e02_++;
    }
}
