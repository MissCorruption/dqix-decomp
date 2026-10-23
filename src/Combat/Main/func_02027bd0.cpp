#include <globaldefs.h>
#include "GameState/GameState.h"


extern int data_020fdcb0[][8];
extern int data_020fdcb8[][8];

// USA: func_02027bd0
extern "C" ARM int func_02027bd0(int arg0) {
    int var0, var1;
    GameState* var2;
    GameObject* var3;
    float var4;
    int var5;

    var5 = (arg0 >= 0) && (arg0 <= 3);
    if (!var5) {
        return 1;
    }

    var0 = data_020fdcb0[arg0][0];
    var1 = data_020fdcb8[arg0][0];
    if (var0 < 0) {
        return 1;
    }
    if (var1 <= 0) {
        return 1;
    }

    var2 = GameState::GetInstance();
    var3 = var2->GetPartyMemberByIndex(arg0);
    if (var3 == NULL) {
        return 1;
    }

    var4 = (float)var0 / (float)var1;
    if (var4 <= 0.0f) {
        return 2;
    }
    if (var4 <= 0.08f) {
        return 3;
    }
    if (var4 <= 0.25f) {
        return 4;
    }
    return 1;
}
