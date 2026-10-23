#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

// USA: func_ov008_02189228
extern "C" ARM void func_ov008_02189228(void* arg0) {
    char* var0 = (char*)arg0;
    VectorizedMemset(var0, 0, 6);
    memset(var0 + 6, 0, 0xb);
    unsigned short* var1 = (unsigned short*)(var0 + 0x12);
    *var1 &= ~0x3FFF;
    var0[0x11] = 0;
    *var1 &= ~0x4000;
    VectorizedMemset(var0 + 0x14, 0, 0x18);
}
