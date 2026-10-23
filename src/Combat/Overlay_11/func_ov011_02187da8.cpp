#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
struct Struct_ov011_02187da8;
extern "C" void func_ov023_021fb284(Struct_ov011_02187da8*, int);

// USA: func_ov011_02187da8
extern "C" ARM int func_ov011_02187da8(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    void* var2 = func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (!var2) return 0;
    if (func_ov023_021f6f10(var2) != 1) return 0;
    func_ov023_021fb284((Struct_ov011_02187da8*)var2, (char)var1);
    return 1;
}
