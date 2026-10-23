#include <globaldefs.h>

extern "C" void* func_ov023_021e1604(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov023_021e1564
extern "C" ARM void func_ov023_021e1564(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_ov023_021e1604(arg0, arg1, arg2, arg3);
    if (var0 == NULL) return;
    *(void**)arg0 = var0;
    while (var0 != NULL) {
        void* var1 = func_ov023_021e1604(arg0, arg1, arg2, arg3);
        *(void**)var0 = var1;
        var0 = var1;
    }
}
