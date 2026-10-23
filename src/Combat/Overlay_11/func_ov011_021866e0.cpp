#if defined(jpn)
#define R(j,u) (j)
#define data_ov023_021fef74 data_ov023_021fe220
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
extern "C" int func_ov023_021fba80(void*, int, int, int);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov023_021fef74;

struct Struct_ov011_021866e0 {
    int unknown_0_;
    SafeAllocator unknown_4_;
};

struct Struct_ov011_021866e0_2 {
    void* unknown_0_;
    char unknown_4_[0x24 - 4];
};

// USA: func_ov011_021866e0
extern "C" ARM int func_ov011_021866e0(struct Struct_ov011_02184c30* arg0, int arg1) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    int var1 = func_ov011_02184c30(&arg0[1]);
    void* var2 = func_ov017_021b2164();
    Struct_ov011_021866e0* var3 = (Struct_ov011_021866e0*)func_ov011_021845f8(var2, var1);
    if (var3 == 0)
        return 0;

    var3->unknown_4_.GetSizeWithLargestBlockRemoved();
    void* var4 = var3->unknown_4_.Allocate(sizeof(Struct_ov011_021866e0_2));
    if (var4 == 0)
        return 0;

    Struct_ov011_021866e0_2 var5;
    var5.unknown_0_ = &data_ov023_021fef74;
    memcpy(var4, &var5, sizeof(Struct_ov011_021866e0_2));
    if (!func_ov023_021fba80(var4, (int)var2, var0, var1))
        return 0;

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(var2), (struct Struct_ov004_0215c30c_2*)var4);
    return 1;
}
