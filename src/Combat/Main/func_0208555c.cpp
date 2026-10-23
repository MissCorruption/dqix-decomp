#include <globaldefs.h>

extern signed char data_020e8b37[];
extern signed char data_020e8b36[];

// USA: func_0208555c
extern "C" ARM int func_0208555c(unsigned char* arg0) {
    int var0 = 0;
    signed char var1;
    while ((var1 = data_020e8b36[var0 * 2]) != -1) {
        signed char var2 = data_020e8b37[var0 + var0];
        if (*(short*)(arg0 + (var2 << 5) + 0x1ac) > 0) {
            int var3 = *(int*)(arg0 + var1 * 0x2c + 0x2f4);
            if ((unsigned int)(var3 << 10) >> 31) {
                return 1;
            }
        }
        var0++;
    }
    return 0;
}
