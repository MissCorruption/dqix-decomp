#include <globaldefs.h>

struct Struct_020a01b8 {
    char unknown_0_[0x14];
    unsigned int unknown_14_0_ : 20;
    unsigned int unknown_16_4_ : 12;
};

// USA: func_020a01b8
extern "C" ARM void func_020a01b8(struct Struct_020a01b8* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_16_4_ + arg1;
    if (var0 > 0xfff) {
        var0 = 0xfff;
    }
    arg0->unknown_16_4_ = var0;
}
