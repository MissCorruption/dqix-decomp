#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

struct Flags02033fdc;
struct Foo02033b58;
struct Obj02033874;
struct FlagWord020466f4;
struct ListHead02046b60;
struct Actor021bb27c {
    Object3D object; char padac[0x15]; unsigned char state:2, rest:6;
    char padc2[0x1e]; unsigned char flags;
#if defined(jpn)
    char pade1[0x180 - 0xe1];
#else
    char pade1[0x18c - 0xe1];
#endif
    unsigned int field18c;
};
struct PartyState021bb27c { char pad0[0xf78]; unsigned char indices[4], count; };
struct Zone021bb27c {
#if defined(jpn)
    char pad0[0x2816];
#else
    char pad0[0x27d6];
#endif
    unsigned short key;
};
struct Encounter021bb27c { unsigned short key; unsigned char active; char pad3[0xb]; unsigned char fieldE; };
struct Detail021bb27c { unsigned short field0; unsigned char field2; };
struct Event021bb27c {
    char pad0[8]; unsigned short zone, mode; char padc[5]; unsigned char resetActor, resetAll;
    char pad13[3]; unsigned short kind, key;
#if defined(jpn)
    char pad1a[0x78 - 0x1a];
#else
    char pad1a[0x7c - 0x1a];
#endif
    SafeAllocator allocator;
    char pad90[0xa]; unsigned char field9a; char pad9b[0x34]; unsigned char fieldcf;
    char padd0[0x2d]; unsigned char fieldfd; char padfe; unsigned char fieldff;
    char pad100[4]; unsigned char field104; char pad105[3]; unsigned char field108;
    char pad109[3]; unsigned char field10c; char pad10d[9]; signed char actorIndex;
    char pad117[0xd]; SafeAllocator nestedAllocator; SafeAllocator* externalAllocator;
    char pad13c[0x38]; unsigned char actorMask, restoreMask;
};
struct ResourceKey021bb27c {
#if defined(jpn)
    char pad0[0x41fc];
#else
    char pad0[0x44ac];
#endif
    unsigned short key;
};
struct Bounds021bb27c { int zone; Vector3fix origin, extent, destination; };
extern "C" int func_020100f8(char*);
extern "C" int* func_0202ae18();
extern "C" Zone021bb27c* func_02012fe4();
extern "C" void func_ov001_0215aa5c();
extern "C" void func_02033fdc(Flags02033fdc*);
extern "C" void func_02033b58(Foo02033b58*, unsigned char);
extern "C" int func_02039d7c(char*);
extern "C" void func_02033874(Obj02033874*, int);
extern "C" int func_0202b7d8(int*);
extern "C" void func_02053ec8(void*, int);
extern "C" void func_02053f04(void*);
extern "C" int func_020100b0(GameState*);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" FlagWord020466f4* func_020d6c00();
extern "C" void func_020466f4(FlagWord020466f4*, unsigned int);
extern "C" void func_ov017_02191fec(GameResources*, int);
extern "C" void* func_0200fd0c(GameState*);
extern "C" int func_02046b60(ListHead02046b60*, int);
extern "C" void func_020dc2d0(int);
extern "C" void func_ov017_02190264(GameResources*, int);
extern "C" void func_ov017_0218f5a4(GameResources*, int, int, int, int);
extern "C" void func_020397c0(void*);
extern "C" void func_020a27ac(void*);
extern "C" void func_ov017_021921fc(const Vector3fix*, int, int);
extern "C" void func_ov017_021d035c(unsigned char, unsigned char, unsigned char);
extern "C" int func_02039790(void*, int);
extern "C" void func_ov017_021bd4d0(Event021bb27c*, unsigned char, int, int);
#if defined(jpn)
#define data_ov017_021d7d6c data_ov017_021d8544
#define data_ov017_021d7d72 data_ov017_021d854a
#define data_ov017_021d6c20 data_ov017_021d7018
#endif
extern const char data_ov017_021d7d6c[], data_ov017_021d7d72[];
extern AllocatorUnion data_02114e20;
extern const Bounds021bb27c data_ov017_021d6c20[3];

static inline Detail021bb27c* GetEncounterDetail(GameResources* resources) {
    return (Detail021bb27c*)resources->unknown_ptr_3718;
}

