#include <globaldefs.h>

struct Struct_ov000_0215767c_4 {
    char unknown_0_[0x20];
    struct Struct_ov000_0215767c_4* unknown_20_;
};
struct Struct_ov000_0215767c_5 {
    char unknown_0_[9];
    unsigned char unknown_9_;
    char unknown_a_[0xa];
    struct Struct_ov000_0215767c_4* unknown_14_;
};

// USA: func_ov000_021600cc
extern "C" ARM void func_ov000_021600cc(struct Struct_ov000_0215767c_5* arg0, struct Struct_ov000_0215767c_4* arg1) {
    struct Struct_ov000_0215767c_4** var0 = &arg0->unknown_14_;
    while (*var0 != NULL) {
        var0 = &(*var0)->unknown_20_;
    }
    *var0 = arg1;
    arg0->unknown_9_++;
}
