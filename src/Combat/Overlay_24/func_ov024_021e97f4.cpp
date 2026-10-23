#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);

struct Struct_ov024_021e97f4 {
    char unknown_0_[0x10];
    void* unknown_10_;
};

struct Struct_ov024_021e97f4_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021e97f4_3 {
    char unknown_0_[0x24];
    Struct_ov024_021e97f4_2 unknown_24_;
};

struct Struct_ov024_021e97f4_4 {
    char unknown_0_[0x8e95];
    unsigned char unknown_8e95_;
};

static inline int inline_ov024_021e97f4(ModifiableCombatStats* arg0) {
    return ((unsigned char*)arg0)[0x52];
}

// USA: func_ov024_021e97f4
extern "C" ARM int func_ov024_021e97f4(Struct_ov024_021e97f4* arg0, int arg1,
    Struct_ov024_021e97f4_3* arg2, int arg3, signed char arg4,
    unsigned char arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return 0;

    if (arg5 != 0) {
        if (arg3 == 0) {
            switch (arg4) {
                case 2: return 0xab;
                case 0: return 0xae;
                default: return 0xac;
            }
        }
        switch (arg4) {
            case -2: return 0xaf;
            case 0: return 0xae;
            default: return 0xad;
        }
    }
    if (arg3 == 1) {
        if (arg6 != 0) return 0x1f;
        if (((Struct_ov024_021e97f4_4*)arg0->unknown_10_)->unknown_8e95_ != 0 ||
            inline_ov024_021e97f4(var0->currentStats_) <= 0) {
#if defined(jpn)
            return 0x1b;
#else
            return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif

        }
    }
    return func_ov024_021da644(arg1,
        arg2->unknown_24_.unknown_1_2_,
        arg2->unknown_24_.unknown_2_4_);
}
