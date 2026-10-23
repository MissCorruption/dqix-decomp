#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct GameState {
    static GameState* GetInstance();
};
struct GameObject;
struct ArrayContainsByteStruct;
struct TableA68 { char storage[4]; };
struct Obj021d9988;
struct BattleResultEntry { unsigned char id, fileId, type, flag; unsigned int experience; };
struct BattleEntry { char pad0[0x11b]; unsigned char state; char pad11c[2]; unsigned char count; char pad11f; void* entries; };
struct LevelStats {
    unsigned int exp;
    unsigned short level : 7;
    unsigned short pct : 9;
    char pad6[0x14 - 6];
};
struct LoadedEntry { LevelStats base, gained, extra, bonus; int tail; };
struct CombatStats {
    char pad0[0x138]; unsigned int exps[0xd];
    char pad16c[0x16c - 0x16c]; unsigned short levels[0x1fc];
    unsigned short skillPoints;
#if defined(jpn)
    char pad566[0x8b8 - 0x566]; int index;
#else
    char pad566[0x950 - 0x566]; int index;
#endif
};
#if defined(jpn)
struct BattleWork {
    char pad0[0x30]; SafeAllocator allocator;
    char pad44[0xe28 - 0x30 - sizeof(SafeAllocator)]; int state;
    char pade2c[0x371c - 0xe2c]; char entry[0x5778 - 0x371c];
    BattleEntry* result;
    char pad577c[0x5960 - 0x577c]; LoadedEntry loaded[4];
    char pad5ab0[0x5af4 - 0x5ab0]; TableA68 strings;
};
#else
struct BattleWork {
    char pad0[0x30]; SafeAllocator allocator;
    char pad44[0xeac - 0x30 - sizeof(SafeAllocator)]; int state;
    char padeb0[0x3760 - 0xeb0]; char entry[0x5588 - 0x3760];
    BattleEntry* result;
    char pad558c[0x5770 - 0x558c]; LoadedEntry loaded[4];
    char pad58c0[0x5904 - 0x58c0]; TableA68 strings;
};
#endif
struct ResultState {
    int state, task; char pad8[0x18 - 8]; int id;
    unsigned char learned[4][0x14];
    unsigned char learnedCount[4];
    char pad70[0xe5 - 0x70]; signed char outcome;
    char pade6[0xf0 - 0xe6]; char skillTable[0x118 - 0xf0];
#if defined(jpn)
    char entries[0x2498 - 0x118]; unsigned char count;
#else
    char entries[0x2788 - 0x118]; unsigned char count;
#endif
    char copyData[4]; unsigned char copyLength;
};
#if defined(jpn)
struct MessageController {
    char pad0[0x10]; void* actor; char pad14[0x868 - 0x14]; int field998;
    char pad86c[0x17e2 - 0x86c]; unsigned char field19b2;
    char pad17e3[0x17fb - 0x17e3]; unsigned char field19ca;
};
#else
struct MessageController {
    char pad0[0x10]; void* actor; char pad14[0x998 - 0x14]; int field998;
    char pad99c[0x19b2 - 0x99c]; unsigned char field19b2;
    char pad19b3[0x19ca - 0x19b3]; unsigned char field19ca;
};
#endif

extern "C" ResultState* _ZZ17GetGlobal021ffefcvE1s;
extern char data_02109bf4[];

extern "C" MessageController* func_020421a0();
extern "C" void func_02046380(MessageController*);
extern "C" char* func_02072a68(TableA68*, int);
extern "C" void* func_02010828(GameState*);
extern "C" int func_02086ef0(ArrayContainsByteStruct*, int);
struct Reset_021eefac;
extern "C" void func_ov023_021eefac(Reset_021eefac*);
extern "C" BattleResultEntry* func_ov023_021f0360(void*, int);
extern "C" int func_02082490(LoadedEntry*, void*, unsigned int, unsigned char, unsigned int);
extern "C" GameObject* func_0200ff1c(GameState*, int);
extern "C" CombatStats* func_02053c6c(unsigned char*);
extern "C" void func_02083cbc(CombatStats*, LevelStats*, LevelStats*);
extern "C" void func_02083e28(CombatStats*, int);
extern "C" unsigned char func_0209aa54(void*, GameObject*, unsigned char*, int);
struct Obj021eea98;
extern "C" int func_ov023_021eea98(Obj021eea98*);
extern "C" void func_ov023_021d8b6c(void*);
extern "C" void func_ov023_021d8af8(BattleEntry*);
extern "C" void func_ov023_021d8a40(BattleEntry*);
extern "C" void func_ov023_021d8cb4(void*, void*);
extern "C" void func_ov023_021d9988(Obj021d9988*, void*, unsigned int);
extern "C" void func_ov023_021d8e4c(BattleEntry*, int, LevelStats*, LevelStats*);
struct StoreStruct;
extern "C" void func_020465c0(StoreStruct*, int, int);
extern "C" void func_020e4bf4(void*, int);
#if defined(jpn)
extern "C" void func_0204500c(MessageController*, char*, int);
#else
extern "C" void func_0204500c(MessageController*, char*, int, int);
#endif
extern "C" void func_0209c6d8(void*, int);
extern "C" void func_ov017_021ce704(int);
extern "C" void func_ov017_021cc730(int, int, int, int);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" int func_ov023_021f4fc8();
extern "C" int func_ov023_021f5228(int);
extern "C" void* func_0205ec34();
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" int func_0209ca2c(void*);

