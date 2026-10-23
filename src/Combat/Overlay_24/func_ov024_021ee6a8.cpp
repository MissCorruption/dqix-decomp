#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);
extern "C" float func_ov024_021db358(GameObject* arg0);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

extern unsigned short data_ov024_021fec9c;

#pragma opt_common_subs off
// USA: func_ov024_021ee6a8
extern "C" ARM int func_ov024_021ee6a8(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    unsigned short var0[8];
    unsigned short* var1;
    unsigned short* var2 = var0;
    unsigned short* var3 = &data_ov024_021fec9c;
    int var4 = 8;
    do {
        unsigned short* var5 = var2++;
        *var5 = *var3++;
    } while (--var4);

    int var6 = func_ov000_0215eb1c(*arg0, var0, 8, 1);
    if (var6 <= 0) return 0;

    var1 = var0;
    float var7 = 0.5f;
    *arg3 = 0;
    for (int var8 = 0; var8 < var6; var8++) {
        GameObject* var9 = GetCombatantByID(*arg0, *(short*)&var1[var8]);
        if (!var9) continue;
        if (func_ov024_021eda60(var9)) continue;
        if (func_ov024_021db358(var9) >= var7) continue;
        arg4[*arg3] = *(short*)&var1[var8];
        (*arg3)++;
    }
    if (*arg3 <= 0) return 0;
    func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
    return 1;
}
