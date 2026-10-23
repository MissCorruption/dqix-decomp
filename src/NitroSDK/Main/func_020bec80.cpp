#include <globaldefs.h>

struct Struct_020bec80 { char unknown_0_[0x14c]; int unknown_14c_; };
struct Struct_020bec80_2 { struct Struct_020bec80 *unknown_0_; };

// USA: func_020bec80
extern "C" ARM void func_020bec80(struct Struct_020bec80_2 *arg0) {
    struct Struct_020bec80 *var0 = arg0->unknown_0_;
    if (var0 != NULL) {
        var0->unknown_14c_ = 0;
        arg0->unknown_0_ = NULL;
    }
}
