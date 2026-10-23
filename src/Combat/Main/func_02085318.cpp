#include <globaldefs.h>

extern signed char data_020e8b5b[];
extern signed char data_020e8b5a[];

// USA: func_02085318
extern "C" ARM int func_02085318(unsigned char* arg0) {
    int var0;
    int var1 = 0;
    var0 = var1;
    signed char var2;
    while ((var2 = data_020e8b5a[var1 * 2]) != -1) {
        signed char var3 = data_020e8b5b[var1 + var1];
        if (*(short*)(arg0 + (var3 << 5) + 0x1ac) > 0) {
            int var4 = *(int*)(arg0 + var2 * 0x2c + 0x2f4);
            if ((unsigned int)(var4 << 16) >> 31) {
                var0++;
            }
        }
        var1++;
    }
    return var0;
}
