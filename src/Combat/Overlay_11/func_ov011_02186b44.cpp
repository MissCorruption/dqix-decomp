#if defined(jpn)
#define R(j,u) (j)
#define data_ov024_021ff280 data_ov023_021fe520
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

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM int func_ov023_021fbe08(void* arg0, void* arg1, int arg2, int arg3, int arg4);
extern "C" void* func_020de824(void* arg0);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov024_021ff280;

struct Struct_ov011_02186b44 {
    int unknown_0_;
    SafeAllocator unknown_4_;
};

struct Struct_ov011_02186b44_2 {
    void* unknown_0_;
    char unknown_4_[0x20 - 4];
    SafeAllocator unknown_20_;
    char unknown_34_[0x50 - 0x34];
};

// USA: func_ov011_02186b44
extern "C" ARM int func_ov011_02186b44(struct Struct_ov011_02184c30* arg0, int arg1) {
    int var0;
    int var1 = func_ov011_02184c30(&arg0[0]);
    int var2 = func_ov011_02184c30(&arg0[1]);
    var0 = 0;
    if (arg1 - 2 != 0)
        var0 = func_ov011_02184c30(&arg0[2]);

    void* var3 = func_ov017_021b2164();
    Struct_ov011_02186b44* var4 = (Struct_ov011_02186b44*)func_ov011_021845f8(var3, var2);
    if (var4 == 0)
        return 0;

    var4->unknown_4_.GetSizeWithLargestBlockRemoved();
    void* var5 = var4->unknown_4_.Allocate(sizeof(Struct_ov011_02186b44_2));
    if (var5 == 0)
        return 0;

    Struct_ov011_02186b44_2 var6;
    var6.unknown_0_ = &data_ov024_021ff280;
    var6.unknown_20_.ResetAllocatorPointer();
    func_020de824(var6.unknown_34_);
    memcpy(var5, &var6, sizeof(Struct_ov011_02186b44_2));
    if (!func_ov023_021fbe08(var5, var3, var1, var2, var0))
        return 0;

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(var3), (struct Struct_ov004_0215c30c_2*)var5);
    return 1;
}
