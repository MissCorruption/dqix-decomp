#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);

// USA: func_0207d2c4
extern "C" ARM int func_0207d2c4(int arg0, int arg1) {
    if (arg1 < 0) {
        return 0;
    }
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)func_02010828(var0);
    unsigned int var2 = 0x98967f;
    if (var2 - arg1 >= *(unsigned int*)(var1 + 0xf6c)) {
        *(unsigned int*)(var1 + 0xf6c) += arg1;
    } else {
        *(unsigned int*)(var1 + 0xf6c) = var2;
    }
    return 1;
}
