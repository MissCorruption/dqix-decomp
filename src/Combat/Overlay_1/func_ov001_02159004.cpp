#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_ov001_02158dcc(void** arg0);

// USA: func_ov001_02159004
extern "C" ARM void func_ov001_02159004(void** arg0, int arg1, int arg2, int arg3, int arg4) {
    unsigned int* var0 = (unsigned int*)func_ov001_02158dcc(arg0);
    if (var0 != 0) {
        var0[0] = 5;
        memcpy((char*)var0 + 0x4, &arg1, 0xc);
        var0[7] = arg4;
    }
}
