#include <globaldefs.h>

struct Struct_0209a77c_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};
struct Struct_0209a93c_2 {
    struct Struct_0209a77c_2 unknown_0_[0x42];
    int unknown_108_;
};
struct Struct_0209a93c {
    struct Struct_0209a93c_2* unknown_0_;
};

// USA: func_0209a93c
extern "C" ARM void func_0209a93c(struct Struct_0209a93c* arg0, struct Struct_0209a77c_2* arg1) {
    struct Struct_0209a93c_2* var0 = arg0->unknown_0_;
    int var1;
    if (var0 == NULL) {
        return;
    }
    var1 = var0->unknown_108_;
    if (var1 >= 0x42) {
        return;
    }
    var0->unknown_108_ = var1 + 1;
    {
        struct Struct_0209a77c_2* var2 = &arg0->unknown_0_->unknown_0_[var1];
        var2->unknown_0_ = arg1->unknown_0_;
        var2->unknown_2_ = arg1->unknown_2_;
    }
}
