#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov025_021dcd5c_0 = 0x1f0 };
#else
enum { Enum_ov025_021dcd5c_0 = 0 };
#endif

// USA: func_ov025_021dcd5c
extern "C" ARM void func_ov025_021dcd5c(void* arg0) {
    char* var0 = (char*)arg0;
    var0[0x6e4d + Enum_ov025_021dcd5c_0] = 0;
    var0[0x6e4c + Enum_ov025_021dcd5c_0] = 0;
    memset(var0 + 0x6ef0 + Enum_ov025_021dcd5c_0, -1, 10);
    *(short*)(var0 + 0x6efa + Enum_ov025_021dcd5c_0) = 0;
}
