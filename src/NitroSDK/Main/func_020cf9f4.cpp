#include <globaldefs.h>

struct Struct_020cf9f4 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
};

extern int data_020f229c[12];

// USA: func_020cf9f4
extern "C" ARM void func_020cf9f4(Struct_020cf9f4* arg0, int arg1) {
    unsigned int var0;
    int var1;

    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg1 > 36524) {
        arg1 = 36524;
    }
    arg0->unknown_c_ = (arg1 + 6) % 7;

    for (var0 = 0; var0 < 99; var0++) {
        int var2 = arg1;
        arg1 -= (var0 & 3) == 0 ? 366 : 365;
        if (arg1 < 0) {
            arg1 = var2;
            break;
        }
    }
    arg0->unknown_0_ = var0;
    if (arg1 > 365) {
        arg1 = 365;
    }

    if ((var0 & 3) == 0) {
        if (arg1 < 31 + 29) {
            if (arg1 < 31) {
                var1 = 1;
            } else {
                arg1 -= 31;
                var1 = 2;
            }
            arg0->unknown_4_ = var1;
            arg0->unknown_8_ = arg1 + 1;
            return;
        }
        arg1--;
    }

    for (var1 = 11; var1 >= 0; var1--) {
        if (arg1 >= data_020f229c[var1]) {
            arg0->unknown_4_ = var1 + 1;
            arg0->unknown_8_ = arg1 - data_020f229c[var1] + 1;
            return;
        }
    }
}
