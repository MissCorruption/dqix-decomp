#include <globaldefs.h>

struct Struct_02010088_2 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_02010088 {
    char unknown_0_[0x138];
    struct Struct_02010088_2* unknown_138_;
};

// USA: func_02010088
extern "C" ARM int func_02010088(struct Struct_02010088* arg0) {
    return (arg0->unknown_138_->unknown_14_ & 1) != 0;
}
