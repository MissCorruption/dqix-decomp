#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205bd20 {
    char unknown_0_[0x4c];
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    unsigned char unknown_4e_;
};

// USA: func_0205bd20
extern "C" ARM int func_0205bd20(struct Struct_0205bd20* arg0, int arg1) {
    int var0 = 0;
    if (g_touchInput.pressed_ != 0 && arg0->unknown_4e_ == 1 && arg0->unknown_4c_ != 0) {
        var0 = 1;
    }
    return var0;
}
