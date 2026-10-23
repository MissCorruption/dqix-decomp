#include <globaldefs.h>

struct Struct_020b0eb4_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_020b0eb4_2* unknown_4_;
    unsigned char unknown_8_[4];
};

struct Struct_020b0eb4 {
    unsigned char unknown_0_[0xc];
    struct Struct_020b0eb4_2* unknown_c_;
};

// USA: func_020b0eb4
extern "C" ARM void* func_020b0eb4(struct Struct_020b0eb4** arg0, unsigned int arg1) {
    struct Struct_020b0eb4_2* var0 = (*arg0)->unknown_c_;
    if (var0 != NULL) {
        do {
            if (var0->unknown_0_ <= arg1 && arg1 <= var0->unknown_2_) {
                return (char*)var0 + 8 + (arg1 - var0->unknown_0_) * 3;
            }
            var0 = var0->unknown_4_;
        } while (var0 != NULL);
    }
    return (char*)*arg0 + 4;
}
