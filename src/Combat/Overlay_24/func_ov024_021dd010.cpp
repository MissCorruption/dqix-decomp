#include <globaldefs.h>

struct Struct_ov024_021dd010 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021dced0_2 {
    char unknown_0_[0x138];
    struct Struct_ov024_021dd010* unknown_138_;
};

// USA: func_ov024_021dd010
extern "C" ARM int func_ov024_021dd010(struct Struct_ov024_021dced0_2* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 0x100) != 0;
}
