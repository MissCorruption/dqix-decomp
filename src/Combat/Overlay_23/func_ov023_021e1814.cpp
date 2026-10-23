#include <globaldefs.h>

extern "C" void* func_ov023_021e18cc(void*, void*, int, int, int);

// USA: func_ov023_021e1814
extern "C" ARM void func_ov023_021e1814(void* arg0, void* arg1, int arg2, int arg3, int arg4) {
    void* var0 = func_ov023_021e18cc(arg0, arg1, arg2, arg3, arg4);
    if (var0 == 0) return;
    *(void**)arg0 = var0;
    while (var0 != 0) {
        void* var1 = func_ov023_021e18cc(arg0, arg1, arg2, arg3, arg4);
        *(void**)var0 = var1;
        var0 = var1;
    }
}
