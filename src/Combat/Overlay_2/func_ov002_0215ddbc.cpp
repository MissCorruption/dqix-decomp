#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_ov004_0215de9c func_ov002_0215ef64
#endif

extern "C" void func_ov002_02157030(void* arg0, unsigned char arg1, short* arg2, short* arg3, short* arg4, short* arg5);
struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov004_0215de9c(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov002_0215ddbc
extern "C" ARM void func_ov002_0215ddbc(unsigned char* arg0) {
    short var0 = 0, var1 = 0, var2 = 1, var3 = 1;
    unsigned char var4 = (unsigned char)*(int*)(arg0 + 0x1000 + RG(0xbb8, 0xa80));
    func_ov002_02157030(arg0, var4, &var0, &var1, &var2, &var3);
    var0 = var0 + var2;
    func_0205de24((struct Struct_0205de24_2*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0, 3);
    func_ov002_0215be00(arg0, RG(0xd, 0xe), var0, var1);
    memset(*(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, RG(0x960, 0x800));
    func_ov004_0215de9c(arg0, *(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0);
#if defined(jpn)
    func_0205d304(arg0 + 0xe20, *(void**)(arg0 + 0x1000 + 0xa98), 0, 0, 0, 1, 0);
#else
    func_0205d304(arg0 + 0x2c8 + 0xc00, *(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, 0, 0, 1, 0, 0);
#endif
}
