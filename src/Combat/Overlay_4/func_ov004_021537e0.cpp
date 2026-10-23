#include <globaldefs.h>

struct Struct_ov004_021537e0 {
    unsigned char unknown_0_[2];
    short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};

extern Struct_ov004_021537e0* data_ov004_021707c0;

// USA: func_ov004_021537e0
extern "C" ARM int func_ov004_021537e0() {
    short var0 = 0;
    short var1 = 0;
    Struct_ov004_021537e0* var2;
    Struct_ov004_021537e0* var3;
    while (var1 <= 0xb) {
        unsigned char var4 = 0;
        var3 = data_ov004_021707c0;
        while (var4 < 20) {
            var2 = &var3[var4];
            if (var2->unknown_2_ == var1) goto found;
            var4 = (unsigned char)(var4 + 1);
        }
        var2 = 0;
found:
        if (var2) var0 = (short)(var0 + var2->unknown_5_);
        var1 = (short)(var1 + 1);
    }
    return var0;
}
