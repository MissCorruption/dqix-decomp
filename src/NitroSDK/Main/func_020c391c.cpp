#include <globaldefs.h>

extern unsigned short data_020f226c;
extern unsigned short data_02111220;

// USA: func_020c391c
extern "C" ARM void func_020c391c(int arg0, int arg1, int arg2) {
    volatile unsigned int* var0 = (volatile unsigned int*)0x4000000;
    unsigned int var1 = data_020f226c;
    unsigned int var2 = *var0;
    data_02111220 = (unsigned short)arg0;
    unsigned int var3 = (var1 == 0) ? 0 : arg0;
    unsigned int var4 = arg1 | ((var2 & 0xfff0fff0) | (var3 << 16));
    var4 = var4 | (arg2 << 3);
    *var0 = var4;
    if (data_02111220 == 0) {
        data_020f226c = 0;
    }
}
