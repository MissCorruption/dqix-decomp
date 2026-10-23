#include <globaldefs.h>

struct Struct_02037d88_3 {
    char unknown_0_[0x28];
    unsigned int unknown_28_0_ : 12;
    unsigned int unknown_29_4_ : 10;
    unsigned int unknown_2a_6_ : 10;
};

// USA: func_020a06b0
extern "C" ARM void func_020a06b0(struct Struct_02037d88_3* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_29_4_ + arg1;
    if (var0 > 0x3ff) {
        var0 = 0x3ff;
    }
    arg0->unknown_29_4_ = var0;
}
