#include <globaldefs.h>

struct Struct_0207fdcc {
    char unknown_0_[0xc4];
    unsigned char unknown_c4_;
    char unknown_c5_[0x1b];
};

struct Struct_0207fdcc_2 {
#if defined(jpn)
    char unknown_0_[0x24];
#else
    char unknown1_0_[0x30];
#endif
    struct Struct_0207fdcc* unknown_30_;
    char unknown_34_[5];
    unsigned char unknown_39_;
};

// USA: func_02081da8
extern "C" ARM struct Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1) {
    unsigned char var0 = arg0->unknown_39_;
    struct Struct_0207fdcc* var1 = arg0->unknown_30_;
    unsigned char var2;
    for (var2 = 0; var2 < var0; var2++) {
        if (arg1 == var1->unknown_c4_) {
            return var1;
        }
        var1++;
    }
    return NULL;
}
