#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021fec4c { short unknown_0_[4]; };
extern struct Struct_ov024_021fec4c data_ov024_021fec4c;

// USA: func_ov024_021f567c
extern "C" ARM int func_ov024_021f567c(int* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021fec4c var0 = data_ov024_021fec4c;
    int var1 = func_ov000_0215e9fc(*arg0, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;
    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        GameObject* var3 = GetCombatantByID(*arg0, var0.unknown_0_[var2]);
        if (!var3) continue;
        void* var4 = var3->currentStats_;
        if (*(unsigned short*)((char*)var4 + 2) == 0) continue;
        if (func_ov024_021eda60(var3)) continue;
        int var5 = *arg3;
        *arg3 = var5 + 1;
        arg4[var5] = var0.unknown_0_[var2];
    }
    if (*arg3 > 0) {
        func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
        return 1;
    }
    return 0;
}
