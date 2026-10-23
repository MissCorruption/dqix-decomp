#include <globaldefs.h>

struct Struct_ov000_0217fbf4 {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[0x10 - 0xe];
    signed char unknown_10_[8];
    signed char unknown_18_;
    char unknown_19_[0x24 - 0x19];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct Struct_ov000_0217fbf4_2 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x958 - 0x70];
    struct Struct_ov000_0217fbf4 unknown_958_[4];
};

// USA: func_ov000_0217fbf4
extern "C" ARM void func_ov000_0217fbf4(struct Struct_ov000_0217fbf4_2* arg0, int arg1) {
    if (arg1 < 0) {
        int var0;
        for (var0 = 0; var0 < 4; var0++) {
            struct Struct_ov000_0217fbf4* var1 = &arg0->unknown_958_[arg0->unknown_6c_[var0]];
            if (var1->unknown_4c_ >= 0) {
                var1->unknown_24_ |= 1;
                if (var1->unknown_c_ == 0) {
                    var1->unknown_10_[var1->unknown_18_] = 100;
                    var1->unknown_24_ &= ~4;
                    var1->unknown_24_ &= ~1;
                }
            }
        }
        return;
    }
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        struct Struct_ov000_0217fbf4* var3 = &arg0->unknown_958_[arg0->unknown_6c_[var2]];
        if (arg1 == var3->unknown_4c_) {
            var3->unknown_24_ |= 1;
            return;
        }
    }
}
