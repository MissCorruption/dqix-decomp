#include <globaldefs.h>

struct Struct_020a00d4 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 16;
    unsigned int unknown_12_0_ : 16;
};

// USA: func_020a00d4
extern "C" ARM void func_020a00d4(struct Struct_020a00d4* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_10_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_10_0_ = var0;
}
