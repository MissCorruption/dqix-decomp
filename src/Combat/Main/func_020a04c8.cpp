#include <globaldefs.h>

struct Struct_0206e424_4 {
    char unknown_0_[0x14];
    unsigned int unknown_14_0_ : 18;
    unsigned int unknown_16_2_ : 11;
    unsigned int unknown_17_5_ : 3;
};

// USA: func_020a04c8
extern "C" ARM void func_020a04c8(struct Struct_0206e424_4* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_16_2_ + arg1;
    if (var0 > 0x5dc) {
        var0 = 0x5dc;
    }
    arg0->unknown_16_2_ = var0;
}
