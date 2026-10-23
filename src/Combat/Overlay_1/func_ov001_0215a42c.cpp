#include <globaldefs.h>

extern "C" void* func_ov001_02159f14(void*);

// USA: func_ov001_0215a42c
extern "C" ARM void* func_ov001_0215a42c(void* arg0, int arg1) {
    void* var0 = func_ov001_02159f14(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 6;
        *(int*)((char*)var0 + 0x10) = arg1;
    }
    return var0;
}