static inline int GetLevel(CombatStats* stats) { return stats->levels[stats->index]; }

// USA: func_ov023_021f0a5c
extern "C" ARM int func_ov023_021f0a5c(BattleWork* work) {
    char text[0x100];
    char text2[0x100];
    char filename[40];
    char actorName[12];
    char actorName2[12];
    GameState* game = GameState::GetInstance();
    ResultState* state = _ZZ17GetGlobal021ffefcvE1s;
    MessageController* messages = func_020421a0();
#if !defined(jpn)
    func_02046380(messages);
#endif
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    char* suffix = func_02072a68(&work->strings, 0x22);
    int inParty = func_02086ef0((ArrayContainsByteStruct*)func_02010828(game), state->id);
    if (state->state == 0) {
        state->id++;
        if (state->id >= 4) {
            func_ov023_021eefac((Reset_021eefac*)state);
            return 0xb;
        }
        BattleResultEntry* entry = func_ov023_021f0360(_ZZ17GetGlobal021ffefcvE1s, state->id);
        if (!entry) return work->state;
        sprintf(filename, func_02072a68(&work->strings, 0), entry->fileId);
        state->task = loader->QueueLoadFile(filename, 0);
        state->state++;
    } else if (state->state == 1) {
        if (!loader->GetTaskStatus(state->task)) return work->state;
        unsigned int length;
        void* file;
        int id = state->id;
        loader->GetLoadedFileByID(state->task, &file, &length);
        loader->RemoveTask(state->task);
        int learned = 0;
        BattleResultEntry* entry = func_ov023_021f0360(_ZZ17GetGlobal021ffefcvE1s, id);
        if (file && func_02082490(&work->loaded[id], file, length, entry->type, entry->experience)) {
            if (!entry->flag) learned = 1;
        }
        LevelStats* extra = &work->loaded[id].extra;
        int type = entry->type;
        int level = type + extra->level;
        int retry = 0;
        if (learned) {
            if (inParty) {
                GameObject* actor = func_0200ff1c(game, id);
                if (actor) {
                    CombatStats* stats = func_02053c6c((unsigned char*)actor);
                    stats->levels[stats->index] = level;
                    unsigned short room = 0xa28 - stats->skillPoints;
                    if (room < extra->pct) extra->pct = room;
                    stats->skillPoints += extra->pct;
                    func_02083cbc(stats, &work->loaded[id].gained, &work->loaded[id].bonus);
                    func_02083e28(stats, 0);
                    state->learnedCount[id] = func_0209aa54(state->skillTable, actor, state->learned[id], type);
                }
            }
        } else {
            state->state = 0;
            retry = 1;
        }
        if (inParty) {
            GameObject* actor = func_0200ff1c(game, id);
            if (actor) {
                CombatStats* stats = func_02053c6c((unsigned char*)actor);
                if (GetLevel(stats) >= 99) {
                    unsigned int exp = work->loaded[id].base.exp;
                    if (learned) exp = work->loaded[id].gained.exp;
                    if (exp != 0 && exp <= func_ov023_021eea98((Obj021eea98*)actor)) {
                        if (stats) stats->exps[stats->index] = exp;
                        entry->experience = exp;
                    }
                }
            }
        }
        if (retry) return work->state;
        state->state++;
    } else if (state->state == 2) {
        if (work->result) {
            func_ov023_021d8b6c(work->result);
            func_ov023_021d8af8(work->result);
            work->result = 0;
            return work->state;
        }
        work->allocator.Reset();
        if (!inParty) {
            state->state = 4;
        } else {
            work->result = (BattleEntry*)work->allocator.Allocate(0x12c);
            func_ov023_021d8a40(work->result);
            func_ov023_021d8cb4(work->result, work->entry);
            ResultState* global = _ZZ17GetGlobal021ffefcvE1s;
            unsigned char countEntries = global->count;
            BattleEntry* result = work->result;
            result->entries = global->entries;
            result->count = countEntries;
            func_ov023_021d9988((Obj021d9988*)work->result, _ZZ17GetGlobal021ffefcvE1s->copyData, _ZZ17GetGlobal021ffefcvE1s->copyLength);
            state->state++;
        }
    } else if (state->state == 3) {
        if (work->result->state == 0xff) state->state++;
    } else if (state->state == 4) {
        int id = state->id;
        LevelStats* gained;
        LevelStats* extra;
        LevelStats* base;
        base = &work->loaded[id].base;
        extra = &work->loaded[id].extra;
        if (work->result) func_ov023_021d8e4c(work->result, id, base, extra);
#if defined(jpn)
        BattleResultEntry* found = func_ov023_021f0360(_ZZ17GetGlobal021ffefcvE1s, id);
        if (found) {
            gained = &work->loaded[(unsigned int)id].gained;
            char* name = (char*)(found + 1);
            if (gained->level - base->level > 1) {
                sprintf(text, func_02072a68(&work->strings, 0x16), name, base->level, gained->level, name);
            } else {
                sprintf(text, func_02072a68(&work->strings, 0xa), name, gained->level, name);
            }
            strcat(text, suffix);
            func_0204500c(messages, text, 1);
            messages->field19b2 = 0;
            messages->field998 = 1;
        }
#else
        if (func_ov023_021f0360(_ZZ17GetGlobal021ffefcvE1s, id)) {
            gained = &work->loaded[(unsigned int)id].gained;
            if (gained->level - base->level > 1) {
                sprintf(text, func_02072a68(&work->strings, 0x16));
                func_020465c0((StoreStruct*)messages, 0, base->level);
                func_020465c0((StoreStruct*)messages, 1, gained->level);
            } else {
                sprintf(text, func_02072a68(&work->strings, 0xa));
                func_020465c0((StoreStruct*)messages, 0, gained->level);
            }
            strcat(text, suffix);
            func_020e4bf4(actorName, id);
            messages->actor = actorName;
            func_0204500c(messages, text, 1, 0xe3);
            messages->field19b2 = 0;
            messages->field998 = 1;
        }
#endif
        if (inParty) {
            func_0209c6d8(data_02109bf4, 0x35);
            func_ov017_021ce704(id);
            func_ov017_021cc730(id, 0, 0, 1);
            func_ov017_021c9e00(id, 0, 0, 0);
            state->state++;
        } else {
            state->state += 2;
        }
    } else if (state->state == 5) {
        if (func_ov023_021f4fc8()) {
#if defined(jpn)
            BattleResultEntry* found = func_ov023_021f0360(_ZZ17GetGlobal021ffefcvE1s, state->id);
            if (found) {
                sprintf(text2, func_02072a68(&work->strings, 0x26), (char*)(found + 1));
                strcat(text2, suffix);
                func_0204500c(messages, text2, 1);
                messages->field19b2 = 0;
                messages->field998 = 1;
            }
#else
            int id = state->id;
            if (func_ov023_021f0360(_ZZ17GetGlobal021ffefcvE1s, id)) {
                sprintf(text2, func_02072a68(&work->strings, 0x26));
                strcat(text2, suffix);
                func_020e4bf4(actorName2, id);
                messages->actor = actorName2;
                func_0204500c(messages, text2, 1, 0xe3);
                messages->field19b2 = 0;
                messages->field998 = 1;
            }
#endif
            state->state++;
        }
    } else if (state->state == 6) {
        if (inParty) {
            int id = state->id;
            LevelStats* extra = &work->loaded[id].extra;
            unsigned short points = 0;
            GameObject* actor = func_0200ff1c(game, id);
            if (actor) {
                CombatStats* stats = func_02053c6c((unsigned char*)actor);
                if (stats) points = stats->skillPoints;
            }
            func_02010828(game);
            if (state->learnedCount[id]) {
                state->outcome = 10;
            } else if (extra->pct) {
                state->outcome = 12;
            } else if (points && func_ov023_021f5228(id)) {
                state->outcome = 8;
                void* base = func_0205ec34();
                if (func_0206dfb0((int)base, (unsigned char*)base + 0x8c, 0x119c)) messages->field19ca = 0;
            }
        }
        state->state++;
    } else if (state->state == 7) {
        if (func_0209ca2c(data_02109bf4)) return work->state;
        if (func_ov023_021f4fc8()) {
            signed char outcome = state->outcome;
            func_ov023_021eefac((Reset_021eefac*)state);
            if (outcome >= 0) return outcome;
        }
        return work->state;
    }
    return work->state;
}
