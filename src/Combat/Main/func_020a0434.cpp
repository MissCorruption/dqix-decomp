#include <globaldefs.h>

struct Struct_020a0434 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 23;
    unsigned int unknown_12_7_ : 9;
};

// USA: func_020a0434
extern "C" ARM void func_020a0434(struct Struct_020a0434* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_12_7_ + arg1;
    if (var0 > 0x1f4) {
        var0 = 0x1f4;
    }
    arg0->unknown_12_7_ = var0;
}
