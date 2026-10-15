#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Main/BattleList.h"

struct Stats_021fdf04 {
    PrimaryCombatStats primaryStats;
    unsigned int flags14;
    unsigned char pad18[0x21 - 0x18];
    unsigned char rank21;
    unsigned char pad22[0x58 - 0x22];
    signed int attackBuff : 3;
    signed int defenseBuff : 3;
    signed int agilityBuff : 3;
    signed int charmBuff : 3;
    signed int magicalMightBuff : 3;
    signed int magicalMendingBuff : 3;
    signed int decayA : 3;
    signed int decayB : 3;
};
struct Info_021fdf04 {
    unsigned char padding[0xa];
    unsigned short unused : 11;
    unsigned short flag : 1;
};
struct Unit_021fdf04 {
    unsigned char padding_0x0[4];
    short field_0x4;
    unsigned char padding_0x6[0x138 - 6];
    Stats_021fdf04* stats;
    unsigned char padding_0x13c[0x144 - 0x13c];
    Info_021fdf04* info;
    unsigned char padding_0x148[0x150 - 0x148];
    unsigned char* field150;
    unsigned char padding_0x154[0x17c - 0x154];
    unsigned char group;
    unsigned char GetGroup() const { return group; }
};
struct Action_021fdf04 {
    unsigned int field_0x0;
    unsigned int unused_0x4;
    unsigned int unused_0x8 : 8;
    unsigned int mode : 2;
    unsigned int unused_0xa : 22;
    unsigned int field_0xc;
    unsigned int flags;
    unsigned int unused_0x14 : 28;
    unsigned int targetKind : 4;
    unsigned int unused_0x18 : 5;
    unsigned int sub18 : 7;
    unsigned int unused_0x18b : 20;
    unsigned int unused_0x1c : 14;
    unsigned int range : 5;
    unsigned int unused_0x1c2 : 13;
    unsigned int field_0x20[4];
    short value30;
};
struct EntryFlags9_021fdf04 {
    unsigned char weight : 6;
    unsigned char flag : 1;
    unsigned char sel : 1;
};
struct Entry_021fdf04 {
    float value;
    unsigned char id, flag, index, percent, kind;
    EntryFlags9_021fdf04 flags9;
    unsigned char padding[2];
};
struct AddEntryList_021f6a1c {
    Entry_021fdf04 entries[16];
    int count;
    float threshold;
    AddEntryList_021f6a1c() { memset(this, 0, sizeof(*this)); }
};
struct Context_021fdf04 {
    unsigned char padding_0x0[8];
    Unit_021fdf04* actor;
    unsigned char padding_0xc[0x7c - 0xc];
    Unit_021fdf04* units[8];
    int count;
    unsigned char padding_0xa0[0x64c - 0xa0];
    Action_021fdf04* action;
};
struct Bits2f4_021fdf04 { unsigned int bit0 : 1; unsigned int bit1 : 1; };
struct Row_021fdf04 { unsigned char weight; unsigned char carry; };
extern const Row_021fdf04 data_ov024_021fefea[];

int GetFieldAt0x150_02053c6c(unsigned char*);
void* GetData02108e10_020797dc();
extern "C" void func_ov024_021f8bd8(Context_021fdf04*, float*, Unit_021fdf04*, Action_021fdf04*);
extern "C" void __clear(void*, int);
struct S_flag10000;
int IsFlagBit65536Set_021fb460(S_flag10000*);
struct S_flag131072;
int IsFlagBit131072Set_021fb478(S_flag131072*);
float ComputeQuarterDecayFactor020748d0(int v);
float ComputeQuarterDecayFactor_020748a8(int v);
float LookupTableC0_02074938(int v);
int IsCombatantFlag2Mask32_021e67b0(GameObject*);
extern "C" float func_ov024_021f875c(Context_021fdf04*, Unit_021fdf04*, Action_021fdf04*, int);
int CheckFlag0x14Bit0x10Set_020882f8(unsigned char*);
struct FlagObj_021da9b0;
int IsFlagBit8Set_021da9b0(FlagObj_021da9b0*);
struct FlagObj_021dd010;
int IsFlagBit8Set_021dd010(FlagObj_021dd010*);
struct FlagObj_021de25c;
int IsFlagBit5Set_021de25c(FlagObj_021de25c*);
struct FlagObj_021da9c8;
int IsFlagBit19Set_021da9c8(FlagObj_021da9c8*);
struct Struct_021fa76c;
int CheckAllFlagsClear_021fa76c(Struct_021fa76c*);
void AddEntryIfUnderLimit16_021f6a1c(AddEntryList_021f6a1c*, void*);
extern "C" void func_ov024_021f9874(Context_021fdf04*, AddEntryList_021f6a1c*, int, int);

