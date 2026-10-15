#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Stats0215b5a0 {
    char pad0[0x14];
    unsigned int flags;
    char pad18[0x22 - 0x18];
    unsigned short pad22 : 14;
    unsigned short pending : 1;
    unsigned short pad22hi : 1;
    unsigned char level;
};

struct Battle0215b5a0 {
    Random rng;
    char pad20[0x8e00 - sizeof(Random)];
    unsigned char tableCount;
    unsigned char targetCount;
    unsigned char resultCount;
    char pad8e03[0x8e24 - 0x8e03];
    int workCount;
};

struct Work0215b5a0 { unsigned short kind; char pad2[0xb - 2]; unsigned char flags; };
struct Entry0215b5a0 { char pad0[0x1c]; short sentinel; short pad1e; unsigned short id, hp, mp; char pad26[0x30 - 0x26]; int tail; };
struct Target0215b5a0 { char pad0[0xe]; short ids[4]; char pad16; unsigned char count; };
struct OutStruct0215ccbc { char pad0[0x20]; int tail; };
struct List021600f8 { unsigned short kind; char pad2[9 - 2]; unsigned char count; };

struct S_10088;
Target0215b5a0* GetNodeAtIndex021600f8(List021600f8*, int);
int IsFlag10088Set_02010088(S_10088*);
int IsFlag0x18Bit0x2000Set_ov000_02153c0c(GameObject*);
int CheckFlag0x14Bit0x10Set_020882f8(unsigned char*);
int IsFlag0x14Bit0x8Set_ov000_02156038(GameObject*);
int IsFlag0x14Bit0x80000Set_ov000_02156050(GameObject*);
int CheckField0x14FiveFlagsClear020881c4(unsigned char*);
Work0215b5a0* GetWorkArrayEntry0215e9d8(void*);
void InitStruct02160030(void*);
Entry0215b5a0* GetTableEntry0x8e00Bound0x48_ov000_0215e918(void*);
Target0215b5a0* GetTableEntry0x8e01Bound0x88_ov000_0215e938(void*);
void ResetStruct02157cdc(void*);
void ResetAndSetFlag0x1000000_02088150(void*);
void SetFlag0x800000AndByte0x24_02088220(void*, int);
void AppendToChainAndIncCount0215ffc4(void*, void*, int);
void AddEntryAndIncrementCount0215a88c(void*, void*, int);
struct Obj02160068; struct Node02160068; struct Obj021600cc; struct Node021600cc;
void AppendNode02160068(Obj02160068*, Node02160068*);
void AppendNode021600cc(Obj021600cc*, Node021600cc*);
void PopulateEntry_0215ccbc(int, OutStruct0215ccbc*, GameObject*, short, short, short, unsigned long long, unsigned char);
extern "C" OutStruct0215ccbc* func_ov000_0215e958(void*);
extern "C" int func_ov000_02159f18(void*, unsigned long long, int);

static inline Stats0215b5a0* GetStats(GameObject* c) { return (Stats0215b5a0*)c->currentStats_; }
static inline short CurrHP(GameObject* c) { return c->currentStats_->primaryStats.currHP; }
static inline short CurrMP(GameObject* c) { return c->currentStats_->primaryStats.currMP; }
static inline bool IsParty(short id) { return id >= 0 && id <= 3; }

