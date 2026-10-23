#if defined(jpn)
#define R(j,u) (j)
#define data_ov023_021ff4b0 data_ov023_021fe73c
#define func_ov023_021fc408 func_ov023_021fb700
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021845f8(void* arg0, unsigned int arg1);
extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021fc408(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);

struct Struct_ov011_021871b8 {
    void* unknown_0_;
    char unknown_4_[0x30 - 4];
};
extern char data_ov023_021ff4b0;

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c*, struct Struct_ov004_0215c30c_2*);

// USA: func_ov011_021871b8
extern "C" ARM int func_ov011_021871b8(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    int var3 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x18));
    int var4 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x20));
    int var5 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x28));
    int var6 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x30));
    int var7 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x38));

    void* var8 = func_ov017_021b2164();
    void* var9 = func_ov011_021845f8(var8, var1);
    if (!var9) return 0;

    ((SafeAllocator*)((char*)var9 + 4))->GetSizeWithLargestBlockRemoved();
    void* var10 = ((SafeAllocator*)((char*)var9 + 4))->Allocate(0x30);
    if (!var10) return 0;

    Struct_ov011_021871b8 var11;
    var11.unknown_0_ = &data_ov023_021ff4b0;
    memcpy(var10, &var11, 0x30);

    if (!func_ov023_021fc408(var10, var8, var0, var1, var2, var3, var4, var5, var6, var7)) return 0;

    void* var12 = func_ov011_021849c8(var8);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var12, (struct Struct_ov004_0215c30c_2*)var10);
    return 1;
}
