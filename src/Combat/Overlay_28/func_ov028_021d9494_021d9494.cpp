#include <globaldefs.h>

struct Struct_ov028_021d9494 {
    char unknown_0_[0x84];
    long long unknown_88_;
    long long unknown_90_;
    int unknown_98_;
    int unknown_9c_;
    unsigned char unknown_a0_;
    char unknown_a1_[3];
    long long unknown_a8_;
    long long unknown_b0_;
};

extern "C" void func_ov028_021d8b90(void* arg0);

// USA: func_ov028_021d9494
extern "C" ARM void func_ov028_021d9494(void* arg0) {
    struct Struct_ov028_021d9494* var0 = (struct Struct_ov028_021d9494*)arg0;
    func_ov028_021d8b90(arg0);
    var0->unknown_90_ = 0;
    var0->unknown_88_ = var0->unknown_90_;
    var0->unknown_98_ = var0->unknown_9c_ = 0;
    var0->unknown_b0_ = 0;
    var0->unknown_a8_ = var0->unknown_b0_;
    var0->unknown_a0_ = 0;
}
