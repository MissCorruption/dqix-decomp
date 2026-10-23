#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void*, int);

// USA: func_ov000_021760d4
extern "C" ARM void func_ov000_021760d4(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        void* var2 = func_ov000_02161318(arg0, var1);
        if (var2 != NULL) {
            GameObject* var3 = var0->GetCombatantByIndex(var1);
            if (var3 != NULL) {
                void* var4 = var3->currentStats_;
                unsigned short var5 = *(unsigned short*)((char*)var4 + 0x22);
                int var6 = var5 << 30;
                *(unsigned char*)((char*)var2 + 0x2f) = (unsigned char)((unsigned int)var6 >> 30);
            }
        }
    }
}
