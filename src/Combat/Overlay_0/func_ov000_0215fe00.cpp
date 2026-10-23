#include <globaldefs.h>

struct Struct_ov000_0215a88c {
    char unknown_0_[4];
    struct Struct_ov000_0215a88c* unknown_4_;
};
struct Struct_ov000_0215a88c_3 {
    char unknown_0_[8];
    struct Struct_ov000_0215a88c* unknown_8_;
    char unknown_c_[0x13];
    unsigned char unknown_1f_;
};

// USA: func_ov000_0215fe00
extern "C" ARM void func_ov000_0215fe00(struct Struct_ov000_0215a88c_3* arg0, struct Struct_ov000_0215a88c* arg1) {
    struct Struct_ov000_0215a88c** var0 = &arg0->unknown_8_;
    while (*var0 != NULL) {
        var0 = &(*var0)->unknown_4_;
    }
    *var0 = arg1;
    arg0->unknown_1f_++;
}
