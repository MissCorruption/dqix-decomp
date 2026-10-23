#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_0205bd78(void* arg0, int arg1, int arg2);

struct Struct_0205bc2c {
    int unknown_0_;
    char unknown_4_[0x30 - 0x4];
    int unknown_30_;
    char unknown_34_[0x4c - 0x34];
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    unsigned char unknown_4e_;
};

// USA: func_0205bc2c
extern "C" ARM int func_0205bc2c(Struct_0205bc2c* arg0, int) {
    int var0, var1;

    if (arg0->unknown_0_ == 0) return 0;

    g_touchInput.GetTouchPoint(&var0, &var1);

    if (g_touchInput.pressed_ != 0 && arg0->unknown_4e_ == 0) {
        int var2;

        arg0->unknown_4e_ = 1;
        var2 = arg0->unknown_30_;
        arg0->unknown_30_ = func_0205bd78(arg0, var0, var1);
        if (arg0->unknown_30_ < 0) {
            arg0->unknown_4e_ = 0;
            return 0;
        }
        arg0->unknown_4c_ = 1;
        if (var2 != arg0->unknown_30_) arg0->unknown_4c_ = 0;
        return 1;
    }

    arg0->unknown_4c_ = 0;
    arg0->unknown_4e_ = 0;
    return 0;
}
