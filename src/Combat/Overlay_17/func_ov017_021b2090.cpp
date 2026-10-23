#include <globaldefs.h>

struct Struct_ov004_021589e8 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_  : 4;
    unsigned int unknown_2_0_  : 5;
    unsigned int unknown_2_5_  : 5;
    unsigned int unknown_3_2_  : 6;
};

// USA: func_ov017_021b2090
// JPN: func_ov017_021b27b0
extern "C" ARM int func_ov017_021b2090(Struct_ov004_021589e8 arg0, Struct_ov004_021589e8 arg1) {
    if (arg0.unknown_0_0_ < arg1.unknown_0_0_) return 1;
#if !defined(jpn)
    if (arg0.unknown_0_0_ > arg1.unknown_0_0_) return 0;
#endif
    unsigned int var0 = 0;
    var0 = arg0.unknown_1_4_ * 1000000 + var0;
    var0 = arg0.unknown_2_0_ * 10000 + var0;
    var0 = arg0.unknown_2_5_ * 100 + var0;
    var0 = arg0.unknown_3_2_ + var0;
    unsigned int var1 = 0;
    var1 = arg1.unknown_1_4_ * 1000000 + var1;
    var1 = arg1.unknown_2_0_ * 10000 + var1;
    var1 = arg1.unknown_2_5_ * 100 + var1;
    var1 = arg1.unknown_3_2_ + var1;
    if ((int)var0 < (int)var1) return 1;
    return 0;
}
