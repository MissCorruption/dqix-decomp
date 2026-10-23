#include <globaldefs.h>

struct Struct_020a01ec {
    char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 16;
    unsigned int unknown_1a_0_ : 16;
};

// USA: func_020a01ec
extern "C" ARM void func_020a01ec(struct Struct_020a01ec* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_18_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_18_0_ = var0;
}
