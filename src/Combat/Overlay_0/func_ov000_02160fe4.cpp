#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" void func_02048690(GameObject* arg0);

// USA: func_ov000_02160fe4
extern "C" ARM void func_ov000_02160fe4(void*) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 8; var1++) {
        GameObject* var2 = func_0200fea4(var0, var1 + 0xc0);
        if (var2 != 0) func_02048690(var2);
    }
}
