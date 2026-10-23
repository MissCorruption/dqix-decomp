#include <globaldefs.h>

struct Struct_020a83b0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[0x2a];
};

struct Struct_020a83b0 {
    struct Struct_020a83b0_2 *unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_020a83b0
extern "C" ARM struct Struct_020a83b0_2* func_020a83b0(struct Struct_020a83b0 *arg0, int arg1) {
    int var0;
    if (arg1 < 0) {
        return 0;
    }
    for (var0 = 0; var0 < arg0->unknown_6_; var0++) {
        struct Struct_020a83b0_2 *var1 = &arg0->unknown_0_[var0];
        if (arg1 == var1->unknown_1_) {
            return var1;
        }
    }
    return 0;
}
