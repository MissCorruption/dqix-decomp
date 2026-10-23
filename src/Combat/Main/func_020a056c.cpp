#include <globaldefs.h>

struct Struct_020a056c {
    char unknown_0_[0x1c];
    unsigned int unknown_1c_0_ : 16;
    unsigned int unknown_1e_0_ : 16;
};

// USA: func_020a056c
extern "C" ARM void func_020a056c(struct Struct_020a056c* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_1e_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_1e_0_ = var0;
}
