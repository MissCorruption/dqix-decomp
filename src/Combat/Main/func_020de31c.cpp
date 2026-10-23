#include <globaldefs.h>

struct Struct_020de31c {
    unsigned int unknown_0_[2];
    unsigned int unknown_8_0_ : 4;
};

// USA: func_020de31c
extern "C" ARM int func_020de31c(struct Struct_020de31c* arg0, int arg1) {
    return arg0->unknown_8_0_ == arg1;
}
