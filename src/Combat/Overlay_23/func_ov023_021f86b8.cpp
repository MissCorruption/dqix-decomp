#include <globaldefs.h>

struct Struct_ov023_021f86b8 {
    char unknown_0_[0x44];
    unsigned char unknown_44_0_ : 4;
    unsigned char unknown_44_4_ : 4;
    unsigned char unknown_45_0_ : 1;
};

// USA: func_ov023_021f86b8
extern "C" ARM unsigned int func_ov023_021f86b8(struct Struct_ov023_021f86b8* arg0) {
    unsigned char var0;
    if (arg0->unknown_45_0_) {
        var0 = 5;
    } else {
        var0 = arg0->unknown_44_4_;
    }
    return var0 & 0xff;
}
