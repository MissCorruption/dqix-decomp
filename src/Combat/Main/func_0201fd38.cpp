#include <globaldefs.h>
#include "Combat/CombatantDisplay.h"

#if defined(jpn)
enum { Enum_0201fd38_28 = 0x1d, Enum_0201fd38_36 = 0x26 };
#else
enum { Enum_0201fd38_28 = 0x1c, Enum_0201fd38_36 = 0x24 };
#endif

#include "GameState/GameState.h"

// USA: func_0201fd38

struct Struct_020fdcb0_4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_[4];
};

extern struct Struct_020fdcb0_4 data_020fdcb0[];

extern "C" ARM void func_0201fd38(Struct_020fdc60_2* arg0, int arg1, int arg2) {
    if (GameState::GetInstance()->GetPartyMemberByIndex(arg2) != NULL) {
        struct Struct_020fdcb0_4* var0 = &data_020fdcb0[arg2];
        int var1 = var0->unknown_4_;
        if (var1 >= 0) {
            func_0201fdd0(arg0, arg1, arg2, var1, var0->unknown_c_, 0x30, Enum_0201fd38_28, 7, Enum_0201fd38_36, 0xb, 0xc, 1);
        }
    }
}
