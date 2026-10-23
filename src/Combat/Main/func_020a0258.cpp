#include <globaldefs.h>

struct Struct_020a0258 {
    char unknown_0_[0x1c];
    unsigned int unknown_1c_0_ : 10;
    unsigned int unknown_1d_2_ : 22;
};

// USA: func_020a0258
extern "C" ARM void func_020a0258(struct Struct_020a0258* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_1c_0_ + arg1;
    if (var0 > 0x3ff) {
        var0 = 0x3ff;
    }
    arg0->unknown_1c_0_ = var0;
}
