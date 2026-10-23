#include <globaldefs.h>

struct Struct_0207cc18_3 {
    char unknown_0_[0x14];
    unsigned int unknown_14_0_ : 9;
    unsigned int unknown_15_1_ : 9;
    unsigned int unknown_16_2_ : 14;
};

// USA: func_020a0494
extern "C" ARM void func_020a0494(struct Struct_0207cc18_3* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_15_1_ + arg1;
    if (var0 > 0x1f4) {
        var0 = 0x1f4;
    }
    arg0->unknown_15_1_ = var0;
}
