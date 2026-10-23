#include <globaldefs.h>

struct Struct_02059720 {
    char unknown_0_[4];
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned char unknown_c_;
};

// USA: func_02059a2c
extern "C" ARM int func_02059a2c(struct Struct_02059720* arg0) {
    if (arg0->unknown_c_ != 0) return 0;
    return arg0->unknown_8_ <= arg0->unknown_4_;
}
