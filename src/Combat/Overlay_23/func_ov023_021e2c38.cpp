#include <globaldefs.h>

struct Struct_ov023_021e2c38 {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[0x10 - 0xe];
    short unknown_10_;
    char unknown_12_[0x16 - 0x12];
    unsigned char unknown_16_;
};

extern "C" struct Struct_ov023_021e2c38* func_ov023_021db4e4(void*);

// USA: func_ov023_021e2c38
extern "C" ARM int func_ov023_021e2c38(void* arg0) {
    int var0 = 1;
    struct Struct_ov023_021e2c38* var1 = func_ov023_021db4e4(arg0);
    int var2 = 0;
    int var3 = var0;
    while (var1 != 0) {
        var0 = (var1->unknown_16_ & 1) ? var3 : var2;
        if (var0 == 0) break;
        while (var1->unknown_10_ > 0) {
            var1 = func_ov023_021db4e4(arg0);
        }
        if (var1->unknown_c_ >= 0) {
            var1 = func_ov023_021db4e4(arg0);
        }
    }
    return var0;
}
