#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern AllocatorUnion data_02114e20;

struct Struct_ov017_021d6874 { int unknown_0_; int unknown_4_; };
struct Struct_ov017_021d6878 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d6874 data_ov017_021d6874[];
extern Struct_ov017_021d6878 data_ov017_021d6878[];

struct Struct_02000c9c_58 {
    char unknown_0_[0x9c];
    SafeAllocator unknown_9c_;
};

// USA: func_ov017_021a05a8
extern "C" ARM void func_ov017_021a05a8(char* arg0) {
    SafeAllocator* var0 = (SafeAllocator*)(arg0 + 0x9c);
    void* var1 = var0->GetSignedAllocator();
    if (var1) {
        var0->Destroy();
        func_02012da4(&data_02114e20, var1);
    }

    arg0 = arg0 + 0x38;
    int var2 = 0;
    for (; data_ov017_021d6878[var2].unknown_0_ != 0; var2++) {
        int var3 = data_ov017_021d6878[var2].unknown_0_;
        void* var4 = func_02012d88(&data_02114e20, var3);
        int var5 = data_ov017_021d6874[var2].unknown_0_;
        SafeAllocator* var6 = (SafeAllocator*)(arg0 + var5 * 0x14);
        var6->CreateTypeA(var4, var3);
    }
}
