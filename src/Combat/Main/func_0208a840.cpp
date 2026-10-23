#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_0208a03c(void* arg0, int arg1, int arg2, int* arg3, int arg4);
extern "C" int func_ov000_02154a04(int arg0, int arg1, int arg2, int arg3);

// USA: func_0208a840
extern "C" ARM int func_0208a840(int* arg0, int arg1, int* arg2, int arg3) {
    GameState* var0;
    GameObject* var1;
    char* var2;
    unsigned char* var3;
    unsigned char var4;
    unsigned char var5;

    var0 = GameState::GetInstance();
    var1 = func_0200fea4(var0, arg1);
    var2 = *(char**)((char*)var1 + 0x148);
    var3 = (unsigned char*)((char*)(*arg0) + 0x81c0 + *((unsigned char*)var1 + 0x17c) * 0x18);

    for (var5 = 0; var5 < 6; var5++) {
        var4 = *var3;
        *var3 = var4 + 1;
        *var3 = *var3 % 6;
        if (func_0208a03c(arg0, var4, arg1, arg2, arg3) != 0) {
            return *(unsigned short*)(var2 + var4 * 2 + 0x18);
        }
    }
    *arg2 = 0;
    *arg2 = func_ov000_02154a04(*arg0, arg1, 2, arg3);
    return 2;
}
