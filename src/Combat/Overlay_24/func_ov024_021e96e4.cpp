#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);

struct Struct_ov024_021e96e4 {
    char unknown_0_[0x10];
    void* unknown_10_;
};

struct Struct_ov024_021e96e4_2 {
    char unknown_0_[0x24];
    unsigned int unknown_24_0_ : 10;
    unsigned int unknown_25_2_ : 10;
    unsigned int unknown_26_4_ : 10;
    unsigned int unknown_27_6_ : 2;
};

// USA: func_ov024_021e96e4
extern "C" ARM int func_ov024_021e96e4(Struct_ov024_021e96e4* arg0, int arg1,
    Struct_ov024_021e96e4_2* arg2, int arg3, signed char arg4,
    unsigned char arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return 0;
    if (arg5 != 0) {
        if (arg3 == 0) {
            switch (arg4) {
                case 2: return 0x4c;
                case 0: return 0x50;
                default: return 0x4e;
            }
        }
        switch (arg4) {
            case -2: return 0x4d;
            case 0: return 0x50;
            default: return 0x4f;
        }
    }
    if (arg3 == 1) {
        if (arg6 != 0) return 0x1f;
        if (((unsigned char*)arg0->unknown_10_)[0x8e95] != 0 ||
            (int)((unsigned char*)var0->currentStats_)[0x51] <= 0) {
#if defined(jpn)
            return 0x1b;
#else
            return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif

        }
    }
    return func_ov024_021da644(arg1,
        arg2->unknown_25_2_, arg2->unknown_26_4_);
}
