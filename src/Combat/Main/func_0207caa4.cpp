#include <globaldefs.h>

struct Struct_0207c378 {
    char unknown_0_[0xbd0];
    short* unknown_bd0_[8]; // 0xbd0
    char unknown_bf0_[0x20];       // 0xbf0
    short unknown_c10_[8];       // 0xc10
    unsigned char unknown_c20_[8]; // 0xc20
};

// USA: func_0207caa4
extern "C" ARM int func_0207caa4(struct Struct_0207c378* arg0, int arg1, int arg2) {
    int var0;
    int var1;
    short* var2;
    short var3;
    short var4;
    if (arg1 < 0) {
        return -2;
    }
    var0 = -1;
    for (var1 = 0; var1 < 8; var1++) {
        if (arg2 == arg0->unknown_c20_[var1]) {
            var0 = var1;
            break;
        }
    }
    if (var0 == -1) {
        return -2;
    }
    var2 = arg0->unknown_bd0_[var0];
    var3 = arg0->unknown_c10_[var0];
    for (var4 = 0; var4 < var3; var4++) {
        if (arg1 == var2[var4]) {
            return var4;
        }
    }
    return -1;
}
