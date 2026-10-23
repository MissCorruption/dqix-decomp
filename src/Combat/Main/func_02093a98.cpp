#include <globaldefs.h>

struct Struct_02093b54 {
#if defined(jpn)
    char unknown1_0_[11];
#else
    char unknown_0_[48];
#endif
};
struct Struct_02093ad8 {
    Struct_02093b54 unknown_0_;
#if defined(jpn)
    unsigned char unknown_b_;
#endif
    short unknown_30_;
    signed char unknown_32_;
    unsigned char unknown_33_;
};

struct Struct_02093a58 {
    Struct_02093ad8 unknown_0_[8];
    Struct_02093ad8 unknown_1a0_[8];
#if defined(jpn)
    char unknown_100_[0x13b - 0x100];
#else
    char unknown_340_[0x3cb - 0x340];
#endif
    signed char unknown_3cb_;
    signed char unknown_3cc_;
    unsigned char unknown_3cd_;
};

extern "C" void func_02093ad8(void*, Struct_02093ad8* arg1, Struct_02093ad8* arg2, int arg3);

extern "C" ARM void func_02093a98(char* arg0) {
    Struct_02093a58* var0 = reinterpret_cast<Struct_02093a58*>(arg0);
    func_02093ad8(var0, var0->unknown_1a0_, var0->unknown_0_, var0->unknown_3cc_);
    var0->unknown_3cb_ = var0->unknown_3cc_;
    var0->unknown_3cc_ = 0;
    var0->unknown_3cd_ &= ~4;
}
