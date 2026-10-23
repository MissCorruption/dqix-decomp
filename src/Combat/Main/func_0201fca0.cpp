#include <globaldefs.h>
#include "Combat/CombatantDisplay.h"

#if defined(jpn)
enum { Enum_0201fca0_24 = 0x19 };
#else
enum { Enum_0201fca0_24 = 0x18 };
#endif

#include "GameState/GameState.h"

// USA: func_0201fca0

struct Struct_020fdcb0_4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_[4];
};

extern struct Struct_020fdcb0_4 data_020fdcb0[];

extern "C" ARM void func_0201fca0(Struct_020fdc60_2* arg0, int arg1, int arg2) {
    if (GameState::GetInstance()->GetPartyMemberByIndex(arg2) != NULL) {
        struct Struct_020fdcb0_4* var0 = &data_020fdcb0[arg2];
        int var1 = var0->unknown_0_;
        if (var1 >= 0) {
            func_0201fdd0(arg0, arg1, arg2, var1, var0->unknown_8_, 0x30, 0x10, 7, Enum_0201fca0_24, 9, 0xa, 0);
        }
    }
}
