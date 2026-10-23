#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0201f728_8 = 4, Enum_0201f728_16 = 0xc, Enum_0201f728_1876 = 0x6a8 };
#else
enum { Enum_0201f728_8 = 8, Enum_0201f728_16 = 0x10, Enum_0201f728_1876 = 0x754 };
#endif
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

extern int data_020fdc4c;

struct Struct_0201f728 {
    struct Struct_0201d530 unknown_0_;
    struct Struct_0201d530 unknown_8_;
};

struct Struct_0201f728_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short* unknown_4_;
    int unknown_8_;
    int unknown_c_;
    struct Struct_0201f728_2* unknown_10_;
};

// USA: func_0201f728
extern "C" ARM int func_0201f728(struct Struct_0201f728* arg0, int arg1) {
    if (arg1 < 3) return 0;
    struct Struct_0201f728_2* var0 = (struct Struct_0201f728_2*)
        ((SafeAllocator*)*(char**)((char*)&data_020fdc4c + Enum_0201f728_8))->Allocate(0x14);
    if (var0 == 0) return 0;
    var0->unknown_0_ = 1;
    var0->unknown_2_ = arg1 - 2;
    var0->unknown_4_ = (short*)
        ((SafeAllocator*)*(char**)((char*)&data_020fdc4c + Enum_0201f728_8))->Allocate(var0->unknown_2_ * 2);
    if (var0->unknown_4_ == 0) return 0;
    var0->unknown_8_ = (int)(((Script::Parameter*)&arg0->unknown_0_)->ToFloat() * 4096.0f);
    struct Struct_0201c1c8* var1 = (struct Struct_0201c1c8*)((char*)arg0 + 0x10);
    var0->unknown_c_ = (int)(((Script::Parameter*)&arg0->unknown_8_)->ToFloat() * 4096.0f);
    for (int var2 = 0; var2 < var0->unknown_2_; var2++) {
        var0->unknown_4_[var2] = (short)((Script::Parameter*)var1)->ToInt();
        var1++;
    }
    struct Struct_0201f728_2* var3 = *(struct Struct_0201f728_2**)((char*)(*(void**)((char*)&data_020fdc4c + Enum_0201f728_16)) + Enum_0201f728_1876);
    var0->unknown_1_ = var3 ? var3->unknown_1_ + 1 : 1;
    var0->unknown_10_ = *(struct Struct_0201f728_2**)((char*)(*(void**)((char*)&data_020fdc4c + Enum_0201f728_16)) + Enum_0201f728_1876);
    *(struct Struct_0201f728_2**)((char*)(*(void**)((char*)&data_020fdc4c + Enum_0201f728_16)) + Enum_0201f728_1876) = var0;
    return 1;
}
