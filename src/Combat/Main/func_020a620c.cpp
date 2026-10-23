#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_020a620c {
    char unknown_0_[0xa];
    unsigned char unknown_a_;
};

typedef void (Struct_020a620c::*Type_02000c9c)();
struct Struct_020e907c { Type_02000c9c unknown_0_[4]; };
extern struct Struct_020e907c data_020e907c;
extern Type_02000c9c data_020e6d5c;

// USA: func_020a620c
extern "C" ARM int func_020a620c(Struct_020a620c* arg0) {
    struct Struct_020e907c var0;
    GameState::GetInstance()->GetTickCount();
    var0 = data_020e907c;
    var0.unknown_0_[3] = data_020e6d5c;
    if (var0.unknown_0_[arg0->unknown_a_] == 0) {
        return 0;
    }
    (arg0->*var0.unknown_0_[arg0->unknown_a_])();
    return 1;
}
