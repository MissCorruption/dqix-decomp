#include <globaldefs.h>

struct Struct_020a059c {
    char unknown_0_[0x20];
    unsigned int unknown_20_0_ : 16;
    unsigned int unknown_22_0_ : 16;
};

// USA: func_020a059c
extern "C" ARM void func_020a059c(struct Struct_020a059c* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_20_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_20_0_ = var0;
}
