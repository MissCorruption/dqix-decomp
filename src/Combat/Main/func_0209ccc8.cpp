#include <globaldefs.h>

struct Struct_0209cb94_2 {
    int unknown_0_;
};

struct Struct_0209cb94 {
    struct Struct_0209cb94_2* unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};

// USA: func_0209ccc8
extern "C" ARM void func_0209ccc8(struct Struct_0209cb94* arg0, struct Struct_0209cb94_2* arg1) {
    unsigned char var0 = arg0->unknown_4_;
    if (var0 < (unsigned int)arg0->unknown_5_) {
        arg0->unknown_4_ = var0 + 1;
        arg0->unknown_0_[var0] = *arg1;
    }
}
