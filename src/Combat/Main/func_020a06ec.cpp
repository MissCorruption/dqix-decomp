#include <globaldefs.h>

struct Struct_020a06ec {
    char unknown_0_[0x28];
    unsigned int unknown_28_0_ : 22;
    unsigned int unknown_2a_6_ : 10;
};

// USA: func_020a06ec
extern "C" ARM void func_020a06ec(struct Struct_020a06ec* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_2a_6_ + arg1;
    if (var0 > 0x3ff) {
        var0 = 0x3ff;
    }
    arg0->unknown_2a_6_ = var0;
}
