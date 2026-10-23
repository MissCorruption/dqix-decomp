#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" void* func_ov001_02159f54(void*);

// USA: func_ov001_0215a44c
extern "C" ARM void* func_ov001_0215a44c(void* arg0, Struct_ov001_02158efc arg1) {
    void* var0 = func_ov001_02159f54(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 7;
        var0 = memcpy((char*)var0 + 4, &arg1, 0xc);
    }
    return var0;
}
