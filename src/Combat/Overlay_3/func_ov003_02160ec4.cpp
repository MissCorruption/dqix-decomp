#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
enum { Enum_ov003_02160ec4_1124 = 0x28c };
enum { Enum_ov003_02160ec4_1191 = 0x2cf };
#else
enum { Enum_ov003_02160ec4_1124 = 0x464 };
enum { Enum_ov003_02160ec4_1191 = 0x4a7 };
#endif

// USA: func_ov003_02160ec4
extern "C" ARM void func_ov003_02160ec4(void* arg0) {
    char* var0 = (char*)arg0;
    if (!(*(int*)(var0 + Enum_ov003_02160ec4_1124) & 0x1000)) return;
    unsigned char var1 = *(unsigned char*)(var0 + Enum_ov003_02160ec4_1191);
    if (var1 == 0) {
        Struct_0208cb08* var2 = func_02094a00();
        func_02094b34(var2, 0x1f5, 0x66, 0, 0);
        *(unsigned char*)(var0 + Enum_ov003_02160ec4_1191) = *(unsigned char*)(var0 + Enum_ov003_02160ec4_1191) + 1;
    } else if (var1 == 1) {
        if (func_02094b4c(func_02094a00()) != 0) {
            *(int*)(var0 + Enum_ov003_02160ec4_1124) &= ~0x1000;
            *(unsigned char*)(var0 + Enum_ov003_02160ec4_1191) = *(unsigned char*)(var0 + Enum_ov003_02160ec4_1191) + 1;
        }
    }
}
