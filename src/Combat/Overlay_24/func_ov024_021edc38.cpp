#include <globaldefs.h>

struct Struct_ov024_021edc38 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021eda78_7 {
    char unknown_0_[0x138];
    struct Struct_ov024_021edc38* unknown_138_;
};

// USA: func_ov024_021edc38
extern "C" ARM int func_ov024_021edc38(struct Struct_ov024_021eda78_7* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x200000) != 0;
}