// USA: func_ov017_021bb27c
extern "C" ARM void func_ov017_021bb27c(Event021bb27c* self) {
    int* search;
    GameState* game = GameState::GetInstance();
    GameResources* resources = GetGameResources();
    ListHead02046b60* list = (ListHead02046b60*)resources->unknown_ptr_array_36fc[0];
    Detail021bb27c* detail = GetEncounterDetail(resources);
    GameObject* leader = game->GetUnknownGameObject();
    void* controlled = (void*)func_020100f8((char*)game);
    search = func_0202ae18();
    Zone021bb27c* zone = func_02012fe4();
    if (!TestFlags00(resources, 0x1000)) {
        func_ov001_0215aa5c();
    }
    if (self->zone == 0x7343 || self->zone == 0x7346 || self->zone == 0x7349) zone->key = self->zone;
    for (int i = 0; i < 4; i++) {
        GameObject* actor = game->GetPartyMemberByIndex(i);
        if (!actor) continue;
        func_02033fdc((Flags02033fdc*)actor);
        func_02033b58((Foo02033b58*)actor, 0);
        if (!func_02039d7c((char*)actor) || func_020399a8(actor)->command != 2) {
                actor->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
        } else if (self->resetActor) {
                ((Actor021bb27c*)actor)->flags &= ~1;
                actor->obj3D_.DisableFlag(0x1180);
                func_02038508(func_020399a8(actor));
                actor->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
        } else actor->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d72, 0);
        func_02033874((Obj02033874*)actor, actor->obj3D_.rotation_.y);
        actor->obj3D_.DisableFlag(0x10);
    }
    if (func_0202b7d8(search)) {
        PartyState021bb27c* party = (PartyState021bb27c*)func_02010828(game);
        for (int i = 0; i < party->count; i++) {
            Actor021bb27c* actor = (Actor021bb27c*)func_0200ff1c(game, party->indices[i]);
            if (actor) { func_02053ec8(actor, 0); func_02053f04(actor); }
        }
        if (self->resetAll) {
            func_020100b0(game);
            for (int i = 0; i < 4; i++) {
                Actor021bb27c* actor = (Actor021bb27c*)func_0200ff1c(game, i);
                if (actor) {
                    actor->state &= ~1; actor->state &= ~2; actor->field18c &= ~2;
                }
            }
        }
        if (self->actorIndex >= 0) {
            Actor021bb27c* actor = (Actor021bb27c*)func_0200ff1c(game, self->actorIndex);
            if (actor) {
                actor->state &= ~1; actor->state &= ~2; actor->field18c &= ~2;
            }
        }
    }
    if (resources) {
        ClearFlags04(resources, 0x1040);
        ClearFlags00(resources, 0x10);
        ClearFlags00(resources, 0x800);
        ClearFlags00(resources, 0x4000);
    }
    void* allocation = self->nestedAllocator.GetSignedAllocator();
    if (allocation) { self->nestedAllocator.Destroy(); self->allocator.Free(allocation); }
    if (!TestFlags00(resources, 0x1000)) {
        allocation = self->allocator.GetSignedAllocator();
        if (allocation) { self->allocator.Destroy(); func_02012da4(&data_02114e20, allocation); }
    }
    if (self->externalAllocator) {
        allocation = self->externalAllocator->GetSignedAllocator();
        if (allocation) { self->externalAllocator->Destroy(); func_02012da4(&data_02114e20, allocation); }
        self->externalAllocator = 0;
    }
    func_020466f4(func_020d6c00(), 0x20000);
    for (int i = 0; i < 4; i++) func_ov017_02191fec(resources, i);
    func_020466f4(func_020d6c00(), 0x400f);
    Encounter021bb27c* encounter = (Encounter021bb27c*)func_0200fd0c(game);
    if (self->field104 && !detail->field2 && (!encounter->active || self->field10c) &&
        !func_02046b60(list, 10) && !(self->kind == 1 && self->fieldcf == 2)) {
        func_020dc2d0(0);
    }
    self->fieldff = 1;
    for (int i = 0; i < 4; i++) {
        if (self->actorMask & (1 << i)) func_ov017_02190264(resources, i);
        if (self->restoreMask & (1 << i)) func_ov017_0218f5a4(resources, i, 0, 0, 1);
    }
    if (leader) func_020397c0(leader);
    if (controlled) func_020a27ac(controlled);
    const Bounds021bb27c* bounds = data_ov017_021d6c20;
    for (int i = 0; i < 3; i++, bounds++) {
        if (bounds->zone != self->zone) continue;
        GameObject* actor = game->GetUnknownGameObject();
        Vector3fix position = actor->obj3D_.position_;
        if (fix32abs(position.x - bounds->origin.x) > bounds->extent.x) break;
        if (fix32abs(position.y - bounds->origin.y) > bounds->extent.y) break;
        if (fix32abs(position.z - bounds->origin.z) > bounds->extent.z) break;
        func_ov017_021921fc(&bounds->destination, actor->obj3D_.rotation_.y, 0); break;
    }
    self->fieldcf = 0xff; self->field9a = 0;
    ResourceKey021bb27c* resourceKey = (ResourceKey021bb27c*)resources;
    if (self->key == resourceKey->key) resourceKey->key = 0;
    if (func_0202b7d8(search)) {
        if (self->mode <= 2 && self->fieldfd) return;
        Encounter021bb27c* encounter = (Encounter021bb27c*)func_0200fd0c(game);
        if (encounter->active && self->field108) encounter->fieldE = 1;
        else func_ov017_021d035c(0, func_020100b0(game), self->field108);
        for (int i = 0; i < 4; i++) {
            GameObject* actor = game->GetPartyMemberByIndex(i);
            if (actor && func_02039790(actor, 0x20)) func_ov017_021bd4d0(self, i, 0, 0);
        }
    }
}
