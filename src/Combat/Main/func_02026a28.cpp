#include <globaldefs.h>

struct Struct_02026a28_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[24];
};

struct Struct_02026a28 {
#if defined(jpn)
    unsigned char unknown_0_[0x6d4];
#else
    unsigned char unknown1_0_[0x780];
#endif
    unsigned char unknown_780_;
    unsigned char unknown_781_[9];
    struct Struct_02026a28_2 unknown_78a_[1];
};

// USA: func_02026a28
extern "C" ARM int func_02026a28(struct Struct_02026a28* arg0) {
    unsigned char var0 = 0;
    int var1;
    for (var1 = 0; var1 < arg0->unknown_780_; var1++) {
        if (arg0->unknown_78a_[var1].unknown_2_ == 1) {
            if (arg0->unknown_78a_[var1].unknown_0_ != 5) {
                var0 = var0 + 1;
            }
        }
    }
    return var0;
}
