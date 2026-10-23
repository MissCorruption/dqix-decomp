#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void func_02059cc8(unsigned char* arg0);

struct Struct_0205859c {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[0x10 * 0xd4];
    int unknown_d48_;
    void* unknown_d4c_;
    int unknown_d50_;
};

// USA: func_0205859c
extern "C" ARM void func_0205859c(struct Struct_0205859c* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1, var2;
    for (var1 = 0; var1 < 0x10; var1++) {
        func_0200fd48(var0, var1 + 0xd0);
    }
    for (var2 = 0; var2 < 0x10; var2++) {
        func_02059cc8(arg0->unknown_8_ + var2 * 0xd4);
    }
    arg0->unknown_d48_ = 0;
    if (arg0->unknown_d4c_ != NULL) {
        *(int*)((char*)arg0->unknown_d4c_ + 0x1ec) = 0;
        arg0->unknown_4_ = arg0->unknown_d50_;
    } else {
        arg0->unknown_0_ = 0;
        arg0->unknown_4_ = 0;
    }
}
