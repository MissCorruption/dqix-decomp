#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

struct Struct_ov011_02184c4c;
extern "C" float func_ov011_02184c4c(struct Struct_ov011_02184c4c* arg0);

extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" int func_ov023_021f89f4(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov023_021fe708;

struct Struct_ov011_0218598c { void* unknown_0_; char unknown_4_[0x50 - 4]; };

// USA: func_ov011_0218598c
extern "C" ARM int func_ov011_0218598c(char* arg0) {
    int var0 = func_ov011_02184c30((struct Struct_ov011_02184c30*)arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 0x10));
    int var3 = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 0x18));
    int var4 = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 0x20));
    int var5 = (int)func_ov011_02184c4c((struct Struct_ov011_02184c4c*)(arg0 + 0x28));
    int var6 = (int)func_ov011_02184c4c((struct Struct_ov011_02184c4c*)(arg0 + 0x30));
    int var7 = (int)func_ov011_02184c4c((struct Struct_ov011_02184c4c*)(arg0 + 0x38));
    int var8 = (int)func_ov011_02184c4c((struct Struct_ov011_02184c4c*)(arg0 + 0x40));

    void* var9 = func_ov017_021b2164();
    void* var10 = func_ov011_021845f8(var9, var1);
    if (var10 == 0) return 0;

    ((SafeAllocator*)((char*)var10 + 4))->GetSizeWithLargestBlockRemoved();
    void* var11 = ((SafeAllocator*)((char*)var10 + 4))->Allocate(0x50);
    if (var11 == 0) return 0;

    struct Struct_ov011_0218598c var12;
    var12.unknown_0_ = &data_ov023_021fe708;
    memcpy(var11, &var12, sizeof(Struct_ov011_0218598c));

    if (func_ov023_021f89f4(var11, var9, var0, var1, var2, var3, var4, var5, var6, var7, var8) == 0) return 0;

    void* var13 = func_ov011_021849c8(var9);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var13, (struct Struct_ov004_0215c30c_2*)var11);
    return 1;
}
