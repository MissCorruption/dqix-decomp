#include <globaldefs.h>
extern "C" void func_0209953c(unsigned short arg0);
// USA: func_0206ec64
extern "C" void func_0206ec64(int arg0, int arg1, unsigned char* arg2, unsigned int arg3) {
    int var0 = arg1 % 2;
    int var1 = arg1 / 2;
    if (arg3 <= (unsigned int)var1) {
        func_0209953c(0x3e7);
        return;
    }

    unsigned char var2 = arg2[var1];
    if (var0 != 0) {
        unsigned int var3 = var2 & 0xf;
        if (var3 >= 0xf) {
            return;
        }
        var3 = var3 + 1;
        arg2[var1] = (var3 & 0xff) | (var2 & 0xf0);
    } else {
        unsigned int var4 = (var2 >> 4) & 0xff;
        if (var4 < 0xf) {
            unsigned int var5 = var4 + 1;
            unsigned int var6 = var2 & 0xf;
            unsigned char var7 = (unsigned char)var5;
            arg2[var1] = (var7 << 4) | var6;
        }
    }
}
