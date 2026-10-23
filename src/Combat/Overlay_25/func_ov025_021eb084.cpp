#include <globaldefs.h>

struct Struct_ov025_021e27c8 {
    char unknown_0_[0x582];
    unsigned char unknown_582_;
    char unknown_583_;
    unsigned short unknown_584_[1];
};

// USA: func_ov025_021eb084
extern "C" ARM void func_ov025_021eb084(struct Struct_ov025_021e27c8* arg0, int arg1) {
    if (arg1 < 0) {
        return;
    }
    if (arg0->unknown_582_ == 0) {
        return;
    }
    int var0 = 0;
    int var1 = 0;
    for (int var2 = 0; var2 < arg0->unknown_582_; var2++) {
        unsigned short var3 = arg0->unknown_584_[var2];
        if (arg1 == var3) {
            var0 = 1;
        } else {
            arg0->unknown_584_[var1] = var3;
            var1++;
        }
    }
    if (var0) {
        arg0->unknown_582_ = arg0->unknown_582_ - 1;
    }
}
