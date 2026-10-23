#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_020e1e4c {
    char unknown_0_[8];
    unsigned char unknown_8_;
};

extern "C" int func_020e1e4c(struct Struct_020e1e4c* arg0);
extern "C" long long _s32_div_f(int a, int b);

struct Struct_020e269c {
    char unknown_0_[0x10];
    struct Struct_020e1e4c* unknown_10_;
    signed char unknown_14_;
    unsigned char unknown_15_;
    char unknown_16_;
    unsigned char unknown_17_;
};

// USA: func_020e269c
extern "C" ARM void func_020e269c(struct Struct_020e269c* arg0) {
    struct Struct_020e1e4c* var0 = arg0->unknown_10_;
    int var1 = var0->unknown_8_;
    int var2 = func_020e1e4c(var0);
    if (var2 >= 0) {
        signed char var3 = arg0->unknown_14_;
        if (var3 == var2 && arg0->unknown_17_) {
            arg0->unknown_15_ = var3;
        }
        arg0->unknown_17_ = 1;
        arg0->unknown_14_ = var2;
        return;
    }
    if (g_keyManager.TestKeysPressed(0x80)) {
        arg0->unknown_14_ = (int)(_s32_div_f(arg0->unknown_14_ + 1, var1) >> 32);
        arg0->unknown_17_ = 0;
        return;
    }
    if (g_keyManager.TestKeysPressed(0x40)) {
        signed char var4 = arg0->unknown_14_;
        arg0->unknown_14_ = (var4 > 0) ? var4 - 1 : var1 - 1;
        arg0->unknown_17_ = 0;
        return;
    }
    if (g_keyManager.TestKeysPressed(1) ||
        g_keyManager.TestKeysPressed(0x400) ||
        g_keyManager.TestKeysPressed(0x200)) {
        arg0->unknown_15_ = arg0->unknown_14_;
    }
}
