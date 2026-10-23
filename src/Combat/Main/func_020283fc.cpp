#include <globaldefs.h>

struct Struct_020283fc_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xF];
};

struct Struct_020283fc {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    struct Struct_020283fc_2* unknown_4_;
};

// USA: func_020283fc
extern "C" ARM int func_020283fc(struct Struct_020283fc* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_2_; var0++) {
        if (arg1 == arg0->unknown_4_[var0].unknown_0_) {
            return var0;
        }
    }
    return -1;
}
