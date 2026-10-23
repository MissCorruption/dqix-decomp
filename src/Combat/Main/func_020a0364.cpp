#include <globaldefs.h>

struct Struct_02095ff0 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 8;
};

// USA: func_020a0364
extern "C" ARM void func_020a0364(struct Struct_02095ff0* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_b_0_ + arg1;
    if (var0 > 0xfa) {
        var0 = 0xfa;
    }
    arg0->unknown_b_0_ = var0;
}
