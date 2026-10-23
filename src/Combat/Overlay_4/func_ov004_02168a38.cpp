#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" unsigned int func_ov023_021f6f10(void* arg0);

// USA: func_ov004_02168a38
extern "C" ARM void* func_ov004_02168a38(void* arg0, int arg1) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (var0) {
        if (func_ov023_021f6f10(var0) == 15) return var0;
    }
    return NULL;
}
