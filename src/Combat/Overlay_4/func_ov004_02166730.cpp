#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov004_0217101c { unsigned int unknown_0_; char* unknown_4_; };
extern Struct_ov004_0217101c data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c.unknown_4_
#else
extern char* data_ov004_0217101c;
#define CONTEXT_VALUE data_ov004_0217101c
#endif
extern "C" void* func_ov023_021f6524(void* arg0, int arg1);

struct Struct_ov004_02166730 { char unknown_0_[0x5c]; short unknown_5c_; short unknown_5e_; };

struct Struct_ov004_021549e4_5;
extern "C" void func_ov023_021f9bdc(struct Struct_ov004_021549e4_5* arg0, int arg1);
extern "C" int func_ov023_021f98e0(void* arg0, void* arg1);

struct Struct_ov004_021549e4_2;
extern "C" unsigned int func_ov023_021f9bb0(struct Struct_ov004_021549e4_2* arg0);
struct Struct_ov004_021549e4_4;
extern "C" unsigned short func_ov023_021f9bc0(struct Struct_ov004_021549e4_4* arg0);
struct Struct_ov004_021549e4_3;
extern "C" unsigned int func_ov023_021f9b6c(struct Struct_ov004_021549e4_3* arg0, unsigned int arg1, unsigned int arg2);

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
#if defined(jpn)
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void* func_ov023_021f9cb8(void* arg0, void* arg1, void* arg2);
extern "C" int func_ov023_021f88b8(void* arg0, void* arg1, int arg2);

// USA: func_ov004_02166730
extern "C" ARM int func_ov004_02166730(void* arg0, short arg1) {
    void* var0 = *(void**)(CONTEXT_VALUE + 8);
    short var1 = 0;
    while (var0 != NULL) {
        if (*(short*)((char*)var0 + 0) == arg1) break;
        var1++;
        var0 = *(void**)((char*)var0 + 8);
    }

    short var2 = var1 / 8;
    short var3 = var1 % 8;
    Struct_ov004_02166730* var4 = (Struct_ov004_02166730*)func_ov023_021f6524(arg0, 0x5b);
    if (var4) {
        short var5 = var4->unknown_5e_;
        var4->unknown_5c_ = var2;
        var4->unknown_5e_ = var5;
        func_ov023_021f9bdc((struct Struct_ov004_021549e4_5*)var4, (unsigned short)var3);
        func_ov023_021f98e0(var4, arg0);
    }

    unsigned int var6 = func_ov023_021f9bb0((struct Struct_ov004_021549e4_2*)var4);
    unsigned short var7 = func_ov023_021f9bc0((struct Struct_ov004_021549e4_4*)var4);
    unsigned int var8 = func_ov023_021f9b6c((struct Struct_ov004_021549e4_3*)var4, var6, var7);

    void* var9 = func_ov011_021849c8(arg0);
    void* var10 = func_ov023_021f6880(var9, var8);
    if (!var10) return (int)var10;

#if defined(jpn)
    int var11 = func_ov023_021f6f10(var10);
#else
    int var11 = func_ov024_021f6f10(var10);
#endif
    if (var11 != 8) return var11;

    void* var12 = func_ov023_021f9cb8(var4, arg0, var10);
    if (!var12) return (int)var12;

    return func_ov023_021f88b8(var12, arg0, 0x8000);
}
