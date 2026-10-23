#include <globaldefs.h>

struct Struct_020a03f8 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 14;
    unsigned int unknown_12_7_ : 9;
};

// USA: func_020a03f8
extern "C" ARM void func_020a03f8(struct Struct_020a03f8* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_11_1_ + arg1;
    if (var0 > 0x270f) {
        var0 = 0x270f;
    }
    arg0->unknown_11_1_ = var0;
}
