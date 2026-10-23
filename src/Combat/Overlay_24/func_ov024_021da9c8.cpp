#include <globaldefs.h>

struct Struct_ov024_021da9c8 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021da670_8 {
    char unknown_0_[0x138];
    struct Struct_ov024_021da9c8* unknown_138_;
};

// USA: func_ov024_021da9c8
extern "C" ARM int func_ov024_021da9c8(struct Struct_ov024_021da670_8* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x80000) != 0;
}
