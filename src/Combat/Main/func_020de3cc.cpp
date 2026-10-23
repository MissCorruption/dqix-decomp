#include <globaldefs.h>

struct Struct_020de3cc {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 8;
    unsigned int : 4;
};

// USA: func_020de3cc
extern "C" ARM int func_020de3cc(struct Struct_020de3cc* arg0, int arg1, int arg2, int arg3) {
    return arg1 == arg0->unknown_12_4_ && arg2 == arg0->unknown_10_0_ && arg3 == arg0->unknown_11_2_;
}
