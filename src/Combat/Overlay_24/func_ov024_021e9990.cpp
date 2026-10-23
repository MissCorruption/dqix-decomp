#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

struct Struct_ov024_021dee84_4 { char unknown_0_[0x10]; int unknown_10_; };

// USA: func_ov024_021e9990
extern "C" ARM int func_ov024_021e9990(Struct_ov024_021dee84_4* arg0, int arg1, int arg2, unsigned char arg3, signed char arg4) {
    GameObject* var0 = GetCombatantByID(arg0->unknown_10_, arg1);
    if (var0 == NULL) return 0;
    if (arg3 != 0) goto retZero;
    switch (arg4) {
        case 2: return 0xc4;
        default: return 0xc5;
    }
retZero:
    return 0;
}
