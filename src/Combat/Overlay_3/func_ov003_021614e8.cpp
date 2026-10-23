#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov003_02160c58(int arg0, short* arg1, short* arg2);

// USA: func_ov003_021614e8
extern "C" ARM int func_ov003_021614e8(int arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    unsigned char var2 = var1[0xf7c];
    unsigned char var3 = var1[0x2000 + 0xc8c];
    short var4 = (short)(var2 + var3);
    short var5 = var4 - 1;
    short var6, var7;
    func_ov003_02160c58(arg0, &var6, &var7);
    return var6 <= var5;
}
