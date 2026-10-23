#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_ov017_021c6ca0 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[0x20];
    signed char unknown_2a_;
};

struct Struct_ov017_021c6ca0_2 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021c6ca0
extern "C" ARM void func_ov017_021c6ca0(int arg0, Struct_ov017_021c6ca0_2* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c6ca0_1816=0x508};
#else
 enum {Enum_ov017_021c6ca0_1816=0x718};
#endif
    unsigned char* var0 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021c6ca0_1816);
    Struct_ov017_021c6ca0* var1 = (Struct_ov017_021c6ca0*)func_ov017_021b8478(var0);
    if (!var1) return;
    if (!func_ov017_021b8468(var0)) return;
    if (!func_ov017_021b8470(var0)) return;
    if (var1->unknown_2a_ == func_020100a8(arg2)) return;
    if (var1->unknown_8_ != arg1->unknown_4_) return;
    GameObject* var2 = arg2->GetCombatantByIndex(arg1->unknown_6_);
    if (!var2) return;
    *(unsigned short*)((char*)var2->currentStats_ + 0x0) = arg1->unknown_8_;
    *(unsigned short*)((char*)var2->currentStats_ + 0x2) = arg1->unknown_a_;
    *(int*)((char*)var2->currentStats_ + 0x14) = arg1->unknown_c_;
    *(int*)((char*)var2->currentStats_ + 0x18) = arg1->unknown_10_;
}
