#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" short func_ov023_021f6f10(void* arg0);

// USA: func_ov004_0215e4c0
extern "C" ARM void* func_ov004_0215e4c0(void* arg0, int arg1) {
    void* var0 = func_ov004_0215e47c(arg0, arg1);
    if (var0 == NULL) return NULL;
    if (func_ov023_021f6f10(var0) != 6) return NULL;
    return var0;
}
