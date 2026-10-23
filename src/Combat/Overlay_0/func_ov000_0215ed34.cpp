#include <globaldefs.h>

// USA: func_ov000_0215ed34
extern "C" ARM int func_ov000_0215ed34(char* arg0, unsigned short* arg1, int arg2) {
    int var0;
    int var1 = 0;
    var0 = var1;
    while (var0 < (int)(((unsigned int)*(unsigned char*)(arg0 + 0x81b1) << 26) >> 30)) {
        unsigned short var2 = *(unsigned short*)(arg0 + var0 * 0x18 + 0x81b4);
        arg1[var1] = var2;
        var1++;
        if (var1 == arg2) {
            return var1;
        }
        var0++;
    }
    return var1;
}
