#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"

struct OutStruct0215ccbc {
    unsigned long long bits;
};

struct SkillData {
    char pad0[0x20];
    unsigned int category : 10;
    unsigned int mid : 10;
    unsigned int extra : 10;
    char pad24[0x28 - 0x24];
    unsigned int bonus : 10;
};

struct ActionEntry {
    char pad0[0x1c];
    short f1c;
    short pad1e;
    unsigned short id;
    unsigned short hp;
    unsigned short mp;
    char pad26[0x30 - 0x26];
    int f30;
};

struct TargetNode {
    char pad0[0xe];
    short id;
    char pad10[0x17 - 0x10];
    unsigned char active;
};

struct ActionNode {
    unsigned short action;
    char pad2[0x18 - 2];
    unsigned short category;
};

struct Battle {
    char pad0[0x8e00];
    unsigned char tableCount;
    unsigned char targetCount;
    unsigned char resultCount;
    char pad8e03[0x8e24 - 0x8e03];
    int workCount;
};

ActionNode* GetWorkArrayEntry0215e9d8(void* self);
ActionEntry* GetTableEntry0x8e00Bound0x48_ov000_0215e918(void* self);
TargetNode* GetTableEntry0x8e01Bound0x88_ov000_0215e938(void* self);
void InitStruct02160030(void* obj);
void ResetStruct02157cdc(void* obj);
extern "C" void* memset(void* dst, int c, unsigned int n);

SkillData* SearchBothTables02079e2c(char* data, int id);
struct Node02160068;
struct Obj02160068;
void AppendNode02160068(Obj02160068*, Node02160068*);
struct Node021600cc;
struct Obj021600cc;
void AppendNode021600cc(Obj021600cc*, Node021600cc*);
extern "C" OutStruct0215ccbc* func_ov000_0215e958(void* self);
extern "C" int func_ov000_02159f18(void* world, unsigned long long bits, int bit);
void PopulateEntry_0215ccbc(int, OutStruct0215ccbc*, GameObject*, short, short, short, unsigned long long, unsigned char);
void AppendToChainAndIncCount0215ffc4(void* node, void* entry, int v);
void AddEntryAndIncrementCount0215a88c(void* self, void* entry, int value);

static inline GameObject* GetCombatant(int id) {
    GameState* gs = GameState::GetInstance();
    return gs->GetCombatantByIndex(id);
}

// USA: func_ov000_0215c758
extern "C" ARM void func_ov000_0215c758(Battle* self, short* targets, int count, int kind, short* results,
                                        short* applied, unsigned long long* bits) {
    ActionNode* work = GetWorkArrayEntry0215e9d8(self);
    ActionEntry* entry = GetTableEntry0x8e00Bound0x48_ov000_0215e918(self);
    if (work == 0 || entry == 0) {
        return;
    }
    InitStruct02160030(work);
    memset(entry, 0, 0x30);
    entry->f1c = -1;
    entry->f30 = 0;
    work->action = 0x3a6;
    if (kind == 0) {
        if (count == 1) {
            work->action = 0x3a2;
        } else {
            work->action = 0x3a3;
        }
    } else if (kind == 1) {
        if (count == 1) {
            work->action = 0x3a4;
        } else {
            work->action = 0x3a5;
        }
    }
    SkillData* sk = SearchBothTables02079e2c((char*)GetData02108e10_020797dc(), (short)work->action);
    if (sk != 0) {
        work->category = sk->category;
    }
    GameObject* c = GetCombatant(targets[0]);
    entry->id = targets[0];
    if (c != 0) {
        entry->hp = c->currentStats_->primaryStats.currHP;
        entry->mp = c->currentStats_->primaryStats.currMP;
    }
    AppendNode02160068((Obj02160068*)work, (Node02160068*)entry);

    for (int i = 0; i < count; i++) {
        TargetNode* tn = GetTableEntry0x8e01Bound0x88_ov000_0215e938(self);
        if (tn == 0) {
            continue;
        }
        ResetStruct02157cdc(tn);
        GameObject* target = GetCombatant(targets[i]);
        short value = applied[i];
        unsigned char mode = kind;
        short hp = target->currentStats_->primaryStats.currHP;
        short mp = target->currentStats_->primaryStats.currMP;
        if (mode == 0 || mode == 1) {
            value *= -1;
        }
        if (kind == 0 || kind == 2) {
            hp = results[i];
        } else {
            mp = results[i];
        }
        OutStruct0215ccbc* out = func_ov000_0215e958(self);
        if (out == 0) {
            continue;
        }
        PopulateEntry_0215ccbc((int)self, out, target, value, hp, mp, bits[i], 0);
        tn->id = targets[i];
        tn->active = 1;
        AppendToChainAndIncCount0215ffc4(tn, out, 0);
        self->resultCount++;
        if (kind == 2) {
            work->category = 0;
            AddEntryAndIncrementCount0215a88c(self, out, (unsigned short)sk->category);
            AddEntryAndIncrementCount0215a88c(self, out, (unsigned short)sk->extra);
            if (func_ov000_02159f18(self, out->bits, 2)) {
                AddEntryAndIncrementCount0215a88c(self, out, (unsigned short)sk->bonus);
            }
        }
        AppendNode021600cc((Obj021600cc*)work, (Node021600cc*)tn);
        self->targetCount++;
        self->resultCount++;
    }
    self->workCount++;
    self->tableCount++;
}
