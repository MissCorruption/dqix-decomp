#include <globaldefs.h>

struct Struct_0205c508 {
    int unknown_0_;
    unsigned char unknown_4_[4];
    int unknown_8_;
    int unknown_c_;
    unsigned char unknown_10_[4];
    int unknown_14_;
};

// USA: func_0205c508
extern "C" ARM void func_0205c508(struct Struct_0205c508* arg0, int* arg1, int* arg2) {
    int var0 = arg0->unknown_8_ * arg0->unknown_c_;
    int var1 = var0 * arg0->unknown_14_;
    *arg1 = var1;
    *arg2 = var1 + var0;
    if (arg0->unknown_0_ < *arg2) {
        *arg2 = arg0->unknown_0_;
    }
}
