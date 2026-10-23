#include <globaldefs.h>

struct Struct_0207cb38 {
    char unknown_0_[0xbd0];
    short* unknown_bd0_[8];      // 0xbd0
    signed char* unknown_bf0_[8]; // 0xbf0
    short unknown_c10_[8];            // 0xc10
    unsigned char unknown_c20_[8];      // 0xc20
};

// USA: func_0207cb38
extern "C" ARM int func_0207cb38(struct Struct_0207cb38* arg0, int arg1, int arg2, int arg3, char arg4) {
    int var0;
    int var1;
    short var2;
    signed char* var3;
    short* var4;
    if (arg3 < 0) {
        return 0;
    }
    if (arg4 < 0 || arg4 > 99) {
        return 0;
    }
    var0 = -1;
    for (var1 = 0; var1 < 8; var1++) {
        if (arg2 == arg0->unknown_c20_[var1]) {
            var0 = var1;
            break;
        }
    }
    if (var0 == -1) {
        return 0;
    }
    var2 = arg0->unknown_c10_[var0];
    if (arg1 < 0 || arg1 >= var2) {
        return 0;
    }
    var3 = arg0->unknown_bf0_[var0];
    var4 = arg0->unknown_bd0_[var0];
    var4[arg1] = arg3;
    var3[arg1] = arg4;
    return 1;
}
