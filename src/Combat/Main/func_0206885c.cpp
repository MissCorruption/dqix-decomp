#include <globaldefs.h>

struct Struct_0206885c_2 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
};

struct Struct_0206885c {
    char unknown_0_[0x8];
    struct Struct_0206885c_2* unknown_8_;
};

// USA: func_0206885c
extern "C" ARM int func_0206885c(int arg0, struct Struct_0206885c* arg1) {
    struct Struct_0206885c_2* var0 = arg1->unknown_8_;
    if (var0 != 0) {
        return var0->unknown_b_0_;
    }
    return 0;
}
