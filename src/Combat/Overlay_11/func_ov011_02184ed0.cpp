#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f4(void);
extern "C" ARM void* func_ov011_021842c8(unsigned char* arg0, unsigned int arg1);
extern "C" ARM void func_ov011_021842a0(void* arg0);

struct Struct_ov011_02184354;
extern "C" int func_ov011_02184354(Struct_ov011_02184354* arg0, int arg1);

struct Struct_ov011_02184ed0 {
    int unknown_0_;
    SafeAllocator unknown_4_;
};

// USA: func_ov011_02184ed0
extern "C" ARM int func_ov011_02184ed0(struct Struct_ov011_02184c30* arg0, int arg1, Struct_ov011_02184ed0* arg2) {
    unsigned int var0;
    int var1;
    unsigned char* var2;
    Struct_ov011_02184ed0* var3;
    void* var4;

    var0 = func_ov011_02184c30(&arg0[0]);
    var1 = func_ov011_02184c30(&arg0[1]);
    func_ov017_021b2164();
    var2 = (unsigned char*)func_ov011_021845f4();
    var3 = (Struct_ov011_02184ed0*)func_ov011_021842c8(var2, var0);
    if (var3 == 0)
        return 0;
    if (func_ov011_021842c8(var2, var1) != 0)
        return 0;

    arg2 = (Struct_ov011_02184ed0*)var3->unknown_4_.Allocate(0x20);
    if (arg2 == 0)
        return 0;

    func_ov011_021842a0(arg2);
    arg2->unknown_0_ = var1;
    if (arg1 >= 3)
        var0 = func_ov011_02184c30(&arg0[2]);
    else
        var0 = var3->unknown_4_.GetMaxPossibleAllocation();
    if (var0 == 0)
        return 0;

    var4 = var3->unknown_4_.Allocate(var0);
    if (var4 == 0)
        return 0;

    arg2->unknown_4_.CreateTypeB(var4, var0, 4);
    func_ov011_02184354((Struct_ov011_02184354*)var3, (int)arg2);
    return 1;
}
