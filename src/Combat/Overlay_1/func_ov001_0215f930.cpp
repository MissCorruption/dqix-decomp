#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010768(void* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);

// USA: func_ov001_0215f930
extern "C" ARM int func_ov001_0215f930(void) {
    GameState* var0 = GameState::GetInstance();
    int* var1 = (int*)func_02010768(var0);
    int var2 = var1[1];
    if (var2 != 0) {
        func_020100c4(var0, var2);
        var1[1] = 0;
    }
    return 1;
}
