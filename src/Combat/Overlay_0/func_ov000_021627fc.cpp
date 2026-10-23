#include <globaldefs.h>
#include "Resource/ActionDataTables.h"

extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" int func_ov000_02163690(int arg0);

extern "C" void* func_02079e2c(char* arg0, int arg1);

// USA: func_ov000_021627fc
extern "C" ARM int func_ov000_021627fc(void* arg0) {
    void* var0 = func_ov000_02160f20(arg0);
    if (var0 == 0) {
        return 0;
    }
    int var1 = *(unsigned short*)var0;
    if (func_ov000_02163690(var1)) {
        var1 = 1;
    }
    Struct_02108e10* var2 = func_020797dc();
    void* var3 = func_02079e2c((char*)var2, (short)var1);
    if (var3 == 0) {
        return 0;
    }
    unsigned int var4 = *(unsigned int*)((char*)var3 + 0x14) >> 0x1c;
    if (var4 == 5) {
        return 1;
    }
    return var4 == 2;
}
