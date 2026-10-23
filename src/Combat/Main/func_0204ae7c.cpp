#include <globaldefs.h>

struct Struct_0204ae44 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[8];
    unsigned short* unknown_c_;
};

// USA: func_0204ae7c
extern "C" ARM void func_0204ae7c(struct Struct_0204ae44* arg0, short arg1, short arg2, short arg3, short arg4, short arg5) {
    unsigned short* var0 = arg0->unknown_c_;
    if (var0 == NULL) {
        return;
    }
    unsigned short var1 = arg1 & 0xF;
    var1 = var1 << 12;
    short var2 = arg2 + arg4;
    short var3 = arg3 + arg5;
    short var4 = arg0->unknown_0_;
    short var5 = arg3;
    unsigned short* var6;
    while (var5 < var3) {
        var6 = var0 + var4 * var5 + arg2;
        short var7 = arg2;
        while (var7 < var2) {
            var6[0] = var6[0] & 0xFFF;
            var6[0] = var6[0] | var1;
            var6++;
            var7 = var7 + 1;
        }
        var5 += 1;
    }
}
