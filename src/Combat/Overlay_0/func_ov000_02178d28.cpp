#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215767c {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    unsigned int unknown_8_0_ : 8;
};

struct Struct_ov000_02178d28 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x20 - 0x10];
    signed char unknown_20_;
    char unknown_21_[0x44 - 0x21];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
};

struct Struct_ov000_0217636c {
    char unknown_0_[0xa0];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char unknown_b1_;
};

struct Struct_ov000_02178d28_2 {
    char unknown_0_[0x188];
    Struct_ov000_0217636c unknown_188_;
};

struct Struct_ov000_02184294 {
#if defined(jpn)
    char unknown_0_[0x28];
#else
    char unknown1_0_[0x5c];
#endif
    char* unknown_5c_;
};

struct Struct_020465c0;

extern "C" Struct_ov000_02184294* func_020421a0(void);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" Struct_ov000_0215767c* func_ov000_02171674(void*, int);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void func_020dd040(int arg0, char* arg1);
extern "C" void func_02046608(Struct_ov000_02184294* arg0, int arg1, const char* arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" void func_02046380(Struct_ov000_02184294* arg0);
extern "C" int func_ov000_02153a8c(GameObject* arg0);
extern "C" int func_020dd290(void*, unsigned int);
extern "C" void func_020465c0(Struct_020465c0*, int, int);
extern "C" const char* func_020e51cc(int arg0);
extern "C" int func_02042058(char* arg0, const char* arg1);
struct Struct_0205d81c;
extern "C" void* func_0205d81c(Struct_0205d81c*, int);
#if defined(jpn)
extern "C" void func_0205d304(Struct_ov000_0217636c* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern char data_ov000_02185169[];
#else
extern "C" void func_0205d304(Struct_ov000_0217636c* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov000_02178d28
extern "C" ARM void func_ov000_02178d28(Struct_ov000_02178d28_2* arg0, Struct_ov000_02178d28* arg1) {
    char* var0;
    GameObject* var1;
    Struct_ov000_0215767c* var2;
    GameObject* var3;
    Struct_ov000_02184294* var4;
    if (arg1 == NULL) {
        return;
    }
    int var5 = arg1->unknown_20_;
    char* var6 = func_020421a0()->unknown_5c_;
#if defined(jpn)
    memset(var6, 0, 0x800);
#else
    memset(var6, 0, 0x960);
#endif
    GameState* var7 = GameState::GetInstance();
    var2 = func_ov000_02171674(arg1, var5);
    if (var2 == NULL) {
        return;
    }
    var1 = var7->GetCombatantByIndex(arg1->unknown_4c_);
    if (var1 == NULL) {
        return;
    }
    var3 = func_0200ff1c(var7, arg1->unknown_4c_);
    if (var3 == NULL) {
        return;
    }
#if !defined(jpn)
    char var8[0x800];
#endif
    func_020dd040(var2->unknown_4_0_, var6);
#if defined(jpn)
    var0 = var6;
#else
    func_02046608(func_020421a0(), 10, var6, var8, 0x72, 0, 0);
    var0 = var8;
#endif
    var4 = func_020421a0();
    func_02046380(var4);
    int var9;
    if (func_ov000_02153a8c(var1)) {
        var9 = 0;
    } else if (var2->unknown_4_0_ == 0x28 && arg1->unknown_e_ < 0x14) {
        var9 = 0x14;
    } else if (var2->unknown_8_0_ >= 0xff) {
        var9 = arg1->unknown_e_;
    } else {
        var9 = func_020dd290(var3, var2->unknown_8_0_);
    }
    func_020465c0((Struct_020465c0*)var4, 0, var9);
    func_020465c0((Struct_020465c0*)var4, 1, arg1->unknown_e_);
#if defined(jpn)
    func_020465f0((unsigned char*)var4, 0, 3);
    func_020465f0((unsigned char*)var4, 1, 3);
    func_020465d8((unsigned char*)var4, 0, 1);
    func_020465d8((unsigned char*)var4, 1, 1);
    func_02042058(var0, data_ov000_02185169);
#else
    func_02042058(var0, func_020e51cc(0x3ec));
#endif
    Struct_ov000_0217636c* var10 = &arg0->unknown_188_;
    if (func_0205d81c((Struct_0205d81c*)var10, 0x22) != NULL) {
#if defined(jpn)
        func_0205d5d0((Struct_0205d5d0*)var10, 0x22, (int)var0, 1);
#else
        func_0205d5d0((Struct_0205d5d0*)var10, 0x22, (int)var0, 1, 0);
#endif
        return;
    }
    int var11 = arg1->unknown_44_;
    int var12 = arg1->unknown_48_;
#if defined(jpn)
    var10->unknown_a0_ = 0xc;
#else
    var10->unknown_a0_ = 0x10;
#endif
#if defined(jpn)
    var10->unknown_a2_ = 6;
#else
    var10->unknown_a2_ = 10;
#endif
#if defined(jpn)
    var10->unknown_a4_ = (var11 >> 3) + 0x16;
#else
    var10->unknown_a4_ = (var11 >> 3) + 0x10;
#endif
    var10->unknown_a6_ = var12 >> 3;
    var10->unknown_a8_ = 7;
#if defined(jpn)
    var10->unknown_aa_ = 8;
#else
    var10->unknown_aa_ = 6;
#endif
    var10->unknown_ac_ = 10;
    var10->unknown_ae_ = 0xe;
    var10->unknown_b1_ = 0x22;
#if defined(jpn)
    func_0205d304(var10, var0, 0, 0, 0, 1, 0);
#else
    func_0205d304(var10, var0, 0, 0, 0, 1, 0, 0);
#endif
}
