#include <globaldefs.h>

struct Struct_020482e0_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

struct Struct_020482e0 {
    char unknown_0_[0x130];
    struct Struct_020482e0_2* unknown_130_;
};

// USA: func_020482e0
extern "C" ARM int func_020482e0(struct Struct_020482e0* arg0, int arg1, int arg2) {
    struct Struct_020482e0_2* var0 = arg0->unknown_130_;
    unsigned short var1 = var0->unknown_4_;
    if (var1 <= arg1) {
        if (arg2 == 0) {
            var0->unknown_4_ = 1;
            return var1 - 1;
        }
        var0->unknown_4_ = 0;
        int var2 = 0;
        if (arg0->unknown_130_->unknown_0_ & 4) {
            var2 = 1;
        }
        arg0->unknown_130_->unknown_0_ = 1;
        if (var2) {
            arg0->unknown_130_->unknown_0_ |= 4;
        }
        return var1;
    }
    var0->unknown_4_ = var1 - arg1;
    return arg1;
}
