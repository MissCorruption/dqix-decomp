#include <globaldefs.h>

struct Struct_020a07e0 {
    char unknown_0_[0x3c];
    unsigned int unknown_3c_0_ : 24;
    unsigned int unknown_3f_0_ : 8;
};

// USA: func_020a07e0
extern "C" ARM void func_020a07e0(struct Struct_020a07e0* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_3c_0_ + arg1;
    if (var0 > 0xffffff) {
        var0 = 0xffffff;
    }
    arg0->unknown_3c_0_ = var0;
}
