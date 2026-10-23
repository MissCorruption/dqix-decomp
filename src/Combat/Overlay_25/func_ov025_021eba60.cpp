#include "Resource/ActionDataTables.h"
#include <globaldefs.h>

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" void* func_02079e2c(char* arg0, int arg1);

// USA: func_ov025_021eba60
extern "C" ARM void func_ov025_021eba60(char* arg0) {
    void* var0 = func_ov000_02160f20(func_ov000_02160130());
    Struct_02108e10* var1 = func_020797dc();
    short var2 = *(short*)var0;
    void* var3 = func_02079e2c((char*)var1, var2);
    if (var3 == 0) {
        return;
    }
    unsigned int var4 = *(unsigned int*)((char*)var3 + 0x14);
    var4 = var4 >> 0x1c;
    if (var4 == 2) {
        unsigned int var5 = *(unsigned int*)((char*)var3 + 8);
        var5 = var5 << 0x16;
        var5 = var5 >> 0x1e;
        if (var5 == 1) {
            unsigned int var6 = *(unsigned int*)(arg0 + 0x1c4);
            var6 |= 0x80;
            *(unsigned int*)(arg0 + 0x1c4) = var6;
        }
    }
}
