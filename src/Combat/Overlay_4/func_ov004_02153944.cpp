#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" unsigned short func_ov023_021f6f10(void*);

// USA: func_ov004_02153944
extern "C" ARM void* func_ov004_02153944(void* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880(var0, arg1);
    if (!var1) return NULL;
    int var2 = func_ov023_021f6f10(var1);
    void* var3;
    if (var2 != 6) var3 = NULL;
    else var3 = var1;
    return var3;
}
