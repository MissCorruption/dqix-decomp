#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_021727c8_236 = 0xe8 };
#else
enum { Enum_ov003_021727c8_236 = 0xec };
#endif


struct Struct_ov003_021727c8 {
    char unknown_0_[Enum_ov003_021727c8_236];
    unsigned char unknown_ec_;
    unsigned char unknown_ed_;
};

typedef void (Struct_ov003_021727c8::*Type_ov003_021727c8)();

struct Struct_ov003_0217fa20 {
    Type_ov003_021727c8 unknown_0_[7];
};

extern "C" const Struct_ov003_0217fa20 data_ov003_0217fa20;
extern "C" const Struct_ov003_0217fa20 data_ov003_0217fa58;
extern "C" Type_ov003_021727c8 data_020e6d5c;

// USA: func_ov003_021727c8
extern "C" ARM bool func_ov003_021727c8(Struct_ov003_021727c8* arg0) {
    GameState::GetInstance()->GetTickCount();
    bool var0 = false;
    bool var1 = false;
    Struct_ov003_0217fa20 var2 = data_ov003_0217fa20;
    Type_ov003_021727c8 var3 = data_020e6d5c;
    var2.unknown_0_[6] = var3;
    Struct_ov003_0217fa20 var4 = data_ov003_0217fa58;
    var4.unknown_0_[6] = var3;
    if (var2.unknown_0_[arg0->unknown_ec_] != 0) {
        (arg0->*var2.unknown_0_[arg0->unknown_ec_])();
    } else {
        var0 = true;
    }
    if (var4.unknown_0_[arg0->unknown_ed_] != 0) {
        (arg0->*var4.unknown_0_[arg0->unknown_ed_])();
    } else {
        var1 = true;
    }
    if (var0 && var1) {
        return false;
    }
    return true;
}
