#include <globaldefs.h>

struct Struct_020278a4 {
    int unknown_0_;
    char unknown_4_[0x20];
};

struct Struct_020278a4_2 {
    char unknown_0_[0x20];
    struct Struct_020278a4* unknown_20_;
    int unknown_24_;
};

// USA: func_020278a4
extern "C" ARM int func_020278a4(struct Struct_020278a4_2* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_24_; var0++) {
        if (arg1 == arg0->unknown_20_[var0].unknown_0_) {
            return var0;
        }
    }
    return -1;
}
