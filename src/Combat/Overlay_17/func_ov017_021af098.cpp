#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

struct SearchStruct;

struct SearchStruct0202c1a4;
struct FlagWord020466f4;
struct BitArrayObj0205e854;
struct BitArrayObj0205e870;

extern "C" SearchStruct* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" signed char func_0202c1a4(SearchStruct0202c1a4* obj);
extern "C" void func_0202b0f4(void* obj);
extern "C" void func_ov017_02195748(unsigned char* base);
extern "C" void func_ov017_02192594(unsigned char* base);
extern "C" void* func_0205e854(BitArrayObj0205e854* obj);
extern "C" int func_0202c578(SearchStruct* obj, int value);
extern "C" int func_0202d6a8(void);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(FlagWord020466f4* word, unsigned int mask);
extern "C" int* func_020936f8(void);
extern "C" void func_020939dc(void* obj);
extern "C" void func_02094030(int* obj, short a, short b, signed char c);
extern "C" void func_0202c1e8(SearchStruct* obj, int value);
extern "C" void* func_0205e870(BitArrayObj0205e870* obj);
extern "C" void func_0205e7dc(unsigned char* obj, int index);
extern "C" void func_ov017_021cc0cc(void);

struct Obj021af098 {
    unsigned char pad0;
    unsigned char complete;
    unsigned char pad2[6];
    unsigned char state;
    unsigned char pad9[6];
    signed char fieldF;
    signed char previousSlot;
    unsigned char pad11;
    unsigned short elapsedMilliseconds;
};

// USA: func_ov017_021af098
extern "C" ARM unsigned char func_ov017_021af098(Obj021af098* obj) {
    GameState* gs = GameState::GetInstance();
    unsigned int* flags = (unsigned int*)GetGameResources();
    SearchStruct* search = func_0202ae18();
    BitArrayObj0205e854* bits = (BitArrayObj0205e854*)func_0202ae24();

    if (func_0202c1a4((SearchStruct0202c1a4*)search) == 0) {
        func_0202c178(search, 0);
        if (g_keyManager.TestKeysPressed(2)) {
            obj->fieldF = -1;
            SetFlags00((GameResources*)flags, 2);
            func_0202b0f4(search);
            func_ov017_02195748((unsigned char*)flags);
            func_ov017_02192594((unsigned char*)flags);
            func_0205e854(bits);
            ClearFlags00((GameResources*)flags, 0x40);
            obj->complete = 1;
        } else if (func_0202c578(search, 0) != 0 || func_0202d6a8() == 8) {
            func_020466f4((FlagWord020466f4*)func_020d6c00(), 0x8020);
            int* g = func_020936f8();
            func_020939dc(g);
            func_02094030(g, 4, -1, 0);
            return 3;
        } else {
            obj->elapsedMilliseconds = obj->elapsedMilliseconds + gs->GetEffectiveDeltaTime();
            if (obj->elapsedMilliseconds > 5000) {
                obj->fieldF = 0;
                SetFlags00((GameResources*)flags, 2);
                func_0202b0f4(search);
                func_ov017_02195748((unsigned char*)flags);
                func_ov017_02192594((unsigned char*)flags);
                func_0205e854(bits);
                ClearFlags00((GameResources*)flags, 0x40);
                obj->complete = 1;
                return obj->state;
            }
        }
        return obj->state;
    }

    if (func_0202c1a4((SearchStruct0202c1a4*)search) >= 4) {
        obj->fieldF = 0;
        SetFlags00((GameResources*)flags, 2);
        func_0202b0f4(search);
        func_ov017_02195748((unsigned char*)flags);
        func_ov017_02192594((unsigned char*)flags);
        func_0205e854(bits);
        ClearFlags00((GameResources*)flags, 0x40);
        obj->complete = 1;
        return obj->state;
    }

    obj->previousSlot = func_0202c1a4((SearchStruct0202c1a4*)search);
    func_0202c1e8(search, func_0202c1a4((SearchStruct0202c1a4*)search));
    ClearFlags00((GameResources*)flags, 2);
    func_0205e870((BitArrayObj0205e870*)bits);
    func_0205e7dc((unsigned char*)bits, 0x2c);
    func_0205e7dc((unsigned char*)bits, 0x2a);
    func_0205e7dc((unsigned char*)bits, 0x2e);
    func_0205e7dc((unsigned char*)bits, 0x3d);
    func_0205e7dc((unsigned char*)bits, 0x33);
    func_ov017_021cc0cc();
    obj->elapsedMilliseconds = 0;
    return 2;
}
