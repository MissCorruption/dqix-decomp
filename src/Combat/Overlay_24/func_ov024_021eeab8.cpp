#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);
extern "C" int func_020882f8(unsigned char* arg0);

struct Struct_ov024_021eeab8 { int unknown_0_; };
struct Struct_ov024_021feecc { short unknown_0_[8]; };
extern struct Struct_ov024_021feecc data_ov024_021feecc;

// USA: func_ov024_021eeab8
extern "C" ARM int func_ov024_021eeab8(struct Struct_ov024_021eeab8* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021feecc var0 = data_ov024_021feecc;

    int var1 = func_ov000_0215eb1c(arg0->unknown_0_, var0.unknown_0_, 8, 1);
    if (var1 <= 0) return 0;

    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        GameObject* var3 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var2]);
        if (!var3) continue;
        if (func_ov024_021eda60(var3)) continue;
        if (!func_020882f8((unsigned char*)var3->currentStats_)) continue;
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
