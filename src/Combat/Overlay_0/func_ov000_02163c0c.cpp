#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

// USA: func_ov000_02163c0c
#pragma optimize_for_size off
extern "C" ARM int func_ov000_02163c0c(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = (arg1 >= 0xc0 && arg1 <= 0xc7);
    GameObject* var2;
    int var3;
    short var4;
    if (!var1) goto fail;
    var2 = func_0200fea4(var0, arg1);
    if (!var2) goto fail;
    var3 = 0x1fd;
    var4 = var2->obj3D_.unknown_2_;
    if (var4 == var3 || var4 == var3 + 1 || (unsigned int)(var4 - 0x308) <= 3) return 1;
fail:
    return 0;
}
