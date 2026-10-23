#include <globaldefs.h>

struct Struct_0205d0e0 {
    char unknown_0_[0xC4];
    unsigned char unknown_c4_;
    char unknown_c5_[0xE0 - 0xC5];
};

struct Struct_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct Struct_0205d0e0* unknown_9c_;
    char unknown_a0_[0xB3 - 0xA0];
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
};

// USA: func_0205d81c
extern "C" ARM struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1) {
    unsigned char var0;
    if (arg0->unknown_98_ == 0) return 0;
    if (arg0->unknown_9c_ == 0) return 0;
    for (var0 = 0; var0 < arg0->unknown_b3_; var0++) {
        if (var0 == arg0->unknown_b4_) break;
        if (arg1 == arg0->unknown_9c_[var0].unknown_c4_) return &arg0->unknown_9c_[var0];
    }
    return 0;
}
