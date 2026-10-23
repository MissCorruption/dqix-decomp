#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char func_02011494(char* arg0, void* arg1);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021ea3ac
extern "C" ARM int func_ov023_021ea3ac(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    char var1[4];
    __clear(var1, 4);
    int var2 = func_02011494((char*)var0, var1);
    func_ov017_021d6134(arg0, var2 - 1);
    return 1;
}
