#include <globaldefs.h>

extern "C" void func_02059f54(void* arg0, int arg1);

struct Struct_02057a6c_2 {
    char unknown_0_[0xb2];
    short unknown_b2_;                 // 0xb2
    char unknown_b4_[0x18];            // 0xb4..0xcb
    unsigned char unknown_cc_0_ : 1;       // 0xcc bit0
    unsigned char unknown_cc_1_ : 1;       // bit1 (0x2)
    unsigned char unknown_cc_2_ : 1;
    unsigned char unknown_cc_3_ : 1;
    unsigned char unknown_cc_4_ : 1;
    unsigned char unknown_cc_5_ : 1;
    unsigned char unknown_cc_6_ : 1;
    unsigned char unknown_cc_7_ : 1;
    char unknown_cd_[7];               // 0xcd..0xd3
};

struct Struct_02057a6c {
    char unknown_0_[8];
    struct Struct_02057a6c_2 unknown_8_[16];
};

// USA: func_02057a6c
extern "C" ARM void func_02057a6c(struct Struct_02057a6c* arg0) {
    int var0;
    for (var0 = 0; var0 < 16; var0++) {
        if (arg0->unknown_8_[var0].unknown_cc_1_) {
            func_02059f54(&arg0->unknown_8_[var0], var0 + 0xd0);
        }
    }
}
