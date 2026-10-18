#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

struct SearchStruct {
    char pad0[0xfc0];
    int fieldFC0;
};

struct SearchStruct0202c1a4;
struct FlagWord020466f4;
struct BitArrayObj0205e854;

extern "C" SearchStruct* func_0202ae18(void);
void* GetData02100044_0202ae24(void);
int TestFlagBitAt0xe_0202c578(SearchStruct* obj, int value);
int GetGlobalField0x10_0202d6a8(void);
void* GetDataPtr02114e04_020d6c00(void);
void ClearFlags020466f4(FlagWord020466f4* word, unsigned int mask);
int* GetGlobal02109030_020936f8(void);
void ResetAndSetFlag0x3c9Bit0_020939dc(void* obj);
extern "C" void func_02094030(int*, short, short, signed char);
signed char GetSearchStructCurrentArrEntry(SearchStruct0202c1a4* obj);
int TestMaskBitBySignedByteIndex_0202bd34(SearchStruct* obj, int value);
extern "C" void func_0202b0f4(void* obj);
void ClearTwoBytesAtField_02195748(unsigned char* base);
void SetFlag1ForFlagombatants_02192594_02192594(unsigned char* base);
void* FillBitArray0x1524WithFF(BitArrayObj0205e854* obj);

struct Obj021af2f8 {
    unsigned char pad0;
    unsigned char field1;
    unsigned char pad2[6];
    unsigned char field8;
    unsigned char pad9[6];
    signed char fieldF;
    signed char field10;
};

// USA: func_ov017_021af2f8
extern "C" ARM unsigned char func_ov017_021af2f8(Obj021af2f8* obj) {
    GameState::GetInstance();
    unsigned int* flags = (unsigned int*)GetGameResources();
    SearchStruct* search = func_0202ae18();
    GetEntryBySignedByteIndex_0202c178(search, 0);
    BitArrayObj0205e854* bits = (BitArrayObj0205e854*)GetData02100044_0202ae24();

    if (TestFlagBitAt0xe_0202c578(search, 0) != 0 || GetGlobalField0x10_0202d6a8() == 8) {
        ClearFlags020466f4((FlagWord020466f4*)GetDataPtr02114e04_020d6c00(), 0x8020);
        int* g = GetGlobal02109030_020936f8();
        ResetAndSetFlag0x3c9Bit0_020939dc(g);
        func_02094030(g, 4, -1, 0);
        return 3;
    }

    int done = 0;
    if (GetSearchStructCurrentArrEntry((SearchStruct0202c1a4*)search) == 0) {
        done = 1;
    } else {
        for (int i = 0; i < 4; i++) {
            if (i == GetSearchStructCurrentArrEntry((SearchStruct0202c1a4*)search)) {
                continue;
            }
            if (TestMaskBitBySignedByteIndex_0202bd34(search, i) == 0) {
                continue;
            }
            SearchEntry0202c178* entry = GetEntryBySignedByteIndex_0202c178(search, i);
            if (entry == 0) {
                continue;
            }
            if (entry->active == 0) {
                done = 1;
                break;
            }
        }
        if (obj->field10 != GetSearchStructCurrentArrEntry((SearchStruct0202c1a4*)search)) {
            obj->fieldF = 0;
        }
    }

    if (obj->fieldF == -1 || done) {
        if (g_keyManager.TestKeysPressed(2)) {
            obj->fieldF = -1;
            SetFlags00((GameResources*)flags, 2);
            func_0202b0f4(search);
            ClearTwoBytesAtField_02195748((unsigned char*)flags);
            SetFlag1ForFlagombatants_02192594_02192594((unsigned char*)flags);
            FillBitArray0x1524WithFF(bits);
            ClearFlags00((GameResources*)flags, 0x40);
            obj->field1 = 1;
        }
    } else if (obj->fieldF == 1) {
        if (search->fieldFC0 == 0) {
            obj->field1 = 1;
        }
    } else {
        SetFlags00((GameResources*)flags, 2);
        func_0202b0f4(search);
        ClearTwoBytesAtField_02195748((unsigned char*)flags);
        SetFlag1ForFlagombatants_02192594_02192594((unsigned char*)flags);
        FillBitArray0x1524WithFF(bits);
        ClearFlags00((GameResources*)flags, 0x40);
        obj->field1 = 1;
    }
    return obj->field8;
}
