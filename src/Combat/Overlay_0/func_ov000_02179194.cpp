#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov000_02179194 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 24;
};
struct Struct_ov000_02179194_2 {
    unsigned char unknown_0_[0xe];
    short unknown_e_;
    unsigned char unknown_10_[0xe];
    short unknown_1e_;
    unsigned char unknown_20_[0x24];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
};
struct Struct_ov000_02179194_3 {
    unsigned char unknown_0_[0xa0];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_;
    unsigned char unknown_b1_;
};
struct Struct_ov000_02179194_4 {
    unsigned char unknown_0_[0x188];
    Struct_ov000_02179194_3 unknown_188_;
};
struct Struct_ov000_02179194_5 {
#if defined(jpn)
    unsigned char unknown_0_[0x28];
#else
    unsigned char unknown1_0_[0x5c];
#endif
    char* unknown_5c_;
};
struct Struct_020465c0;
struct Struct_0205d81c;
struct Struct_0205d5d0;
extern "C" Struct_ov000_02179194_5* func_020421a0();
extern "C" Struct_ov000_02179194* func_ov000_0217199c(void*, int);
extern "C" void func_020dd040(int, char*);
extern "C" void func_02046608(Struct_ov000_02179194_5*, int, char*, char*, int, int, int);
extern "C" void func_02046380(Struct_ov000_02179194_5*);
extern "C" int func_ov000_02153a8c(GameObject*);
extern "C" unsigned int func_020dd290(void*, unsigned int);
extern "C" void func_020465c0(Struct_020465c0*, int, int);
extern "C" const char* func_020e51cc(int);
extern "C" int func_02042058(char*, const char*);
extern "C" void* func_0205d81c(Struct_0205d81c*, int);
#if defined(jpn)
extern "C" void func_0205d304(Struct_ov000_02179194_3*, char*, int, int, int, int, int);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern char data_ov000_02185169[];
#else
extern "C" void func_0205d304(Struct_ov000_02179194_3*, char*, int, int, int, int, int, int);
#endif

// USA: func_ov000_02179194
extern "C" ARM void func_ov000_02179194(Struct_ov000_02179194_4* arg0, Struct_ov000_02179194_2* arg1) {
    char* var0;
    Struct_ov000_02179194_5* var1;
#if !defined(jpn)
    char var2[0x800];
#endif
    if (!arg1) return;
    int var3 = arg1->unknown_1e_;
    char* var4 = func_020421a0()->unknown_5c_;
#if defined(jpn)
    memset(var4, 0, 0x800);
#else
    memset(var4, 0, 0x960);
#endif
    GameState* var5 = GameState::GetInstance();
    Struct_ov000_02179194* var6 = func_ov000_0217199c(arg1, var3);
    if (!var6) return;
    GameObject* var7 = var5->GetCombatantByIndex(arg1->unknown_4c_);
    if (!var7) return;
    GameObject* var8 = func_0200ff1c(var5, arg1->unknown_4c_);
    if (!var8) return;
    func_020dd040(var6->unknown_4_0_, var4);
#if defined(jpn)
    var0 = var4;
#else
    func_02046608(func_020421a0(), 10, var4, var2, 0x72, 0, 0);
    var0 = var2;
#endif
    var1 = func_020421a0();
    func_02046380(var1);
    int var9;
    if (func_ov000_02153a8c(var7)) var9 = 0;
    else {
        unsigned int var10 = var6->unknown_8_0_;
        if (var10 >= 0xff) var9 = arg1->unknown_e_;
        else var9 = func_020dd290(var8, var10);
    }
    func_020465c0((Struct_020465c0*)var1, 0, var9);
    func_020465c0((Struct_020465c0*)var1, 1, arg1->unknown_e_);
#if defined(jpn)
    func_020465f0((unsigned char*)var1, 0, 3);
    func_020465f0((unsigned char*)var1, 1, 3);
    func_020465d8((unsigned char*)var1, 0, 1);
    func_020465d8((unsigned char*)var1, 1, 1);
    func_02042058(var0, data_ov000_02185169);
#else
    func_02042058(var0, func_020e51cc(0x3ec));
#endif
    Struct_ov000_02179194_3* var11 = &arg0->unknown_188_;
    if (func_0205d81c((Struct_0205d81c*)var11, 0x23)) {
#if defined(jpn)
        func_0205d5d0((Struct_0205d5d0*)var11, 0x23, (int)var0, 1);
#else
        func_0205d5d0((Struct_0205d5d0*)var11, 0x23, (int)var0, 1, 0);
#endif
    } else {
        int var12 = arg1->unknown_44_;
        int var13 = arg1->unknown_48_;
#if defined(jpn)
        var11->unknown_a0_ = 12;
#else
        var11->unknown_a0_ = 16;
#endif
#if defined(jpn)
        var11->unknown_a2_ = 6;
#else
        var11->unknown_a2_ = 10;
#endif
#if defined(jpn)
        var11->unknown_a4_ = (var12 >> 3) + 22;
#else
        var11->unknown_a4_ = (var12 >> 3) + 16;
#endif
        var11->unknown_a6_ = var13 >> 3;
        var11->unknown_a8_ = 7;
#if defined(jpn)
        var11->unknown_aa_ = 8;
#else
        var11->unknown_aa_ = 6;
#endif
        var11->unknown_ac_ = 10;
        var11->unknown_ae_ = 14;
        var11->unknown_b1_ = 0x23;
#if defined(jpn)
        func_0205d304(var11, var0, 1, 0, 0, 1, 0);
#else
        func_0205d304(var11, var0, 1, 0, 0, 1, 0, 0);
#endif
    }
}
