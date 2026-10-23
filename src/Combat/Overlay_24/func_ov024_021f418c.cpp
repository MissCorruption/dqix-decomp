#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern unsigned short data_ov024_021fec54[4];

struct Struct_ov024_021f418c { int unknown_0_; };

static inline int inline_ov024_021f418c(BaseCombatStats* arg0) { return arg0->primaryStats.defense; }

// USA: func_ov024_021f418c
extern "C" ARM int func_ov024_021f418c(Struct_ov024_021f418c* arg0, unsigned char arg1,
    void* arg2, int* arg3, short* arg4) {
    short var0[4];
    short* var1 = var0;
    unsigned short* var2 = data_ov024_021fec54;
    int var3 = 4;
    do {
        short* var4 = var1++;
        *(unsigned short*)var4 = *var2++;
    } while (--var3);
    int var5 = func_ov000_0215e9fc(arg0->unknown_0_, var0, 4, 0);
    if (var5 <= 0) return 0;
    GameObject* var6 = GetCombatantByID(arg0->unknown_0_, arg1);
    if (!var6) return 0;
    unsigned short var7 = var6->baseStats_->primaryStats.attack +
        inline_ov024_021f418c(var6->baseStats_);
    unsigned short var8 = 0;
    for (int var9 = 0; var9 < var5; var9++) {
        GameObject* var10 = GetCombatantByID(arg0->unknown_0_, var0[var9]);
        if (var10) {
            var8 += var10->baseStats_->primaryStats.attack +
                inline_ov024_021f418c(var10->baseStats_);
        }
    }
    if (var8 / var5 < var7 * 3) return 0;
    *arg3 = 1;
    *arg4 = arg1;
    return 1;
}
