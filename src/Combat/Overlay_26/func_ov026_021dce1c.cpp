#include <globaldefs.h>

struct Struct_ov026_021dce1c {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov026_021dc8fc_4 {
    char unknown_0_[0x138];
    struct Struct_ov026_021dce1c* unknown_138_;
};

// USA: func_ov026_021dce1c
extern "C" ARM int func_ov026_021dce1c(struct Struct_ov026_021dc8fc_4* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x8) != 0;
}
