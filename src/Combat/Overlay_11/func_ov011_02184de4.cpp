#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov011_02184de4 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f4(void);
extern "C" ARM void* func_ov011_021842c8(unsigned char* arg0, unsigned int arg1);
extern "C" ARM void func_ov011_021842a0(void* arg0);
extern "C" ARM void* func_ov011_02184324(void* arg0, void* arg1);

// USA: func_ov011_02184de4
extern "C" ARM int func_ov011_02184de4(struct Struct_ov011_02184de4* arg0) {
    void* var0 = GetGameResources();
    void* var1 = func_ov017_021b2164();
    var1 = func_ov011_021845f4();

    int var2 = func_ov011_02184c30(&arg0->unknown_0_);
    void* var3;
    int var4 = func_ov011_02184c30(&arg0->unknown_8_);

    void* var5 = func_ov011_021842c8((unsigned char*)var1, var4);
    if (var5 != 0) return 0;

    var3 = 0;
    switch (var2) {
    case 0: var3 = (char*)var0 + 0x38; break;
    case 1: var3 = (char*)var0 + 0xc4; break;
    case 2: var3 = (char*)var0 + 0x9c; break;
    }
    if (var3 == 0) return 0;

    void* var6 = ((SafeAllocator*)var3)->Allocate(0x20);
    if (var6 == 0) return 0;

    func_ov011_021842a0(var6);
    *(int*)var6 = var4;

    unsigned int var7 = ((SafeAllocator*)var3)->GetMaxPossibleAllocation();
    void* var8 = ((SafeAllocator*)var3)->Allocate(var7);
    if (var8 == 0) return 0;

    ((SafeAllocator*)((char*)var6 + 4))->CreateTypeB(var8, var7, 4);

    func_ov011_02184324(var1, var6);
    return 1;
}
