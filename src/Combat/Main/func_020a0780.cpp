#include <globaldefs.h>

struct Struct_020a0780 {
    char unknown_0_[0x34];
    unsigned int unknown_34_0_ : 24;
    unsigned int unknown_37_0_ : 8;
};

// USA: func_020a0780
extern "C" ARM void func_020a0780(struct Struct_020a0780* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_34_0_ + arg1;
    if (var0 > 0xffffff) {
        var0 = 0xffffff;
    }
    arg0->unknown_34_0_ = var0;
}
