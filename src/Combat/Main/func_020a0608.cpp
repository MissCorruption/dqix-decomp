#include <globaldefs.h>

struct Struct_020a0608 {
    char unknown_0_[0x24];
    unsigned int unknown_24_0_ : 16;
    unsigned int unknown_26_0_ : 16;
};

// USA: func_020a0608
extern "C" ARM void func_020a0608(struct Struct_020a0608* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_24_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_24_0_ = var0;
}
