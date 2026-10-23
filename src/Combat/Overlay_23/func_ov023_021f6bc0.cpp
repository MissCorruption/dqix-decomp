#include <globaldefs.h>

struct Struct_ov023_021f6bc0_2 {
    char unknown_0_[0x18];
    Struct_ov023_021f6bc0_2* unknown_18_;
    int unknown_1c_;
};

struct Struct_ov023_021f6bc0 {
    Struct_ov023_021f6bc0_2* unknown_0_;
};

// USA: func_ov023_021f6bc0
extern "C" ARM int func_ov023_021f6bc0(Struct_ov023_021f6bc0* arg0) {
    for (Struct_ov023_021f6bc0_2* var0 = arg0->unknown_0_; var0 != 0; var0 = var0->unknown_18_) {
        if (var0->unknown_1c_ != 2) return 1;
    }
    return 0;
}
