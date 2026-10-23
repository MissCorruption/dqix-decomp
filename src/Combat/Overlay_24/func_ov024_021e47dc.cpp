#include <globaldefs.h>

struct Struct_ov024_021e47dc {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021e4604 {
    char unknown_0_[0x138];
    struct Struct_ov024_021e47dc* unknown_138_;
};

// USA: func_ov024_021e47dc
extern "C" ARM int func_ov024_021e47dc(struct Struct_ov024_021e4604* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x400000) != 0;
}
