#include <globaldefs.h>

struct Struct_020a0810 {
    char unknown_0_[0x40];
    unsigned int unknown_40_0_ : 24;
    unsigned int unknown_43_0_ : 8;
};

// USA: func_020a0810
extern "C" ARM void func_020a0810(struct Struct_020a0810* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_40_0_ + arg1;
    if (var0 > 0xffffff) {
        var0 = 0xffffff;
    }
    arg0->unknown_40_0_ = var0;
}
