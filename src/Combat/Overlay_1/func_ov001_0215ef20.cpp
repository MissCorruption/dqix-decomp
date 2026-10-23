#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021d6134(void*, int);
extern "C" int func_020100a8(GameState* arg0);

// USA: func_ov001_0215ef20
extern "C" ARM int func_ov001_0215ef20(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = func_020100a8(var0);
    func_ov017_021d6134(arg0, var1);
    return 1;
}
