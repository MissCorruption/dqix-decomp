#include <globaldefs.h>
struct Struct_0204fa0c { char unknown_0_[0xc5]; unsigned char unknown_c5_; };
extern "C" char* func_020421b0(int);
extern "C" void func_0204e1c8(Struct_0204fa0c*, char*, int, int, int, int, int, int);
// USA: func_0204fa0c
extern "C" ARM void func_0204fa0c(Struct_0204fa0c* arg0, short arg1, short arg2) {
    if (!(arg0->unknown_c5_ & 0x40)) return;
    short var0 = arg1 - 6;
    short var1 = arg2 - 2;
    short var2 = var0 + 8;
    short var3 = var1 + 8;
    short var4[4];
    short var5[4];
    var4[0] = var0;
    var4[2] = var0;
    var4[1] = var2;
    var4[3] = var2;
    var5[0] = var1;
    var5[1] = var1;
    var5[2] = var3;
    var5[3] = var3;
    unsigned char var6 = 16;
    for (unsigned char var7 = 0; var7 < 4; ++var7) {
        char* var8 = func_020421b0(var6);
        if (var8) {
            func_0204e1c8(arg0, var8, var4[var7], var5[var7], 8, 8, 0xf0, 15);
        }
        ++var6;
    }
}
