#include <globaldefs.h>

extern "C" int func_ov031_02215af4(unsigned int);

// USA: func_ov031_02215b64
extern "C" ARM int func_ov031_02215b64(const unsigned char* arg0, unsigned char* arg1, unsigned int arg2, unsigned int arg3) {
    unsigned int var0;
    unsigned int var1;
    int var2;
    unsigned int var3;
    int var4;
    int var5;
    int var6;
    int var7 = (arg2 * 3) >> 2;
    int var8;
    if (arg3 >= (arg2 * 3) >> 2) {
        var5 = arg2 & 3;
        var6 = arg2 - var5;
    } else {
        return -1;
    }
    for (var4 = 0; var4 < var6; var4 += 4) {
        var3 = 0;
        for (var8 = 0; var8 < 4; var8++) {
            var3 |= func_ov031_02215af4(arg0[var4 + var8]) << ((3 - var8) * 6);
        }
        var0 = var3;
        for (var2 = 0; var2 < 3; var2++) {
            arg1[(var4 / 4) * 3 + var2] = ((unsigned char*)&var0)[2 - var2];
        }
    }
    if (var5) {
        var1 = 0;
        var3 = 0;
        for (var8 = 0; var8 < var5; var8++) {
            var3 |= func_ov031_02215af4(arg0[var6 + var8]) << ((3 - var8) * 6);
            var1 |= var3;
        }
        for (var2 = 0; var2 < var5; var2++) {
            arg1[(var6 * 3) / 4 + var2] = ((unsigned char*)&var1)[2 - var2];
        }
    }
    return var7;
}
