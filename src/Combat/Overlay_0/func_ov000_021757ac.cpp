#include <globaldefs.h>

struct Struct_ov000_021735d0_3 {
    char unknown_0_[0x10];
    unsigned short unknown_10_[5];
    signed char unknown_1a_;
};

// USA: func_ov000_021757ac
extern "C" ARM void func_ov000_021757ac(Struct_ov000_021735d0_3* arg0, unsigned short arg1) {
    int var0 = 0;
    unsigned short* var1 = arg0->unknown_10_;
    signed char var2;
    signed char var3 = arg0->unknown_1a_;
    for (var2 = 0; var2 < var3; var2++) {
        if (arg1 == var1[var2]) {
            var0 = 1;
        }
    }
    if (!var0) {
        var1[arg0->unknown_1a_++] = arg1;
    }
}
