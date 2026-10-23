#include <globaldefs.h>

// USA: func_ov000_021719f8
extern "C" ARM int func_ov000_021719f8(int* arg0) {
    int var0 = arg0[0xa];
    int var1 = (var0 & 1) != 0;
    int var2 = var1 != 0;
    var2 = var2 | ((var0 & 0x10) != 0);
    var2 = var2 != 0;
    var2 = var2 | ((var0 & 0x80000) != 0);
    var2 = var2 != 0;
    var2 = var2 | ((var0 & 8) != 0);
    var2 = var2 != 0;
    return var2;
}
