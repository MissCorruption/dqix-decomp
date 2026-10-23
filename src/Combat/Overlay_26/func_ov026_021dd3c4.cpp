#include <globaldefs.h>

struct Struct_ov026_021dd3c4 {
    char unknown_0_[0x18];
    int unknown_18_;
};

struct Struct_ov026_021d8ba0_10 {
    char unknown_0_[0x138];
    struct Struct_ov026_021dd3c4* unknown_138_;
};

// USA: func_ov026_021dd3c4
extern "C" ARM int func_ov026_021dd3c4(struct Struct_ov026_021d8ba0_10* arg0) {
    return (arg0->unknown_138_->unknown_18_ & 0x2000) != 0;
}
