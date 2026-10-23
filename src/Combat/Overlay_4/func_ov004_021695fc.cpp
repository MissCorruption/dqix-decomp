#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Memory.h"

struct Struct_ov004_0216950c { unsigned char unknown_0_[0x14]; };

// USA: func_ov004_021695fc
extern "C" ARM void func_ov004_021695fc(struct Struct_ov004_0216950c* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    VectorizedMemset(var0, 0, 6);
    memset(var0 + 6, 0, 0xb);
    unsigned short* var1 = (unsigned short*)(var0 + 0x12);
    *var1 = *var1 & -0x4000;
    var0[0x11] = 0;
    *var1 = *var1 & ~0x4000;
    VectorizedMemset(var0 + 0x14, 0, 0x18);
}
