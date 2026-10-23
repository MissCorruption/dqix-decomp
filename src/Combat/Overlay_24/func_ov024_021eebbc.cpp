#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021eebbc { char unknown_0_; unsigned char unknown_1_0_:4; unsigned char unknown_1_4_:4; };
struct Struct_ov024_021eebbc_2 { int unknown_0_; };
struct Struct_ov024_021fecdc { short unknown_0_[8]; };
extern struct Struct_ov024_021fecdc data_ov024_021fecdc;

// USA: func_ov024_021eebbc
extern "C" ARM int func_ov024_021eebbc(struct Struct_ov024_021eebbc_2* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021eebbc* var0 = (struct Struct_ov024_021eebbc*)((char*)arg0->unknown_0_ + 0x81b0);
    if (!var0) return 0;
    int var1 = var0->unknown_1_0_;
    if (var1 >= 5) return 0;

    struct Struct_ov024_021fecdc var2 = data_ov024_021fecdc;
    int var3 = func_ov000_0215eb1c(arg0->unknown_0_, var2.unknown_0_, 8, 0);
    if (var3 <= 0) return 0;

    *arg3 = 0;
    for (int var4 = 0; var4 < var3; var4++) {
        GameObject* var5 = GetCombatantByID(arg0->unknown_0_, var2.unknown_0_[var4]);
        if (!var5) continue;
        if (!func_02010088((struct Struct_02010088*)var5)) continue;
        int var6 = *arg3;
        *arg3 = var6 + 1;
        arg4[var6] = var2.unknown_0_[var4];
    }

    if (*arg3 <= 0) return 0;
    func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
    return 1;
}
