#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"

extern "C" ARM void func_020c1128(const Struct_0205ac40_3* arg0, Struct_0205ac40_3* arg1,
                               fix32_t arg2, fix32_t arg3) {
    arg1->unknown_0_[0] = FIX32_MULTIPLY_SIMPLE(arg2, arg0->unknown_0_[0]);
    arg1->unknown_0_[1] = FIX32_MULTIPLY_SIMPLE(arg2, arg0->unknown_0_[1]);
    arg1->unknown_0_[2] = FIX32_MULTIPLY_SIMPLE(arg3, arg0->unknown_0_[2]);
    arg1->unknown_0_[3] = FIX32_MULTIPLY_SIMPLE(arg3, arg0->unknown_0_[3]);
}
