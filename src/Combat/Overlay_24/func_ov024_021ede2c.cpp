#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" void __clear(void* arg0, int arg1);
struct Struct_ov024_021eda78_5;
extern "C" int func_ov024_021edc08(struct Struct_ov024_021eda78_5* arg0);

struct Struct_ov024_021ede2c { int unknown_0_; };

struct Struct_ov024_021fea44 { short unknown_0_[4]; };
extern struct Struct_ov024_021fea44 data_ov024_021fea44;

// USA: func_ov024_021ede2c
extern "C" ARM int func_ov024_021ede2c(struct Struct_ov024_021ede2c* arg0) {
    struct Struct_ov024_021fea44 var0 = data_ov024_021fea44;
    int var1 = func_ov000_0215e9fc(arg0->unknown_0_, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;
    short var2[4];
    __clear(var2, 8);
    unsigned short var3 = 0;
    for (int var4 = 0; var4 < var1; var4++) {
        GameObject* var5 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var4]);
        if (!var5) continue;
        if (!func_ov024_021edc08((struct Struct_ov024_021eda78_5*)var5)) continue;
        var2[var3++] = var0.unknown_0_[var4];
    }
    return (var3 * 3 < var1) ? 1 : 0;
}
