#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

// USA: func_ov000_0215ec1c
extern "C" ARM int func_ov000_0215ec1c(void* arg0, short* arg1, int arg2) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < 8; var1++) {
        short var2 = (short)(var1 + 0xc0);
        GameState* var3 = GameState::GetInstance();
        GameObject* var4 = func_0200fea4(var3, var2);
        if (var4 != NULL) {
            arg1[var0++] = var2;
            if (var0 == arg2) return var0;
        }
    }
    return var0;
}
