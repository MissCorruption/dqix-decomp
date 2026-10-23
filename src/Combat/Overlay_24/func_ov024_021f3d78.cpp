#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" float func_ov024_021db358(GameObject* arg0);

struct Struct_ov024_021f3d78 { int unknown_0_; };
struct Struct_ov024_021feefc { short unknown_0_[8]; };
extern struct Struct_ov024_021feefc data_ov024_021feefc;

// USA: func_ov024_021f3d78
extern "C" ARM int func_ov024_021f3d78(struct Struct_ov024_021f3d78* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021feefc var0 = data_ov024_021feefc;
    int var1 = func_ov000_0215eb1c(arg0->unknown_0_, var0.unknown_0_, 8, 1);
    if (var1 <= 0) return 0;
    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        if (arg1 == var0.unknown_0_[var2]) continue;
        GameObject* var3 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var2]);
        if (!var3) continue;
        if (func_ov024_021db358(var3) > 0.08f) continue;
        int var4 = *arg3;
        *arg3 = var4 + 1;
        arg4[var4] = var0.unknown_0_[var2];
    }
    int var5;
    if (*arg3 <= 0) {
        var5 = 0;
    } else {
        *arg3 = 1;
        arg4[0] = (short)arg1;
        var5 = 1;
    }
    return var5;
}
