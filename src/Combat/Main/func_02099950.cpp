#include <globaldefs.h>

struct Struct_02099950 {
    unsigned short unknown_0_;
    char unknown_2_[0xe];
};

struct Struct_02095924_2 {
    struct Struct_02099950* unknown_0_;
    int unknown_4_;
};

// USA: func_02099950
extern "C" ARM struct Struct_02099950* func_02099950(struct Struct_02095924_2* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) {
            return &arg0->unknown_0_[var0];
        }
    }
    return 0;
}
