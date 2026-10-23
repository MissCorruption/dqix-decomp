#include <globaldefs.h>

#if defined(jpn)
#define func_ov004_02168b08 func_ov004_02169040
#endif

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
struct Struct_02072a68_2;
extern "C" void* func_ov023_021fa598(void*);

// USA: func_ov004_02168b08
extern "C" ARM Struct_02072a68_2* func_ov004_02168b08(void* arg0, int arg1) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) goto ret0;
#if defined(jpn)
    if (func_ov023_021f6f10(var0) != 0x4) goto ret0;
#else
    if (func_ov024_021f6f10(var0) != 0x4) goto ret0;
#endif
    return (Struct_02072a68_2*)func_ov023_021fa598(var0);
ret0:
    return 0;
}
