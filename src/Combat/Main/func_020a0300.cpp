#include <globaldefs.h>

struct Struct_020a0300 {
    char unknown_0_[0x24];
    unsigned int unknown_24_0_ : 24;
    unsigned int unknown_27_0_ : 8;
};

// USA: func_020a0300
extern "C" ARM void func_020a0300(struct Struct_020a0300* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_24_0_ + arg1;
    if (var0 > 0xffffff) {
        var0 = 0xffffff;
    }
    arg0->unknown_24_0_ = var0;
}