// USA: func_ov024_021fdf04
extern "C" ARM void func_ov024_021fdf04(Context_021fdf04* context, int statusType) {
    Unit_021fdf04* actor = context->actor;
    GetFieldAt0x150_02053c6c((unsigned char*)actor);
    GetData02108e10_020797dc();

    Action_021fdf04* action = context->action;
    if (action->mode == 2) return;

    float base = 1.0f;
    func_ov024_021f8bd8(context, &base, actor, action);

    int total = context->count;
    float rates[8];
    Unit_021fdf04** units = context->units;
    __clear(rates, sizeof(rates));

    for (int i = 0; i < total; i++) {
        Unit_021fdf04* unit = units[i];
        float rate = 1.0f;
        float scale = base;

        if (action->flags & 1) {
            if (IsFlagBit65536Set_021fb460((S_flag10000*)unit) && action->sub18 != 2) {
                rate = rate * ComputeQuarterDecayFactor020748d0((signed char)unit->stats->decayA);
            }
        }
        if (action->flags & 4) {
            if (IsFlagBit131072Set_021fb478((S_flag131072*)unit)) {
                rate = rate * ComputeQuarterDecayFactor_020748a8((signed char)unit->stats->decayB);
            }
        }
        if (action->flags & 0x10) {
            if (unit->stats->rank21 <= 3) {
                rate = rate * LookupTableC0_02074938((signed char)unit->stats->rank21);
            } else if (IsCombatantFlag2Mask32_021e67b0((GameObject*)unit)) {
                rate = rate * LookupTableC0_02074938(1);
            }
        }
        rate = rate * func_ov024_021f875c(context, unit, action, 1);
        rates[i] = scale * rate;
    }

    int kind = action->targetKind;
    if (kind == 5) {
        unsigned char* p = actor->field150 + 0x2f4;
        if (p) {
            Bits2f4_021fdf04* bits = (Bits2f4_021fdf04*)p;
            if (bits->bit1) kind = 3;
            else if (bits->bit0) kind = 4;
            else kind = 2;
        }
    }
    if (kind != 2 && kind != 4 && kind != 3) return;

    unsigned int row = action->range;
    unsigned char weight;
    unsigned char carry;
    if (row <= 11) {
        carry = data_ov024_021fefea[row].carry;
        weight = data_ov024_021fefea[row].weight;
    } else {
        return;
    }

    AddEntryList_021f6a1c list;
    memset(&list, 0, sizeof(list));
    Entry_021fdf04 entry;

    int count = 0;
    int flag = 0;

    for (long i = 0; i < context->count; i++) {
        int eligible = 1;
        count++;
        Unit_021fdf04* unit = units[i];

        if (action->flags & 0x400) {
            if (unit->stats->flags14 & 0x200) flag = 1;
        }
        if (rates[i] < 30.0f) eligible = 0;

        if (eligible) {
            int code = 5;
            int ok = 0;
            int check = 0;
            float threshold = 33.3f;

            if (statusType == 4) {
                if (CheckFlag0x14Bit0x10Set_020882f8((unsigned char*)unit->stats) == 0) ok = 1;
                check = 1;
                threshold = 35.0f;
            } else if (statusType == 5) {
                if ((unit->stats->flags14 & 0x40) == 0) ok = 1;
                check = 1;
                threshold = 35.0f;
            } else if (statusType == 3) {
                if (IsFlagBit8Set_021da9b0((FlagObj_021da9b0*)unit) == 0) ok = 1;
                check = 1;
            } else if (statusType == 6) {
                if (IsFlagBit8Set_021dd010((FlagObj_021dd010*)unit) == 0) ok = 1;
                check = 1;
            } else if (statusType == 7) {
                if (IsFlagBit5Set_021de25c((FlagObj_021de25c*)unit) == 0) ok = 1;
                check = 1;
                threshold = 35.0f;
            } else if (statusType == 8) {
                if (IsFlagBit19Set_021da9c8((FlagObj_021da9c8*)unit) == 0) ok = 1;
                check = 1;
                if (action->value30 == 2) {
                    Info_021fdf04* info = unit->info;
                    if (info != 0) {
                        if (info->flag) ok = 0;
                    }
                }
                threshold = 50.0f;
            } else if (statusType == 9) {
                if (rates[i] >= 30.0f) ok = 1;
                code = 2;
            } else if (statusType == 0x11) {
                Stats_021fdf04* s = unit->stats;
                if (s->attackBuff >= -1) ok = 1;
                if (s->primaryStats.attack <= 40) ok = 0;
                code = 5;
            } else if (statusType == 0x12) {
                Stats_021fdf04* s = unit->stats;
                if (s->defenseBuff >= -1) ok = 1;
                if (s->primaryStats.defense <= 20) ok = 0;
                code = 5;
            } else if (statusType == 0x13) {
                Stats_021fdf04* s = unit->stats;
                if (s->agilityBuff >= -1) ok = 1;
                if (s->primaryStats.agility <= 40) ok = 0;
                code = 5;
            } else if (statusType == 0x14) {
                Stats_021fdf04* s = unit->stats;
                if (s->magicalMightBuff >= -1) ok = 1;
                if ((unsigned short)s->primaryStats.magicalMight <= 100) ok = 0;
                code = 5;
            } else if (statusType == 0x15) {
                Stats_021fdf04* s = unit->stats;
                if (s->magicalMendingBuff >= -1) ok = 1;
                if ((unsigned short)s->primaryStats.magicalMending <= 100) ok = 0;
                code = 5;
            } else if (statusType == 0x16) {
                if (unit->stats->decayA >= -1) ok = 1;
                code = 5;
            }

            if (!check || CheckAllFlagsClear_021fa76c((Struct_021fa76c*)unit)) {
                if (rates[i] < threshold) ok = 0;
                if (ok) {
                    entry.value = action->value30;
                    entry.index = i;
                    entry.id = statusType;
                    entry.flag = 1;
                    entry.percent = rates[i];
                    entry.kind = code;
                    entry.flags9.weight = weight;
                    entry.flags9.flag = carry;
                    AddEntryIfUnderLimit16_021f6a1c(&list, &entry);
                }
            } else {
                continue;
            }
        }

        int last = 0;
        if (i == context->count - 1) last = 1;
        else if (kind == 2) last = 1;
        else if (kind == 4) {
            if (unit->GetGroup() != units[(int)i + 1]->GetGroup()) last = 1;
        }
        if (!last) continue;
        if (count >= 2) {
            if (carry) flag = 1;
        }
        if (count <= 1) carry = 0;
        if (!flag) {
            int p3 = (unsigned char)unit->field_0x4;
            int p2 = unit->GetGroup();
            if (kind == 4) p3 = 0xff;
            else if (kind == 3) { p3 = 0xff; p2 = p3; }
            func_ov024_021f9874(context, &list, p2, p3);
        }
        memset(&list, 0, sizeof(list));
        count = 0;
        flag = 0;
    }
}
