#include <globaldefs.h>

struct Struct_ov024_021edc68 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021eda78_9 {
    char unknown_0_[0x138];
    struct Struct_ov024_021edc68* unknown_138_;
};

// USA: func_ov024_021edc68
extern "C" ARM int func_ov024_021edc68(struct Struct_ov024_021eda78_9* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x80000000) != 0;
}
