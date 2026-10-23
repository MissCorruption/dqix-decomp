#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif

struct Struct_ov004_0215de9c;
extern "C" void func_ov023_021fb25c(Struct_ov004_0215de9c*, unsigned int, unsigned int, unsigned int, int);

// USA: func_ov011_02187570
extern "C" ARM int func_ov011_02187570(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    int var3 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x18));
    int var4 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x20));
    void* var5 = func_ov017_021b2164();
    void* var6 = func_ov011_021849c8(var5);
    struct Struct_ov004_0215de9c* var7 = (struct Struct_ov004_0215de9c*)func_ov023_021f6880(var6, var0);
    if (!var7) return 1;
    if (func_ov024_021f6f10(var7) != 1) return 1;
    func_ov023_021fb25c(var7, var1, var2, var3, var4);
    return 1;
}
