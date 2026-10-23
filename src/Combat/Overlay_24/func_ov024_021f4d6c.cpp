#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021ede2c(void* arg0);
struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);

struct Struct_ov024_021f4d6c { int unknown_0_; };

struct Struct_ov024_021feba4 { short unknown_0_[4]; };
extern struct Struct_ov024_021feba4 data_ov024_021feba4;

// USA: func_ov024_021f4d6c
extern "C" ARM int func_ov024_021f4d6c(struct Struct_ov024_021f4d6c* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021feba4 var0 = data_ov024_021feba4;
    int var1 = func_ov000_0215e9fc(arg0->unknown_0_, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;
    if (!func_ov024_021ede2c(arg0)) return 0;
    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        GameObject* var3 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var2]);
        if (!var3) continue;
        if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var3)) continue;
        int var4 = *((unsigned char*)var3->currentStats_ + 0x4e);
        if (var4 <= 0) continue;
        arg4[(*arg3)++] = var0.unknown_0_[var2];
    }
    if (*arg3 <= 0) return 0;
    if (*arg3 * 3 < var1 * 2) return 0;
    *arg3 = var1;
    memcpy(arg4, var0.unknown_0_, 8);
    return 1;
}
