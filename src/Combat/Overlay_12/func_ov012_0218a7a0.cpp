#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov012_021893b4(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov012_0218a844(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov012_0218a7a0 { char unknown_0_[LOW_REGION(0x344, 0x374)]; void* unknown_374_; };

// USA: func_ov012_0218a7a0
#if defined(jpn)
extern "C" ARM void func_ov012_0218b234(char* arg0)
#else
extern "C" ARM void func_ov012_0218a7a0(char* arg0)
#endif
 {
    unsigned char var0 = *(unsigned char*)(arg0 + 0x1000 + LOW_REGION(0x341, 0x371));
    func_ov012_021893b4(arg0, var0, LOW_REGION(3, 0), 1);

    memset(((struct Struct_ov012_0218a7a0*)(arg0 + 0x1000))->unknown_374_, 0, LOW_REGION(0x800, 0x960));

    func_ov012_0218a844(arg0, ((struct Struct_ov012_0218a7a0*)(arg0 + 0x1000))->unknown_374_, 0);

    unsigned short var1 = *(unsigned short*)(arg0 + LOW_REGION(0x1400 + 0x1c, 0x1300 + 0xc4));
    unsigned int var2 = ((unsigned int)var1 << 16) >> 21;
    int var3 = var2 - 1;
#if defined(jpn)
    if ((var3 / 16) > 0)
        func_0205d304(arg0 + 0x90, ((struct Struct_ov012_0218a7a0*)(arg0 + 0x1000))->unknown_374_, 0, 0, 1, 1, 0);
    else
        func_0205d304(arg0 + 0x90, ((struct Struct_ov012_0218a7a0*)(arg0 + 0x1000))->unknown_374_, 0, 0, 0, 1, 0);
#else
    int var4 = ((var3 / 16) > 0) ? 1 : 0;

    func_0205d304(arg0 + 0xac, ((struct Struct_ov012_0218a7a0*)(arg0 + 0x1000))->unknown_374_, 0, 0, var4, 1, 0, 0);
#endif
}
