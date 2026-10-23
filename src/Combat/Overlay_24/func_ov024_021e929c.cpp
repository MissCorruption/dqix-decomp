#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_020882f8(unsigned char* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);

struct Struct_ov024_021dbd84_6 {
    char unknown_0_[0x10];
    int unknown_10_;
};

// USA: func_ov024_021e929c
extern "C" ARM int func_ov024_021e929c(struct Struct_ov024_021dbd84_6* arg0, int arg1, int arg2) {
    GameObject* var0 = GetCombatantByID(arg0->unknown_10_, arg1);
    if (var0 == NULL) {
        return 0;
    }
    int var1 = func_020882f8((unsigned char*)var0->currentStats_);
    if (arg2 != 0) {
        if (var1 != 0) {
            return func_ov024_021da644(arg1, 0x42, 0x42 + 0x13c);
        }
        return func_ov024_021da644(arg1, 0x41, 0x92);
    }
    if (var1 != 0) {
        return 0x43;
    }
    #if defined(jpn)
        return 0x1b;
#else
        return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif
}
