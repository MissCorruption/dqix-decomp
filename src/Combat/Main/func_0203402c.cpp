#include <globaldefs.h>

struct Struct_0203402c {
    char unknown_0_[0xc4];
    unsigned short unknown_c4_0_ : 15;
    unsigned short unknown_c5_7_ : 1;
};

// USA: func_0203402c
extern "C" ARM int func_0203402c(struct Struct_0203402c* arg0) {
    return arg0->unknown_c4_0_ != 0;
}
