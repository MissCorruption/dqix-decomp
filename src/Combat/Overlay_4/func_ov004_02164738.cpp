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
enum { countOffset = 0x9f4, flagOffset = 0x9fb, valueOffset = 0xa10, nameOffset = 0x19ff, recordStride = 0x1e4, stateFlag = 0x29e, resetOffset = 0x790 };
#else
enum { countOffset = 0x8f4, flagOffset = 0x8fb, valueOffset = 0x910, nameOffset = 0x18ff, recordStride = 0x1c4, stateFlag = 0x4de, resetOffset = 0x962 };
#endif

struct Struct020263e4;
struct Info02011930;

extern "C" int func_020ac734(void* arg);
extern "C" void* func_02012fe4(void);
extern "C" void func_020263e4(Struct020263e4* buf);
extern "C" void func_02026418(unsigned char* buf, unsigned char val);
extern "C" void func_020dc2d0(int mode);
extern "C" void* func_ov011_021845f8(void* obj, int idx);
extern "C" void func_020a39d8(SafeAllocator* alloc);
extern "C" unsigned char func_02011930(void* obj, struct Info02011930* info, void* name1, void* name2);
extern "C" void* func_0205ec34(void);
extern "C" int func_020649b0(void* a, int mode, void* c);
extern "C" void func_0206f81c(void* p);
extern "C" int func_0201b5d8(int x);
extern "C" void func_020e1154(void* obj);
extern "C" void func_020118fc(void* obj);
extern "C" void func_020119e8(void* obj);
extern "C" void func_02011ad4(char* obj);
extern "C" int func_020421a0(void);

extern char* data_ov004_02171010;

struct TreasureMapSave02164738 {
    unsigned char numMaps;
    TreasureMapMetadata maps[99];
};

// USA: func_ov004_02164738
extern "C" ARM int func_ov004_02164738(void* a) {
    char request[0x34];
    TreasureMapSave02164738 save;
    int i;

    save.numMaps = *(unsigned char*)(data_ov004_02171010 + 0x1000 + countOffset);
    for (i = 0; i < 99; i++) {
        VectorizedInvertedMemcpy(data_ov004_02171010 + i * sizeof(TreasureMapMetadata), &save.maps[i], sizeof(TreasureMapMetadata));
    }
    func_020ac734(&save);

    GameState* state = GameState::GetInstance();
    char* zone = (char*)func_02012fe4();
    GameResources* res = GetGameResources();
    unsigned char* buf = (unsigned char*)res->unknown_ptr_36d0;
    res->unknown_41c8[0x42e0 - 0x41c8] = *(unsigned char*)(data_ov004_02171010 + 0x1000 + flagOffset);
    func_020263e4((Struct020263e4*)buf);
    func_02026418(buf, 0);
    *(int*)(buf + 0x14) = *(int*)(data_ov004_02171010 + 0x1000 + valueOffset);
    strcpy(zone + 0x26, data_ov004_02171010 + nameOffset);
    res->allocator_array_38[12].Reset();
    func_020dc2d0(0);

    for (i = 0; i < 8; i++) {
        ((DetailedTreasureMapData*)(data_ov004_02171010 + 0xad4 + i * recordStride))->BlankFunction();
    }

    char* owner = (char*)func_ov011_021845f8(a, 0);
    if (owner != NULL && data_ov004_02171010 != NULL) {
        ((SafeAllocator*)(owner + 4))->Free(data_ov004_02171010);
        data_ov004_02171010 = NULL;
        func_020a39d8((SafeAllocator*)(owner + 4));
    }

    if (func_02011930(state, NULL, NULL, NULL) != 0) {
        if (*((unsigned char*)state + 0x6000 + stateFlag) != 0) {
            if (func_020649b0(func_0205ec34(), 0x1b, request)) {
                func_0206f81c(request);
            }
        }
        if (func_0201b5d8(*(unsigned short*)zone)) {
            func_020e1154((void*)0x7d0);
        }
    }

    func_020118fc(state);
    func_020119e8(state);
    func_02011ad4((char*)state);
    *(unsigned char*)(func_020421a0() + 0x1000 + resetOffset) = 0;
    return 0;
}
