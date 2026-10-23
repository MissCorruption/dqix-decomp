#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void func_ov023_021f9ba8(void*, int);
extern "C" void func_ov023_021f9bb8(void*, int);

// USA: func_ov004_02164df4
extern "C" ARM int func_ov004_02164df4(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xb);
    if (!var0) return 0;
    if (func_ov024_021f6f10(var0) != 7) return 0;
    func_ov023_021f9ba8(var0, 0);
    func_ov023_021f9bb8(var0, 0);
    return 0;
}
