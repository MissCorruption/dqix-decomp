#include <globaldefs.h>

struct Struct_ov024_021df704 {
    char unknown_0_[0x18];
    int unknown_18_;
};

struct Struct_ov024_021df454_7 {
    char unknown_0_[0x138];
    struct Struct_ov024_021df704* unknown_138_;
};

// USA: func_ov024_021df704
extern "C" ARM int func_ov024_021df704(struct Struct_ov024_021df454_7* arg0) {
    return (arg0->unknown_138_->unknown_18_ & 0x10) != 0;
}
