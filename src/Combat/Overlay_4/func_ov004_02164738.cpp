#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/TreasureMapMetadata.h"
#include "Grotto/Main/DetailedTreasureMapData.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
enum { Enum_ov004_02164738_2292 = 0x9f4, Enum_ov004_02164738_2299 = 0x9fb, Enum_ov004_02164738_2320 = 0xa10, Enum_ov004_02164738_6399 = 0x19ff, Enum_ov004_02164738_452 = 0x1e4, Enum_ov004_02164738_1246 = 0x29e, Enum_ov004_02164738_2402 = 0x790 };
#else
enum { Enum_ov004_02164738_2292 = 0x8f4, Enum_ov004_02164738_2299 = 0x8fb, Enum_ov004_02164738_2320 = 0x910, Enum_ov004_02164738_6399 = 0x18ff, Enum_ov004_02164738_452 = 0x1c4, Enum_ov004_02164738_1246 = 0x4de, Enum_ov004_02164738_2402 = 0x962 };
#endif

struct Struct_020263e4;
struct Struct_02011930;

extern "C" int func_020ac734(void* arg0);
extern "C" void* func_02012fe4(void);
extern "C" void func_020263e4(Struct_020263e4* arg0);
extern "C" void func_02026418(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020dc2d0(int arg0);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_020a39d8(SafeAllocator* arg0);
extern "C" unsigned char func_02011930(void* arg0, struct Struct_02011930* arg1, void* arg2, void* arg3);
extern "C" void* func_0205ec34(void);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);
extern "C" int func_0201b5d8(int arg0);
extern "C" void func_020e1154(void* arg0);
extern "C" void func_020118fc(void* arg0);
extern "C" void func_020119e8(void* arg0);
extern "C" void func_02011ad4(char* arg0);
extern "C" int func_020421a0(void);

extern char* data_ov004_02171010;

struct Struct_ov004_02164738 {
    unsigned char unknown_0_;
    TreasureMapMetadata unknown_2_[99];
};

// USA: func_ov004_02164738
extern "C" ARM int func_ov004_02164738(void* arg0) {
    char var0[0x34];
    Struct_ov004_02164738 var1;
    int var2;

    var1.unknown_0_ = *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_02164738_2292);
    for (var2 = 0; var2 < 99; var2++) {
        VectorizedInvertedMemcpy(data_ov004_02171010 + var2 * sizeof(TreasureMapMetadata), &var1.unknown_2_[var2], sizeof(TreasureMapMetadata));
    }
    func_020ac734(&var1);

    GameState* var3 = GameState::GetInstance();
    char* var4 = (char*)func_02012fe4();
    GameResources* var5 = GetGameResources();
    unsigned char* var6 = (unsigned char*)var5->unknown_ptr_36d0;
    var5->unknown_41c8[0x42e0 - 0x41c8] = *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_02164738_2299);
    func_020263e4((Struct_020263e4*)var6);
    func_02026418(var6, 0);
    *(int*)(var6 + 0x14) = *(int*)(data_ov004_02171010 + 0x1000 + Enum_ov004_02164738_2320);
    strcpy(var4 + 0x26, data_ov004_02171010 + Enum_ov004_02164738_6399);
    var5->allocator_array_38[12].Reset();
    func_020dc2d0(0);

    for (var2 = 0; var2 < 8; var2++) {
        ((DetailedTreasureMapData*)(data_ov004_02171010 + 0xad4 + var2 * Enum_ov004_02164738_452))->BlankFunction();
    }

    char* var7 = (char*)func_ov011_021845f8(arg0, 0);
    if (var7 != NULL && data_ov004_02171010 != NULL) {
        ((SafeAllocator*)(var7 + 4))->Free(data_ov004_02171010);
        data_ov004_02171010 = NULL;
        func_020a39d8((SafeAllocator*)(var7 + 4));
    }

    if (func_02011930(var3, NULL, NULL, NULL) != 0) {
        if (*((unsigned char*)var3 + 0x6000 + Enum_ov004_02164738_1246) != 0) {
            if (func_020649b0(func_0205ec34(), 0x1b, var0)) {
                func_0206f81c(var0);
            }
        }
        if (func_0201b5d8(*(unsigned short*)var4)) {
            func_020e1154((void*)0x7d0);
        }
    }

    func_020118fc(var3);
    func_020119e8(var3);
    func_02011ad4((char*)var3);
    *(unsigned char*)(func_020421a0() + 0x1000 + Enum_ov004_02164738_2402) = 0;
    return 0;
}
