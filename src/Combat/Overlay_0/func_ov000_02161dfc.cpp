#include <globaldefs.h>

// USA: func_ov000_02161dfc
extern "C" ARM void func_ov000_02161dfc(unsigned char* arg0, unsigned char* arg1) {
    int var0 = 0x16;
    unsigned char* var1 = arg0 + 0x3e;
    unsigned char* var2 = arg1;
    do {
        *var1 = *var2;
        var2++;
        var0--;
        var1++;
    } while (var0 != 0);
    arg0[0x54] = arg1[0x16];
    arg0[0x55] = arg1[0x17];
}
