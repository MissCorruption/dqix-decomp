#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

// USA: func_ov003_02159464
extern "C" ARM void func_ov003_02159464(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    Struct_0208cb08* var1;
    unsigned char var2;
    if (var0[0x59d] == 0) return;
    var1 = func_02094a00();
    var2 = var0[0x59e];
    if (var2 == 0) {
        func_02094b30(var1, 0x200, 1);
        var0[0x59e] = var0[0x59e] + 1;
        return;
    }
    if (var2 != 1) return;
    if (func_02094b4c(var1) != 0) {
        var0[0x59d] = 0;
        var0[0x59e] = 0;
    }
}
