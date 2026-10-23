#include <globaldefs.h>

struct Struct_020bc2f0 {
    char unknown_0_[8];
    int unknown_8_;
    int unknown_c_;
};

// USA: func_020c0278
extern "C" ARM int func_020c0278(struct Struct_020bc2f0* arg0) {
    return arg0->unknown_8_ >= arg0->unknown_c_;
}
