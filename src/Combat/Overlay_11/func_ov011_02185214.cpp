#if defined(jpn)
#define R(j,u) (j)
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

struct Struct_ov011_02185214_2 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
    int unknown_10_;
    int unknown_14_;
    Struct_ov011_02184c30 unknown_18_;
    Struct_ov011_02184c30 unknown_20_;
    Struct_ov011_02184c30 unknown_28_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
#if defined(jpn)
extern "C" ARM int func_ov023_021f745c(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#else
extern "C" ARM int func_ov023_021f745c(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
#endif

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov023_021fe4f0;

struct Struct_ov011_02185214 { void* unknown_0_; char unknown_4_[R(0x50,0x54) - 4]; };

// USA: func_ov011_02185214
extern "C" ARM int func_ov011_02185214(struct Struct_ov011_02185214_2* arg0) {
    int var0 = func_ov011_02184c30(&arg0->unknown_0_);
    int var1 = func_ov011_02184c30(&arg0->unknown_8_);
    int var2;
    if (arg0->unknown_10_ == 2) var2 = arg0->unknown_14_;
    else var2 = 0;
    if (var2 == 0) return 0;

    int var3 = func_ov011_02184c30(&arg0->unknown_18_);
    int var4 = func_ov011_02184c30(&arg0->unknown_20_);
    int var5 = func_ov011_02184c30(&arg0->unknown_28_);

    void* var6 = func_ov017_021b2164();
    void* var7 = func_ov011_021845f8(var6, var1);
    if (var7 == 0) return 0;

    ((SafeAllocator*)((char*)var7 + 4))->GetSizeWithLargestBlockRemoved();
    void* var8 = ((SafeAllocator*)((char*)var7 + 4))->Allocate(R(0x50,0x54));
    if (var8 == 0) return 0;

    struct Struct_ov011_02185214 var9;
    var9.unknown_0_ = &data_ov023_021fe4f0;
    memcpy(var8, &var9, sizeof(Struct_ov011_02185214));

#if defined(jpn)
    if (func_ov023_021f745c(var8, var6, var0, var1, var2, var3, var4, var5) == 0) return 0;
#else
    if (func_ov023_021f745c(var8, var6, var0, var1, 0, var2, var3, var4, var5) == 0) return 0;
#endif

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(var6), (struct Struct_ov004_0215c30c_2*)var8);
    return 1;
}
