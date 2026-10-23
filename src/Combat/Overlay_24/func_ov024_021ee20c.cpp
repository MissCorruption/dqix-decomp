#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_ov024_021eda60(GameObject* arg0);

extern unsigned short data_ov024_021feb34;

// USA: func_ov024_021ee20c
extern "C" ARM int func_ov024_021ee20c(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    short var0[4];
    short* var1 = var0;
    unsigned short* var2 = &data_ov024_021feb34;
    int var3 = 4;
    do {
        short* var4 = var1++;
        *var4 = *var2++;
    } while (--var3);

    int var5 = func_ov000_0215e9fc(*arg0, var0, 4, 1);
    if (var5 <= 0) return 0;

    short var6[4];
    __clear(var6, 8);

    int var7;
    unsigned short var8;
    var8 = 0;
    var7 = 0;
    for (; var7 < var5; var7++) {
        GameObject* var9 = GetCombatantByID(*arg0, var0[var7]);
        if (var9 && func_ov024_021eda60(var9)) {
            var6[var8] = var0[var7];
            var8++;
        }
    }
    if (var8 * 3 >= var5) return 0;

    *arg3 = var5;
    memcpy(arg4, var0, 8);
    return 1;
}
