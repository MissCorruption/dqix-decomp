#include <globaldefs.h>

struct Struct_0201f1b0 {
    short unknown_0_;
    char unknown_2_[0xa];
};

struct Struct_020177d4_3 {
    struct Struct_0201f1b0* unknown_0_;
    int unknown_4_;
};

// USA: func_0201f1b0
extern "C" ARM int func_0201f1b0(struct Struct_020177d4_3* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) {
            return var0;
        }
    }
    return -1;
}
