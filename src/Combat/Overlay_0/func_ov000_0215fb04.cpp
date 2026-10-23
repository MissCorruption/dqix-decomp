#include <globaldefs.h>

struct Struct_ov000_0215fb04 {
    unsigned char unknown_0_[0x8e44];
    unsigned char unknown_8e44_[3];
    unsigned char unknown_8e47_;
};

// USA: func_ov000_0215fb04
extern "C" ARM void func_ov000_0215fb04(struct Struct_ov000_0215fb04* arg0, unsigned char arg1) {
    unsigned char* var0 = arg0->unknown_8e44_;
    unsigned char* var1 = var0;
    int var2 = 0;
    for (int var3 = 0; var3 < arg0->unknown_8e47_; var0++, var3++) {
        unsigned char var4 = *var0;
        if (var4 != arg1) {
            *var1 = var4;
            var1++;
            var2++;
        }
    }
    arg0->unknown_8e47_ = var2;
}
