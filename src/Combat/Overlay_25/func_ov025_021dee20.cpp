#if defined(jpn)
enum { Enum_ov025_021dee20_30476 = 0x78fc };
#else
enum { Enum_ov025_021dee20_30476 = 0x770c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov025_021ded50_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_ov025_021ded50;
struct Struct_ov000_0215fef0;

extern "C" int func_ov025_021deda0(struct Struct_ov025_021ded50* arg0, struct Struct_ov025_021ded50_2* arg1);
extern "C" void func_ov000_02160030(void* arg0);
extern "C" void func_ov000_0215fe64(void* arg0);
extern "C" void func_ov000_0215fef0(struct Struct_ov000_0215fef0* arg0);

struct Struct_ov025_021dee20_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0x8 - 0x2];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_[0xb - 0xa];
    unsigned char unknown_b_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
    void* unknown_14_;
    unsigned short unknown_18_;
};

struct Struct_ov025_021dee20_3 {
    unsigned char unknown_0_[0x20];
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    unsigned char unknown_26_[0x30 - 0x26];
    int unknown_30_;
};

struct Struct_ov025_021dee20 {
    unsigned char unknown_0_[0xe];
    unsigned short unknown_e_;
    unsigned char unknown_10_[0x20 - 0x10];
    int unknown_20_;
};

// USA: func_ov025_021dee20
extern "C" ARM void func_ov025_021dee20(void* arg0) {
    struct Struct_ov025_021ded50_2 var0;
    if (!func_ov025_021deda0((struct Struct_ov025_021ded50*)arg0, &var0)) {
        return;
    }

    SafeAllocator* var1 = (SafeAllocator*)((char*)arg0 + 0x30);
    struct Struct_ov025_021dee20_2* var2 = (struct Struct_ov025_021dee20_2*)var1->Allocate(0x28);
    if (!var2) {
        return;
    }
    func_ov000_02160030(var2);
    var2->unknown_0_ = var0.unknown_2_;

    GameState* var3 = GameState::GetInstance();
    GameObject* var4 = var3->GetCombatantByIndex(var0.unknown_0_);
    if (!var4) {
        return;
    }

    var2->unknown_8_ = 1;
    var2->unknown_10_ = var1->Allocate(0x34);
    void* var5 = var2->unknown_10_;
    if (!var5) {
        return;
    }
    func_ov000_0215fe64(var5);
    ((struct Struct_ov025_021dee20_3*)var5)->unknown_30_ = 0;
    ((struct Struct_ov025_021dee20_3*)var2->unknown_10_)->unknown_20_ = var0.unknown_0_;
    ((struct Struct_ov025_021dee20_3*)var2->unknown_10_)->unknown_22_ = var4->currentStats_->primaryStats.currHP;
    ((struct Struct_ov025_021dee20_3*)var2->unknown_10_)->unknown_24_ = var4->currentStats_->primaryStats.currMP;
    var2->unknown_9_ = 1;

    var2->unknown_14_ = var1->Allocate(0x24);
    void* var6 = var2->unknown_14_;
    if (!var6) {
        return;
    }
    func_ov000_0215fef0((struct Struct_ov000_0215fef0*)var6);
    ((struct Struct_ov025_021dee20*)var6)->unknown_20_ = 0;
    ((struct Struct_ov025_021dee20*)var2->unknown_14_)->unknown_e_ = var0.unknown_0_;
    var2->unknown_18_ = var0.unknown_4_;
    var2->unknown_b_ |= 4;

    *(void**)((char*)arg0 + Enum_ov025_021dee20_30476) = var2;
}
