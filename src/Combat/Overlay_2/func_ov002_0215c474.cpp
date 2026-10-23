#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_02157030(void* arg0, unsigned int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215c52c(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov002_0215c474
extern "C" ARM void func_ov002_0215c474(char* arg0) {
    short var0 = 0;
    short var1 = 0;
    short var2 = 1;
    short var3 = 1;
    func_ov002_02157030(arg0, 1, &var0, &var1, &var2, &var3);

    func_ov002_0215be00(arg0, (*(int*)(arg0 + 0x1000 + RG(0xbb8, 0xa80))) & 0xff, var0, var1);

    memset(*(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, RG(0x960, 0x800));

    func_ov002_0215c52c(arg0, *(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0);

#if defined(jpn)
    func_0205d304(arg0 + 0xe20, *(void**)(arg0 + 0x1000 + 0xa98), 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + 0x2c8 + 0xc00, *(void**)(arg0 + 0x1000 + 0xbd0), 0, 1, 0, 1, 0, 0);
#endif
}
