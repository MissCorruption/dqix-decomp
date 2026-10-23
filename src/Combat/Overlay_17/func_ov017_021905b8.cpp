#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/ZoneResourceTree.h"

struct SearchStruct;
struct SearchStruct0202c1a4;
struct Entry0207da94;
struct Entry020e3544;
struct BitEntry020e3b08;
struct Obj0207959c;
struct ClearField0x17dBits0x38Struct;

extern "C" SearchStruct* func_0202ae18(void);
extern "C" void func_0207dba8(void* p);
extern "C" void func_ov017_02190264(void* self, int id);
extern "C" void func_ov000_0215fb04(void* stack, int id);
extern "C" void func_ov017_02192654(int bit, int id, int cond);
extern "C" void* func_ov017_021b8468(void* obj);
extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);

extern "C" signed char func_0202c1a4(SearchStruct0202c1a4* obj);
extern "C" unsigned char func_020100b0(GameState* battleStruct);
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" void func_0202c600(SearchStruct* obj, int value);
extern "C" void func_0202c718(SearchStruct* obj, int value);
extern "C" void func_0202c21c(SearchStruct* obj, int value);
extern "C" Entry0207da94* func_0207d78c(void);
extern "C" void func_ov017_0218d500(void* obj);
extern "C" void func_0207da94(Entry0207da94* list, int idx);
extern "C" Entry020e3544* func_020e2ff8(void);
extern "C" void func_020e3544(Entry020e3544* p, int id);
extern "C" BitEntry020e3b08* func_020e3808(void);
extern "C" void func_020e3b08(BitEntry020e3b08* entries, int bit);
extern "C" int func_0207959c(Obj0207959c* obj, int mode);
extern "C" void func_0207958c(ClearField0x17dBits0x38Struct* s);
extern "C" void* func_ov017_021b8470(void* obj);
extern "C" unsigned short func_ov017_021b8480(void* obj);

struct Slot_021905b8 {
    char data[6];
    signed char owner;
    unsigned char f7;
    unsigned char f8;
    signed char f9;
};

struct Monster_021905b8 {
    char pad0[0x16a];
    unsigned short id;
};

struct Zone_021905b8 {
    char pad0[2];
    unsigned char active;
};

struct ZoneSlot_021905b8 {
    char pad0[8];
    unsigned short id;
};

struct ZoneState_021905b8 {
#if defined(jpn)
    char pad0[0xe24];
#else
    char pad0[0xea8];
#endif
    int state;
};

// USA: func_ov017_021905b8
extern "C" ARM void func_ov017_021905b8(GameResources* self, int id, int remove) {
    GameState* gs = GameState::GetInstance();
    SearchStruct* search = func_0202ae18();
    if (id <= 0) {
        return;
    }
    if (id == func_0202c1a4((SearchStruct0202c1a4*)search) || id == func_020100b0(gs) ||
        id == func_020100a8(gs)) {
        func_0202c600(search, id);
        func_0202c718(search, id);
        return;
    }

    Entry0207da94* entries = func_0207d78c();
    func_0207dba8(entries);
    func_ov017_0218d500(self);
    func_0202c600(search, id);
    func_0202c718(search, id);
    if (remove) {
        func_0202c21c(search, id);
    }
    func_ov017_02190264(self, id);
    func_0207da94(entries, (unsigned char)id);

#if defined(jpn)
    Slot_021905b8* slot = (Slot_021905b8*)((char*)gs + 0x7280);
#else
    Slot_021905b8* slot = (Slot_021905b8*)((char*)gs + 0x74c0);
#endif
    for (int i = 0; i < 3; i++, slot++) {
        if (slot->owner == id) {
            VectorizedMemset(slot, 0, 6);
            slot->owner = -1;
            slot->f7 = 0;
            slot->f8 = 0;
            slot->f9 = -1;
            break;
        }
    }

    func_020e3544(func_020e2ff8(), id);

    Zone_021905b8* zone = (Zone_021905b8*)self->unknown_ptr_3718;
    if (zone->active != 0) {
        void* stack = func_ov017_021b8470(zone);
        if (stack != NULL) {
            func_ov000_0215fb04(stack, id);
        }
    }

    for (int i = 0; i < 0x30; i++) {
        Monster_021905b8* mon = (Monster_021905b8*)gs->GetMaybeFieldMonsterByIndex(i + 0x70);
        if (mon != NULL && func_0207959c((Obj0207959c*)mon, id)) {
            int cond;
            Zone_021905b8* z = (Zone_021905b8*)self->unknown_ptr_3718;
            cond = 1;
            if (z->active != 0 && func_ov017_021b8480(z) == 0) {
                ZoneSlot_021905b8* zs = (ZoneSlot_021905b8*)func_ov017_021b8478(z);
                if (zs != NULL && zs->id == mon->id) {
                    ZoneState_021905b8* st = (ZoneState_021905b8*)func_ov017_021b8468(z);
                    if (st != NULL && st->state == 7) {
                        cond = 0;
                    }
                }
            }
            func_ov017_02192654(func_0202c1a4((SearchStruct0202c1a4*)search), mon->id, cond);
            func_0207958c((ClearField0x17dBits0x38Struct*)mon);
        }
    }

    func_020e3b08(func_020e3808(), id);
}
