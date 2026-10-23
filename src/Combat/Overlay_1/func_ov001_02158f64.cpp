#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" void* func_ov001_02158dcc(void*);

// USA: func_ov001_02158f64
extern "C" ARM void func_ov001_02158f64(void* arg0, Struct_ov001_02158efc arg1, Struct_ov001_02158efc arg2, int arg3, int arg4, unsigned char arg5) {
    char* var0 = (char*)func_ov001_02158dcc(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 3;
        memcpy(var0 + 4, &arg1, 0xc);
        memcpy(var0 + 0x10, &arg2, 0xc);
        *(int*)(var0 + 0x1c) = arg3;
        *(int*)(var0 + 0x20) = arg4;
        *(int*)(var0 + 0x24) = arg5;
    }
}
