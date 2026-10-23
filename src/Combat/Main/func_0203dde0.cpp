#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0203f370(void* arg0);

struct Struct_0203dde0 {
    char unknown_0_[0x14];
    void* unknown_14_;
};

struct Struct_0203dde0_2 {
    char unknown_0_[0xc];
    struct Struct_0203dde0* unknown_c_[0x20];
    char unknown_8c_[0xc];
    unsigned int unknown_98_;
};

// USA: func_0203dde0
extern "C" ARM void func_0203dde0(struct Struct_0203dde0_2* arg0) {
    int var0;
    if (arg0->unknown_98_ & 0x1) {
        return;
    }
    GameState::GetInstance();
    for (var0 = 0; var0 < 0x20; var0++) {
        struct Struct_0203dde0* var1 = arg0->unknown_c_[var0];
        if (var1 != NULL && var1->unknown_14_ != NULL) {
            func_0203f370(var1->unknown_14_);
        }
    }
}
