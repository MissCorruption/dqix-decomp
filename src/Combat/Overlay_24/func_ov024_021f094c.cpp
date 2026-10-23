#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);
struct Struct_ov024_021dced0_2;
extern "C" int func_ov024_021dd010(struct Struct_ov024_021dced0_2* arg0);

struct Struct_ov024_021f094c { int unknown_0_; };

struct Struct_ov024_021febdc { short unknown_0_[4]; };
extern struct Struct_ov024_021febdc data_ov024_021febdc;

// USA: func_ov024_021f094c
extern "C" ARM int func_ov024_021f094c(struct Struct_ov024_021f094c* arg0, int arg1) {
    GameObject* var0 = GetCombatantByID(arg0->unknown_0_, arg1);
    if (!var0) return 0;
    if (func_ov024_021eda60(var0)) return 0;
    struct Struct_ov024_021febdc var1 = data_ov024_021febdc;
    int var2 = func_ov000_0215e9fc(arg0->unknown_0_, var1.unknown_0_, 4, 1);
    if (var2 <= 0) return 0;
    int var3 = 0;
    for (int var4 = 0; var4 < var2; var4++) {
        GameObject* var5 = GetCombatantByID(arg0->unknown_0_, var1.unknown_0_[var4]);
        if (!var5) continue;
        if (func_ov024_021dd010((struct Struct_ov024_021dced0_2*)var5)) continue;
        if (var5->currentStats_->primaryStats.currMP != 0) var3 = 1;
    }
    return var3;
}
