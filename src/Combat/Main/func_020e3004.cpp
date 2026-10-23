#include <globaldefs.h>

struct Struct_020e3004_2;
extern "C" void func_020e303c(struct Struct_020e3004_2* arg0);

struct Struct_020e3004 {
    int unknown_0_[8];
    unsigned char unknown_20_[8];
};

// USA: func_020e3004
extern "C" ARM void func_020e3004(struct Struct_020e3004 *arg0) {
    int *var0 = arg0->unknown_0_;
    unsigned char *var1 = arg0->unknown_20_;
    int var2 = 0;
    for (; var2 < 8; ) {
        func_020e303c((struct Struct_020e3004_2*)var0);
        *var1 = 0;
        var2++;
        var0++;
        var1++;
    }
}
