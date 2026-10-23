#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_02175754
extern "C" ARM void func_ov000_02175754(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        void* var2 = func_ov000_02161318(arg0, var1);
        if (var2) {
            int var3 = *(int*)((char*)var2 + 0x4c);
            GameObject* var4 = func_0200ff1c(var0, var3);
            if (var4) {
                *(int*)((char*)var2 + 0x28) = *(int*)((char*)var4->currentStats_ + 0x14);
            }
        }
    }
}
