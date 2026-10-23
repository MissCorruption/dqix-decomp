#include <globaldefs.h>

struct Struct_020de3ac {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 8;
};

// USA: func_020de3ac
extern "C" ARM int func_020de3ac(struct Struct_020de3ac* arg0, int arg1, int arg2, int arg3) {
    return arg0->unknown_12_4_ == arg1 && arg0->unknown_11_2_ == arg3;
}
