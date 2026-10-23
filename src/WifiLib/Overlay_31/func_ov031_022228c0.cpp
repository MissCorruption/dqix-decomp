#include <globaldefs.h>

// USA: func_ov031_022228c0
extern "C" THUMB int func_ov031_022228c0(char* arg0, int arg1) {
    char* var0;
    unsigned char var1;
    int var2;
    int var3;
    int var4;
    var0 = arg0;
    var1 = arg1;
    var3 = (var1 & 0xf0) >> 4;
    var2 = 0;
    var4 = var1 & 0xf;
    do {
        if (var3 <= 9) {
            var3 += '0';
        } else {
            var3 += 'A' - 10;
        }
        var2++;
        *var0++ = var3;
        var3 = var4;
    } while (var2 < 2);
    *var0 = 0;
    return var0 - arg0;
}
