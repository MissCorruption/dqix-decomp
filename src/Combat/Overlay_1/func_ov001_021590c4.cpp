#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov001_02158dcc(void*);

// USA: func_ov001_021590c4
extern "C" ARM void* func_ov001_021590c4(void* arg0) {
    void* var0 = func_ov001_02158dcc(arg0);
    if (var0 != NULL) *(int*)var0 = 9;
    return var0;
}
