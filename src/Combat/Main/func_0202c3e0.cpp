#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02010890(GameState* arg0, int* arg1, int* arg2);

// USA: func_0202c3e0
extern "C" ARM void func_0202c3e0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1[4];
    int var2;
    func_02010890(var0, var1, &var2);
    *((unsigned char*)arg0 + 0x1027) = (unsigned char)var2;
}
