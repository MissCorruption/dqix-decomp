#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_ov001_02159f14(void*);

// USA: func_ov001_0215a3f8
extern "C" ARM void* func_ov001_0215a3f8(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_ov001_02159f14(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 5;
        var0 = memcpy((char*)var0 + 4, &arg1, 0xc);
    }
    return var0;
}
