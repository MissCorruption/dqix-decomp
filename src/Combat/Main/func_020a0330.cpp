#include <globaldefs.h>

struct Struct_020a0330 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 8;
};

// USA: func_020a0330
extern "C" ARM void func_020a0330(struct Struct_020a0330* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_8_0_ + arg1;
    if (var0 > 0x1869f) {
        var0 = 0x1869f;
    }
    arg0->unknown_8_0_ = var0;
}
