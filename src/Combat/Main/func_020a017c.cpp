#include <globaldefs.h>

struct Struct_020a017c {
    char unknown_0_[0x14];
    unsigned int unknown_14_0_ : 10;
    unsigned int unknown_15_2_ : 10;
    unsigned int unknown_16_4_ : 12;
};

// USA: func_020a017c
extern "C" ARM void func_020a017c(struct Struct_020a017c* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_15_2_ + arg1;
    if (var0 > 0x3ff) {
        var0 = 0x3ff;
    }
    arg0->unknown_15_2_ = var0;
}
