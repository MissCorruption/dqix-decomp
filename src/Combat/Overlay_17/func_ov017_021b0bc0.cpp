#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Combat/SearchEntry.h"
#include "Filesystem/BackgroundLoader.h"
#include "Graphics/LightingManager.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct SearchStruct0202c1a4;
struct Obj02033874;
struct Obj02053f7c;
struct StructDE1D4 { char data[0x20]; };

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" void func_0202c288(void*);
extern "C" void func_02039880(unsigned char*, int);
extern "C" int func_0202c1c0(SearchStruct* obj, int value);
extern "C" signed char func_0202c1a4(SearchStruct0202c1a4* obj);
extern "C" void func_ov017_02191108(GameResources*, int, int, int, int);
extern "C" void func_ov017_021907dc(int, int, int, int, int);
extern "C" signed char func_02039888(void*);
extern "C" void func_02033874(Obj02033874*, int);
extern "C" void func_020120d4(unsigned char*, unsigned char);
extern "C" void* func_020120a0(char* p, unsigned int index);
extern "C" void func_0201206c(void*, int);
extern "C" void func_02053f7c(Obj02053f7c*, unsigned short, int);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206dfe8(void*, int, int);
extern "C" void func_0206e70c(char*);
extern "C" void func_0206df14(unsigned char*);
extern "C" float func_020103e8(GameState*);
extern "C" void func_ov017_0219bcac(unsigned char);
extern "C" unsigned char* func_0200fd0c(GameState*);
extern "C" void* func_02094d6c();
extern "C" void* func_020965f8();
extern "C" void* func_020de824(void*);
extern "C" void func_020de848(void*);
extern "C" void func_020de1d4(StructDE1D4*);
extern "C" void* ExtractFileFromGP2(const char* gp2Path, const char* innerFilePath, unsigned int* outSize);
#if defined(jpn)
extern "C" void* func_020e08f0(int index, unsigned int* outLength);
#endif
extern "C" int func_020def44(int, int, int, short);
extern "C" void func_0207cbe8(char*);
extern "C" void func_0207cc18(void*, void*);
extern "C" void* func_02010828(GameState*);
struct KeyMap020a095c;
extern "C" void func_020a095c(KeyMap020a095c*, int, int);
extern "C" void func_020dbc5c(char*, int);
extern "C" int func_020100b0(GameState*);
extern "C" void func_ov017_021cee78(int, unsigned char);
extern "C" void func_ov017_02191234(GameResources*);

extern const char* data_020f2a18;
extern const char* data_020f2a0c;

struct ZoneState021b0bc0 {
    char pad0[0x1b34];
    int f1b34;
    int f1b38;
    int f1b3c;
    char pad1b40[0x1b48 - 0x1b40];
    int f1b48;
    char pad1b4c[0x1b61 - 0x1b4c];
    unsigned char f1b61;
#if defined(jpn)
    char pad1b62[0x1f94 - 0x1b62];
#else
    char pad1b62[0x1f74 - 0x1b62];
#endif
    unsigned short f1f74;
    unsigned short f1f76;
};

struct Zone021b0bc0 {
#if defined(jpn)
    char pad0[0x860];
#else
    char pad0[0x840];
#endif
    ZoneState021b0bc0 state;
};

static inline ZoneState021b0bc0* GetZoneState(Zone021b0bc0* zone) {
    return &zone->state;
}

static inline void SetF1b34(ZoneState021b0bc0* state, int v) { state->f1b34 = v; }
static inline void SetF1b38(ZoneState021b0bc0* state, int v) { state->f1b38 = v; }
static inline void SetF1b3c(ZoneState021b0bc0* state, int v) { state->f1b3c = v; }
static inline void SetF1b48(ZoneState021b0bc0* state, int v) { state->f1b48 = v; }
static inline void SetF1b61(ZoneState021b0bc0* state, unsigned char v) { state->f1b61 = v; }

struct Snapshot021b0bc0 {
    unsigned char f0;
    char pad1[3];
    char block4[0x190];
    char block194[0x110];
    char block2a4[0x20];
    int f2c4;
    int f2c8;
    int f2cc;
    unsigned short f2d0;
    unsigned short f2d2;
    unsigned char f2d4;
    unsigned char f2d5;
    unsigned short ids[4];
};

struct Self021b0bc0 {
    char pad0;
    unsigned char done;
    char pad2[2];
    signed char* kind;
    char pad8;
    unsigned char mode;
    char padA[2];
    unsigned char leader;
#if defined(jpn)
    char padD[0x214 - 0xd];
#else
    char padD[0x284 - 0xd];
#endif
    unsigned char f284;
    char pad285[3];
    Snapshot021b0bc0* snapshot;
};

struct TextContext021b0bc0 {
    SafeAllocator allocator;
    char list[0x18];
    void* containerData;
    int field30;
    int field34;
};

