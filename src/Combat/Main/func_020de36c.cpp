#include <globaldefs.h>

struct Struct_020de36c {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
};

// USA: func_020de36c
extern "C" ARM int func_020de36c(struct Struct_020de36c* arg0, int arg1, int arg2, int arg3) {
    return arg1 == arg0->unknown_8_0_ && arg3 == arg0->unknown_8_4_;
}
