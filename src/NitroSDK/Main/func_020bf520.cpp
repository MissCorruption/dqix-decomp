#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"
#include "NitroSDK/ProcessorContext.h"

extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);

struct Struct_020bf520 {
    char unknown_0_[0x11c];
    int unknown_11c_;
};

struct Struct_020bf520_2 {
    SignedAllocatorHeader* unknown_0_;
    SignedAllocatorHeader* unknown_4_;
    Struct_020bf520* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    void* unknown_14_[6];
    unsigned int unknown_2c_;
};

struct Struct_02110560 {
    char unknown_0_[0x4c0];
    BlockedContextList unknown_4c0_;
    char unknown_4c8_[0x4e0 - 0x4c8];
    SignedAllocatorList unknown_4e0_;
};

struct Struct_021103b0_5 { int unknown_0_; Struct_02110560* unknown_4_; };

extern SignedAllocatorList data_02110a40;
extern Struct_02110560 data_02110560;
extern Struct_021103b0_5 data_021103b0;

extern "C" SignedAllocatorHeader* func_020bf418(void);
extern "C" void func_020bf458(SignedAllocatorHeader* arg0);

// USA: func_020bf520
extern "C" ARM void func_020bf520(int arg0, int arg1, void* arg2[], unsigned int arg3, int arg4, void* arg5) {
    Struct_020bf520* var0 = (Struct_020bf520*)arg5;
    Struct_020bf520_2* var1;
    Struct_02110560* var2;
    int var3;

    if (var0->unknown_11c_ >= 2) {
        var1 = NULL;
        while ((var1 = (Struct_020bf520_2*)data_02110a40.ElementAfter((SignedAllocatorHeader*)var1)) != NULL) {
            if (var1->unknown_8_ == var0)
                break;
        }

        for (var3 = 0; var3 < var1->unknown_10_; var3++) {
            VectorizedMemset(var1->unknown_14_[var3], 0, var1->unknown_2c_);
        }

        data_02110a40.Remove((SignedAllocatorHeader*)var1);
        var0->unknown_11c_--;
        func_020bf458((SignedAllocatorHeader*)var1);
    }

    var1 = (Struct_020bf520_2*)func_020bf418();

    var1->unknown_8_ = var0;
    var1->unknown_c_ = arg0;
    var1->unknown_10_ = arg1;
    for (var3 = 0; var3 < arg1; var3++) {
        var1->unknown_14_[var3] = arg2[var3];
    }
    var1->unknown_2c_ = arg3;

    var2 = &data_02110560;
    if (arg0 == 0 && data_021103b0.unknown_4_)
        var2 = data_021103b0.unknown_4_;

    var0->unknown_11c_++;
    var2->unknown_4e0_.InsertAtEnd((SignedAllocatorHeader*)var1);

    UnblockContexts(&var2->unknown_4c0_);
}
