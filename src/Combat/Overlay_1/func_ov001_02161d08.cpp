#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021d6134(void*, int);
extern "C" unsigned char func_020100b0(GameState* arg0);

// USA: func_ov001_02161d08
extern "C" ARM int func_ov001_02161d08(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = func_020100b0(var0);
    func_ov017_021d6134(arg0, var1);
    return 1;
}
