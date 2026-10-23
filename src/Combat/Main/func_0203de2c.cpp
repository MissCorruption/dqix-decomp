#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0203f430(void* arg0);
struct Struct_0203de2c;

struct Struct_0203de2c_2 {
    char unknown_0_[0x14];
    void* unknown_14_;
    void* unknown_18_;
};
struct Struct_0203de2c_3 {
    char unknown_0_[0xc];
    struct Struct_0203de2c_2* unknown_c_[0x20];
};

// USA: func_0203de2c
extern "C" ARM void func_0203de2c(struct Struct_0203de2c_3* arg0) {
    int var0;
    GameState::GetInstance();
    for (var0 = 0; var0 < 0x20; var0++) {
        struct Struct_0203de2c_2* var1 = arg0->unknown_c_[var0];
        if (var1 == NULL) continue;
        if (var1->unknown_14_ != NULL) {
            func_0203f430(var1->unknown_14_);
        } else if (var1->unknown_18_ != NULL) {
            ((Object3D*)((struct Struct_0203de2c*)var1->unknown_18_))->StageTextureData();
        }
    }
}
