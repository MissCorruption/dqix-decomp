#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0216258c_3 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    short unknown_c_;
    short unknown_e_;
};

struct Struct_ov000_0216258c {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
};

struct Struct_ov000_0216258c_2 {
#if defined(jpn)
    char unknown_0_[0x21c];
#else
    char unknown1_0_[0x2a0];
#endif
    unsigned char* unknown_2a0_;
#if defined(jpn)
    char unknown_220_[0x371c - 0x220];
#else
    char unknown_2a4_[0x3760 - 0x2a4];
#endif
    char unknown_3760_[1];
};

extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" Struct_ov000_0216258c_3* func_ov000_02161318(void* arg0, int arg1);
extern "C" void func_ov000_0217f518(Struct_ov000_0216258c_3* arg0);
extern "C" void func_ov000_02176134(Struct_ov000_0216258c_3* arg0, unsigned short arg1);
extern "C" void func_ov000_02176150(Struct_ov000_0216258c_3* arg0, unsigned short arg1);

// USA: func_ov000_0216258c
extern "C" ARM void func_ov000_0216258c(Struct_ov000_0216258c_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0; var1 < 4; var1++) {
        if (!func_020a35e0(arg0->unknown_2a0_, var1 & 0xff)) continue;
        GameObject* var2 = func_0200ff1c(var0, var1);
        if (!var2) continue;
        Struct_ov000_0216258c_3* var3 = func_ov000_02161318(arg0->unknown_3760_, var1);
        if (!var3) continue;
        if (var3->unknown_c_ == 0 && !(((Struct_ov000_0216258c*)var2->currentStats_)->unknown_14_ & 1)) {
            func_ov000_0217f518(var3);
        }
        unsigned short var4 = var2->currentStats_->primaryStats.currHP;
        func_ov000_02176134(var3, var4);
        var3->unknown_c_ = var4;
        unsigned short var5 = var2->currentStats_->primaryStats.currMP;
        func_ov000_02176150(var3, var5);
        var3->unknown_e_ = var5;
        var3->unknown_8_ = var2->baseStats_->primaryStats.maxHP;
        var3->unknown_a_ = var2->baseStats_->primaryStats.maxMP;
    }
}
