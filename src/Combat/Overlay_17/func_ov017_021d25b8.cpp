#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021d25b8_396 = 0x180 };
#else
enum { Enum_ov017_021d25b8_396 = 0x18c };
#endif

#include "GameState/GameState.h"

struct Struct_ov017_021d25b8 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_[3];
    int unknown_8_;
};

struct Struct_ov017_021cee34_2 {
    unsigned char unknown_0_[Enum_ov017_021d25b8_396];
    unsigned int unknown_18c_;
};

// USA: func_ov017_021d25b8
extern "C" ARM void func_ov017_021d25b8(int arg0, Struct_ov017_021d25b8* arg1, GameState* arg2) {
    GameObject* var0 = arg2->GetPartyMemberByIndex(arg1->unknown_4_);
    if (var0 == NULL) return;
    Struct_ov017_021cee34_2* var1 = (Struct_ov017_021cee34_2*)var0;
    if (arg1->unknown_8_ != 0) var1->unknown_18c_ |= 8;
    else var1->unknown_18c_ &= ~8;
}
