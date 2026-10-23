#if defined(jpn)
#define R(j,u) (j)
#define data_ov023_021ff7c4 data_ov023_021fea44
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

struct Struct_ov011_02186548;
struct Struct_ov011_02186548_2 { int unknown_0_, unknown_4_; };
struct Struct_ov011_02186548_3 { unsigned char unknown_0_, unknown_1_; };
extern "C" int func_ov023_021fd1e0(struct Struct_ov011_02186548* arg0, int arg1, int arg2, int arg3, struct Struct_ov011_02186548_2* arg4, struct Struct_ov011_02186548_3* arg5);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);

extern int data_ov023_021ff7c4;

struct Struct_ov011_02186548_4 {
    void* unknown_0_;
    char unknown_4_[0x2c - 4];
};

// USA: func_ov011_02186548
extern "C" ARM int func_ov011_02186548(char* arg0) {
    int var0 = func_ov011_02184c30((struct Struct_ov011_02184c30*)arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 8));

    struct Struct_ov011_02186548_2 var2;
    var2.unknown_0_ = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 0x10));
    var2.unknown_4_ = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 0x18));

    struct Struct_ov011_02186548_3 var3;
    var3.unknown_0_ = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 0x20)) != 0;
    var3.unknown_1_ = func_ov011_02184c30((struct Struct_ov011_02184c30*)(arg0 + 0x28)) != 0;

    void* var4 = func_ov017_021b2164();
    void* var5 = func_ov011_021845f8(var4, var1);
    if (var5 == 0) return 0;

    ((SafeAllocator*)((char*)var5 + 4))->GetSizeWithLargestBlockRemoved();
    void* var6 = ((SafeAllocator*)((char*)var5 + 4))->Allocate(0x2c);
    if (var6 == 0) return 0;

    struct Struct_ov011_02186548_4 var7;
    var7.unknown_0_ = &data_ov023_021ff7c4;
    memcpy(var6, &var7, 0x2c);

    if (func_ov023_021fd1e0((struct Struct_ov011_02186548*)var6, (int)var4, var0, var1, &var2, &var3) == 0) return 0;

    void* var8 = func_ov011_021849c8(var4);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var8, (struct Struct_ov004_0215c30c_2*)var6);
    return 1;
}
