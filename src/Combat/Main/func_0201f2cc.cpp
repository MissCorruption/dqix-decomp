#include <globaldefs.h>

struct Struct_0201f2cc_2 {
    short unknown_0_;
    char unknown_2_[0x1e];
};

struct Struct_0201f2cc {
    char unknown_0_[0xc];
    struct Struct_0201f2cc_2* unknown_c_;
    int unknown_10_;
};

// USA: func_0201f2cc
extern "C" ARM struct Struct_0201f2cc_2* func_0201f2cc(struct Struct_0201f2cc* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_10_; var0++) {
        if (arg1 == arg0->unknown_c_[var0].unknown_0_) {
            return &arg0->unknown_c_[var0];
        }
    }
    return 0;
}
