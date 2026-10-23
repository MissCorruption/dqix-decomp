#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
struct Struct_ov024_021f0b84;
extern "C" int func_ov024_021f0d0c(struct Struct_ov024_021f0b84* arg0);
struct Struct_ov024_021ed9dc { int unknown_0_; };
extern "C" int func_ov024_021ed9dc(struct Struct_ov024_021ed9dc* arg0, int arg1);

struct Struct_ov024_021feebc { short unknown_0_[8]; };
extern struct Struct_ov024_021feebc data_ov024_021feebc;

// USA: func_ov024_021f0e90
extern "C" ARM int func_ov024_021f0e90(struct Struct_ov024_021ed9dc* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
    if (!var0) return 0;
    if (!func_ov024_021f0d0c((struct Struct_ov024_021f0b84*)var0)) return 0;

    int var1 = 0;
    struct Struct_ov024_021feebc var2 = data_ov024_021feebc;
    int var3 = func_ov000_0215e9fc(arg0->unknown_0_, var2.unknown_0_, 4, 1);
    if (var3 <= 0) return 0;
    for (int var4 = 0; var4 < var3; var4++) {
        if (func_ov024_021ed9dc(arg0, var2.unknown_0_[var4])) {
            var1 = 1;
            break;
        }
    }
    if (!var1) return 0;

    memset(var2.unknown_0_, -1, sizeof(var2));
    var3 = func_ov000_0215eb1c(arg0->unknown_0_, var2.unknown_0_, 8, 1);
    if (var3 <= 0) return 0;

    *arg3 = 0;
    for (int var5 = 0; var5 < var3; var5++) {
        GameObject* var6 = GetCombatantByID(arg0->unknown_0_, var2.unknown_0_[var5]);
        if (!var6) continue;
        if (var6->currentStats_->unknown_5a_2_ >= 2) continue;
        int var7 = *arg3;
        *arg3 = var7 + 1;
        arg4[var7] = var2.unknown_0_[var5];
    }
    if (*arg3 <= 0) return 0;

    *arg3 = var3;
    memcpy(arg4, var2.unknown_0_, sizeof(var2));
    return 1;
}
