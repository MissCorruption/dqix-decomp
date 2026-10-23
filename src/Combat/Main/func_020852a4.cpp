#include <globaldefs.h>

extern signed char data_020e8b49[];
extern signed char data_020e8b48[];

// USA: func_020852a4
extern "C" ARM int func_020852a4(unsigned char* arg0) {
    int var0;
    int var1 = 0;
    var0 = var1;
    signed char var2;
    while ((var2 = data_020e8b48[var1 * 2]) != -1) {
        signed char var3 = data_020e8b49[var1 + var1];
        if (*(short*)(arg0 + (var3 << 5) + 0x1ac) > 0) {
            int var4 = *(int*)(arg0 + var2 * 0x2c + 0x2f4);
            if ((unsigned int)(var4 << 17) >> 31) {
                var0++;
            }
        }
        var1++;
    }
    return var0;
}
