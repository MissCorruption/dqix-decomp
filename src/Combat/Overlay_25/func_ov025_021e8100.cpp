#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov025_021e8100 {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
    short unknown_a_;
};

extern "C" unsigned char* func_020100bc(GameState* arg0);
extern "C" void func_0202ea10(unsigned char* arg0, int arg1, int arg2);

// USA: func_ov025_021e8100
extern "C" ARM int func_ov025_021e8100(Struct_ov025_021e8100* arg0) {
    unsigned char* var0 = func_020100bc(GameState::GetInstance());
    if (var0 != 0) {
        func_0202ea10(var0, arg0->unknown_a_, arg0->unknown_8_);
    }
    return 1;
}
