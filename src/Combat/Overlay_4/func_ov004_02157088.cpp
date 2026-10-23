#include <globaldefs.h>

extern "C" void* func_ov004_02157054(void* arg0, int arg1);
extern "C" void* func_ov023_021fbdec(void* arg0);

// USA: func_ov004_02157088
extern "C" ARM void* func_ov004_02157088(void* arg0, int arg1) {
    void* var0 = func_ov004_02157054(arg0, arg1);
    if (!var0) return NULL;
    return func_ov023_021fbdec(var0);
}
