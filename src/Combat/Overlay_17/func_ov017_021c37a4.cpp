#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct SearchState021c37a4 {
    char unk0[0x100d];
    unsigned char mode;
    char unk100e[0x1029 - 0x100e];
    unsigned char flags;
};

struct MemberStatus021c37a4 {
    unsigned int flags;
    unsigned short state;
};

struct Member021c37a4 {
    char unk0[0x130];
    MemberStatus021c37a4* status;
    char* name;
#if defined(jpn)
    char unk138[0x180 - 0x138];
#else
    char unk138[0x18c - 0x138];
#endif
    unsigned int flags;
};

struct Slot021c37a4 {
    unsigned char data[6];
    signed char first;
    unsigned char a;
    unsigned char b;
    signed char last;
};

struct Battle021c37a4 {
#if defined(jpn)
    char unk0[0x5a6c];
#else
    char unk0[0x5ccc];
#endif
    unsigned int flags;
#if defined(jpn)
    char unk5a70[0x7280 - 0x5a70];
#else
    char unk5cd0[0x74c0 - 0x5cd0];
#endif
    Slot021c37a4 slots[3];
    char unk74de[0x7e74 - 0x74de];
    int value;
};

struct Party021c37a4 {
    char unk0[0xf78];
    unsigned char memberIds[4];
    unsigned char memberCount;
    char unkf7d[0x2c94 - 0xf7d];
    int value;
};

struct Swap021c37a4 {
    unsigned char from;
    unsigned char to;
};

struct FieldTimer021c37a4 {
#if defined(jpn)
    char unk0[0x1b64];
#else
    char unk0[0x64];
#endif
    unsigned short value;
};

struct Field021c37a4 {
#if defined(jpn)
    char unk0[0x860];
#else
    char unk0[0x2340];
#endif
    FieldTimer021c37a4 timer;
#if defined(jpn)
    char unk23c6[0x2860 - 0x23c6];
#else
    char unk23a6[0x2820 - 0x23a6];
#endif
    unsigned char flag;
    FieldTimer021c37a4* GetTimer() { return &timer; }};

struct Actor021c37a4 {
    char unk0[0xc8];
    unsigned char flags;
};

struct Global021c37a4 {
#if defined(jpn)
    char unk0[0x1790];
#else
    char unk0[0x1962];
#endif
    unsigned char flag;
};

struct Obj02039d84;
struct PackedNibbleArray0206e2dc;
struct PackedNibbleArray0206e2a0;
struct Struct020d9ae8;
struct TailList020469b4;
struct TailNode020469b4;
struct SlotTable020e3004;
struct Bytes020e358c;
struct Entry020e3840;
struct Actor0209c678;
struct Actor0209c20c;
struct FlagWord020466f4;

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" void* func_020e2ff8(void);
extern "C" void* func_020e3580(void);
extern "C" void* func_020e3808(void);
extern "C" void* func_020d6c00(void);
extern "C" int func_0202c540(void* obj);
extern "C" int func_0202ba00(int* obj);
extern "C" void func_020ac4f8(int arg);
extern "C" void __clear(void* buf, int len);
extern "C" void func_02012084(unsigned char* obj);
extern "C" void func_02011af0(void* obj);
extern "C" void func_02046a8c(void* a, void* b);
extern "C" void func_020d84e0(void);
extern "C" void func_0202b0f4(void* obj);
extern "C" void func_0205e22c(void* obj);
extern "C" unsigned char func_020100a8(GameState* gs);
extern "C" int func_02039d7c(char* obj);
extern "C" void func_02039d84(Obj02039d84* obj);
extern "C" GameObject* func_0200ff58(GameState* gs, int idx);
extern "C" int func_020546a8(void* obj);
extern "C" void func_ov017_02190264(void* obj, int idx);
extern "C" void func_ov017_021c32b0(Swap021c37a4* swap, int count);
extern "C" void func_0202c288(void* obj);
extern "C" void func_020100a0(GameState* gs, int value);
extern "C" void func_020dcd40(void);
extern "C" void func_020dc7e8(int a, int b);
extern "C" void func_ov017_02191234(void* obj);
extern "C" void func_ov017_02191108(void* obj, int a, int b, int c, int d);
extern "C" void func_020546a0(void* obj, int value);
extern "C" void func_02039858(unsigned char* obj, int value);
extern "C" void func_02039d24(unsigned char* obj);
extern "C" void* func_020100f8(char* obj);
extern "C" void func_020a2770(void* obj, short value);
extern "C" void* func_0205ec34(void);
extern "C" int func_0206e2dc(PackedNibbleArray0206e2dc* arr, int idx);
extern "C" void func_020abd20(int arg);
extern "C" void func_0206e2a0(PackedNibbleArray0206e2a0* arr, int idx);
extern "C" void func_020d9ae8(Struct020d9ae8* obj, int arg);
extern "C" void func_020d9dc4(char* dst, char* src);
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);
extern "C" void func_02086d88(unsigned char* obj, int key);
extern "C" void func_ov017_0218d500(void* obj);
extern "C" void func_020116c8(void* obj);
extern "C" void func_02048150(void* obj, int a, int b);
extern "C" void func_ov017_02191aac(void* obj, int mode, int idx, unsigned char mask);
extern "C" void VectorizedMemset(void* dst, int value, int len);
extern "C" char* func_020936f8(void);
extern "C" void func_02093a14(char* obj);
extern "C" Field021c37a4* func_02012fe4(void);
extern "C" void func_ov017_02195748(unsigned char* obj);
extern "C" void func_020a2718(char* obj);
extern "C" void func_020e3004(SlotTable020e3004* p);
extern "C" void func_020e358c(Bytes020e358c* p);
extern "C" void func_020e3814(Entry020e3840* p);
extern "C" int func_0209c3ac(char* obj);
extern "C" void func_0209c2e0(void* obj, int a, int b);
extern "C" void func_0209c678(Actor0209c678* obj, int state);
extern "C" void func_020bbd9c(void);
extern "C" int func_0209c6bc(void* obj);
extern "C" void func_0209c20c(Actor0209c20c* obj);
extern "C" void func_020466f4(FlagWord020466f4* obj, unsigned int flags);
extern "C" Global021c37a4* func_020421a0(void);

