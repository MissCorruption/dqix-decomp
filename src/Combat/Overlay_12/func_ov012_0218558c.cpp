#include <globaldefs.h>

struct Struct_ov012_0218558c_2 {
    int unknown_0_;
    int unknown_4_;
    char* unknown_8_;
};

struct Struct_ov012_0218558c {
    char* unknown_0_[7];
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
};

// USA: func_ov012_0218558c
extern "C" ARM int func_ov012_0218558c(struct Struct_ov012_0218558c_2* arg0, struct Struct_ov012_0218558c* arg1) {
    int var0 = 0;
    while (var0 < arg1->unknown_1e_) {
        int var1 = 1;
        int var2 = (int)(arg1->unknown_0_[var0] - (char*)0);
        char* var3;
        if (var2 != -1 && arg0->unknown_8_ != 0) {
            var1 = 0;
        }
        if (var1) {
            var3 = 0;
        } else {
            var3 = arg0->unknown_8_ + var2;
        }
        arg1->unknown_0_[var0] = var3;
        var0++;
    }
    return 1;
}
