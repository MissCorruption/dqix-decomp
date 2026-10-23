#include <globaldefs.h>

struct Struct_ov024_021da998 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021da670_6 {
    char unknown_0_[0x138];
    struct Struct_ov024_021da998* unknown_138_;
};

// USA: func_ov024_021da998
extern "C" ARM int func_ov024_021da998(struct Struct_ov024_021da670_6* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x800000) != 0;
}
