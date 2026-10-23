#include <globaldefs.h>

struct Struct_ov000_02175808 {
    char unknown_0_[8];
    unsigned char unknown_8_;
};
struct Struct_ov025_021e3c3c {
    char unknown_0_[0x228];
    unsigned int unknown_228_;
};
struct Struct_ov025_021ef988_7 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif
    Struct_ov025_021e3c3c* unknown_c_;
};
extern Struct_ov025_021ef988_7 data_ov025_021ef988;

// USA: func_ov025_021e812c
extern "C" ARM int func_ov025_021e812c(Struct_ov000_02175808* arg0) {
    data_ov025_021ef988.unknown_c_->unknown_228_ = arg0->unknown_8_;
    return 1;
}
