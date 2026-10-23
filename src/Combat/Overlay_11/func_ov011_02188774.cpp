#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov011_02188774 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    Struct_ov011_02184c30 unknown_20_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM void* func_ov011_02185ce0(void* arg0);
extern "C" ARM void func_0205a494(void* arg0);
extern "C" ARM int func_ov023_021fa760(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

struct Struct_ov011_02188774_2 {
    void* unknown_0_;
    char unknown_4_[0x24 - 4];
    char unknown_24_[0x88 - 0x24];
};

// USA: func_ov011_02188774
extern "C" ARM int func_ov011_02188774(struct Struct_ov011_02188774* arg0) {
    int var0 = func_ov011_02184c30(&arg0->unknown_0_);
    int var1 = func_ov011_02184c30(&arg0->unknown_8_);
    int var2;
    if (arg0->unknown_10_ == 2) var2 = arg0->unknown_14_;
    else var2 = 0;
    if (var2 == 0) return 0;

    int var3;
    if (arg0->unknown_18_ == 2) var3 = arg0->unknown_1c_;
    else var3 = 0;
    if (var3 == 0) return 0;

    int var4 = func_ov011_02184c30(&arg0->unknown_20_);

    void* var5 = func_ov017_021b2164();
    void* var6 = func_ov011_021845f8(var5, var1);
    if (var6 == 0) return 0;

    ((SafeAllocator*)((char*)var6 + 4))->GetSizeWithLargestBlockRemoved();
    void* var7 = ((SafeAllocator*)((char*)var6 + 4))->Allocate(0x88);
    if (var7 == 0) return 0;

    struct Struct_ov011_02188774_2 var8;
    func_ov011_02185ce0(&var8);
    memcpy(var7, &var8, sizeof(Struct_ov011_02188774_2));

    if (func_ov023_021fa760(var7, var5, var0, var1, var2, var3, var4) == 0) {
        func_0205a494(var8.unknown_24_);
        return 0;
    }

    void* var9 = func_ov011_021849c8(var5);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var9, (struct Struct_ov004_0215c30c_2*)var7);
    func_0205a494(var8.unknown_24_);
    return 1;
}
