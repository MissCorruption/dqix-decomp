#include <globaldefs.h>

struct Struct_02089fb0 {
    signed char unknown_0_;
    unsigned char unknown_1_[0x3f];
};

struct Struct_02086f24_5 {
    struct Struct_02089fb0* unknown_0_;
    short unknown_4_;
};

// USA: func_02089fb0
extern "C" ARM struct Struct_02089fb0* func_02089fb0(struct Struct_02086f24_5* arg0, int arg1) {
    short var0;
    if (arg1 < 0) {
        return 0;
    }
    if (arg0->unknown_0_ == 0) {
        return 0;
    }
    if (arg0->unknown_4_ == 0) {
        return 0;
    }
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        signed char var1 = arg0->unknown_0_[var0].unknown_0_;
        if (var1 == arg1) {
            return &arg0->unknown_0_[var0];
        }
    }
    return 0;
}
