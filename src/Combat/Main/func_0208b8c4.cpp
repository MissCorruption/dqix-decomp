#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02043368_2;
extern "C" void func_0205a198(struct Struct_02043368_2*);

struct Struct_020e8cd0 {
    unsigned int unknown_0_[5];
};
extern Struct_020e8cd0 data_020e8cd0;

struct Struct_0208b8c4 {
    SafeAllocator* unknown_0_;
    char unknown_4_[0xb0];
    void* unknown_b4_;
    char unknown_b8_[0x27];
    unsigned char unknown_df_;
};

// USA: func_0208b8c4
extern "C" ARM void func_0208b8c4(struct Struct_0208b8c4* arg0, SafeAllocator* arg1) {
    int var0;

    arg0->unknown_0_ = (SafeAllocator*)arg1->Allocate(0x64);
    arg0->unknown_b4_ = arg1->Allocate(0x78);

    for (var0 = 0; var0 < 3; var0++) {
        func_0205a198((struct Struct_02043368_2*)((char*)arg0->unknown_b4_ + var0 * 0x28));
    }

    unsigned char var1 = arg0->unknown_df_;
    unsigned int var2 = 0x7000;
    if (var1 != 0) {
        var2 = 0;
    }
    Struct_020e8cd0 var3;
    var3 = data_020e8cd0;
    var3.unknown_0_[4] = var2;

    for (var0 = 0; var0 < 5; var0++) {
        arg0->unknown_0_[var0].ResetAllocatorPointer();
        void* var4 = arg1->Allocate(var3.unknown_0_[var0]);
        arg0->unknown_0_[var0].CreateTypeA(var4, var3.unknown_0_[var0]);
    }
}
