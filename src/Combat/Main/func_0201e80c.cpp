#include <globaldefs.h>

struct Struct_0201e80c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0201e80c {
    char unknown_0_[0x70];
    struct Struct_0201e80c_2 unknown_70_;
};

// USA: func_0201e80c
extern "C" ARM struct Struct_0201e80c_2 func_0201e80c(struct Struct_0201e80c* arg0) {
    return arg0->unknown_70_;
}
