#include <globaldefs.h>

struct Struct_ov024_021de25c {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021de124 {
    char unknown_0_[0x138];
    struct Struct_ov024_021de25c* unknown_138_;
};

// USA: func_ov024_021de25c
extern "C" ARM int func_ov024_021de25c(struct Struct_ov024_021de124* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x20) != 0;
}
