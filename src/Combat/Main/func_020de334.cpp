#include <globaldefs.h>

struct Struct_020de334 {
    unsigned int unknown_0_[2];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
};

// USA: func_020de334
extern "C" ARM int func_020de334(struct Struct_020de334* arg0, int arg1, int arg2, int arg3) {
    return arg0->unknown_8_4_ == arg3;
}
