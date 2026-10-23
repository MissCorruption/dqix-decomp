#include <globaldefs.h>

struct Struct_0201f170 {
    signed short unknown_0_;
    char unknown_2_[0xa];
};

struct Struct_0201ec00 {
    struct Struct_0201f170* unknown_0_;
    int unknown_4_;
};

// USA: func_0201f170
extern "C" ARM struct Struct_0201f170* func_0201f170(struct Struct_0201ec00* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) {
            return &arg0->unknown_0_[var0];
        }
    }
    return 0;
}
