#include <globaldefs.h>

struct Struct_020a0038 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 16;
    unsigned int unknown_a_0_ : 16;
};

// USA: func_020a0038
extern "C" ARM void func_020a0038(struct Struct_020a0038* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_a_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_a_0_ = var0;
}
