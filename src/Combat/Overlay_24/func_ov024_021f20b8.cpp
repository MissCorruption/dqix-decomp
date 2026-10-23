#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215eb1c(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" float func_ov024_021db358(GameObject* arg0);

extern unsigned short data_ov024_021fec6c;

#pragma opt_common_subs off
// USA: func_ov024_021f20b8
extern "C" ARM int func_ov024_021f20b8(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    unsigned short var0[8];
    float var1;
    unsigned short* var2;
    unsigned short* var3 = var0;
    unsigned short* var4 = &data_ov024_021fec6c;
    int var5 = 8;
    do {
        unsigned short* var6 = var3++;
        *var6 = *var4++;
    } while (--var5);

    int var7 = func_ov000_0215eb1c(*arg0, var0, 8, 1);
    if (var7 <= 0) return 0;

    var2 = var0;
    var1 = 0.5f;
    *arg3 = 0;
    for (int var8 = 0; var8 < var7; var8++) {
        GameObject* var9 = GetCombatantByID(*arg0, *(short*)&var2[var8]);
        if (!var9) continue;
        if (func_ov024_021db358(var9) >= var1) continue;
        int var10 = *arg3;
        *arg3 = var10 + 1;
        arg4[var10] = *(short*)&var2[var8];
    }
    if (*arg3 <= 0) return 0;
    if (*arg3 * 3 < var7 * 2) return 0;

    *arg3 = var7;
    memcpy(arg4, var0, 0x10);
    return 1;
}
