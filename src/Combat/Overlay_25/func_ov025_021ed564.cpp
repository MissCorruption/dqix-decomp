#include <globaldefs.h>

struct Struct_ov025_021ed564 {
    unsigned short unknown_0_[0x10];
    short unknown_20_[0x10];
    short unknown_40_[0x10];
    short unknown_60_[0x10];
    unsigned short unknown_80_[0x10];
    unsigned char unknown_a0_[0x10];
    int unknown_b0_[0x10];
    char unknown_f0_[0x60];
    unsigned char unknown_150_;
};

// USA: func_ov025_021ed564
extern "C" ARM int func_ov025_021ed564(Struct_ov025_021ed564* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    if (arg3 >= 6) return -1;
    if (arg1 == 0) return -1;
    unsigned short* var0 = arg0->unknown_0_;
    for (int var1 = 0; var1 < arg0->unknown_150_; var1++, var0++) {
        if (*var0 == arg1 && arg2 == arg0->unknown_20_[var1]) {
            int var2 = arg0->unknown_b0_[var1];
            if (var2 == arg4 && arg5 == arg0->unknown_40_[var1] && arg3 == arg0->unknown_a0_[var1]) {
                return (short)var1;
            }
        }
    }
    return -1;
}
