#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/CharacterCreationUI.h"
struct Struct_02092e0c {
    SafeAllocator unknown_0_;
    Struct_0201099c_3 unknown_14_;
    char unknown_1c_[0x10];
    int unknown_2c_;
    short unknown_30_;
    short unknown_32_;
    char unknown_34_[3];
    unsigned char unknown_37_;
    signed char unknown_38_;
};
struct Struct_02046574_2 {
    void* unknown_0_;
#if defined(jpn)
    char unknown_4_[0x868 - 4];
#else
    char unknown1_4_[0x998-4];
#endif
    int unknown_998_;
#if defined(jpn)
    char unknown_86c_[0x1730 - 0x86c];
    int unknown_1730_;
    int unknown_1734_;
    char unknown_1738_[0x1789 - 0x1738];
#else
    char unknown_99c_[0x195b - 0x99c];
#endif
    unsigned char unknown_195b_;
#if defined(jpn)
    char unknown_178a_[0x17e1 - 0x178a];
#else
    char unknown_195c_[0x19b1-0x195c];
#endif
    unsigned char unknown_19b1_;
};
struct Struct_02092e0c_2 { int unknown_0_[3]; };
extern "C" Struct_02046574_2* func_020421a0();
extern "C" void func_02046380(void*);
extern "C" int func_020100a8(GameState*);
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" void func_020e4bf4(void*, int);
extern "C" int func_020e0434(Struct_0201099c_3*, int);
#if !defined(jpn)
extern "C" void func_0204500c(Struct_02046574_2*, int, int, int);
#endif
extern "C" void func_02042b98(Struct_02046574_2*, int, int, int, int);
#if defined(jpn)
extern "C" void func_0204500c(Struct_02046574_2*, int, int);
extern "C" void func_02043270(Struct_02046574_2*, int, int, int, int);
#endif
// USA: func_02092e0c
extern "C" ARM void func_02092e0c(Struct_02092e0c* arg0) {
    if (arg0->unknown_30_ >= 0) {
        Struct_02046574_2* var0 = func_020421a0();
        func_02046380(var0);
        GameState* var1 = GameState::GetInstance();
        GameObject* var2 = var1->GetPartyMemberByIndex(func_020100a8(var1));
        if (var2) func_02046574(var0, 0, var2->baseStats_->unk);
#if defined(jpn)
        var2 = var1->GetPartyMemberByIndex(arg0->unknown_38_);
        if (var2) func_02046574(var0, 1, var2->baseStats_->unk);
        func_0204500c(var0, func_020e0434(&arg0->unknown_14_, arg0->unknown_30_), 0);
        var0->unknown_998_ = 1;
        if ((arg0->unknown_37_ & 1) && (arg0->unknown_37_ & 2)) {
            var0->unknown_19b1_ = 0;
            var0->unknown_1730_ = 12;
            var0->unknown_1734_ = 16;
            func_02043270(var0, var0->unknown_1730_, 0x90, 0x100, 0x30);
            var0->unknown_195b_ |= 2;
        }
#else
        Struct_02092e0c_2 var3;
        func_020e4bf4(&var3, arg0->unknown_38_);
        var0->unknown_0_ = &var3;
        func_0204500c(var0, func_020e0434(&arg0->unknown_14_, arg0->unknown_30_), 0, 0xe3);
        var0->unknown_998_ = 1;
        if ((arg0->unknown_37_ & 1) && (arg0->unknown_37_ & 2)) {
            var0->unknown_19b1_ = 0;
            func_02042b98(var0, 2, 0x92, 0xfc, 0x4a);
            var0->unknown_195b_ |= 2;
        }
#endif
        arg0->unknown_30_ = -1;
        arg0->unknown_32_ = 0x78;
    }
}
