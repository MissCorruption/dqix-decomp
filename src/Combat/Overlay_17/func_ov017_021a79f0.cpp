#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_020a0c0c(void);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern AllocatorUnion data_02114e20;

struct Struct_ov017_021a79f0 {
    unsigned char unknown_0_[0x1c];
    int unknown_1c_;
#if defined(jpn)
    unsigned char unknown_20_[0x1ec - 0x20];
#else
    unsigned char unknown1_20_[0x25c - 0x20];
#endif
    SafeAllocator unknown_25c_;
};

// USA: func_ov017_021a79f0
extern "C" ARM void func_ov017_021a79f0(struct Struct_ov017_021a79f0* arg0) {
    Struct_0208cb08* var0 = func_02094a00();
    func_02094b38(var0, 0x205);
    func_02094ab0(var0);

    void* var1 = arg0->unknown_25c_.GetSignedAllocator();
    if (var1 != NULL) {
        arg0->unknown_25c_.Destroy();
        func_02012da4(&data_02114e20, var1);
    }

    func_020a0c0c();
    *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | (arg0->unknown_1c_ << 8);
}
