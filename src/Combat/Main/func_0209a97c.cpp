#include <globaldefs.h>

struct Struct_0209a7bc { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0209a97c_3 { struct Struct_0209a7bc unknown_0_[20]; };
struct Struct_0209a97c_2 {
    unsigned char unknown_0_[0x10c];
    struct Struct_0209a97c_3 unknown_10c_[13];
    int unknown_51c_[16];
};
struct Struct_0209a97c {
    struct Struct_0209a97c_2* unknown_0_;
};

// USA: func_0209a97c
extern "C" ARM void func_0209a97c(struct Struct_0209a97c* arg0, int arg1, struct Struct_0209a7bc* arg2) {
    struct Struct_0209a97c_2* var0 = arg0->unknown_0_;
    int var1;
    if (var0 == NULL) return;
    var1 = var0->unknown_51c_[arg1];
    if (var1 >= 0x14) return;
    var0->unknown_51c_[arg1]++;
    {
        struct Struct_0209a7bc* var2 = &arg0->unknown_0_->unknown_10c_[arg1].unknown_0_[var1];
        var2->unknown_0_ = arg2->unknown_0_;
        var2->unknown_2_ = arg2->unknown_2_;
    }
}
