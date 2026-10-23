#if defined(jpn)
#define R(j,u) (j)
#define data_ov024_021fe80c data_ov023_021fdad4
#define data_ov024_021fec60 data_ov023_021fdf18
#define data_ov024_021fed64 data_ov023_021fe018
#define func_ov023_021f8cf4 func_ov023_021f8180
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021f8cf4(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);

struct Struct_ov011_0218577c {
    void* unknown_0_;
    char unknown_4_[0x64 - 4];
};
extern char data_ov024_021fe80c;

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c*, struct Struct_ov004_0215c30c_2*);

// USA: func_ov011_0218577c
extern "C" ARM int func_ov011_0218577c(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    int var3 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x18));

    void* var4 = func_ov017_021b2164();
    void* var5 = func_ov011_021845f8(var4, var1);
    if (!var5) return 0;

    ((SafeAllocator*)((char*)var5 + 4))->GetSizeWithLargestBlockRemoved();
    void* var6 = ((SafeAllocator*)((char*)var5 + 4))->Allocate(0x64);
    if (!var6) return 0;

    Struct_ov011_0218577c var7;
    var7.unknown_0_ = &data_ov024_021fe80c;
    memcpy(var6, &var7, 0x64);

    if (!func_ov023_021f8cf4(var6, var4, var0, var1, var3, var2)) return 0;

    void* var8 = func_ov011_021849c8(var4);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var8, (struct Struct_ov004_0215c30c_2*)var6);
    return 1;
}
