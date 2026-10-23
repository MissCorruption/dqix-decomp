#include <globaldefs.h>

struct Struct_ov009_021842a0_2 {
#if defined(jpn)
    char unknown1_0_[0xc1c];
#else
    char unknown_0_[0xc58];
#endif
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[0xd9c - 0xc5a];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
};

// USA: func_ov009_021855dc
#if defined(jpn)
extern "C" ARM void func_ov009_021867bc(unsigned char* arg0, int arg1) {
#else
extern "C" ARM void func_ov009_021855dc(unsigned char* arg0, int arg1) {
#endif
    Struct_ov009_021842a0_2* var0 = (Struct_ov009_021842a0_2*)arg0;
    signed char var1 = (signed char)arg1;
    var0->unknown_c58_ = var1;
    var0->unknown_c59_ = 0;
    int var2 = var0->unknown_da3_;
    if (var0->unknown_da0_[var2] < arg1)
        var0->unknown_da0_[var2] = var1;
    var0->unknown_d9c_ |= 0x1100;
    if (arg1 != 9 && arg1 != 11 && arg1 != 12)
        var0->unknown_d9c_ |= 0x80;
}
