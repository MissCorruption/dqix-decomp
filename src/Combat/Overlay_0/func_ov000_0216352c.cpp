#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

// USA: func_ov000_0216352c
extern "C" ARM short func_ov000_0216352c(int arg0, float arg1, float arg2) {
    GameState* var0 = GameState::GetInstance();
    int var1 = (arg0 >= 0xc0 && arg0 <= 0xc7);
    if (!(var1 && var0 != NULL)) {
        return 0x10a;
    }
    GameObject* var2 = func_0200fea4(var0, arg0);
    if (var2 == NULL) {
        return 0x10a;
    }
    short var3 = *(short*)((char*)var2 + 0x100 + 0x8e);
    int var4 = (int)(arg1 * 4096.0f);
    if (var3 <= var4) {
        return var3;
    }
    int var5 = (int)(arg2 * 4096.0f);
    int var6 = var3 - var4;
    int var7 = (int)(((long long)var6 * var5 + 0x800) >> 12);
    return (short)(var4 + var7);
}
