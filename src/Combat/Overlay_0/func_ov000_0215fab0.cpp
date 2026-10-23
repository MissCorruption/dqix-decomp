#include <globaldefs.h>

struct Struct_ov000_0215fab0 {
    unsigned char unknown_0_[0x8e44];
    unsigned char unknown_8e44_[3];
    unsigned char unknown_8e47_;
};

// USA: func_ov000_0215fab0
extern "C" ARM void func_ov000_0215fab0(struct Struct_ov000_0215fab0 *arg0, unsigned char arg1) {
    unsigned char var0 = arg0->unknown_8e47_;
    if (var0 < 3) {
        arg0->unknown_8e47_ = var0 + 1;
        arg0->unknown_8e44_[var0] = arg1;
    }
}
