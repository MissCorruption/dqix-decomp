#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_ov001_02158e4c(void** arg0);

// USA: func_ov001_02159210
extern "C" ARM void func_ov001_02159210(void** arg0, int arg1, int arg2, int arg3, int arg4) {
    unsigned int* var0 = (unsigned int*)func_ov001_02158e4c(arg0);
    if (var0 != 0) {
        var0[0] = 0x11;
        memcpy((char*)var0 + 0x4, &arg1, 0xc);
        var0[7] = arg4;
    }
}
