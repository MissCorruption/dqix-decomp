#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);

struct Struct_ov017_02192548 {
#if defined(jpn)
    unsigned char unknown_0_[0x2c6];
#else
    unsigned char unknown1_0_[0x2d2];
#endif
    unsigned char unknown_2d2_;
};

// USA: func_ov017_02192548
extern "C" ARM int func_ov017_02192548(void) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    for (int var2 = 1; var2 < 4; ++var2) {
        GameObject* var3 = func_0200ff58(var0, var2);
        if (var3 != NULL) {
            unsigned char var4 = ((Struct_ov017_02192548*)var3)->unknown_2d2_;
            if (var1 < var4) var1 = var4;
        }
    }
    return var1 + 1;
}
