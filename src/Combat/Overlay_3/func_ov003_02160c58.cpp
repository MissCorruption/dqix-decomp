#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov003_02160c58 {
    char unknown_0_[0xf70];
    unsigned int unknown_f70_;
    char unknown_f74_[0x2c8c - 0xf74];
    unsigned char unknown_2c8c_;
};

// USA: func_ov003_02160c58
extern "C" ARM void func_ov003_02160c58(int arg0, short* arg1, short* arg2) {
    short var0 = 12;
    unsigned char var1 = ((Struct_ov003_02160c58*)func_02010828(GameState::GetInstance()))->unknown_2c8c_;
    var0 -= 4;
    Struct_ov003_02160c58* var2 = (Struct_ov003_02160c58*)func_02010828(GameState::GetInstance());
    if (var2->unknown_f70_ > 4) {
        var2->unknown_f70_ = 4;
    }
    var0 += var2->unknown_f70_;
    if (var0 > 12) {
        var0 = 12;
    }
    *arg1 = var0;
    *arg2 = var0 - var1;
}
