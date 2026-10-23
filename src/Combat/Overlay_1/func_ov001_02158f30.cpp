#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_ov001_02158dcc(void*);

// USA: func_ov001_02158f30
extern "C" ARM void* func_ov001_02158f30(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_ov001_02158dcc(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 2;
        var0 = memcpy((char*)var0 + 0x10, &arg1, 0xc);
    }
    return var0;
}
