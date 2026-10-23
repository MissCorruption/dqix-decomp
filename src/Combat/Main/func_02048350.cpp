#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);

struct Struct_02048350 {
    char unknown_0_[0x6];
    unsigned short unknown_6_;
};

struct Struct_02048350_2 {
    char unknown_0_[0x4];
    short unknown_4_;
    char unknown_6_[0x130 - 0x6];
    struct Struct_02048350* unknown_130_;
};

// USA: func_02048350
extern "C" ARM int func_02048350(struct Struct_02048350_2* arg0, int arg1) {
    struct Struct_02048350* var0 = arg0->unknown_130_;
    unsigned short var1 = var0->unknown_6_;
    GameState* var2 = GameState::GetInstance();
    GameObject* var3 = func_0200ff1c(var2, arg0->unknown_4_);
    if (var3 != NULL && arg1 > 0) {
        unsigned char* var4 = (unsigned char*)func_02053c6c((unsigned char*)var3);
        if (var4 != NULL && func_02083b00(var4, 0x106)) {
            arg1 = (int)(0.75f + 0.75f * (float)arg1);
            if (arg1 <= 0) {
                arg1 = 0;
            }
        }
    }
    if (var1 <= arg1) {
        arg0->unknown_130_->unknown_6_ = 0;
        return var1;
    }
    arg0->unknown_130_->unknown_6_ = var1 - arg1;
    return arg1;
}
