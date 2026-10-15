#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "GameState/BattleRecordSnapshot.h"

struct Buffs021554f4 {
    signed int attack : 3;
    signed int defense : 3;
    signed int agility : 3;
    signed int charm : 3;
    signed int might : 3;
    signed int mending : 3;
    signed int other : 3;
};

struct Slots021554f4 {
    unsigned short a : 2;
    unsigned short b : 4;
    unsigned short c : 3;
    unsigned short d : 3;
};

struct Kind021554f4 {
    unsigned char kind : 4;
    unsigned char rank : 4;
};

struct Status021554f4 {
    unsigned int lo;
    unsigned int hi;
};

struct Stats021554f4 {
    unsigned short currHP;
    char pad2[0x14 - 0x2];
    Status021554f4 status;
    char pad1c[0x21 - 0x1c];
    unsigned char kind;
    Slots021554f4 slots;
    unsigned char rank;
    char pad25[0x2e - 0x25];
    short party;
    char pad30[0x58 - 0x30];
    Buffs021554f4 buffs;

    unsigned short GetSlotA() { return slots.a; }
    unsigned short GetSlotB() { return slots.b; }
    unsigned short GetSlotC() { return slots.c; }
    unsigned short GetSlotD() { return slots.d; }
    unsigned char GetKind() { return kind; }
    unsigned char GetRank() { return rank; }
};

struct Opt021554f4 {
    char pad0[8];
    short id;
};

struct Unit021554f4 {
    char pad0[0x138];
    Stats021554f4* stats;
    char pad13c[0x144 - 0x13c];
    Opt021554f4* opt;
    char pad148[0x181 - 0x148];
    unsigned char b181;
    unsigned char b182;

    Stats021554f4* GetStats() { return stats; }
};

struct Entry021554f4 {
    Status021554f4 status[2];
    short optId;
    short target;
    unsigned short code;
    short turn;
    Slots021554f4 slots[2];
    Kind021554f4 kinds[2];
    unsigned char flags;
    unsigned char arg;
    float ratio;
    unsigned char sub;
    unsigned char info24;
    unsigned char info25;
    Buffs021554f4 buffs[2];
    unsigned short values[8];
};

struct Info021554f4 {
    char pad0[0x24];
    unsigned char a;
    unsigned char b;
};

struct Root021554f4 {
    char pad0[0x5c60];
    Entry021554f4 entries[16];
    char pad6060[0x8e04 - 0x6060];
    short curId;
    signed char curIdx;
    unsigned char count;
    char pad8e08[0x8e18 - 0x8e08];
    Info021554f4* info;
    char pad8e1c[4];
    int turn;
};

struct Rec021554f4 {
    char pad0[4];
    unsigned int code : 12;
    unsigned int rest : 20;
};

struct Active021554f4 {
    char pad0[8];
    unsigned int lo : 4;
    unsigned int sub : 5;
};

struct ArrayContainsByteStruct;
struct Outer_02054000;
struct Field150Holder02052df8;

Unit021554f4* GetCombatantWithFlag0x400_0200fea4(GameState*, int);
int IsFlag0x18Bit0x1000Set_ov000_02155154(GameObject*);
int ArrayContainsByte_02086ef0(ArrayContainsByteStruct*, int);
void IncrementByteCounterCapped0x63_0215a8d4(unsigned char*, int);
extern "C" float func_ov000_02155a04(char*);
Active021554f4* GetActiveSub_02054000(Outer_02054000*);
unsigned short GetHalfwordEntryFromField150(Field150Holder02052df8*, int);
struct S_a0840;
struct S_a02d0;
struct S_a0644;
void AddSaturateField0x44_020a0840(S_a0840*, unsigned int);
void AddClamped24BitFieldAt0x20_020a02d0(S_a02d0*, unsigned int);
void AddClamped16BitHighAt0x24_020a0644(S_a0644*, unsigned int);
int GetField0x3acValue_020100a8(GameState*);
int CopyInBattleField0x7540_020ac494(void*);

extern const signed char data_ov000_02182a7c[9];

static inline int IsPartySlot021554f4(int id) { return id >= 0 && id <= 3; }

