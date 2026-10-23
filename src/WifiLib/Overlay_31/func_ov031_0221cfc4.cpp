#include <globaldefs.h>

// USA: func_ov031_0221cfc4
extern "C" THUMB unsigned int func_ov031_0221cfc4(unsigned int arg0, unsigned int arg1) {
    unsigned int var0 = arg0 & arg1;
    unsigned int var1 = ~arg1;
    unsigned int var2 = (arg0 & var1) + 1;
    var2 = var2 | var0;
    unsigned int var3 = var1 | var0;
    if (var2 < var3)
        return var2;
    return 1 | var0;
}
