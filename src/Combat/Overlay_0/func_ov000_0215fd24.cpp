#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_020546a8(void* arg0);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);

// USA: func_ov000_0215fd24
extern "C" ARM int func_ov000_0215fd24(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    if (arg1 == func_020100a8(var0)) return 1;
    GameObject* var1 = func_0200ff58(var0, arg1);
    if (var1 != NULL) {
        int var2 = func_020546a8(var1);
        if (var2 == func_020100a8(var0)) return 1;
    }
    return 0;
}
