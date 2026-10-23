#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_02157030(void* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215c72c(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
#define RG(u, j) (u)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif
struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov002_0215c8a4(void* arg0);
struct Struct_0205d81c;
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);
struct Struct_0205dee8;
extern "C" void func_0205dee8(struct Struct_0205dee8* arg0, int arg1);

struct Struct_ov002_0215c614 { char unknown_0_[RG(0xbd0, 0xa98)]; void* unknown_bd0_; };
struct Struct_ov002_0215c614_2 { char unknown_0_[RG(0xbb8, 0xa80)]; int unknown_bb8_; };

// USA: func_ov002_0215c614
extern "C" ARM void func_ov002_0215c614(char* arg0) {
    short var0 = 0, var1 = 0, var2 = 1, var3 = 1;
    func_ov002_02157030(arg0, 3, &var0, &var1, &var2, &var3);
    var1 = var1 + 3;
    func_ov002_0215be00(arg0, ((struct Struct_ov002_0215c614_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, var0, var1);

    memset(((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_0215c72c(arg0, ((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0);

#if defined(jpn)
    func_0205d304(arg0 + 0xe20, ((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + 0xec8, ((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0, 0);
#endif

    func_0205de24((struct Struct_0205de24_2*)(arg0 + RG(0xec8, 0xe20)), 0, 2);
    func_ov002_0215c8a4(arg0);
    func_0205deb4((Struct_0205d81c*)(arg0 + RG(0xec8, 0xe20)), ((struct Struct_ov002_0215c614_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, 0);
    func_0205dee8((struct Struct_0205dee8*)(arg0 + RG(0xec8, 0xe20)), ((struct Struct_ov002_0215c614_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff);
}
