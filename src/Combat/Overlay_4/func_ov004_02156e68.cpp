#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov004_021549e4_4;
struct Struct_ov004_021549e4_2;
struct Struct_ov004_021549e4_3;

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void**, int);
extern "C" unsigned short func_ov023_021f6f10(void*);
extern "C" unsigned short func_ov023_021f9bc0(Struct_ov004_021549e4_4*);
extern "C" unsigned int func_ov023_021f9bb0(Struct_ov004_021549e4_2*);
extern "C" unsigned int func_ov023_021f9b6c(Struct_ov004_021549e4_3*, unsigned int, unsigned int);

// USA: func_ov004_02156e68
extern "C" ARM void* func_ov004_02156e68(void* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880((void**)var0, arg1);
    if (!var1) return 0;
    if (func_ov023_021f6f10(var1) != 7) return 0;
    unsigned short var2 = func_ov023_021f9bc0((Struct_ov004_021549e4_4*)var1);
    unsigned int var3 = func_ov023_021f9bb0((Struct_ov004_021549e4_2*)var1);
    unsigned int var4 = func_ov023_021f9b6c((Struct_ov004_021549e4_3*)var1, var3, var2);
    return func_ov023_021f6880((void**)var0, var4);
}
