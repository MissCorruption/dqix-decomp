#include <globaldefs.h>

struct Struct_020a07b0 {
    char unknown_0_[0x38];
    unsigned int unknown_38_0_ : 24;
    unsigned int unknown_3b_0_ : 8;
};

// USA: func_020a07b0
extern "C" ARM void func_020a07b0(struct Struct_020a07b0* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_38_0_ + arg1;
    if (var0 > 0xffffff) {
        var0 = 0xffffff;
    }
    arg0->unknown_38_0_ = var0;
}
