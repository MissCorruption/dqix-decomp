#if defined(jpn)
#define R(j,u) (j)
#define data_ov024_021ff8c8 data_ov023_021feb44
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov011_02188184_2 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
    Struct_ov011_02184c30 unknown_10_;
    Struct_ov011_02184c30 unknown_18_;
    Struct_ov011_02184c30 unknown_20_;
    Struct_ov011_02184c30 unknown_28_;
    Struct_ov011_02184c30 unknown_30_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);

struct Struct_ov011_02188184_3;
extern "C" ARM int func_ov023_021fd320(struct Struct_ov011_02188184_3* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern int data_ov024_021ff8c8;

struct Struct_ov011_02188184 { void* unknown_0_; char unknown_4_[0x30 - 4]; };

// USA: func_ov011_02188184
extern "C" ARM int func_ov011_02188184(struct Struct_ov011_02188184_2* arg0) {
    int var0 = func_ov011_02184c30(&arg0->unknown_0_);
    int var1 = func_ov011_02184c30(&arg0->unknown_8_);
    int var2 = func_ov011_02184c30(&arg0->unknown_10_);
    int var3 = func_ov011_02184c30(&arg0->unknown_18_);
    int var4 = func_ov011_02184c30(&arg0->unknown_20_);
    int var5 = func_ov011_02184c30(&arg0->unknown_28_);
    int var6 = func_ov011_02184c30(&arg0->unknown_30_);

    void* var7 = func_ov017_021b2164();
    void* var8 = func_ov011_021845f8(var7, var1);
    if (var8 == 0) return 0;

    ((SafeAllocator*)((char*)var8 + 4))->GetSizeWithLargestBlockRemoved();
    void* var9 = ((SafeAllocator*)((char*)var8 + 4))->Allocate(0x30);
    if (var9 == 0) return 0;

    struct Struct_ov011_02188184 var10;
    var10.unknown_0_ = &data_ov024_021ff8c8;
    memcpy(var9, &var10, sizeof(Struct_ov011_02188184));

    if (func_ov023_021fd320((struct Struct_ov011_02188184_3*)var9, (int)var7, var0, var1, var2, var3, var4, var5, var6) == 0) return 0;

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(var7), (struct Struct_ov004_0215c30c_2*)var9);
    return 1;
}
