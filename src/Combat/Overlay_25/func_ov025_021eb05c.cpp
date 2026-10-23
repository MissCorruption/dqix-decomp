#include <globaldefs.h>

struct Struct_ov025_021eb05c {
    char unknown_0_[0x582];
    unsigned char unknown_582_;
    char unknown_583_;
    unsigned short unknown_584_[8];
};

// USA: func_ov025_021eb05c
extern "C" ARM void func_ov025_021eb05c(struct Struct_ov025_021eb05c* arg0, int arg1) {
    if (arg1 < 0) {
        return;
    }
    if (arg0->unknown_582_ < 8) {
        unsigned char var0 = arg0->unknown_582_;
        arg0->unknown_582_ = var0 + 1;
        arg0->unknown_584_[var0] = arg1;
    }
}
