#include <globaldefs.h>

struct Struct_0202811c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_02028104 {
    char unknown_0_[0x20];
    int unknown_20_;
    char unknown_24_[1];
    unsigned char unknown_25_;
    char unknown_26_[2];
    struct Struct_0202811c* unknown_28_;
};

// USA: func_0202811c
extern "C" ARM void func_0202811c(struct Struct_02028104* arg0) {
    int var0;
    struct Struct_0202811c* var1;
    arg0->unknown_20_ = 1;
    var1 = arg0->unknown_28_;
    if (var1 == NULL) return;
    for (var0 = 0; var0 < arg0->unknown_25_; var0++) {
        struct Struct_0202811c* var2 = &var1[var0];
        if (var2->unknown_0_ != var2->unknown_2_) {
            arg0->unknown_20_ = 0;
            return;
        }
    }
}
