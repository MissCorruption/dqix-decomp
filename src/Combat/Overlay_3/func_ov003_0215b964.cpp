#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"
#include "std_library_functions.h"

struct Struct_020465c0 { void* unknown_0_; };
struct Struct_ov003_0215b964 { unsigned int unknown_0_; unsigned short unknown_4_; };
struct Struct_ov003_0215b964_2 {
    unsigned char unknown_0_[4];
    short unknown_4_;
    unsigned char unknown_6_[0x12a];
    Struct_ov003_0215b964* unknown_130_;
    BaseCombatStats* unknown_134_;
};
struct Struct_ov003_0215b964_3 {
    unsigned char unknown_0_[0x16c];
    unsigned short unknown_16c_[13];
#if defined(jpn)
    unsigned char unknown_186_[0x8b8 - 0x186];
#else
    unsigned char unknown1_186_[0x950 - 0x186];
#endif
    int unknown_950_;
};
struct Struct_ov003_0215b964_4 {
    char unknown_0_[0x8e0];
    char unknown_8e0_[0x40];
    char unknown_920_[0x40];
};
struct Struct_ov003_0215b964_5 {
    unsigned char unknown_0_[0x64];
    Struct_0201099c_3 unknown_64_;
#if defined(jpn)
    unsigned char unknown1_6c_[0x585 - 0x64 - sizeof(Struct_0201099c_3)];
#else
    unsigned char unknown_6c_[0x10];
    Struct_ov003_0215b964_4* unknown_7c_;
    unsigned char unknown_80_[0x505];
#endif
    signed char unknown_585_;
    unsigned char unknown_586_[0xa];
    unsigned char unknown_590_;
    unsigned char unknown_591_[1];
};
extern "C" int func_020421a0();
extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_02053c6c(unsigned char*);
#if defined(jpn)
extern "C" int func_02042638(char*, int, int);
#else
extern "C" int func_02041fac(char*, int, int);
#endif
extern "C" int func_02041c08(char*, int, int, int, int, int);
extern "C" int func_02041ea4(char*, int);
extern "C" int func_02041e70(char*, int);
extern "C" int func_02041a90(char*, int, int);
extern "C" int func_02041a28(char*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" int func_02041b70(char*, int, const char*);
extern "C" void func_020e4bf4(void*, int);
extern "C" void func_02046380(void*);
extern "C" void func_02046608(void*, int, void*, void*, int, int, int);
extern "C" void func_020465c0(Struct_020465c0*, int, int);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" int func_020e51cc(int);

#if defined(jpn)
extern const char data_ov003_0217fe7f[];
extern "C" void __clear(void*, int);
extern "C" void func_020474a8(void*, int, char*, char*);
#endif

// JPN: func_ov003_0215b964 (0215cd60)
// USA: func_ov003_0215b964
extern "C" ARM void func_ov003_0215b964(Struct_ov003_0215b964_5* arg0, char* arg1, int arg2) {
#if !defined(jpn)
    Struct_ov003_0215b964_4* var0;
#endif
    if (!arg1) return;
    Struct_020465c0* var1 = (Struct_020465c0*)func_020421a0();
    int var2 = arg0->unknown_585_;
#if !defined(jpn)
    var0 = arg0->unknown_7c_;
#endif
    if (var2 == -1) {
#if defined(jpn)
        func_02042638(arg1, func_020e0434(&arg0->unknown_64_, 10), 14);
#else
        func_02041fac(arg1, func_020e0434(&arg0->unknown_64_, 10), 14);
#endif
    } else {
#if defined(jpn)
        func_02042638(arg1, func_020e0434(&arg0->unknown_64_, 11), 14);
#else
        func_02041fac(arg1, func_020e0434(&arg0->unknown_64_, 11), 14);
#endif
        if (arg2) func_02041c08(arg1, var2, 8, 5, 5, 5);
        func_02041ea4(arg1, var2);
    }
    GameState* var3 = GameState::GetInstance();
    for (int var4 = 0; var4 < arg0->unknown_590_; ++var4) {
        Struct_ov003_0215b964_2* var5 = (Struct_ov003_0215b964_2*)func_0200ff1c(var3, arg0->unknown_591_[var4]);
        Struct_ov003_0215b964_3* var6 = (Struct_ov003_0215b964_3*)func_02053c6c((unsigned char*)var5);
        float var7;
        int var8;
        Struct_ov003_0215b964* var9 = var5->unknown_130_;
        unsigned int var10 = var9->unknown_0_;
        var8 = var5->unknown_134_->primaryStats.maxHP;
        if (0.0f == (float)var8) var7 = 0.0f;
        else {
            float var11 = (float)(int)var9->unknown_4_;
            var7 = var11 / (float)var8;
        }
        if (var10 & 1) func_02041e70(arg1, 9);
        else if (var7 <= 0.08f) func_02041e70(arg1, 11);
        else if (var7 <= 0.25f) func_02041e70(arg1, 13);
        else func_02041e70(arg1, 15);
#if defined(jpn)
        func_02041a28(arg1, 12);
#else
        func_02041a90(arg1, 12, var4 * 14 + 20);
#endif
        const char* var12;
        if (var2 == -1) {
            var12 = var5->unknown_134_->unk;
            func_02042058(arg1, var12);
        } else {
            var12 = var5->unknown_134_->unk;
            func_02041b70(arg1, var4, var12);
        }
#if defined(jpn)
        if (var5->unknown_130_->unknown_0_ & 1)
            func_02042058(arg1, ((const char*)(func_020e0434(&arg0->unknown_64_, 13))));
        else if (var10 & 2)
            func_02042058(arg1, ((const char*)(func_020e0434(&arg0->unknown_64_, 14))));
        else if (var10 & 4)
            func_02042058(arg1, ((const char*)(func_020e0434(&arg0->unknown_64_, 15))));
        if (!(var5->unknown_130_->unknown_0_ & 1) && !(var10 & 6)) {
            func_02046380(var1);
            func_020465c0(var1, 0, var6->unknown_16c_[var6->unknown_950_]);
            func_020465f0(((unsigned char*)(var1)), 0, 2);
            func_020465d8(((unsigned char*)(var1)), 0, 1);
            char var13[0x40];
            __clear(var13, sizeof(var13));
            func_020474a8(var1, 10, ((char*)(func_020e0434(&arg0->unknown_64_, 12))), var13);
            func_02042058(arg1, var13);
        }
        if (var4 != arg0->unknown_590_ - 1) func_02042058(arg1, data_ov003_0217fe7f);
#else
        memset(var0->unknown_8e0_, 0, 0x40);
        memset(var0->unknown_920_, 0, 0x40);
        func_02041a28(var0->unknown_920_, 0x40);
        if (var5->unknown_130_->unknown_0_ & 1)
            func_02042058(var0->unknown_920_, (const char*)func_020e0434(&arg0->unknown_64_, 13));
        else if (var10 & 2)
            func_02042058(var0->unknown_920_, (const char*)func_020e0434(&arg0->unknown_64_, 14));
        else if (var10 & 4)
            func_02042058(var0->unknown_920_, (const char*)func_020e0434(&arg0->unknown_64_, 15));
        unsigned int var14[3];
        func_020e4bf4(var14, var5->unknown_4_);
        func_02046380(var1);
        var1->unknown_0_ = var14;
        func_02046608(var1, 10, var0->unknown_920_, var0->unknown_8e0_, 0x100, 0, 0);
        func_02042058(arg1, var0->unknown_8e0_);
        if (!(var5->unknown_130_->unknown_0_ & 1) && !(var10 & 6)) {
            func_02046380(var1);
            func_020465c0(var1, 0, var6->unknown_16c_[var6->unknown_950_]);
            func_020465f0((unsigned char*)var1, 0, 2);
            func_020465d8((unsigned char*)var1, 0, 1);
            memset(var0->unknown_8e0_, 0, 0x40);
            memset(var0->unknown_920_, 0, 0x40);
            func_02041a28(var0->unknown_920_, 0x40);
            func_02042058(var0->unknown_920_, (const char*)func_020e51cc(0x3f3));
            func_02042058(var0->unknown_920_, (const char*)func_020e0434(&arg0->unknown_64_, 12));
            func_02046608(var1, 10, var0->unknown_920_, var0->unknown_8e0_, 0x100, 0, 0);
            func_02042058(arg1, var0->unknown_8e0_);
        }
#endif
    }
}
