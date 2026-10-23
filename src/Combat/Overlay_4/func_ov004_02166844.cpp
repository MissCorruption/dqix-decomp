#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_02166844_0 = 1, Enum_ov004_02166844_1 = 0, Enum_ov004_02166844_2402 = 0x790, Enum_ov004_02166844_6144 = 0x1400, Enum_ov004_02166844_356 = 0x394, Enum_ov004_02166844_392 = 0x3b8 };
#else
enum { Enum_ov004_02166844_0 = 0, Enum_ov004_02166844_1 = 1, Enum_ov004_02166844_2402 = 0x962, Enum_ov004_02166844_6144 = 0x1800, Enum_ov004_02166844_356 = 0x164, Enum_ov004_02166844_392 = 0x188 };
#endif

#include "Memory/SafeAllocator.h"
#include "Resource/QuestScript.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0208b9a0 {
    unsigned int unknown_0_;
    unsigned short unknown_4_, unknown_6_;
    unsigned int unknown_8_;
    unsigned short unknown_c_, unknown_e_;
};
extern "C" void func_0208d82c(struct Struct_0208b9a0* arg0);
extern "C" int* func_02094d6c(void);
extern "C" int func_020421a0(void);
extern "C" void func_020e2d24(int* arg0, int arg1, int arg2);
extern "C" void* func_0205ec34(void);
extern "C" void func_02095b30(int* arg0, int arg1);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov004_02165e70(void* arg0, int arg1);

extern void* data_ov004_0217101c[2];
extern int data_ov004_0217059c;

struct Struct_ov004_02166844 {
    int unknown_0_, unknown_4_, unknown_8_;
    Struct_0208b9a0 unknown_c_;
    SafeAllocator unknown_1c_[2];
    int unknown_44_;
    short unknown_48_, unknown_4a_, unknown_4c_, unknown_4e_;
    unsigned char unknown_50_0_ : 6;
    unsigned char unknown_50_6_ : 1;
    unsigned char unknown_50_7_ : 1;
    unsigned char unknown_51_[0x66];
    int unknown_b8_;
};

// USA: func_ov004_02166844
extern "C" ARM int func_ov004_02166844(void* arg0) {
    char* var0;
    data_ov004_0217101c[Enum_ov004_02166844_0] = 0;
    int* var1 = func_02094d6c();
    char* var2 = (char*)func_0205ec34();
    var0 = (char*)func_ov011_021845f8(arg0, 0);
    if (var0 == 0) {
        return 0;
    }

    data_ov004_0217101c[Enum_ov004_02166844_0] = ((SafeAllocator*)(var0 + 4))->Allocate(sizeof(Struct_ov004_02166844));
    void* var3 = ((SafeAllocator*)(var0 + 4))->Allocate(2);
    if (var3 != 0) {
        *(short*)var3 = 0x7de0;
        CleanInvalidateCacheRange(var3, 2);
        LoadToMainBGStandardPalette(var3, 0x12, 2);
        CleanCacheRange(var3, 2);
    }

    Struct_ov004_02166844* var4 = (Struct_ov004_02166844*)data_ov004_0217101c[Enum_ov004_02166844_0];
    if (var4 == 0) {
        return 0;
    }
    var4->unknown_0_ = 0;
    var4->unknown_4_ = 0;
    var4->unknown_8_ = 0;
    func_0208d82c(&var4->unknown_c_);
    var4->unknown_1c_[0].ResetAllocatorPointer();
    var4->unknown_44_ = -1;
    var4->unknown_48_ = 0;
    var4->unknown_4a_ = 0;
    var4->unknown_4c_ = 0;
    var4->unknown_4e_ = 0;
    var4->unknown_50_0_ = 0;
    var4->unknown_50_6_ = 0;
    var4->unknown_50_7_ = 1;
    memset(var4->unknown_51_, 0, sizeof(var4->unknown_51_));
    var4->unknown_b8_ = 0;

    int var5 = data_ov004_0217059c;
    void* var6 = ((SafeAllocator*)(var0 + 4))->Allocate(var5);
    ((Struct_ov004_02166844*)data_ov004_0217101c[Enum_ov004_02166844_0])->unknown_1c_[0].CreateTypeA(var6, var5);
    var5 = data_ov004_0217059c;
    var6 = ((SafeAllocator*)(var0 + 4))->Allocate(var5);
    ((Struct_ov004_02166844*)data_ov004_0217101c[Enum_ov004_02166844_0])->unknown_1c_[1].CreateTypeA(var6, var5);

    char* var7 = (char*)func_ov004_02165e70(arg0, 7);
    if (var7 != 0) {
        unsigned short* var8 = (unsigned short*)(var7 + 0x34);
        var8[0x6d] |= 0x10;
    }
    var7[0x110] = 0;

    memcpy(((Struct_ov004_02166844*)data_ov004_0217101c[Enum_ov004_02166844_0])->unknown_51_, var2 + 0x2cc, 0x66);
    ((Struct_ov004_02166844*)data_ov004_0217101c[Enum_ov004_02166844_0])->unknown_b8_ = *(int*)((char*)var1 + 0xa0);
    func_020956b8((Struct_020956b8*)var1, (SafeAllocator*)(var0 + 4));
    func_02095b30(var1, 1);

    data_ov004_0217101c[Enum_ov004_02166844_1] = 0;
    data_ov004_0217101c[Enum_ov004_02166844_1] = ((SafeAllocator*)(var0 + 4))->Allocate(0x20);
    for (unsigned char var9 = 0; var9 < 8; var9++) {
        ((void**)data_ov004_0217101c[Enum_ov004_02166844_1])[var9] = 0;
        ((void**)data_ov004_0217101c[Enum_ov004_02166844_1])[var9] = ((SafeAllocator*)(var0 + 4))->Allocate(0x80);
    }

    char* var10 = (char*)func_020421a0();
    *(unsigned char*)(var10 + 0x1000 + Enum_ov004_02166844_2402) = 1;
    func_020e2d24((int*)(var10 + Enum_ov004_02166844_356 + Enum_ov004_02166844_6144), 9, 1);
    func_020e2d24((int*)(var10 + Enum_ov004_02166844_392 + Enum_ov004_02166844_6144), 0x19, 1);
    return 0;
}