extern Actor021c37a4 data_02109bf4;

// USA: func_ov017_021c37a4
extern "C" ARM void func_ov017_021c37a4(void) {
    GameState* gs = GameState::GetInstance();
    Battle021c37a4* battle = (Battle021c37a4*)gs;
    SearchState021c37a4* search = (SearchState021c37a4*)func_0202ae18();
    GameResources* res = GetGameResources();
    void* d100044 = func_0202ae24();
    void* d153637 = func_020e2ff8();
    void* d153634 = func_020e3580();
    void* d153660 = func_020e3808();
    void* d114e04 = func_020d6c00();
    int active = func_0202c540(search);
    int state = func_0202ba00((int*)search);
    int mode = search->mode;
#if defined(jpn)
    char name[0xb];
#else
    char name[0x30];
#endif
    unsigned char bits[0x1a];
    Swap021c37a4 leader;
    Swap021c37a4 swap;

    if ((state == 5 && mode > 1) || state == 6) {
        func_020ac4f8(1);
    }

#if !defined(jpn)
    __clear(name, 0x30);
#endif
    if (active) {
#if defined(jpn)
        Member021c37a4* first = (Member021c37a4*)gs->GetPartyMemberByIndex(0);
        memset(name, 0, sizeof(name));
        char* src = first->name;
#else
        char* src = ((Member021c37a4*)gs->GetPartyMemberByIndex(0))->name;
#endif
        memcpy(name, src, strlen(src));
        func_02012084((unsigned char*)gs);
        func_02011af0(gs);
        func_02046a8c(res->unknown_ptr_array_36fc[0], res->unknown_ptr_array_3afc[0x14]);
    }

    SetFlags00(res, 2);
    func_020d84e0();
    func_0202b0f4(search);
    func_0205e22c(d100044);
#if !defined(jpn)
    search->flags &= ~0x10;
#endif

    for (int i = 0; i < 4; i++) {
        if (i == func_020100a8(gs)) {
            GameObject* member = gs->GetPartyMemberByIndex(i);
            if (active && member && func_02039d7c((char*)member)) {
                func_02039d84((Obj02039d84*)member);
            }
        } else {
            GameObject* combatant = func_0200ff58(gs, i);
            if (combatant && func_020546a8(combatant) == func_020100a8(gs)) {
                continue;
            }
            func_ov017_02190264(res, i);
        }
    }

    leader.from = func_020100a8(gs);
    leader.to = 0;
    if (leader.from != leader.to) {
        func_ov017_021c32b0(&leader, 1);
    }

    for (int i = 3; i >= 0; i--) {
        GameObject* obj = gs->GetGameObjectByIndex(i);
        if (obj && (obj->obj3D_.unknown_0_ & 0x1000)) {
            int empty = -1;
            for (int j = 3; i < j; j--) {
                if (gs->GetGameObjectByIndex(j) == NULL) {
                    empty = j;
                    break;
                }
            }
            if (empty != -1) {
                swap.from = i;
                swap.to = empty;
                if (swap.from != swap.to) {
                    func_ov017_021c32b0(&swap, 1);
                }
            }
        }
    }

    func_0202c288(search);
    func_020100a0(gs, 0);
    if (active) {
        func_020dcd40();
        func_020dc7e8(6, -1);
        func_020dc7e8(7, -1);
        func_ov017_02191234(res);
        func_ov017_02191108(res, 1, 1, 1, 1);
    }

    for (int i = 0; i < 4; i++) {
        GameObject* combatant = func_0200ff58(gs, i);
        if (combatant) {
            func_020546a0(combatant, func_020100a8(gs));
            func_02039858((unsigned char*)combatant, func_020100a8(gs));
            func_02039d24((unsigned char*)combatant);
        }
    }

    void* follower = func_020100f8((char*)gs);
    if (follower) {
        func_020a2770(follower, 0);
    }
    func_ov017_02191108(res, 1, 0, 1, 1);
    func_ov017_02191234(res);
    battle->flags |= 2;

    Party021c37a4* party = (Party021c37a4*)func_02010828(gs);
    if (active) {
        void* store = func_0205ec34();
        memset(bits, 0, 0x1a);
        unsigned char* p = bits;
        unsigned char bit = 0;
        for (int i = 0; i < 0xcc; i++) {
            if (func_0206e2dc((PackedNibbleArray0206e2dc*)store, i)) {
                *p |= 1 << bit;
            }
            bit++;
            if (bit == 8) {
                p++;
                bit = 0;
            }
        }
        func_020abd20(0);
        party->value = battle->value;

        bit = 0;
        p = bits;
        bool changed = false;
        for (int i = 0; i < 0xcc; i++) {
            if (*p & (1 << bit)) {
                if (!func_0206e2dc((PackedNibbleArray0206e2dc*)store, i)) {
                    changed = true;
                }
                func_0206e2a0((PackedNibbleArray0206e2a0*)store, i);
            }
            bit++;
            if (bit == 8) {
                p++;
                bit = 0;
            }
        }
        if (changed) {
            void* list;
            void* node = res->unknown_ptr_array_3afc[0x31];
            list = res->unknown_ptr_array_36fc[0];
            func_020d9ae8((Struct020d9ae8*)node, 0);
            func_020d9dc4((char*)node, name);
            func_020469b4((TailList020469b4*)list, (TailNode020469b4*)node);
        }
    }

    func_02086d88((unsigned char*)party, 0x5612);
    func_ov017_0218d500(res);
    if (active) {
        func_020116c8(gs);
    }

    Member021c37a4* hero = (Member021c37a4*)gs->GetPartyMemberByIndex(0);
    if (hero && (hero->status->flags & 1)) {
        func_02048150(hero, 0, 1);
        hero->status->state = 1;
        hero->flags &= ~1;
    }

    Party021c37a4* members = (Party021c37a4*)func_02010828(gs);
    for (int i = 0; i < members->memberCount; i++) {
        unsigned char id = members->memberIds[i];
        if (func_0200ff1c(gs, id)) {
            func_ov017_02191aac(res, 0, id, 2);
        }
    }

    Slot021c37a4* slot = battle->slots;
    for (int i = 0; i < 3; i++, slot++) {
        VectorizedMemset(slot, 0, 6);
        slot->first = -1;
        slot->a = 0;
        slot->b = 0;
        slot->last = -1;
    }

    func_02093a14(func_020936f8());
    Field021c37a4* field = func_02012fe4();
    FieldTimer021c37a4* timer = field->GetTimer();
    timer->value = 0;
    res->unknown_flag_42e2 = 0;
    func_ov017_02195748((unsigned char*)res);
    func_020a2718((char*)follower);
    func_020e3004((SlotTable020e3004*)d153637);
    func_020e358c((Bytes020e358c*)d153634);
    func_020e3814((Entry020e3840*)d153660);
    field->flag = 1;

    if (func_0209c3ac((char*)&data_02109bf4) != 0x7f) {
        func_0209c2e0(&data_02109bf4, 0x7f, 0);
        func_0209c678((Actor0209c678*)&data_02109bf4, 0);
        func_020bbd9c();
    }
    data_02109bf4.flags &= ~4;
    if (!func_0209c6bc(&data_02109bf4)) {
        func_0209c20c((Actor0209c20c*)&data_02109bf4);
    }
    func_020466f4((FlagWord020466f4*)d114e04, 0x800);
    func_020421a0()->flag = 0;
}
