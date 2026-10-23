#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215641c_2 {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 10;
};

struct Struct_ov000_0215641c {
    char unknown_0_[0x134];
    BaseCombatStats* unknown_134_;
    ModifiableCombatStats* unknown_138_;
#if defined(jpn)
    char unknown_13c_[0x144 - 0x13c];
#else
    char unknown1_13c_[0x150 - 0x13c];
#endif
    Struct_ov000_0215641c_2* unknown_150_;

    unsigned short inline_ov000_0215641c() { return unknown_138_->primaryStats.charm; }
    unsigned short inline_ov000_0215641c_2() { return unknown_134_->primaryStats.charm; }
};

// USA: func_ov000_0215641c
extern "C" ARM float func_ov000_0215641c(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    float var1 = 0.0f;
    int var2 = (arg1 >= 0 && arg1 <= 3);
    if (var2) {
        Struct_ov000_0215641c* var3 = (Struct_ov000_0215641c*)func_0200ff1c(var0, arg1);
        if (var3 == NULL) {
            return 0.0f;
        }
        int var4 = var3->inline_ov000_0215641c_2();
        var4 = var3->inline_ov000_0215641c() - var4;
        var4 +=(unsigned short)var3->unknown_150_->unknown_c_0_;
        var1 = (var4 - 100) * 0.02f;
    }
    return var1;
}
