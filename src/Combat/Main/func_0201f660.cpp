#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201f660_8 = 0x4, Enum_0201f660_16 = 0xc, Enum_0201f660_1876 = 0x6a8 };
#else
enum { Enum_0201f660_8 = 0x8, Enum_0201f660_16 = 0x10, Enum_0201f660_1876 = 0x754 };
#endif

#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

extern int data_020fdc4c;

struct Struct_0201f660 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short* unknown_4_;
    int unknown_8_;
    int unknown_c_;
    struct Struct_0201f660* unknown_10_;
};

// USA: func_0201f660
extern "C" ARM int func_0201f660(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_0201f660* var0 = (struct Struct_0201f660*)
        ((SafeAllocator*)*(char**)((char*)&data_020fdc4c + Enum_0201f660_8))->Allocate(0x14);
    if (var0 == 0) return 0;
    var0->unknown_0_ = 0;
    var0->unknown_2_ = arg1;
    var0->unknown_4_ = (short*)
        ((SafeAllocator*)*(char**)((char*)&data_020fdc4c + Enum_0201f660_8))->Allocate(var0->unknown_2_ * 2);
    if (var0->unknown_4_ == 0) return 0;
    for (int var1 = 0; var1 < var0->unknown_2_; var1++) {
        var0->unknown_4_[var1] = (short)((Script::Parameter*)arg0)->ToInt();
        arg0++;
    }
    struct Struct_0201f660* var2 = *(struct Struct_0201f660**)((char*)(*(void**)((char*)&data_020fdc4c + Enum_0201f660_16)) + Enum_0201f660_1876);
    var0->unknown_1_ = var2 ? var2->unknown_1_ + 1 : 1;
    var0->unknown_10_ = *(struct Struct_0201f660**)((char*)(*(void**)((char*)&data_020fdc4c + Enum_0201f660_16)) + Enum_0201f660_1876);
    *(struct Struct_0201f660**)((char*)(*(void**)((char*)&data_020fdc4c + Enum_0201f660_16)) + Enum_0201f660_1876) = var0;
    return 1;
}
