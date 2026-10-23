#include <globaldefs.h>

struct Struct_02068840_2 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
};

struct Struct_02068840 {
    char unknown_0_[0x20];
    struct Struct_02068840_2* unknown_20_;
};

// USA: func_02068840
extern "C" ARM int func_02068840(int arg0, struct Struct_02068840* arg1) {
    struct Struct_02068840_2* var0 = arg1->unknown_20_;
    if (var0 != 0) {
        return var0->unknown_b_0_;
    }
    return 0;
}
