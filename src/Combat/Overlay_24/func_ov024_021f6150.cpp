#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

struct Struct_ov024_021dd010 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021dced0_2 { char unknown_0_[0x138]; struct Struct_ov024_021dd010* unknown_138_; };

extern "C" int func_ov000_0215e9fc(int arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021dd010(struct Struct_ov024_021dced0_2* arg0);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

extern unsigned short data_ov024_021feae4;

// USA: func_ov024_021f6150
extern "C" ARM int func_ov024_021f6150(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    unsigned short var0[4];
    unsigned short* var1 = &data_ov024_021feae4;
    unsigned short* var2 = var0;
    int var3 = 4;
    do {
        unsigned short* var4 = var2++;
        *var4 = *var1++;
    } while (--var3);

    int var5 = func_ov000_0215e9fc(*arg0, var0, 4, 1);
    if (var5 <= 0) return 0;

    *arg3 = 0;
    for (int var6 = 0; var6 < var5; var6++) {
        GameObject* var7 = GetCombatantByID(*arg0, *(short*)&var0[var6]);
        if (!var7) continue;
        if (func_ov024_021dd010((struct Struct_ov024_021dced0_2*)var7)) continue;
        int var8 = *arg3;
        *arg3 = var8 + 1;
        arg4[var8] = *((short*)var0 + var6);
    }
    if (*arg3 > 0) {
        func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
        return 1;
    }
    return 0;
}
