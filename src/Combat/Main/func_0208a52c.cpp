#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_0208a03c(void* arg0, int arg1, int arg2, int* arg3, int arg4);
extern "C" int func_ov000_02154a04(int arg0, int arg1, int arg2, int arg3);

// USA: func_0208a52c
extern "C" ARM int func_0208a52c(int* arg0, int arg1, int* arg2, int arg3) {
    GameState* var0;
    GameObject* var1;
    char* var2;
    struct ModifiableCombatStats* var3;
    unsigned char* var4;
    unsigned char var5;
    unsigned char var6;

    var0 = GameState::GetInstance();
    var1 = func_0200fea4(var0, arg1);
    var2 = *(char**)((char*)var1 + 0x148);
    var3 = var1->currentStats_;
    var4 = (unsigned char*)((char*)var3 + 0x38);

    for (var6 = 0; var6 < 6; var6++) {
        var5 = *var4;
        *var4 = var5 + 1;
        *var4 = *var4 % 6;
        if (func_0208a03c(arg0, var5, arg1, arg2, arg3) != 0) {
            return *(unsigned short*)(var2 + var5 * 2 + 0x18);
        }
    }
    *arg2 = 0;
    *arg2 = func_ov000_02154a04(*arg0, arg1, 2, arg3);
    return 2;
}
