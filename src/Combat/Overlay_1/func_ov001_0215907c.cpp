#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" void* func_ov001_02158dcc(void*);

// USA: func_ov001_0215907c
extern "C" ARM void* func_ov001_0215907c(void* arg0, Struct_ov001_02158efc arg1, Struct_ov001_02158efc arg2) {
    void* var0 = func_ov001_02158dcc(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 8;
        memcpy((char*)var0 + 4, &arg1, 0xc);
        return memcpy((char*)var0 + 0x10, &arg2, 0xc);
    }
    return var0;
}
