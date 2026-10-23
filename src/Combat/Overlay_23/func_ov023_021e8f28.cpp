#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* arg0);
extern "C" unsigned char func_02011494(char* arg0, void* arg1);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);

// USA: func_ov023_021e8f28
extern "C" ARM GameObject* func_ov023_021e8f28(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = 0;
    if (arg0 >= 0) {
        int var2 = (arg0 >= 0) && (arg0 <= 3);
        if (var2) {
            var1 = func_0200ff1c(var0, arg0);
        }
    } else {
        if (arg0 == -1) {
            int var3 = func_020100a8(var0);
            var1 = func_0200ff1c(var0, var3);
        } else {
            unsigned char var4[4];
            __clear(var4, 4);
            unsigned char var5 = func_02011494((char*)var0, var4);
            int var6 = -1 - arg0;
            if (var6 < var5) {
                var1 = func_0200ff1c(var0, var4[var6]);
            }
        }
    }
    return var1;
}
