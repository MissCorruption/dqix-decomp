#include <globaldefs.h>

struct Struct_02028430_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xF];
};

struct Struct_02028430 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    struct Struct_02028430_2* unknown_4_;
};

// USA: func_02028430
extern "C" ARM struct Struct_02028430_2* func_02028430(struct Struct_02028430* arg0, int arg1) {
    struct Struct_02028430_2* var0;
    if (arg1 < 0 || arg0->unknown_2_ <= arg1) {
        return NULL;
    }
    var0 = arg0->unknown_4_;
    if (var0 != NULL) {
        return &var0[arg1];
    }
    return NULL;
}
