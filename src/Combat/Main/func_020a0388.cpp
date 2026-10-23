#include <globaldefs.h>

struct Struct_020a0388 {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 14;
    unsigned int unknown_d_6_ : 14;
    unsigned int unknown_f_4_ : 4;
};

// USA: func_020a0388
extern "C" ARM void func_020a0388(struct Struct_020a0388* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_d_6_ + arg1;
    if (var0 > 0x270f) {
        var0 = 0x270f;
    }
    arg0->unknown_d_6_ = var0;
}
