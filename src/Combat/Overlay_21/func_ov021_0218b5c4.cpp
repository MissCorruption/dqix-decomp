#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_02012da4(AllocatorUnion*, void*);
extern AllocatorUnion data_02114e20;

struct Struct_02000c9c_10 {
    char unknown_0_[0x2c];
    SafeAllocator unknown_2c_;
    char unknown_40_[0x40 - 0x2c - sizeof(SafeAllocator)];
    int unknown1_40_;
};

// USA: func_ov021_0218b5c4
extern "C" ARM void func_ov021_0218b5c4(struct Struct_02000c9c_10* arg0) {
    void* var0 = arg0->unknown_2c_.GetSignedAllocator();
    arg0->unknown_2c_.Destroy();
    func_02012da4(&data_02114e20, var0);
    arg0->unknown1_40_ = 0;
}
