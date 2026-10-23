#include <globaldefs.h>

extern "C" void* func_ov000_02160130(void);
extern "C" void func_ov000_021639b4(void);

struct Struct_ov025_021e4450 {
    char unknown_0_[0xc];
    int unknown_c_;
    char unknown_10_[0x1c4 - 0xc - 4];
    int unknown_1c4_;
};

// USA: func_ov025_021eb00c
extern "C" ARM void func_ov025_021eb00c(struct Struct_ov025_021e4450* arg0) {
    if (arg0->unknown_c_ == 0) return;
    if (arg0->unknown_1c4_ & 0x4) return;
    func_ov000_02160130();
    func_ov000_021639b4();
    arg0->unknown_1c4_ |= 0x4;
}
