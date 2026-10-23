#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Combat/Overlay_0/GetCombatantByID.h>

struct Struct_ov024_021f3a04 { char unknown_0_[0x2c]; short unknown_2c_; };
extern "C" GameObject* func_ov000_021536f8(int, int);
extern "C" float func_ov024_021db358(GameObject*);
extern "C" int func_ov000_0215eb1c(int, short*, int, int);
extern const short data_ov024_021fee3c[8] __attribute__((aligned(4)));

// USA: func_ov024_021f3a04
extern "C" ARM int func_ov024_021f3a04(int* arg0, int arg1, void*, int* arg3, short* arg4) {
    GameObject* var0 = func_ov000_021536f8(*arg0, arg1);
    if (!var0) return 0;
    if (func_ov024_021db358(var0) < 0.5f) return 0;
    short var1[8];
    const short* var2 = data_ov024_021fee3c;
    short* var3 = var1;
    int var4 = 8;
    do {
        *(unsigned short*)var3++ = *(const unsigned short*)var2++;
    } while (--var4);
    int var5 = func_ov000_0215eb1c(*arg0, var1, 8, 1);
    if (var5 <= 0) return 0;
    *arg3 = 0;
    for (int var6 = 0; var6 < var5; var6++) {
        if (var1[var6] == arg1) continue;
        GameObject* var7 = GetCombatantByID(*arg0, var1[var6]);
        if (!var7) continue;
        if (func_ov024_021db358(var7) >= 0.5f) continue;
        if (((Struct_ov024_021f3a04*)var7->currentStats_)->unknown_2c_ > 0) continue;
        int var8 = *arg3;
        *arg3 = var8 + 1;
        arg4[var8] = var1[var6];
    }
    if (*arg3 * 2 < var5) return 0;
    *arg3 = 1;
    arg4[0] = arg1;
    return 1;
}