// USA: func_ov000_0215b5a0
extern "C" ARM void func_ov000_0215b5a0(Battle0215b5a0* self, List021600f8* list) {
    short ids[8] = {-1};
    static const int sSleepChance[4] = {100, 50, 25, 25};
    short n = 0;
    for (int i = 0; i < list->count; i++) {
        Target0215b5a0* node = GetNodeAtIndex021600f8(list, i);
        if (!node) continue;
        short id = node->ids[(signed char)(node->count - 1)];
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (id == ids[j]) { found = true; break; }
        }
        if (!found) ids[n++] = id;
    }
    for (int k = 0; k < n; k++) {
        Work0215b5a0* work; Entry0215b5a0* entry; Target0215b5a0* target; OutStruct0215ccbc* out;
        GameState* gs = GameState::GetInstance();
        short id = ids[k];
        GameObject* unit = gs->GetCombatantByIndex(id);
        if (!unit) continue;
        if (!GetStats(unit)->pending) continue;
        GetStats(unit)->pending = 0;
        if (IsFlag10088Set_02010088((S_10088*)unit)) continue;
        if (IsFlag0x18Bit0x2000Set_ov000_02153c0c(unit)) continue;
        if (CheckFlag0x14Bit0x10Set_020882f8((unsigned char*)unit->currentStats_)) continue;
        if (IsFlag0x14Bit0x8Set_ov000_02156038(unit)) continue;
        if (IsFlag0x14Bit0x80000Set_ov000_02156050(unit)) continue;
        if (GetStats(unit)->flags & 0x1000000) continue;
        if (!CheckField0x14FiveFlagsClear020881c4((unsigned char*)unit->currentStats_)) continue;
        int level = GetStats(unit)->level;
        if (NextRandomMax(&self->rng, 100) >= sSleepChance[level]) continue;

        work = GetWorkArrayEntry0215e9d8(self);
        if (!work) continue;
        InitStruct02160030(work);
        entry = GetTableEntry0x8e00Bound0x48_ov000_0215e918(self);
        if (!entry) continue;
        memset(entry, 0, 0x30); entry->sentinel = -1; entry->tail = 0;
        target = GetTableEntry0x8e01Bound0x88_ov000_0215e938(self);
        if (!target) continue;
        ResetStruct02157cdc(target);
        out = func_ov000_0215e958(self);
        if (!out) continue;
        memset(out, 0, 0x20); out->tail = 0;
        work->kind = 0x3a0;
        unsigned long long bits = 0;
        bits |= 1ULL << 36;
        if (level + 1 >= 4) {
            ResetAndSetFlag0x1000000_02088150(unit->currentStats_);
            bits |= 1ULL << 7;
        } else {
            SetFlag0x800000AndByte0x24_02088220(unit->currentStats_, level + 1);
        }
        int msg = 0;
        switch (level + 1) {
        case 1: msg = 0x31; break;
        case 2: msg = 0x32; break;
        case 3: msg = 0x33; break;
        case 4: msg = 0x34; break;
        }
        entry->id = ids[k];
        entry->hp = unit->currentStats_->primaryStats.currHP;
        entry->mp = unit->currentStats_->primaryStats.currMP;
        {
            short mp = CurrMP(unit);
            short hp = CurrHP(unit);
            PopulateEntry_0215ccbc((int)self, out, unit, level + 1, hp, mp, bits, 0);
        }
        AddEntryAndIncrementCount0215a88c(self, out, msg);
        target->ids[0] = ids[k];
        target->count = 1;
        AppendToChainAndIncCount0215ffc4(target, out, 0);
        AppendNode02160068((Obj02160068*)work, (Node02160068*)entry);
        AppendNode021600cc((Obj021600cc*)work, (Node021600cc*)target);
        work->flags |= 4;
        self->workCount++; self->tableCount++; self->targetCount++; self->resultCount++;

        if (!func_ov000_02159f18(self, bits, 7)) continue;
        work = GetWorkArrayEntry0215e9d8(self);
        if (!work) continue;
        InitStruct02160030(work);
        entry = GetTableEntry0x8e00Bound0x48_ov000_0215e918(self);
        if (!entry) continue;
        memset(entry, 0, 0x30); entry->sentinel = -1; entry->tail = 0;
        target = GetTableEntry0x8e01Bound0x88_ov000_0215e938(self);
        if (!target) continue;
        ResetStruct02157cdc(target);
        out = func_ov000_0215e958(self);
        if (!out) continue;
        memset(out, 0, 0x20); out->tail = 0;
        int party = IsParty(id);
        work->kind = party ? 0x39c : 0x39d;
        entry->id = ids[k];
        entry->hp = unit->currentStats_->primaryStats.currHP;
        entry->mp = unit->currentStats_->primaryStats.currMP;
        work->flags |= 4;
        {
            short mp = CurrMP(unit);
            short hp = CurrHP(unit);
            PopulateEntry_0215ccbc((int)self, out, unit, 0, hp, mp, 0, 0);
        }
        AddEntryAndIncrementCount0215a88c(self, out, 0x35);
        target->ids[0] = ids[k];
        target->count = 1;
        AppendToChainAndIncCount0215ffc4(target, out, 0);
        self->resultCount++;
        AppendNode02160068((Obj02160068*)work, (Node02160068*)entry);
        AppendNode021600cc((Obj021600cc*)work, (Node021600cc*)target);
        self->workCount++; self->tableCount++; self->targetCount++; self->resultCount++;
    }
}
