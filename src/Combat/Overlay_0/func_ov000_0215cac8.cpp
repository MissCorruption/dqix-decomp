#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;

struct Struct_ov000_0215767c {
    char unknown_0_[0x20];
    unsigned int unknown_20_0_ : 10;
};

struct Struct_ov000_0215767c_8 {
    char unknown_0_[0x1c];
    short unknown_1c_;
    short unknown_1e_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    char unknown_26_[0x30 - 0x26];
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
    char unknown_2_[0x18 - 2];
    unsigned short unknown_18_;
};

struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x8e00];
    unsigned char unknown_8e00_;
    unsigned char unknown_8e01_;
    unsigned char unknown_8e02_;
    char unknown_8e03_[0x8e24 - 0x8e03];
    int unknown_8e24_;
};

extern "C" Struct_ov000_0215767c_10* func_ov000_0215e9d8(void* arg0);
extern "C" Struct_ov000_0215767c_8* func_ov000_0215e918(void* arg0);
extern "C" Struct_ov000_0215767c_9* func_ov000_0215e938(void* arg0);
extern "C" void func_ov000_02160030(void* arg0);
extern "C" void func_ov000_02157cdc(void* arg0);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);

extern "C" Struct_ov000_0215767c* func_02079e2c(char* arg0, int arg1);
struct Struct_ov000_0215767c_6;
struct Struct_ov000_0215767c_7;
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*, Struct_ov000_0215767c_6*);
struct Struct_ov000_0215767c_4;
struct Struct_ov000_0215767c_5;
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*, Struct_ov000_0215767c_4*);
extern "C" Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215ccbc(int, Struct_ov000_021584e8*, GameObject*, short, short, short, unsigned long long, unsigned char);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);

static inline GameObject* inline_ov000_02153aa4(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return var0->GetCombatantByIndex(arg0);
}

static inline short inline_ov000_021584e8(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_021584e8_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

// USA: func_ov000_0215cac8
extern "C" ARM void func_ov000_0215cac8(Struct_ov000_0215767c_2* arg0, short* arg1, int arg2, short arg3,
                                        unsigned short* arg4, unsigned char* arg5) {
    Struct_ov000_0215767c_10* var0 = func_ov000_0215e9d8(arg0);
    Struct_ov000_0215767c_8* var1 = func_ov000_0215e918(arg0);
    if (var0 == 0 || var1 == 0) {
        return;
    }
    func_ov000_02160030(var0);
    memset(var1, 0, 0x30);
    var1->unknown_1c_ = -1;
    var1->unknown_30_ = 0;
    var0->unknown_0_ = arg3;
    Struct_ov000_0215767c* var2 = func_02079e2c((char*)func_020797dc(), (short)var0->unknown_0_);
    if (var2 != 0) {
        var0->unknown_18_ = var2->unknown_20_0_;
    }
    GameObject* var3 = inline_ov000_02153aa4(arg1[0]);
    var1->unknown_20_ = arg1[0];
    if (var3 != 0) {
        var1->unknown_22_ = var3->currentStats_->primaryStats.currHP;
        var1->unknown_24_ = var3->currentStats_->primaryStats.currMP;
    }
    func_ov000_02160068((Struct_ov000_0215767c_7*)var0, (Struct_ov000_0215767c_6*)var1);

    for (int var4 = 0; var4 < arg2; var4++) {
        Struct_ov000_0215767c_9* var5 = func_ov000_0215e938(arg0);
        if (var5 == 0) {
            continue;
        }
        func_ov000_02157cdc(var5);
        GameObject* var6 = inline_ov000_02153aa4(arg1[var4]);
        Struct_ov000_021584e8* var7 = func_ov000_0215e958(arg0);
        if (var7 == 0) {
            continue;
        }
        func_ov000_0215ccbc((int)arg0, var7, var6, 0, inline_ov000_021584e8(var6), inline_ov000_021584e8_2(var6), 0, 0);
        var5->unknown_e_ = arg1[var4];
        var5->unknown_17_ = 1;
        func_ov000_0215ffc4(var5, var7, 0);
        for (int var8 = 0; var8 < arg5[var4]; var8++) {
            func_ov000_0215a88c(arg0, var7, *arg4++);
        }
        func_ov000_021600cc((Struct_ov000_0215767c_5*)var0, (Struct_ov000_0215767c_4*)var5);
        arg0->unknown_8e01_++;
        arg0->unknown_8e02_++;
    }
    arg0->unknown_8e24_++;
    arg0->unknown_8e00_++;
}
