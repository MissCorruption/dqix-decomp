#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"

extern const fix16_t data_020e9450[4096 * 2];

static inline fix32_t inline_0205b0d8(int arg0) {
    return data_020e9450[arg0 * 2];
}

static inline fix32_t inline_0205b0d8_2(int arg0) {
    return data_020e9450[arg0 * 2 + 1];
}

extern "C" ARM void func_0205b0d8(Struct_0205ac40* arg0, Struct_0205ac40_3* arg1,
                                  Struct_0205ac40_3* arg2, Struct_0205ac40_2* arg3) {
    Struct_0205ac40_3 var0;
    if (arg3 != NULL && arg1 != NULL && arg2 != NULL) {
        func_020c111c(&var0, inline_0205b0d8(arg3->unknown_1c_ >> 4), inline_0205b0d8_2(arg3->unknown_1c_ >> 4));
        func_020c1128(&var0, arg1, arg3->unknown_c_, arg3->unknown_10_);
        func_020c1128(&var0, arg2,
                              fix32_Divide(0x1000, arg3->unknown_c_),
                              fix32_Divide(0x1000, arg3->unknown_10_));
    }
}
