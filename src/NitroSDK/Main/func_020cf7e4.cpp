#include <globaldefs.h>

// USA: func_020cf7e4
extern "C" ARM int func_020cf7e4(unsigned int arg0) {
    int var0 = 0;
    int var1;
    int var2;
    var1 = 0;
    var2 = 0;
    do {
        if (((arg0 >> var2) & 0xf) >= 0xa) {
            return 0;
        }
        var1++;
        var2 += 4;
    } while (var1 < 8);
    {
        int var3;
        int var4;
        int var5;
        var5 = 0;
        var4 = 0;
        var3 = 1;
        do {
            int var6 = (arg0 >> var4) & 0xf;
            var0 += var3 * var6;
            var3 = var3 * 10;
            var5++;
            var4 += 4;
        } while (var5 < 8);
    }
    return var0;
}
