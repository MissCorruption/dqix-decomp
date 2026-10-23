#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov001_02159f94(void*);

// USA: func_ov001_0215a530
extern "C" ARM void* func_ov001_0215a530(void* arg0, int arg1) {
    void* var0 = func_ov001_02159f94(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 9;
        *(int*)((char*)var0 + 0x10) = arg1;
    }
    return var0;
}
