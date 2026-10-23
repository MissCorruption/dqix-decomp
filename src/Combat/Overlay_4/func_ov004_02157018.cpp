#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" int func_ov023_021fa598(void*);

// USA: func_ov004_02157018
extern "C" ARM int func_ov004_02157018(void* arg0, int arg1) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) goto ret0;
    if (func_ov024_021f6f10(var0) != 0x4) goto ret0;
    return func_ov023_021fa598(var0);
ret0:
    return 0;
}
