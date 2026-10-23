#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

struct Struct_ov002_021561b0_2 {
#if defined(jpn)
    char unknown_0_[0x2aa];
#else
    char unknown1_0_[0x47a];
#endif
    unsigned char unknown_47a_;
    unsigned char unknown_47b_;
    unsigned int unknown_47c_;
};

struct Struct_ov002_021561b0 {
    char unknown_0_[0x2000];
    struct Struct_ov002_021561b0_2 unknown_2000_;
};

// USA: func_ov002_021561b0
extern "C" ARM void func_ov002_021561b0(struct Struct_ov002_021561b0* arg0) {
    unsigned int var0 = arg0->unknown_2000_.unknown_47c_;
    if ((var0 & 2) == 0) {
        return;
    }
    unsigned char var1 = arg0->unknown_2000_.unknown_47a_;
    if (var1 == 0) {
        Struct_0208cb08* var2 = func_02094a00();
        func_02094ab0(var2);
        func_02094b3c(var2, 0xc);
        func_02094b34(var2, 0x64, 0x208, 0, 0);
        arg0->unknown_2000_.unknown_47a_ = arg0->unknown_2000_.unknown_47a_ + 1;
        return;
    }
    if (var1 != 1) {
        return;
    }
    if (!func_02094b4c(func_02094a00())) {
        return;
    }
    arg0->unknown_2000_.unknown_47c_ = arg0->unknown_2000_.unknown_47c_ & ~2;
    arg0->unknown_2000_.unknown_47a_ = 0;
}
