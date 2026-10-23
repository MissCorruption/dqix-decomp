#include <globaldefs.h>

// USA: func_ov000_0215ffa0
extern "C" ARM short func_ov000_0215ffa0(void *arg0) {
    unsigned char *var0 = (unsigned char*)arg0;
    int var1;
    unsigned char var2 = var0[0x17];
    var1 = var2 - 1;
    if (var2 > 3) var1 = 2;
    if (var2 == 0) var1 = 0;
    return *(short*)((char*)var0 + var1 * 2 + 0xe);
}
