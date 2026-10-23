#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov011_0218563c_2 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
    int unknown_10_;
    int unknown_14_;
    Struct_ov011_02184c30 unknown_18_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);

struct Struct_ov011_0218563c_3;
extern "C" ARM int func_ov023_021fa298(struct Struct_ov011_0218563c_3* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

#if defined(jpn)
extern "C" int func_ov023_021f9724(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern int data_ov023_021fea34;
#else
extern int data_ov024_021fea34;
#endif

struct Struct_ov011_0218563c {
    void* unknown_0_;
#if defined(jpn)
    char unknown_4_[0x2c - 4];
#else
    char unknown1_4_[0x30 - 4];
#endif
};

// USA: func_ov011_0218563c
extern "C" ARM int func_ov011_0218563c(struct Struct_ov011_0218563c_2* arg0) {
    int var0 = func_ov011_02184c30(&arg0->unknown_0_);
    int var1 = func_ov011_02184c30(&arg0->unknown_8_);
    int var2;
    if (arg0->unknown_10_ == 2) var2 = arg0->unknown_14_;
    else var2 = 0;
    if (var2 == 0) return 0;

    void* var3 = func_ov017_021b2164();
    void* var4 = func_ov011_021845f8(var3, var1);
    if (var4 == 0) return 0;

    int var5 = func_ov011_02184c30(&arg0->unknown_18_);

    ((SafeAllocator*)((char*)var4 + 4))->GetSizeWithLargestBlockRemoved();
    void* var6 = ((SafeAllocator*)((char*)var4 + 4))->Allocate(sizeof(Struct_ov011_0218563c));
    if (var6 == 0) return 0;

    struct Struct_ov011_0218563c var7;
#if defined(jpn)
    var7.unknown_0_ = &data_ov023_021fea34;
#else
    var7.unknown_0_ = &data_ov024_021fea34;
#endif
    memcpy(var6, &var7, sizeof(Struct_ov011_0218563c));

#if defined(jpn)
    if (func_ov023_021f9724(var6, (int)var3, var0, var1, var2, var5) == 0) return 0;
#else
    if (func_ov023_021fa298((struct Struct_ov011_0218563c_3*)var6, (int)var3, var0, var1, 0, var2, var5) == 0) return 0;
#endif

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(var3), (struct Struct_ov004_0215c30c_2*)var6);
    return 1;
}
