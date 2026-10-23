#include <globaldefs.h>

struct Struct_020e1288_2 {
    unsigned char unknown_0_[0xa];
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_020e1288 {
    unsigned char unknown_0_[8];
    struct Struct_020e1288_2* unknown_8_;
};

// USA: func_020e1288
extern "C" ARM int func_020e1288(struct Struct_020e1288* arg0) {
    struct Struct_020e1288_2* var0 = arg0->unknown_8_;
    if (var0 != NULL) {
        return (var0->unknown_a_ * var0->unknown_b_) >> 1;
    }
    return 0;
}