// USA: func_ov017_021b0bc0
// JPN: func_ov017_021b1258
extern "C" ARM void func_ov017_021b0bc0(Self021b0bc0* self) {
    char list[0x18];
    StructDE1D4 entry;
    TextContext021b0bc0 context;
    short ys[4];
    unsigned int size;

    GameState* gs = GameState::GetInstance();
    GameResources* res = GetGameResources();
    SearchStruct* search = (SearchStruct*)func_0202ae18();
    Zone021b0bc0* zone = (Zone021b0bc0*)func_02012fe4();
#if defined(jpn)
    ZoneState021b0bc0* state = GetZoneState(zone);
#endif
    func_0202c288(search);

    int show = 1;
    if (self->kind != NULL && *self->kind == 10) {
        show = 0;
    }
    GameObject* leader = gs->GetPartyMemberByIndex(self->leader);
    if (leader != NULL) {
        func_02039880((unsigned char*)leader, leader->obj3D_.unknown_4_);
    }
    short* y = ys;
    for (int i = 0; i < 4; i++, y++) {
        GameObject* member = gs->GetPartyMemberByIndex(i);
        if (member != NULL) {
            *y = *(short*)((char*)member + 0xae);
        }
    }

    for (int i = 0; i < 4; i++) {
        if (func_0202c1c0(search, i) == 0) {
            continue;
        }
        if (i == func_0202c1a4((SearchStruct0202c1a4*)search)) {
            if (self->f284 == 0) {
                show = 0;
            }
            func_ov017_02191108(res, 1, show, 1, 1);
        } else {
            func_ov017_021907dc((int)res, i, 1, show, 1);
        }
    }

    if (self->mode == 2) {
        y = ys;
        for (int i = 0; i < 4; i++, y++) {
            GameObject* member = gs->GetPartyMemberByIndex(i);
            if (member == NULL) {
                continue;
            }
            if (i == func_02039888(member)) {
                continue;
            }
            if (i != 0 && !(member->obj3D_.unknown_0_ & 0x1000)) {
                continue;
            }
            func_02033874((Obj02033874*)member, *y);
        }
        ClearFlags00(res, 0x40);

        Snapshot021b0bc0* snap = self->snapshot;
        func_020120d4((unsigned char*)gs, snap->f0);
#if defined(jpn)
        memcpy((char*)gs + 0x5a7c, snap->block4, sizeof(snap->block4));
        memcpy((char*)gs + 0x5c0c, snap->block194, sizeof(snap->block194));
#else
        memcpy((char*)gs + 0x5cdc, snap->block4, sizeof(snap->block4));
        memcpy((char*)gs + 0x5e6c, snap->block194, sizeof(snap->block194));
#endif
        memcpy(func_020120a0((char*)gs, 0), snap->block2a4, sizeof(snap->block2a4));
        func_0201206c(gs, snap->f2c4);
#if defined(jpn)
        SetF1b34(state, snap->f2c8);
        SetF1b48(state, snap->f2cc);
        SetF1b38(state, snap->f2d0);
        SetF1b3c(state, (unsigned char)snap->f2d2);
        SetF1b61(state, 0);
#else
        SetF1b34(GetZoneState(zone), snap->f2c8);
        SetF1b48(GetZoneState(zone), snap->f2cc);
        SetF1b38(GetZoneState(zone), snap->f2d0);
        SetF1b3c(GetZoneState(zone), (unsigned char)snap->f2d2);
        SetF1b61(GetZoneState(zone), 0);
#endif
        zone->state.f1f74 = snap->f2d4;
        zone->state.f1f76 = snap->f2d5;
        for (int i = 0; i < 4; i++) {
            GameObject* member = gs->GetPartyMemberByIndex(i);
            if (member != NULL) {
                func_02053f7c((Obj02053f7c*)member, snap->ids[i], 1);
            }
        }

        void* save = func_0205ec34();
        func_0206dfe8(save, 0x38e, 0x3e8);
        func_0206dfe8(save, 0x79e, 0x2bc);
        func_0206e70c((char*)save);
        func_0206df14((unsigned char*)save);
        gs->SetDayTimer(func_020103e8(gs));
        LightingManager* lighting = LightingManager::GetInstance();
        lighting->dayNightTimer_ = gs->GetDayTimer();
        lighting->timeOfDayIndex_ = gs->GetTimeOfDay();
        func_ov017_0219bcac(1);
        func_0200fd0c(gs)[0xa] = 0;
        func_02094d6c();
        func_020965f8();

        func_020de824(list);
        func_020de848(list);
        func_020de1d4(&entry);
        BackgroundLoader::AddLockGlobal();
#if defined(jpn)
        void* data = func_020e08f0(8, &size);
#else
        void* data = ExtractFileFromGP2(data_020f2a18, data_020f2a0c, &size);
#endif
        if (data != NULL) {
            func_020def44((int)&entry, (int)data, size, 0x5612);
        }
        BackgroundLoader::RemoveLockGlobal();
        context.allocator.ResetAllocatorPointer();
        func_020de824(context.list);
        func_0207cbe8((char*)&context);
        func_0207cbe8((char*)&context);
        func_0207cc18(&context, &entry);
        func_020a095c((KeyMap020a095c*)func_02010828(gs), 0x5612, 1);
    } else if (self->mode == 0) {
        func_020dbc5c((char*)res, self->leader);
        unsigned char* slots = (unsigned char*)func_02010828(gs) + 0xf78;
        for (int i = 0; i < 4; i++, slots++) {
            unsigned char id = *slots;
            if (id != func_020100b0(gs)) {
                func_ov017_021cee78(id, 0);
            }
        }
    }

    func_ov017_02191234(res);
    self->done = 1;
}
