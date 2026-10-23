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
extern "C" int func_ov023_021f98e0(void*, void*);

// USA: func_ov004_0216b338
extern "C" ARM int func_ov004_0216b338(void* arg0, int arg1, int arg2) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) return (int)var0;
    int var1 = func_ov024_021f6f10(var0);
    if (var1 != 7) return var1;
    if (!var0) return var1;
    func_ov023_021f9ba8(var0, (unsigned short)arg2);
    return func_ov023_021f98e0(var0, arg0);
}
