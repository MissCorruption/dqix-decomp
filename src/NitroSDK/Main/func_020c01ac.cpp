#include <globaldefs.h>

struct Struct_020be7a8 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_020be7a8_2 {
    char unknown_0_[0x1c];
    unsigned int unknown_1c_;
    struct Struct_020be7a8 unknown_20_[1];
};

// USA: func_020c01ac
extern "C" ARM struct Struct_020be7a8 *func_020c01ac(struct Struct_020be7a8_2 *arg0, int arg1) {
    struct Struct_020be7a8 *var0;
    if (arg1 < 0) {
        return NULL;
    }
    if (arg1 >= arg0->unknown_1c_) {
        return NULL;
    }
    var0 = &arg0->unknown_20_[arg1];
    if (var0->unknown_0_ == -1) {
        return NULL;
    }
    return var0;
}
