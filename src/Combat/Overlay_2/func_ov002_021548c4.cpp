#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov002_021548c4 {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

// USA: func_ov002_021548c4
extern "C" ARM short func_ov002_021548c4(void* arg0, int arg1, int arg2, unsigned char* arg3) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == 0) {
        return 0;
    }

    unsigned short var1 = var0->baseStats_->primaryStats.maxHP;
    unsigned short var2 = (*(struct Struct_ov002_021548c4**)((char*)var0 + 0x130))->unknown_4_;
    int var3 = var2 + arg2;
    int var4;

    if (var3 >= var1) {
        var4 = var1 - var2;
        if (var4 == 0) {
            *arg3 = 0;
        } else {
            *arg3 = 3;
        }
    } else {
        *arg3 = 3;
        var4 = var3 - var2;
    }

    (*(struct Struct_ov002_021548c4**)((char*)var0 + 0x130))->unknown_4_ = var2 + var4;
    return (short)var4;
}
