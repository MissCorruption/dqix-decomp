#include <globaldefs.h>

struct Struct_020a0294 {
    char unknown_0_[0x1c];
    unsigned int unknown_1c_0_ : 10;
    unsigned int unknown_1d_2_ : 16;
    unsigned int unknown_1f_2_ : 6;
};

// USA: func_020a0294
extern "C" ARM void func_020a0294(struct Struct_020a0294* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_1d_2_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_1d_2_ = var0;
}
