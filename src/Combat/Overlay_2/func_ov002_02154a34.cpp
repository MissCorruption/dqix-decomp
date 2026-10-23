#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov002_02154a34
extern "C" ARM int func_ov002_02154a34(void* arg0, int arg1) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (!var0) {
        return 0;
    }
    int* var1 = *(int**)((char*)var0 + 0x130);
    int var2 = *(unsigned short*)((char*)var1 + 0x4);
    int var3 = 0;
    if (var2 > 0) {
        var3 = 1;
    }
    return var3;
}
