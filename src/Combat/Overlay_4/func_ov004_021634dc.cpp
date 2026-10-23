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
struct Struct_ov004_021549e4_2;
extern "C" unsigned int func_ov023_021f9bb0(struct Struct_ov004_021549e4_2* arg0);

// USA: func_ov004_021634dc
extern "C" ARM int func_ov004_021634dc(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xa);
    if (!var0) return 0;
    if (func_ov024_021f6f10(var0) != 7) return 0;
    short var1 = *(short*)((char*)var0 + 0x5c);
    return func_ov023_021f9bb0((struct Struct_ov004_021549e4_2*)var0) + (var1 << 3);
}
