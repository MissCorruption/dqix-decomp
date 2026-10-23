#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_0208a03c(void* arg0, int arg1, int arg2, int* arg3, int arg4);
extern "C" int func_ov000_02154a04(int arg0, int arg1, int arg2, int arg3);

// USA: func_0208a5d8
extern "C" ARM int func_0208a5d8(int* arg0, int arg1, int* arg2, int arg3) {
    unsigned char var0;
    GameState* var1;
    GameObject* var2;
    struct ModifiableCombatStats* var3;
    unsigned char* var4;
    char* var5;
    struct Random* var6;
    unsigned char var7;
    unsigned char var8;
    unsigned char var9;
    unsigned char var10;
    unsigned char var11;

    var1 = GameState::GetInstance();
    var2 = func_0200fea4(var1, arg1);
    var5 = *(char**)((char*)var2 + 0x148);
    var3 = var2->currentStats_;
    var4 = (unsigned char*)((char*)var3 + 0x38);
    *var4 = *var4 % 3u;
    var0 = 0;
    var6 = (struct Random*)*arg0;

    while (var0 < 3) {
        var7 = NextRandom(var6) & 1;
        var8 = var7 ^ 1;
        var9 = *var4 * 2;
        var10 = var9 + var7;
        var11 = var9 + var8;
        *var4 = *var4 + 1;
        *var4 = *var4 % 3u;
        if (func_0208a03c(arg0, var10, arg1, arg2, arg3) != 0) {
            return *(unsigned short*)(var5 + var10 * 2 + 0x18);
        }
        if (func_0208a03c(arg0, var11, arg1, arg2, arg3) != 0) {
            return *(unsigned short*)(var5 + var11 * 2 + 0x18);
        }
        var0 = var0 + 1;
    }
    *arg2 = 0;
    *arg2 = func_ov000_02154a04(*arg0, arg1, 2, arg3);
    return 2;
}
