#include <globaldefs.h>

struct Struct_ov024_021df6ec {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021df454_2 {
    char unknown_0_[0x138];
    struct Struct_ov024_021df6ec* unknown_138_;
};

// USA: func_ov024_021df6ec
extern "C" ARM int func_ov024_021df6ec(struct Struct_ov024_021df454_2* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x40) != 0;
}
