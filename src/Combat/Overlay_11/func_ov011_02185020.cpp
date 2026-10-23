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

struct Struct_ov011_02185020_2 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
    Struct_ov011_02184c30 unknown_10_;
    int unknown_18_;
    int unknown_1c_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);

struct Struct_ov011_02185020_3;
#if defined(jpn)
extern "C" ARM Struct_ov011_02185020_3* func_ov011_02185110(Struct_ov011_02185020_3* arg0);
#else
extern "C" ARM Struct_ov011_02185020_3* func_ov011_02185110(Struct_ov011_02185020_3* arg0);
#endif
#if defined(jpn)
extern "C" ARM void* func_ov011_0218513c(void* arg0);
#else
extern "C" ARM void* func_ov011_0218513c(void* arg0);
#endif
extern "C" ARM int func_ov023_021f6f20(void* arg0, int arg1, int arg2, int arg3, int arg4, unsigned int arg5);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

struct Struct_ov011_02185020 {
    int unknown_0_[0xac / 4];
};

// USA: func_ov011_02185020
extern "C" ARM int func_ov011_02185020(struct Struct_ov011_02185020_2* arg0) {
    int var0 = func_ov011_02184c30(&arg0->unknown_0_);
    int var1 = func_ov011_02184c30(&arg0->unknown_8_);
    int var2 = func_ov011_02184c30(&arg0->unknown_10_);

    int var3;
    if (arg0->unknown_18_ == 2) var3 = arg0->unknown_1c_;
    else var3 = 0;
    if (var3 == 0) return 0;

    void* var4 = func_ov017_021b2164();
    void* var5 = func_ov011_021845f8(var4, var1);
    if (var5 == 0) return 0;

    ((SafeAllocator*)((char*)var5 + 4))->GetSizeWithLargestBlockRemoved();
    void* var6 = ((SafeAllocator*)((char*)var5 + 4))->Allocate(0xac);
    if (var6 == 0) return 0;

    Struct_ov011_02185020 var7;
    func_ov011_02185110((Struct_ov011_02185020_3*)&var7);
    memcpy(var6, &var7, sizeof(var7));

    if (func_ov023_021f6f20(var6, (int)var4, var0, var1, var2, var3) == 0) {
        func_ov011_0218513c(&var7);
        return 0;
    }

    void* var8 = func_ov011_021849c8(var4);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var8, (struct Struct_ov004_0215c30c_2*)var6);
    func_ov011_0218513c(&var7);
    return 1;
}
