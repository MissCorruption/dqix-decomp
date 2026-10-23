#include <globaldefs.h>

struct Struct_0209fffc {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 16;
    unsigned int unknown_a_0_ : 16;
};

// USA: func_0209fffc
extern "C" ARM void func_0209fffc(struct Struct_0209fffc* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_8_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_8_0_ = var0;
}
