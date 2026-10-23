#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_021845f8 func_ov011_021845f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" int func_ov012_021845f8(void* arg0, int arg1);

struct Struct_ov011_021844f4;
extern "C" int func_ov011_021844f4(struct Struct_ov011_021844f4* arg0, int arg1, unsigned int arg2);

// USA: func_ov011_021878dc
extern "C" ARM int func_ov011_021878dc(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    void* var2 = func_ov017_021b2164();
    if (func_ov012_021845f8(var2, var0) == 0) return 0;
    func_ov011_021844f4((struct Struct_ov011_021844f4*)var2, var0, (unsigned int)var1);
    return 1;
}
