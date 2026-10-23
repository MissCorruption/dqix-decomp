#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov024_021f6f10(void* arg0);
extern "C" void func_ov023_021fb27c(void*, int);

// USA: func_ov004_02165ea4
extern "C" ARM void* func_ov004_02165ea4(void* arg0, int arg1, int arg2) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (var0 == NULL) var0 = NULL;
    else if (func_ov024_021f6f10(var0) != 1) var0 = NULL;
    if (var0 == NULL) return NULL;
    func_ov023_021fb27c(var0, arg2);
    return var0;
}
