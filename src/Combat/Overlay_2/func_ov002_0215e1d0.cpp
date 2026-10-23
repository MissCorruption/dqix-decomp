#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215e250(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov002_0215e1d0 { char unknown_0_[RG(0xbd0, 0xa98)]; void* unknown_bd0_; };
struct Struct_ov002_0215e1d0_2 { char unknown_0_[RG(0xbb8, 0xa80)]; int unknown_bb8_; };

// USA: func_ov002_0215e1d0
extern "C" ARM void func_ov002_0215e1d0(char* arg0) {
    func_ov002_0215be00(arg0, ((struct Struct_ov002_0215e1d0_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, 1, 1);

    memset(((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_0215e250(arg0, ((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0);

#if defined(jpn)
    func_0205d304(arg0 + 0xe20, ((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + 0xec8, ((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0, 0);
#endif
}
