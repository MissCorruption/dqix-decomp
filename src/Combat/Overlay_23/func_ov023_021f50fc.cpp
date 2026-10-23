#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState*);
extern "C" void func_02053ec8(void*, int);

// USA: func_ov023_021f50fc
extern "C" ARM void func_ov023_021f50fc(void) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    for (int var2 = 0; var2 < var1[0xf7c]; var2++) {
        unsigned char* var3 = var1 + var2;
        GameObject* var4 = func_0200ff1c(var0, var3[0xf78]);
        if (var4 != 0) {
            func_02053ec8(var4, 2);
        }
    }
}
