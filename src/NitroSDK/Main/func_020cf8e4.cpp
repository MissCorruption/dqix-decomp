#include <globaldefs.h>

extern int data_020f2298[13];

struct Struct_020cf8e4 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
};

// USA: func_020cf8e4
extern "C" ARM int func_020cf8e4(struct Struct_020cf8e4* arg0) {
    unsigned int var0, var1, var2;
    int var3;
    if ((var0 = arg0->unknown_0_) >= 100 || (var1 = arg0->unknown_4_) < 1 || var1 > 12 ||
        (var2 = arg0->unknown_8_) < 1 || var2 > 31 || (var3 = arg0->unknown_c_) >= 7 ||
        var1 < 1 || var1 > 12) {
        return -1;
    }
    int var4 = (var2 - 1) + data_020f2298[var1];
    if (var1 >= 3 && (var0 & 3) == 0) var4++;
    return var0 * 365 + var4 + (var0 + 3) / 4;
}
