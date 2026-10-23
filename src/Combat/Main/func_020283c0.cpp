#include <globaldefs.h>

struct Struct_020283c0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xF];
};

struct Struct_0201a300_11 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    struct Struct_020283c0* unknown_4_;
};

// USA: func_020283c0
extern "C" ARM struct Struct_020283c0* func_020283c0(struct Struct_0201a300_11* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_2_; var0++) {
        struct Struct_020283c0* var1 = arg0->unknown_4_;
        if (arg1 == var1[var0].unknown_0_) {
            return &var1[var0];
        }
    }
    return NULL;
}
