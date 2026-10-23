#include <globaldefs.h>

struct Struct_020dfec0_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
};

// USA: func_020dffb8
extern "C" ARM int func_020dffb8(struct Struct_020dfec0_2 *arg0) {
    return arg0->unknown_0_0_ * 8;
}
