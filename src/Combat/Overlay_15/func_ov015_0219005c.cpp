#include <globaldefs.h>

struct Struct_ov015_0219005c { char unknown_0_[0x1c]; unsigned char unknown_1c_; char unknown_1d_[0xf]; unsigned char unknown_2c_; char unknown_2d_[0x13]; short unknown_40_; short unknown_42_; };

// USA: func_ov015_0219005c
extern "C" ARM void func_ov015_0219005c(struct Struct_ov015_0219005c* arg0, short arg1, short arg2) {
    unsigned char var0 = arg0->unknown_1c_;
    if (var0 != 0 && var0 != 1)
        return;
    if (arg0->unknown_42_ != arg1 || arg0->unknown_40_ != arg2) {
        arg0->unknown_42_ = arg1;
        arg0->unknown_40_ = arg2;
        arg0->unknown_2c_ = 2;
    }
}
