#include <globaldefs.h>

struct Struct_02068878_2 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
    unsigned int unknown_b_2_ : 6;
};

struct Struct_02068878 {
    struct Struct_02068878_2* unknown_0_;
};

// USA: func_02068878
extern "C" ARM int func_02068878(int arg0, struct Struct_02068878* arg1) {
    struct Struct_02068878_2* var0 = arg1->unknown_0_;
    return var0 != 0 ? var0->unknown_b_0_ : 0;
}
