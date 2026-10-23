#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov011_02187e20 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM int func_ov004_02167820(void* arg0, void* arg1, int arg2, int arg3);
extern "C" void* func_020dfc2c(void* arg0);
extern "C" void func_0205a444(char* arg0);
extern "C" void func_0205a494(void* arg0);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern int data_ov004_021705f8;

struct Struct_ov011_02187e20_2 {
    void* unknown_0_;
    char unknown_4_[0x20 - 4];
    SafeAllocator unknown_20_;
    char unknown_34_[0x94 - 0x34];
    char unknown_94_[0x118 - 0x94];
};

// USA: func_ov011_02187e20
extern "C" ARM int func_ov011_02187e20(struct Struct_ov011_02187e20* arg0) {
    int var0 = func_ov011_02184c30(&arg0->unknown_0_);
    int var1 = func_ov011_02184c30(&arg0->unknown_8_);

    void* var2 = func_ov017_021b2164();
    void* var3 = func_ov011_021845f8(var2, var1);
    if (var3 == 0) return 0;

    ((SafeAllocator*)((char*)var3 + 4))->GetSizeWithLargestBlockRemoved();
    void* var4 = ((SafeAllocator*)((char*)var3 + 4))->Allocate(0x118);
    if (var4 == 0) return 0;

    struct Struct_ov011_02187e20_2 var5;
    var5.unknown_0_ = &data_ov004_021705f8;
    var5.unknown_20_.ResetAllocatorPointer();
    char* var6 = var5.unknown_34_;
    func_020dfc2c(var6 + 4);
    func_0205a444(var6 + 0x60);
    memcpy(var4, &var5, sizeof(Struct_ov011_02187e20_2));

    if (func_ov004_02167820(var4, var2, var0, var1) == 0) {
        func_0205a494(var5.unknown_94_);
        return 0;
    }

    void* var7 = func_ov011_021849c8(var2);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var7, (struct Struct_ov004_0215c30c_2*)var4);
    func_0205a494(var5.unknown_94_);
    return 1;
}
