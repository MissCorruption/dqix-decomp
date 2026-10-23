#include <globaldefs.h>

struct Struct_020a03c4 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 23;
};

// USA: func_020a03c4
extern "C" ARM void func_020a03c4(struct Struct_020a03c4* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_10_0_ + arg1;
    if (var0 > 0x1f4) {
        var0 = 0x1f4;
    }
    arg0->unknown_10_0_ = var0;
}
