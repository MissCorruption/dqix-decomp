#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);

struct Struct_ov024_021ddc80_4 { char unknown_0_[0x10]; int unknown_10_; };

// USA: func_ov024_021e9464
extern "C" ARM int func_ov024_021e9464(struct Struct_ov024_021ddc80_4* arg0, int arg1, int arg2) {
    GameObject* var0 = GetCombatantByID(arg0->unknown_10_, arg1);
    if (!var0) return 0;
    int var1 = func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var0);
    if (arg2 != 0) {
        return var1 ? 0x6e : 0x1e;
    }
    if (var1) return 0x6f;
#if defined(jpn)
    return 0x1b;
#else
    return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif
}
