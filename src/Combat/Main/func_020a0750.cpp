#include <globaldefs.h>

struct Struct_020a0750 {
    char unknown_0_[0x30];
    unsigned int unknown_30_0_ : 24;
    unsigned int unknown_33_0_ : 8;
};

// USA: func_020a0750
extern "C" ARM void func_020a0750(struct Struct_020a0750* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_30_0_ + arg1;
    if (var0 > 0xffffff) {
        var0 = 0xffffff;
    }
    arg0->unknown_30_0_ = var0;
}
