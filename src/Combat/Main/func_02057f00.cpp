#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0200fd48(GameState* arg0, int arg1);

struct Struct_02057f00 {
    int unknown_0_;
    char unknown_4_[0x1ec - 4];
    struct Struct_02057f00* unknown_1ec_;
};

struct Struct_02057f00_2 {
    struct Struct_02057f00* unknown_0_;
};

// USA: func_02057f00
extern "C" ARM void func_02057f00(void* arg0, int arg1) {
    struct Struct_02057f00* var0 = ((struct Struct_02057f00_2*)arg0)->unknown_0_;
    struct Struct_02057f00* var1 = 0;
    GameState* var2 = GameState::GetInstance();
    int var3;
    for (var3 = 0; var3 < 16; var3++) {
        if (arg1 == *(int*)((char*)arg0 + var3 * 0xd4 + 0xd8)) {
            func_0200fd48(var2, var3 + 0xd0);
        }
    }
    while (var0 != 0) {
        if (arg1 == var0->unknown_0_) break;
        var1 = var0;
        var0 = var0->unknown_1ec_;
    }
    if (var0 == 0) return;
    if (var1 == 0) {
        ((struct Struct_02057f00_2*)arg0)->unknown_0_ = var0->unknown_1ec_;
    } else {
        var1->unknown_1ec_ = var0->unknown_1ec_;
    }
}
