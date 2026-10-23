#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov025_021dfce0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    GameObject* unknown_8_;
};

extern "C" int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215ec1c(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov025_021dfbd4(int arg0);

// USA: func_ov025_021e1048
extern "C" ARM int func_ov025_021e1048(void* arg0, Struct_ov025_021dfce0* arg1) {
    GameState* var0 = GameState::GetInstance();
    short var1[12];
    int var2 = 0;
    var2 += func_ov000_0215e9fc(arg0, var1, 12, var2);
    var2 += func_ov000_0215ec1c(arg0, var1 + var2, 12 - var2, 0);
    int var3 = 0;
    for (int var4 = 0; var4 < var2; var4++) {
        GameObject* var5 = var0->GetCombatantByIndex(var1[var4]);
        if (var5 == 0 || var5->obj3D_.pModel_ == 0) {
            continue;
        }
        arg1[var3].unknown_0_ = var1[var4];
        arg1[var3].unknown_1_ = func_ov025_021dfbd4(var1[var4]);
        arg1[var3].unknown_8_ = var5;
        var3++;
    }
    return var3;
}
