#include <globaldefs.h>

struct Struct_020a0674 {
    char unknown_0_[0x28];
    unsigned int unknown_28_0_ : 12;
    unsigned int unknown_29_4_ : 20;
};

// USA: func_020a0674
extern "C" ARM void func_020a0674(struct Struct_020a0674* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_28_0_ + arg1;
    if (var0 > 0xfff) {
        var0 = 0xfff;
    }
    arg0->unknown_28_0_ = var0;
}
