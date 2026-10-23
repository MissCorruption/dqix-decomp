#include <globaldefs.h>

struct Struct_020a02d0 {
    char unknown_0_[0x20];
    unsigned int unknown_20_0_ : 24;
    unsigned int unknown_23_0_ : 8;
};

// USA: func_020a02d0
extern "C" ARM void func_020a02d0(struct Struct_020a02d0* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_20_0_ + arg1;
    if (var0 > 0xffffff) {
        var0 = 0xffffff;
    }
    arg0->unknown_20_0_ = var0;
}
