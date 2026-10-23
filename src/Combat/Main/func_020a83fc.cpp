#include <globaldefs.h>

struct Struct_020a83fc_2 {
    unsigned char unknown_0_[0x18];
    unsigned short unknown_18_;   // 0x18
    unsigned char unknown_1a_[0x2c - 0x1a];
};

struct Struct_020a83fc {
    struct Struct_020a83fc_2* unknown_0_;  // 0x0
    unsigned short unknown_4_;          // 0x4
    unsigned short unknown_6_;           // 0x6
};

// USA: func_020a83fc
extern "C" ARM struct Struct_020a83fc_2* func_020a83fc(struct Struct_020a83fc* arg0, int arg1) {
    struct Struct_020a83fc_2* var0 = arg0->unknown_0_;
    int var1;
    if (arg1 == 0x16a9) arg1 = 0x708;
    if (arg1 == 0x119a) arg1 = 0x708;
    for (var1 = 0; var1 < arg0->unknown_6_; var1++, var0++) {
        if (var0->unknown_18_ == arg1) return var0;
    }
    return NULL;
}
