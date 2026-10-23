#include <globaldefs.h>

struct Struct_0207c378;
extern "C" int func_0207caa4(struct Struct_0207c378* arg0, int arg1, int arg2);

struct Struct_0207c484 {
    char unknown_0_[0xbd0];
    short* unknown_bd0_[8];
    signed char* unknown_bf0_[8];
    short unknown_c10_[8];
    unsigned char unknown_c20_[8];
};

// USA: func_0207c484
extern "C" ARM int func_0207c484(struct Struct_0207c484* arg0, int arg1, int arg2, int arg3) {
    int var0;
    int var1;
    int var2;
    signed char* var3;

    if (arg2 <= 0) {
        return 0;
    }

    var2 = func_0207caa4((struct Struct_0207c378*)arg0, arg1, arg3);
    if (var2 < 0) {
        return 0;
    }

    for (var1 = 0; var1 < 8; var1++) {
        if (arg3 == arg0->unknown_c20_[var1]) {
            var0 = var1;
            break;
        }
    }

    var3 = arg0->unknown_bf0_[var0];
    var3[var2] = var3[var2] - arg2;
    if (var3[var2] <= 0) {
        arg0->unknown_bd0_[var0][var2] = -1;
        var3[var2] = 0;
    }

    return 1;
}
