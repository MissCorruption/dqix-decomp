#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021e9904 { char unknown_0_[0x10]; void* unknown_10_; };

// USA: func_ov024_021e9904
extern "C" ARM int func_ov024_021e9904(struct Struct_ov024_021e9904* arg0, int arg1, int arg2, int arg3, signed char arg4) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return 0;
    if (arg3 == 0) {
        switch (arg4) {
            case 2: return 0xd0;
            case 0: return 0x1b7;
            default: return 0xd1;
        }
    }
    switch (arg4) {
        case -2: return 0x1b6;
        case 0: return 0x1b7;
        default: return 0x1b5;
    }
}
