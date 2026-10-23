#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"

extern "C" THUMB void func_020c111c(Struct_0205ac40_3* arg0, fix32_t arg1, fix32_t arg2) {
    arg0->unknown_0_[0] = arg2;
    arg0->unknown_0_[1] = arg1;
    arg0->unknown_0_[2] = -arg1;
    arg0->unknown_0_[3] = arg2;
}
