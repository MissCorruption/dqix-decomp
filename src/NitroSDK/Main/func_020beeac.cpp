#include <globaldefs.h>

struct Struct_020beeac { int unknown_0_; };
struct Struct_020beeac_2 {
    char unknown_0_[0x110];
    unsigned int unknown_110_;
    char unknown_114_[0x38];
    struct Struct_020beeac *unknown_14c_;
};

// USA: func_020beeac
extern "C" ARM void func_020beeac(struct Struct_020beeac_2 *arg0) {
    struct Struct_020beeac *var0 = arg0->unknown_14c_;
    if (var0 != NULL) {
        var0->unknown_0_ = 0;
        arg0->unknown_14c_ = NULL;
    }
    arg0->unknown_110_ &= ~0x1;
    arg0->unknown_110_ &= ~0x4;
    arg0->unknown_110_ &= ~0x2;
}
