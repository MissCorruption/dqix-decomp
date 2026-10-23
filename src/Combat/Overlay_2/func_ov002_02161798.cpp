#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

extern "C" void func_ov002_02157030(void* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0216186c(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov002_02161798 { char unknown_0_[RG(0xbd0, 0xa98)]; void* unknown_bd0_; };
struct Struct_ov002_02161798_2 { char unknown_0_[RG(0xbb8, 0xa80)]; int unknown_bb8_; };

// USA: func_ov002_02161798
extern "C" ARM void func_ov002_02161798(char* arg0) {
    short var0 = 0, var1 = 0, var2 = 1, var3 = 1;
    func_ov002_02157030(arg0, RG(0x27, 0x2a), &var0, &var1, &var2, &var3);
    var0 = var0 + 2;
    var1 = var1 + 0xb;
    func_ov002_0215be00(arg0, ((struct Struct_ov002_02161798_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, var0, var1);

    memset(((struct Struct_ov002_02161798*)(arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_0216186c(arg0, ((struct Struct_ov002_02161798*)(arg0 + 0x1000))->unknown_bd0_, 0);

#if defined(jpn)
    func_0205d304(arg0 + 0xe20, ((struct Struct_ov002_02161798*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + 0xec8, ((struct Struct_ov002_02161798*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0, 0);
#endif
}
