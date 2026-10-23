#include <globaldefs.h>

struct Struct_020687f8_2 {
    int unknown_0_[2];
    unsigned int unknown_8_0_ : 26;
    unsigned int unknown_b_2_ : 1;
    unsigned int unknown_b_3_ : 5;
};

struct Struct_020687f8 {
    char unknown_0_[0x20];
    struct Struct_020687f8_2* unknown_20_;
};

// USA: func_020687f8
extern "C" ARM int func_020687f8(int arg0, struct Struct_020687f8* arg1) {
    struct Struct_020687f8_2* var0 = arg1->unknown_20_;
    if (var0 != NULL) {
        return var0->unknown_b_2_ == 0;
    }
    return 0;
}
