#include <globaldefs.h>

struct Struct_020a0840 {
    char unknown_0_[0x44];
    unsigned int unknown_44_;
};

// USA: func_020a0840
extern "C" ARM void func_020a0840(struct Struct_020a0840* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_44_;
    unsigned int var1 = arg1 + var0;
    if (var1 < var0) {
        var1 = 0xffffffff;
    }
    arg0->unknown_44_ = var1;
}
