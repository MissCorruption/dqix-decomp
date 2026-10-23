#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" void func_ov000_02170db0(void* arg0);

// USA: func_ov000_02174514
extern "C" ARM void func_ov000_02174514(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        GameObject* var2 = func_0200ff1c(var0, var1);
        if (var2 == NULL) continue;
        void* var3 = func_ov000_02161318(arg0, var1);
        if (var3 != NULL) {
            int var4 = *(int*)(*(char**)((char*)var2 + 0x138) + 0x14);
            if (*(int*)((char*)var3 + 0x28) != var4) {
                *(int*)((char*)var3 + 0x28) = var4;
                func_ov000_02170db0(var3);
            }
        }
    }
}
