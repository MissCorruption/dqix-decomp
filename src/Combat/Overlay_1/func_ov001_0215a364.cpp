#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" void* func_ov001_02159f14(void*);

// USA: func_ov001_0215a364
extern "C" ARM void func_ov001_0215a364(void* arg0, Struct_ov001_02158efc arg1, int arg2, int arg3, const char* arg4) {
    void* var0 = func_ov001_02159f14(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 2;
        memcpy((char*)var0 + 4, &arg1, 0xc);
        *(int*)((char*)var0 + 0x10) = arg2;
        *(int*)((char*)var0 + 0x14) = arg3;
        if (arg4 != NULL) {
            strcpy((char*)var0 + 0x1c, arg4);
        }
    }
}
