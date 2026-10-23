#include <globaldefs.h>

struct Struct_020725d8_2 {
    signed short unknown_0_;
    char unknown_2_[0x2a];
};

struct Struct_020725d8 {
    struct Struct_020725d8_2* unknown_0_;
    short unknown_4_;
};

// USA: func_020725d8
extern "C" ARM struct Struct_020725d8_2* func_020725d8(struct Struct_020725d8* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) {
            return &arg0->unknown_0_[var0];
        }
    }
    return 0;
}
