#include <globaldefs.h>

extern "C" void* func_ov001_02159f14(void*);

// USA: func_ov001_0215a3c0
extern "C" ARM void* func_ov001_0215a3c0(void* arg0) {
    void* var0 = func_ov001_02159f14(arg0);
    if (var0 != NULL) *(int*)var0 = 3;
    return var0;
}
