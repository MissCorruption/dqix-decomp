#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021cee34_396 = 0x180 };
#else
enum { Enum_ov017_021cee34_396 = 0x18c };
#endif

#include "GameState/GameState.h"

struct Struct_ov017_021cee34 {
    unsigned char unknown_0_[4];
    int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
};

struct Struct_ov017_021cee34_2 {
    unsigned char unknown_0_[Enum_ov017_021cee34_396];
    unsigned int unknown_18c_;
};

// USA: func_ov017_021cee34
extern "C" ARM void func_ov017_021cee34(void* arg0, Struct_ov017_021cee34* arg1, GameState* arg2) {
    int var0 = arg1->unknown_c_;
    unsigned int var1 = arg1->unknown_8_;
    int var2 = arg1->unknown_4_;
    GameObject* var3 = func_0200ff1c(arg2, var2);
    if (var3 == NULL) return;
    Struct_ov017_021cee34_2* var4 = (Struct_ov017_021cee34_2*)var3;
    if (var0) {
        var4->unknown_18c_ |= var1;
    } else {
        var4->unknown_18c_ &= ~var1;
    }
}
