#include <globaldefs.h>

// USA: func_0206ea8c
extern "C" ARM int func_0206ea8c(unsigned char* arg0, unsigned char arg1, int arg2, int arg3) {
    struct Struct_0206ea8c { unsigned char unknown_0_[0x41b]; unsigned char unknown_41b_[2][0x20]; };
    short var0;
    short var1;
    unsigned short var2;
    struct Struct_0206ea8c* var3;
    int var4;
    var1 = arg1 & 1;
    var0 = arg2 >> 3;
    var2 = (arg2 & 7) ^ 7;
    var3 = (struct Struct_0206ea8c*)arg0;
    if (arg3 != 0) {
        var4 = 0;
        var4 = var3->unknown_41b_[var1][var0] | (1 << var2) - var4;
        var3->unknown_41b_[var1][var0] = var4;
    } else {
        var4 = var3->unknown_41b_[var1][var0];
        var4 &= ~(1 << var2);
        var3->unknown_41b_[var1][var0] = var4;
    }
    return var4;
}
