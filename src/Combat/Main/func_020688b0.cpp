#include <globaldefs.h>

struct Struct_020688b0_2 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
};

struct Struct_020688b0 {
    char unknown_0_[0x10];
    struct Struct_020688b0_2* unknown_10_;
};

// USA: func_020688b0
extern "C" ARM int func_020688b0(int arg0, struct Struct_020688b0* arg1) {
    struct Struct_020688b0_2* var0 = arg1->unknown_10_;
    if (var0 != 0) {
        return var0->unknown_b_0_;
    }
    return 0;
}
