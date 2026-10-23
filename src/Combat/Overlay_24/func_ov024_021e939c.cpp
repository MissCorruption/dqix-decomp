#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_020885b4(struct Struct_020885b4* arg0);
extern "C" int func_02088514(struct Struct_02088514* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);

struct Struct_ov024_021dbaf4_4 {
    char unknown_0_[0x10];
    int unknown_10_;
};

// USA: func_ov024_021e939c
extern "C" ARM int func_ov024_021e939c(struct Struct_ov024_021dbaf4_4* arg0, int arg1, int arg2, int arg3) {
    GameObject* var0 = GetCombatantByID(arg0->unknown_10_, arg1);
    if (var0 == NULL) {
        return 0;
    }
    int var1 = func_02088514((struct Struct_02088514*)var0->currentStats_);
    int var2 = func_020885b4((struct Struct_020885b4*)var0->currentStats_);
    if (arg2 != 0) {
        if (arg3 != 0) {
            return var1 != 0 ? 0x10c : 0x10a;
        }
        if (var1 != 0) {
            return 0x10b;
        }
        #if defined(jpn)
        return 0x1b;
#else
        return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif
    }
    if (arg3 != 0) {
        return var2 != 0 ? 0x53 : 0x3f;
    }
    if (var1 != 0) {
        return 0x10b;
    }
    if (var2 != 0) {
        return 0x52;
    }
    #if defined(jpn)
        return 0x1b;
#else
        return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif
}
