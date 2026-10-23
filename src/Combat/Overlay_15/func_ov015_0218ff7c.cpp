#include <globaldefs.h>

struct Struct_ov015_0218ff7c { char unknown_0_[0x1c]; unsigned char unknown_1c_; char unknown_1d_[3]; int* unknown_20_; char unknown_24_[8]; unsigned char unknown_2c_; };

// USA: func_ov015_0218ff7c
extern "C" ARM void func_ov015_0218ff7c(struct Struct_ov015_0218ff7c* arg0, int arg1, int arg2) {
    unsigned char var0 = arg0->unknown_1c_;
    if (var0 != 0 && var0 != 1)
        return;
    if (arg2 != arg0->unknown_20_[arg1]) {
        arg0->unknown_20_[arg1] = arg2;
        arg0->unknown_2c_ = 1;
    }
}
