#if defined(jpn)
#define R(j,u) (j)
#define data_ov024_021fe910 data_ov023_021fdbd4
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

struct Struct_ov011_02185b10_2 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);

struct Struct_ov011_02185b10_3;
extern "C" ARM int func_ov023_021f9ec8(struct Struct_ov011_02185b10_3* arg0, void* arg1, int arg2, int arg3, int arg4);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern int data_ov024_021fe910;

struct Struct_ov011_02185b10 { void* unknown_0_; char unknown_4_[0x28 - 4]; };

// USA: func_ov011_02185b10
extern "C" ARM int func_ov011_02185b10(struct Struct_ov011_02185b10_2* arg0) {
    void* var0 = func_ov017_021b2164();
    void* var1 = func_ov011_021849c8(var0);
    if (func_ov023_021f6880(var1, 0xffff) != 0) return 0;

    int var2 = func_ov011_02184c30(&arg0->unknown_0_);
    int var3 = func_ov011_02184c30(&arg0->unknown_8_);

    void* var4 = func_ov011_021845f8(var0, var2);
    if (var4 == 0) return 0;

    ((SafeAllocator*)((char*)var4 + 4))->GetSizeWithLargestBlockRemoved();
    void* var5 = ((SafeAllocator*)((char*)var4 + 4))->Allocate(0x28);
    if (var5 == 0) return 0;

    struct Struct_ov011_02185b10 var6;
    var6.unknown_0_ = &data_ov024_021fe910;
    memcpy(var5, &var6, sizeof(var6));

    if (func_ov023_021f9ec8((struct Struct_ov011_02185b10_3*)var5, var0, 0xffff, var2, var3) == 0) return 0;

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var1, (struct Struct_ov004_0215c30c_2*)var5);
    return 1;
}
