#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
struct Struct_02037d88_8;

struct Struct_020874bc {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

// USA: func_020874bc
extern "C" ARM void func_020874bc(struct Struct_020874bc* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1;
    for (var1 = 0; var1 < arg0->unknown_f7c_; var1++) {
        GameObject* var2 = func_0200ff58(var0, arg0->unknown_f78_[var1]);
        if (var2 != NULL) {
            ((Object3D*)((struct Struct_02037d88_8*)var2))->SetInheritedAlpha(arg1);
        }
    }
}
