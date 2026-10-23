#include <globaldefs.h>

struct Struct_020a0504 {
    char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 9;
    unsigned int unknown_19_1_ : 7;
    unsigned int unknown_1a_0_ : 16;
};

// USA: func_020a0504
extern "C" ARM void func_020a0504(struct Struct_020a0504* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_19_1_ + arg1;
    if (var0 > 100) {
        var0 = 100;
    }
    arg0->unknown_19_1_ = var0;
}
