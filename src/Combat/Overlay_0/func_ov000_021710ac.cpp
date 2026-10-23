#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff94(GameState*, int);

struct Struct_ov000_021710ac {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    char unknown_10_[0x24 - 0x10];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
};

// USA: func_ov000_021710ac
extern "C" ARM void func_ov000_021710ac(struct Struct_ov000_021710ac* arg0, int arg1, int arg2) {
    arg0->unknown_4c_ = arg1;
    arg0->unknown_24_ = arg2 ? (arg0->unknown_24_ | 0x2) : (arg0->unknown_24_ & ~0x2);
    int var0 = (arg1 >= 0) && (arg1 <= 3);
    if (!var0) {
        return;
    }
    GameObject* var1 = func_0200ff94(GameState::GetInstance(), arg1);
    if (var1 == 0) {
        return;
    }
    arg0->unknown_8_ = var1->baseStats_->primaryStats.maxHP;
    arg0->unknown_a_ = var1->baseStats_->primaryStats.maxMP;
    arg0->unknown_c_ = *(unsigned short*)(*(char**)((char*)var1 + 0x130) + 4);
    arg0->unknown_e_ = *(unsigned short*)(*(char**)((char*)var1 + 0x130) + 6);
}
