#include <globaldefs.h>

extern "C" void* func_ov023_021f6524(void* arg0, int arg1);
struct Struct_ov004_021549e4_4;
extern "C" unsigned short func_ov023_021f9bc0(struct Struct_ov004_021549e4_4* arg0);
struct Struct_ov004_021549e4_2;
extern "C" unsigned int func_ov023_021f9bb0(struct Struct_ov004_021549e4_2* arg0);
struct Struct_ov004_021549e4_3;
extern "C" unsigned int func_ov023_021f9b6c(struct Struct_ov004_021549e4_3* arg0, unsigned int arg1, unsigned int arg2);

// USA: func_ov023_021f6558
extern "C" ARM void* func_ov023_021f6558(void* arg0, int arg1) {
    void* var0 = func_ov023_021f6524(arg0, arg1);
    if (var0 == 0) return (void*)-1;
    unsigned int var1 = func_ov023_021f9bc0((struct Struct_ov004_021549e4_4*)var0);
    unsigned int var2 = func_ov023_021f9bb0((struct Struct_ov004_021549e4_2*)var0);
    return (void*)func_ov023_021f9b6c((struct Struct_ov004_021549e4_3*)var0, var2, var1);
}
