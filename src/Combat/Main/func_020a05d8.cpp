#include <globaldefs.h>

struct Struct_020a05d8 {
    char unknown_0_[0x20];
    unsigned int unknown_20_0_ : 16;
    unsigned int unknown_22_0_ : 16;
};

// USA: func_020a05d8
extern "C" ARM void func_020a05d8(struct Struct_020a05d8* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_22_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_22_0_ = var0;
}
