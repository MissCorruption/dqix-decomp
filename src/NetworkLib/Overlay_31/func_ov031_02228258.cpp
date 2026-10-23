#include <globaldefs.h>

struct Struct_ov031_02248d8e { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
extern Struct_ov031_02248d8e data_ov031_02248d8e[2];
extern unsigned short data_ov031_02248d9e[];
extern unsigned short data_ov031_02248da2[];
extern unsigned short data_ov031_02248da0[];
extern unsigned short data_ov031_02248da4[];
extern signed char data_ov031_02290c50;
extern "C" int func_ov031_0223d49c(Struct_ov031_02248d8e*);
extern "C" void func_ov031_02222e20(int);
extern "C" int func_ov031_0223d354(int);
extern "C" int func_ov031_0223d394(int);
extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);
extern "C" void func_ov031_022284ec(int);

// USA: func_ov031_02228258
extern "C" ARM void func_ov031_02228258() {
    int var0 = 0;
    Struct_ov031_02248d8e* var1 = data_ov031_02248d8e;
    do {
        if (func_ov031_0223d49c(var1)) {
            func_ov031_02222e20(1);
            int var2 = (unsigned char)var0 * 4;
            unsigned short var3 = data_ov031_02248d9e[var2];
            unsigned short var4 = data_ov031_02248da2[var2];
            unsigned short var5 = data_ov031_02248da0[var2];
            unsigned short var6 = data_ov031_02248da4[var2];
            data_ov031_02290c50 = var0;
            func_ov031_022237dc(var3, var4, var5, var6);
            return;
        }
        var0++;
        var1++;
    } while ((unsigned int)var0 < 2);
    if (func_ov031_0223d354(1)) { func_ov031_02222e20(1); return; }
    if (func_ov031_0223d354(2)) { func_ov031_02222e20(0); return; }
    if (func_ov031_0223d394(0x40)) { func_ov031_022284ec(1); return; }
    if (func_ov031_0223d394(0x80)) { func_ov031_022284ec(3); return; }
    if (func_ov031_0223d394(0x20)) { func_ov031_022284ec(0); return; }
    if (func_ov031_0223d394(0x10)) func_ov031_022284ec(2);
}
