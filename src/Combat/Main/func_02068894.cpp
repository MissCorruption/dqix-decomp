#include <globaldefs.h>

struct Struct_02068894_2 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
};

struct Struct_02068894 {
    struct Struct_02068894_2* unknown_0_;
};

// USA: func_02068894
extern "C" ARM int func_02068894(int arg0, struct Struct_02068894* arg1) {
    struct Struct_02068894_2* var0 = arg1->unknown_0_;
    if (var0 != 0) {
        return var0->unknown_b_0_;
    }
    return 0;
}
