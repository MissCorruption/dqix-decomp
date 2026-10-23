#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

extern "C" void func_02012da4(AllocatorUnion*, void*);
extern AllocatorUnion data_02114e20;

struct Struct_ov017_021a92a0 {
    unsigned char unknown_0_[0x24];
    int unknown_24_;
#if defined(jpn)
    unsigned char unknown_28_[0x1f4 - 0x28];
#else
    unsigned char unknown1_28_[0x264 - 0x28];
#endif
    SafeAllocator unknown_264_;
};

// USA: func_ov017_021a92a0
extern "C" ARM void func_ov017_021a92a0(struct Struct_ov017_021a92a0* arg0) {
    Struct_0208cb08* var0 = func_02094a00();
    func_02094b38(var0, 0x205);
    func_02094ab0(var0);

    void* var1 = arg0->unknown_264_.GetSignedAllocator();
    if (var1 != NULL) {
        arg0->unknown_264_.Destroy();
        func_02012da4(&data_02114e20, var1);
    }

    ClearFlags04(GetGameResources(), 0x40);
    *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | (arg0->unknown_24_ << 8);
}
