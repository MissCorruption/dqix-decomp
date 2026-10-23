#include <globaldefs.h>

// USA: func_ov031_0220bab8
extern "C" ARM void func_ov031_0220bab8(unsigned char *arg0, unsigned char *arg1, int arg2) {
    int var0 = 0;
    unsigned char var1 = arg0[0];
    unsigned char var2 = arg0[1];
    unsigned char *var3 = arg0 + 2;

    if (arg2 > 0) {
        do {
            var1 = var1 + 1;
            unsigned char var4 = var3[var1];
            var2 = var2 + var4;
            unsigned char var5 = var3[var2];
            var3[var1] = var5;
            var3[var2] = var4;
            arg1[var0] ^= var3[(unsigned char)(var4 + var5)];
            var0 = var0 + 1;
        } while (var0 < arg2);
    }

    arg0[0] = var1;
    arg0[1] = var2;
}
