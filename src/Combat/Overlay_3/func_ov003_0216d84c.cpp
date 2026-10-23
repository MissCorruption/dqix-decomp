#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
enum { Enum_ov003_0216d84c_1004 = 0x27c };
#else
enum { Enum_ov003_0216d84c_1004 = 0x3ec };
#endif

// USA: func_ov003_0216d84c
extern "C" ARM void func_ov003_0216d84c(void* arg0) {
    char* var0 = (char*)arg0;
    if (!(*(unsigned char*)(var0 + 0x1000 + Enum_ov003_0216d84c_1004) & 1)) return;
    short var1 = *(short*)(var0 + 8);
    if (var1 == 0) {
        Struct_0208cb08* var2 = func_02094a00();
        func_02094b34(var2, 0x1f5, 0x66, 0, 0);
        *(short*)(var0 + 8) = 1;
    } else if (var1 == 1) {
        if (func_02094b4c(func_02094a00()) != 0) {
            *(unsigned char*)(var0 + 0x1000 + Enum_ov003_0216d84c_1004) &= ~1;
            *(short*)(var0 + 8) = -1;
        }
    }
}
