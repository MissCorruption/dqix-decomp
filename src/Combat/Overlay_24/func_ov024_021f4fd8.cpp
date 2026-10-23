#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);

extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021feb84 { short unknown_0_[4]; };
extern struct Struct_ov024_021feb84 data_ov024_021feb84;

// USA: func_ov024_021f4fd8
extern "C" ARM int func_ov024_021f4fd8(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021feb84 var0 = data_ov024_021feb84;

    int var1 = func_ov000_0215e9fc(*arg0, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;

    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        GameObject* var3 = GetCombatantByID(*arg0, var0.unknown_0_[var2]);
        if (var3 && var3->currentStats_->primaryStats.agility != 0 && var3->currentStats_->agilityBuff > -2) {
            int var4 = *arg3;
            *arg3 = var4 + 1;
            arg4[var4] = var0.unknown_0_[var2];
        }
    }
    if (*arg3 > 0) {
        func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
        return 1;
    }
    return 0;
}
