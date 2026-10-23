#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov001_02159f94(void*);

// USA: func_ov001_0215a5f0
extern "C" ARM void* func_ov001_0215a5f0(void* arg0) {
    void* var0 = func_ov001_02159f94(arg0);
    if (var0 != NULL) *(int*)var0 = 14;
    return var0;
}
