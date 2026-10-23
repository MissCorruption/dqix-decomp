#include <globaldefs.h>

struct Struct_ov015_02190d7c_2 { char unknown_0_[0x1a8]; int unknown_1a8_[32]; int unknown_228_; };

// USA: func_ov015_021931cc
extern "C" ARM int func_ov015_021931cc(struct Struct_ov015_02190d7c_2* arg0) {
    int var0 = arg0->unknown_228_;
    if (var0 <= 0)
        return -1;
    var0 = var0 - 1;
    arg0->unknown_228_ = var0;
    int var1 = arg0->unknown_1a8_[var0];
    arg0->unknown_1a8_[var0] = -1;
    return var1;
}
