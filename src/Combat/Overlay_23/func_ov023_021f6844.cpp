#include <globaldefs.h>

struct Struct_ov023_021f6844_2 {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
    char unknown_a_[0x18 - 0x8 - 0x2];
    struct Struct_ov023_021f6844_2* unknown_18_;
};

struct Struct_ov023_021f6844 {
    struct Struct_ov023_021f6844_2* unknown_0_;
};

extern "C" void func_ov023_021f67ec(struct Struct_ov023_021f6844* arg0, struct Struct_ov023_021f6844_2* arg1);

// USA: func_ov023_021f6844
extern "C" ARM void func_ov023_021f6844(struct Struct_ov023_021f6844* arg0, unsigned short arg1) {
    struct Struct_ov023_021f6844_2* var0 = arg0->unknown_0_;
    while (var0 != 0) {
        struct Struct_ov023_021f6844_2* var1 = var0->unknown_18_;
        if (var0->unknown_8_ == arg1) {
            func_ov023_021f67ec(arg0, var0);
        }
        var0 = var1;
    }
}
