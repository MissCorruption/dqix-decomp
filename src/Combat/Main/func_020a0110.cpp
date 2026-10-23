#include <globaldefs.h>

struct Struct_020a0110 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 16;
    unsigned int unknown_12_0_ : 16;
};

// USA: func_020a0110
extern "C" ARM void func_020a0110(struct Struct_020a0110* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_12_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_12_0_ = var0;
}
