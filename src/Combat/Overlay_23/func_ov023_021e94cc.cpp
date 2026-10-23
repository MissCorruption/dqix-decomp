#include <globaldefs.h>
#include "GameState/GameState.h"

union Struct_ov017_021d60f4 { int unknown_0_; float unknown1_0_; };
struct Struct_ov001_0215f344 { int unknown_0_; Struct_ov017_021d60f4 unknown_4_; };
struct Struct_ov001_0216089c { int unknown_0_; int* unknown_4_; };

extern "C" ARM int func_ov017_021d60f4(Struct_ov001_0215f344* arg0);
extern "C" ARM void func_ov017_021d6134(Struct_ov001_0216089c* arg0, int arg1);
extern "C" GameObject* func_ov023_021e8f28(int arg0);

struct Struct_ov023_021e94cc {
    Struct_ov001_0215f344 unknown_0_; // offset 0
    Struct_ov001_0215f344 unknown_8_;  // offset 8
    Struct_ov001_0216089c unknown_10_;             // offset 0x10
};

struct Struct_ov023_021e94cc_2 { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; unsigned int unknown_2_4_ : 10; };

struct Struct_ov023_021e94cc_3 {
    struct Struct_ov023_021e94cc_2 unknown_0_;   // offset 0
    struct Struct_ov023_021e94cc_2 unknown_4_;   // offset 4
    struct Struct_ov023_021e94cc_2 unknown_8_; // offset 8
    struct Struct_ov023_021e94cc_2 unknown_c_; // offset 0xc
};

// USA: func_ov023_021e94cc
extern "C" ARM int func_ov023_021e94cc(Struct_ov023_021e94cc* arg0) {
#if defined(jpn)
 enum { Enum_ov023_021e94cc_336=0x144 };
#else
 enum { Enum_ov023_021e94cc_336=0x150 };
#endif
    GameState::GetInstance();
    int var0 = func_ov017_021d60f4(&arg0->unknown_0_);
    GameObject* var1 = func_ov023_021e8f28(var0);
    if (var1 == 0) {
        return 0;
    }
    int var2 = func_ov017_021d60f4(&arg0->unknown_8_);
    switch (var2) {
    case 0: {
        unsigned short var3 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_0_.unknown_0_0_;
        func_ov017_021d6134(&arg0->unknown_10_, var3);
        break;
    }
    case 1: {
        unsigned short var4 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_0_.unknown_1_2_;
        func_ov017_021d6134(&arg0->unknown_10_, var4);
        break;
    }
    case 2: {
        unsigned short var5 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_0_.unknown_2_4_;
        func_ov017_021d6134(&arg0->unknown_10_, var5);
        break;
    }
    case 3: {
        unsigned short var6 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_4_.unknown_0_0_;
        func_ov017_021d6134(&arg0->unknown_10_, var6);
        break;
    }
    case 4: {
        unsigned short var7 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_4_.unknown_1_2_;
        func_ov017_021d6134(&arg0->unknown_10_, var7);
        break;
    }
    case 5: {
        unsigned short var8 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_4_.unknown_2_4_;
        func_ov017_021d6134(&arg0->unknown_10_, var8);
        break;
    }
    case 6: {
        unsigned short var9 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_8_.unknown_0_0_;
        func_ov017_021d6134(&arg0->unknown_10_, var9);
        break;
    }
    case 7: {
        unsigned short var10 = var1->baseStats_->primaryStats.maxHP;
        func_ov017_021d6134(&arg0->unknown_10_, var10);
        break;
    }
    case 8: {
        unsigned short var11 = var1->baseStats_->primaryStats.maxMP;
        func_ov017_021d6134(&arg0->unknown_10_, var11);
        break;
    }
    case 9: {
        unsigned short var12 = var1->baseStats_->primaryStats.attack;
        func_ov017_021d6134(&arg0->unknown_10_, var12);
        break;
    }
    case 10: {
        unsigned short var13 = var1->baseStats_->primaryStats.defense;
        func_ov017_021d6134(&arg0->unknown_10_, var13);
        break;
    }
    case 11: {
        unsigned short var14 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_c_.unknown_0_0_;
        func_ov017_021d6134(&arg0->unknown_10_, var14);
        break;
    }
    }
    return 1;
}
