#include <globaldefs.h>

struct Struct_020416cc {
    int unknown_0_;
};

struct Struct_020416cc_2 {
    char unknown_0_[0x18];
    struct Struct_020416cc* unknown_18_;
};

// USA: func_020416cc
extern "C" ARM int func_020416cc(struct Struct_020416cc_2* arg0) {
    struct Struct_020416cc* var0 = arg0->unknown_18_;
    return var0 != 0 ? var0->unknown_0_ : 0;
}