// USA: func_ov000_021554f4
extern "C" ARM void func_ov000_021554f4(Root021554f4* self, int id, int other, Rec021554f4* rec, unsigned char arg, int flags) {
    GameState* gs = GameState::GetInstance();
    ArrayContainsByteStruct* party = (ArrayContainsByteStruct*)GetPtrField0x2a04_02010828(GameState::GetInstance());
    Unit021554f4* c = GetCombatantWithFlag0x400_0200fea4(gs, id);
    if (!c) return;
    if (c->GetStats()->currHP == 0 && flags == 8) {
        int idx = self->curIdx;
        if (idx < 0) return;
        if (self->curId == id) self->entries[idx].flags = flags;
        return;
    }
    if (c->opt && c->opt->id == 0xf5 && IsFlag0x18Bit0x1000Set_ov000_02155154((GameObject*)c)
        && ArrayContainsByte_02086ef0(party, c->GetStats()->party)) {
        if (!(IsFlag0x18Bit0x1000Set_ov000_02155154((GameObject*)c) && c->b181) && c->b182
            && ArrayContainsByte_02086ef0(party, other)) {
            Unit021554f4* t = (Unit021554f4*)GameState::GetInstance()->GetCombatantByIndex(other);
            if (t && t->GetStats()->buffs.charm == 2) IncrementByteCounterCapped0x63_0215a8d4((unsigned char*)self, 8);
        }
    }
    self->curId = -1;
    self->curIdx = -1;
    if (self->count >= 16) return;
    if (IsPartySlot021554f4(id)) return;
    self->curId = id;
    self->curIdx = self->count;
    Entry021554f4* e;
    Opt021554f4* opt = c->opt;
    Unit021554f4* t = (Unit021554f4*)GameState::GetInstance()->GetCombatantByIndex(other);
    e = &self->entries[self->count++];
    memset(e, 0, sizeof(*e));
    unsigned int hi = c->GetStats()->status.hi;
    if (c->b181) hi &= ~0x1000;
    e->status[0].lo = c->GetStats()->status.lo;
    e->status[0].hi = hi;
    e->slots[0].a = c->GetStats()->GetSlotA();
    e->slots[0].b = c->GetStats()->GetSlotB();
    e->slots[0].c = c->GetStats()->GetSlotC();
    e->kinds[0].kind = c->GetStats()->GetKind();
    e->kinds[0].rank = c->GetStats()->GetRank();
    e->slots[0].d = c->GetStats()->GetSlotD();
    e->buffs[0] = c->GetStats()->buffs;
    e->status[1].lo = t->GetStats()->status.lo;
    e->status[1].hi = t->GetStats()->status.hi;
    e->slots[1].a = t->GetStats()->GetSlotA();
    e->slots[1].b = t->GetStats()->GetSlotB();
    e->slots[1].c = t->GetStats()->GetSlotC();
    e->kinds[1].kind = t->GetStats()->GetKind();
    e->kinds[1].rank = t->GetStats()->GetRank();
    e->slots[1].d = t->GetStats()->GetSlotD();
    e->buffs[1] = t->GetStats()->buffs;
    e->optId = opt->id;
    e->target = other;
    e->flags = flags;
    e->arg = arg;
    e->turn = self->turn;
    e->ratio = func_ov000_02155a04((char*)c);
    e->sub = 0;
    e->info24 = self->info->a;
    e->info25 = self->info->b;
    if (rec) e->code = rec->code;
    if (IsPartySlot021554f4(other)) {
        GameObject* p = GetCombatantWithFlag0x100_0200ff1c(gs, other);
        if (!p) return;
        Active021554f4* act = GetActiveSub_02054000((Outer_02054000*)p);
        if (act) e->sub = act->sub;
        for (int i = 0; data_ov000_02182a7c[i] != -1; i++)
            e->values[i] = GetHalfwordEntryFromField150((Field150Holder02052df8*)p, data_ov000_02182a7c[i]);
    }
    if (!ArrayContainsByte_02086ef0(party, other)) return;
    if (flags & 1) return;
    if (flags & 2) return;
    if (flags & 4) return;
    if (flags & 0x10) return;
    if (flags & 0x20) return;
    BattleRecordSnapshot snap;
    LoadBattleBlock020ac4c0(&snap);
    AddSaturateField0x44_020a0840((S_a0840*)&snap, 1);
    AddClamped24BitFieldAt0x20_020a02d0((S_a02d0*)&snap.secondaryClocks, 1);
    if (other == GetField0x3acValue_020100a8(gs)) AddClamped16BitHighAt0x24_020a0644((S_a0644*)&snap, 1);
    CopyInBattleField0x7540_020ac494(&snap);
}
