#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_020dcc98
extern "C" ARM int func_020dcc98(int arg0) {
    int var0 = 15;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetPartyMemberByIndex(arg0);
    if (var2 != 0) {
        float var3;
        int var4 = var2->baseStats_->primaryStats.maxHP;
        if ((float)var4 == 0.0f) {
            var3 = 0.0f;
        } else {
            int* var5 = *(int**)((char*)var2 + 0x130);
            int var6 = *(unsigned short*)((char*)var5 + 4);
            var3 = (float)var6 / (float)var4;
        }

        if (var3 <= 0.25f) {
            var0 = 13;
        }
        if (var3 <= 0.08f) {
            var0 = 11;
        }
        if (var3 == 0.0f) {
            var0 = 9;
        }
    }
    return var0;
}
