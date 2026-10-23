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
extern "C" void* func_ov011_021849c8(void*);
struct Struct_ov004_0215f6f4;
extern "C" struct Struct_ov004_0215f6f4* func_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void func_ov023_021f8944(struct Struct_ov004_0215f6f4* arg0, int arg1, int arg2, int arg3);

// USA: func_ov011_0218735c
extern "C" ARM int func_ov011_0218735c(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8)) & 0xff;
    void* var2 = func_ov017_021b2164();
    void* var3 = func_ov011_021849c8(var2);
    struct Struct_ov004_0215f6f4* var4 = func_ov023_021f6880(var3, var0);
    if (!var4) return 0;
    if (func_ov024_021f6f10(var4) != 6) return 0;
    func_ov023_021f8944(var4, (int)(long)var2, var1, 1);
    return 1;
}
