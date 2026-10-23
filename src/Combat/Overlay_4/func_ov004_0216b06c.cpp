#include <globaldefs.h>

#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void func_ov023_021fbb64(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov023_021ff078;

struct Struct_ov004_0216b06c { void* unknown_0_; char unknown_4_[0x40 - 4]; };

// USA: func_ov004_0216b06c
extern "C" ARM void func_ov004_0216b06c(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7
#if !defined(jpn)
, unsigned char arg8
#endif
) {
    void* var0 = func_ov011_021845f8(arg0, arg2);
    void* var1 = ((SafeAllocator*)((char*)var0 + 4))->Allocate(0x40);
    if (!var1) return;

    struct Struct_ov004_0216b06c var2;
    var2.unknown_0_ = &data_ov023_021ff078;
    memcpy(var1, &var2, sizeof(Struct_ov004_0216b06c));

    func_ov023_021fbb64(var1, arg0, arg1, arg2, arg3, arg4, arg5, arg6, 1, arg7, 0xf);

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(arg0), (struct Struct_ov004_0215c30c_2*)var1);
#if !defined(jpn)
    *((unsigned char*)var1 + 0x3d) = arg8;
#endif
}
