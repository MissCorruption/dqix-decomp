#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

struct Struct_ov024_021de25c { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021de124 { char unknown_0_[0x138]; struct Struct_ov024_021de25c* unknown_138_; };

extern "C" int func_ov000_0215e9fc(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);
extern "C" int func_ov024_021eda60(GameObject* arg0);

extern unsigned short data_ov024_021febcc;

// USA: func_ov024_021f063c
extern "C" ARM int func_ov024_021f063c(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    unsigned short var0[4];
    unsigned short* var1 = &data_ov024_021febcc;
    unsigned short* var2 = var0;
    int var3 = 4;
    do {
        unsigned short* var4 = var2++;
        *var4 = *var1++;
    } while (--var3);

    int var5 = func_ov000_0215e9fc(*arg0, var0, 4, 1);
    if (var5 <= 0) return 0;

    int var6 = 0;
    int var7 = var6;
    for (var7 = 0; var7 < var5; var7++) {
        GameObject* var8 = GetCombatantByID(*arg0, *(short*)&var0[var7]);
        if (!var8) continue;
        if (func_ov024_021de25c((struct Struct_ov024_021de124*)var8)) continue;
        if (func_ov024_021eda60(var8)) continue;
        unsigned char* var9 = (unsigned char*)var8->currentStats_;
        int var10 = var9[0x4a];
        if (var10 > 0) var6++;
    }
    if (var6 * 3 < var5 * 2) return 0;

    *arg3 = var5;
    memcpy(arg4, var0, 8);
    return 1;
}
