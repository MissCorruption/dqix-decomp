#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

struct Struct_02092f00 {
    char unknown_0_[0x36];
    unsigned char unknown_36_;
    unsigned char unknown_37_;
};

// USA: func_02092f00
extern "C" ARM void func_02092f00(struct Struct_02092f00* arg0) {
    unsigned char var0 = arg0->unknown_37_;
    if (var0 & 8) return;
    if (!(var0 & 4)) return;
    Struct_0208cb08* var1 = func_02094a00();
    if (arg0->unknown_36_ == 0) {
        func_02094b3c(var1, 0xa);
        func_02094b30(var1, 0x1f8, 0);
        arg0->unknown_36_ = arg0->unknown_36_ + 1;
        return;
    }
    if (arg0->unknown_36_ != 1) return;
    if (func_02094b4c(var1)) {
        arg0->unknown_37_ = arg0->unknown_37_ & ~4;
        arg0->unknown_36_ = 0;
    }
}
