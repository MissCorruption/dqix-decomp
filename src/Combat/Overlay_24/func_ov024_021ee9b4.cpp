#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);
struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);

struct Struct_ov024_021ee9b4 { int unknown_0_; };
struct Struct_ov024_021feedc { short unknown_0_[8]; };
extern struct Struct_ov024_021feedc data_ov024_021feedc;

// USA: func_ov024_021ee9b4
extern "C" ARM int func_ov024_021ee9b4(struct Struct_ov024_021ee9b4* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021feedc var0 = data_ov024_021feedc;

    int var1 = func_ov000_0215eb1c(arg0->unknown_0_, var0.unknown_0_, 8, 1);
    if (var1 <= 0) return 0;

    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        GameObject* var3 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var2]);
        if (!var3) continue;
        if (func_ov024_021eda60(var3)) continue;
        if (!func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var3)) continue;
        int var4 = *arg3;
        *arg3 = var4 + 1;
        arg4[var4] = var0.unknown_0_[var2];
    }

    if (*arg3 <= 0) return 0;
    if (*arg3 * 3 < var1) return 0;

    *arg3 = var1;
    memcpy(arg4, var0.unknown_0_, 0x10);
    return 1;
}
