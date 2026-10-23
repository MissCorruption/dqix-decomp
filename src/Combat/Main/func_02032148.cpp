#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_02032148 { fix32_t unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_; };

// USA: func_02032148
extern "C" ARM int func_02032148(const Vector3fix* arg0, const struct Struct_02032148* arg1, int arg2) {
    if (arg1->unknown_4_ > arg0->y) { return 0; }
    if (arg1->unknown_4_ + arg1->unknown_10_ < arg0->y) { return 0; }

    fix32_t var0 = arg0->x - arg1->unknown_0_;
    fix32_t var1 = arg0->z - arg1->unknown_8_;
    var1 = FIX32_MULTIPLY(var1, var1);
    var0 = FIX32_MULTIPLY(var0, var0);
    return FIX32_MULTIPLY(arg1->unknown_c_, arg1->unknown_c_) >= var0 + var1;
}
