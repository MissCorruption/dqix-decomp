#include <globaldefs.h>

// USA: func_0208902c
extern "C" ARM void func_0208902c(unsigned char* arg0, int arg1) {
    unsigned int var0 = *(unsigned int*)(arg0 + 0x14);
    int var1 = 0;
    if (var0 & 0x4) {
        var1 = 1;
    }
    *(unsigned int*)(arg0 + 0x14) = 0;
    *(unsigned int*)(arg0 + 0x18) = 0;
    if (var1) {
        *(unsigned int*)(arg0 + 0x14) |= 0x4;
    }
    *(unsigned short*)arg0 = arg1;
}
