#include <globaldefs.h>

extern signed char data_020e8bb5[];
extern signed char data_020e8bb4[];

// USA: func_020854e8
extern "C" ARM int func_020854e8(unsigned char* arg0) {
    int var0 = 0;
    signed char var1;
    while ((var1 = data_020e8bb4[var0 * 2]) != -1) {
        signed char var2 = data_020e8bb5[var0 + var0];
        if (*(short*)(arg0 + (var2 << 5) + 0x1ac) > 0) {
            int var3 = *(int*)(arg0 + var1 * 0x2c + 0x2f4);
            if ((unsigned int)(var3 << 11) >> 31) {
                return 1;
            }
        }
        var0++;
    }
    return 0;
}
