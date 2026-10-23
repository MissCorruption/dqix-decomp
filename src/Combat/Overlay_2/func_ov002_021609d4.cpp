#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_02157030(void* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_02160aa0(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

#if defined(jpn)
struct Struct_ov002_021609d4 { char unknown_0_[0xa98]; void* unknown_a98_; };
struct Struct_ov002_021609d4_2 { char unknown_0_[0xa80]; int unknown_a80_; };
#else
struct Struct_ov002_021609d4 { char unknown_0_[0xbd0]; void* unknown_bd0_; };
struct Struct_ov002_021609d4_2 { char unknown_0_[0xbb8]; int unknown_bb8_; };
#endif

// USA: func_ov002_021609d4
#if defined(jpn)
struct Struct_0205d81c;
extern "C" void func_0205deb4(struct Struct_0205d81c*, int, int);
extern "C" void func_ov002_02161938(void* arg0, void* arg1, int arg2);
#define func_ov002_02160aa0 func_ov002_02161938
extern "C" ARM void func_ov002_021609d4(char* arg0) {
    short var0 = 0, var1 = 0, var2 = 1, var3 = 1;
    func_ov002_02157030(arg0, 0x24, &var0, &var1, &var2, &var3);
    var0 = var0 + 0xc;
    func_ov002_0215be00(arg0, ((struct Struct_ov002_021609d4_2*)(arg0 + 0x1000))->unknown_a80_ & 0xff, 4, var1);

    memset(((struct Struct_ov002_021609d4*)(arg0 + 0x1000))->unknown_a98_, 0, 0x800);
    func_ov002_02160aa0(arg0, ((struct Struct_ov002_021609d4*)(arg0 + 0x1000))->unknown_a98_, 0);

    func_0205d304(arg0 + 0xe20, ((struct Struct_ov002_021609d4*)(arg0 + 0x1000))->unknown_a98_, 0, 0, 0, 1, 0);
    func_0205deb4((struct Struct_0205d81c*)(arg0 + 0xe20), 0x22, 0);
    func_0205deb4((struct Struct_0205d81c*)(arg0 + 0xe20), 0x23, 0);
}
#else
extern "C" ARM void func_ov002_021609d4(char* arg0) {
    short var4 = 0, var5 = 0, var6 = 1, var7 = 1;
    func_ov002_02157030(arg0, 0x21, &var4, &var5, &var6, &var7);
    var4 = var4 + 0xc;
    func_ov002_0215be00(arg0, ((struct Struct_ov002_021609d4_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, 4, var5);

    memset(((struct Struct_ov002_021609d4*)(arg0 + 0x1000))->unknown_bd0_, 0, 0x960);
    func_ov002_02160aa0(arg0, ((struct Struct_ov002_021609d4*)(arg0 + 0x1000))->unknown_bd0_, 0);

    func_0205d304(arg0 + 0xec8, ((struct Struct_ov002_021609d4*)(arg0 + 0x1000))->unknown_bd0_, 0, 0, 1, 1, 0, 0);
}
#endif
