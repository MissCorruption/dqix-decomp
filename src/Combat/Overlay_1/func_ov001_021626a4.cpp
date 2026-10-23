#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02011b50(void* arg0, int arg1);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_021626a4
extern "C" ARM int func_ov001_021626a4(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (func_02011b50(var0, 1)) {
        int var1 = func_02011b50(var0, 1);
        func_ov017_021d6134(arg0, var1);
    }
    return 1;
}
