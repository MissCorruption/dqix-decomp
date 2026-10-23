#include <globaldefs.h>

struct Struct_02037d88_4 {
    char unknown_0_[0x14];
    unsigned int unknown_14_0_ : 10;
    unsigned int unknown_15_2_ : 22;
};

// USA: func_020a0140
extern "C" ARM void func_020a0140(struct Struct_02037d88_4* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_14_0_ + arg1;
    if (var0 > 0x3ff) {
        var0 = 0x3ff;
    }
    arg0->unknown_14_0_ = var0;
}
