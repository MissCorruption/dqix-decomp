#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov031_02204168
extern "C" ARM void* func_ov031_02204168(int arg0, unsigned int arg1, void* arg2, unsigned int arg3) {
    if (arg3 < arg1) {
        unsigned int var0 = arg1 - arg3;
        VectorizedMemset(arg2, arg0, var0);
        arg2 = (char*)arg2 + var0;
    }
    return arg2;
}
