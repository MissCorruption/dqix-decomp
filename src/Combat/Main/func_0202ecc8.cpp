#include <globaldefs.h>

struct Struct_0202ecc8 {
    unsigned int unknown_0_[12];
};

struct Struct_0202ecc8_2 {
    char unknown_0_[0xf0];
    struct Struct_0202ecc8 unknown_f0_;
};

// USA: func_0202ecc8
extern "C" ARM void func_0202ecc8(struct Struct_0202ecc8_2* arg0, struct Struct_0202ecc8* arg1) {
    arg0->unknown_f0_ = *arg1;
}
