#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" float func_ov024_021db358(GameObject* arg0);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

extern unsigned short data_ov024_021fef7c;

// USA: func_ov024_021f1c64
extern "C" ARM int func_ov024_021f1c64(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    short var0[8];
    unsigned short* var1 = (unsigned short*)var0;
    unsigned short* var2 = &data_ov024_021fef7c;
    int var3 = 8;
    do {
        unsigned short* var4 = var1++;
        *var4 = *var2++;
    } while (--var3);

    int var5 = func_ov000_0215eb1c(*arg0, var0, 8, 1);
    if (var5 <= 0) return 0;

    *arg3 = 0;
    for (int var6 = 0; var6 < var5; var6++) {
        GameObject* var7 = GetCombatantByID(*arg0, var0[var6]);
        if (!var7) continue;
        if (func_ov024_021db358(var7) >= 0.5f) continue;
        int var8 = *arg3;
        *arg3 = var8 + 1;
        arg4[var8] = var0[var6];
    }
    if (*arg3 <= 0) return 0;
    func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
    return 1;
}
