#include <globaldefs.h>

struct Struct_020a0858 {
    char unknown_0_[0x48];
    unsigned int unknown_48_;
};

// USA: func_020a0858
extern "C" ARM void func_020a0858(struct Struct_020a0858* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_48_;
    unsigned int var1 = arg1 + var0;
    if (var1 < var0) {
        var1 = 0xffffffff;
    }
    arg0->unknown_48_ = var1;
}
