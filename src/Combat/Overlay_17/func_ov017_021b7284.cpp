#include <globaldefs.h>
#include "Combat/BufferedScriptResult.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct BattleContext021b7284;

struct BattleInfo021b7284 {
    unsigned char kind;
    unsigned char field_1;
    unsigned short field_2;
};

struct BattleScene021b7284 {
    unsigned char pad0[0x8];
    SafeAllocator allocator;
    unsigned char pad_fill[0x1c - 0x8 - sizeof(SafeAllocator)];
    BattleInfo021b7284 info;
    unsigned char hasParty;
    unsigned char field_21;
    unsigned short field_22;
    unsigned short id;
    unsigned char pad26[2];
    int encounter;
    BufferedScriptResult decoded;
    unsigned char pad40[2];
    unsigned char useAlt;
    unsigned char pad43;
    short group;
    unsigned char pad46[2];
    int field_48;
    int field_4c;
    unsigned char pad50;
    unsigned char field_51;
    unsigned char pad52[0x6ac - 0x52];
    void* field_6ac;
    BattleContext021b7284* context;
    unsigned short state;
    unsigned short flags;
};

union Out021b8abc {
    struct {
        unsigned short vals[3];
        unsigned short key;
        unsigned char bytes[3];
    };
    unsigned short raw[6];
};

struct Halfwords6_021b8b34 {
    short vals[3];
    short bytes[3];
};

struct Request021b7284 {
    BattleInfo021b7284* info;
    unsigned short vals[3];
    unsigned short key;
    unsigned char bytes[3];
};

struct Params021605d0 {
    BattleContext021b7284* context;
    BattleInfo021b7284* info;
    SafeAllocator* allocator;
};

struct Holder021b7284 {
#if defined(jpn)
    unsigned char pad0[0x125];
#else
    unsigned char pad0[0x105];
#endif
    unsigned char flags;
};

struct FindRowByIdRow;
struct Container0209bdc8;
struct ColorHolder0204bd7c;
struct SearchList02099a68;
struct MainBlock0205859c;

struct ActiveEntry021b7284 {
    unsigned short value;
};

struct BattleTable021b7284 {
#if defined(jpn)
    unsigned char pad0[0x5c];
    unsigned char active[0x120 - 0x5c];
#else
    unsigned char pad0[0x60];
    unsigned char active[0x124 - 0x60];
#endif
    unsigned char rows[4];
};

struct Combatant021b7284 {
    unsigned char pad0[2];
    short key;
    unsigned char pad4[0x168 - 0x4];
    unsigned short group;
};

struct Obj020397cc {
    unsigned char pad0[0xb2];
    unsigned short fieldB2;
};

struct Obj02053f7c;

struct Party021b7284 {
    unsigned char pad0[0xf78];
    unsigned char ids[4];
    unsigned char count;
};

struct SearchStruct0202c1a4 {
    int active;
    unsigned char pad4[0x100d - 0x4];
    unsigned char depth;
};

struct Entry0207d9bc {
    unsigned char pad0[2];
    unsigned short value;
    signed char a;
    signed char b;
    unsigned char pad6[2];
    signed char flags[4];
};

extern "C" Holder021b7284* func_02012fe4(void);
extern "C" BattleTable021b7284* func_02027cb0(void);
extern "C" Combatant021b7284* func_ov017_021a278c(void* unused, int val);
extern "C" int func_ov017_021b8a34(FindRowByIdRow* table, int id, int key12);
extern "C" int func_ov017_021b8abc(int id, Out021b8abc* out);
extern "C" void func_ov017_021b8b34(Halfwords6_021b8b34* obj);
extern "C" void func_0209b448(FindRowByIdRow* table, int group, Halfwords6_021b8b34* out, BattleTable021b7284* entry);
extern "C" ColorHolder0204bd7c* func_02033fa0(void* obj);
extern "C" unsigned short func_0204bd7c(ColorHolder0204bd7c* obj);
extern "C" SearchList02099a68* func_02011584(void* obj);
extern "C" int func_02099a68(SearchList02099a68* list, unsigned short key);
extern "C" ActiveEntry021b7284* func_0209bdc8(Container0209bdc8* c, int flag, unsigned int mask);
extern "C" void func_0209afd4(FindRowByIdRow* table, short key, short value, short group, Halfwords6_021b8b34* out, BattleTable021b7284* entry);
extern "C" void func_ov000_0215d414(BattleContext021b7284* context, Request021b7284* req);
extern "C" void func_ov000_02160140(void* p);
extern "C" void func_ov017_02195540(unsigned char* obj);
extern "C" void func_ov000_021605d0(unsigned char* obj, Params021605d0* params);
extern "C" MainBlock0205859c* func_02057924(void);
extern "C" void func_0205859c(MainBlock0205859c* p);
extern "C" SearchStruct0202c1a4* func_0202ae18(void);
struct PointerField32c_ffc0;
extern "C" void* func_0200ffc0(PointerField32c_ffc0* obj);
extern "C" void func_020397cc(Obj020397cc* obj, int arg1);
extern "C" void func_02053f7c(Obj02053f7c* obj, unsigned short a, int b);
extern "C" int func_0202b7d8(int* obj);
extern "C" void __clear(void* buf, int n);
extern "C" int func_020100a8(GameState* gs);
extern "C" void func_ov017_021b848c(BattleScene021b7284* self, signed char* flags, signed char idx, int val, unsigned short color, signed char arg5, int arg6, int encounter);
extern "C" Entry0207d9bc* func_0207d78c(void);
extern "C" int func_0207d978(Entry0207d9bc* arr, unsigned short key);
extern "C" int func_0207da30(unsigned char* arr, int id, int offset);
extern "C" signed char func_0202c1a4(SearchStruct0202c1a4* obj);
extern "C" void func_0207d7f4(Entry0207d9bc* arr, unsigned short key, int a, int flag, signed char b, unsigned short color, unsigned char c);
extern "C" Entry0207d9bc* func_0207d9bc(Entry0207d9bc* arr, unsigned short key);
extern "C" void func_ov017_021ca2a0(int a, int b);

struct Src021c5284 {
    unsigned short id;
    unsigned short color;
    unsigned char field_22;
    unsigned char useAlt;
    short group;
    unsigned char field_51;
    unsigned char hasField48;
    unsigned short encounter;
    unsigned char field_21;
};

extern "C" void func_ov017_021c5284(Src021c5284* src);
extern "C" void func_ov017_021cff8c(int id, int a);

// USA: func_ov017_021b7284
// JPN: func_ov017_021b7834
extern "C" ARM void func_ov017_021b7284(BattleScene021b7284* self) {
    int i;
    int sub;
    int group;
    GameState* gs = GameState::GetInstance();
    Holder021b7284* holder = func_02012fe4();
    Request021b7284 req;
    Params021605d0 params;
    Src021c5284 src;
    Out021b8abc result;
    Halfwords6_021b8b34 alt2;
    Halfwords6_021b8b34 alt;
    Out021b8abc out;
    signed char present[4];
    req.info = &self->info;
    int encounter = self->encounter;
    group = self->group;
    unsigned char useAlt = self->useAlt;
    unsigned short id = self->id;
    GameState* state = GameState::GetInstance();
    GameResources* res = GetGameResources();
    memset(&out, 0, sizeof(out));

    if (encounter >= 0) {
        func_02074114(&self->decoded, encounter);
        BufferedScriptResult* decoded = &self->decoded;
        for (i = 0; i < 3; i++) {
            out.vals[i] = decoded->values[i];
            out.bytes[i] = decoded->attributes[i];
        }
    } else {
        sub = -1;
        if (useAlt != 0) {
            BattleTable021b7284* table = func_02027cb0();
            if (table == NULL) {
                goto done;
            }
            Combatant021b7284* comb = func_ov017_021a278c(res, id);
            if (comb != NULL) {
                sub = func_ov017_021b8a34((FindRowByIdRow*)table->rows, group, comb->key);
            }
            if (func_ov017_021b8abc(sub, &out) != 0) {
                goto done;
            }
            func_ov017_021b8b34(&alt);
            func_ov017_021b8b34(&alt);
            func_0209b448((FindRowByIdRow*)table->rows, (short)group, &alt, table);
            for (int i = 0; i < 3; i++) {
                out.vals[i] = alt.vals[i];
                out.bytes[i] = alt.bytes[i];
            }
        } else {
            Combatant021b7284* comb;
            LightingManager* lighting = LightingManager::GetInstance();
            BattleTable021b7284* table = func_02027cb0();
            comb = func_ov017_021a278c(res, id);
            void* obj = state->GetUnknownGameObject();
            if (table == NULL || comb == NULL) {
                goto done;
            }
            int key = comb->key;
            unsigned short color = func_0204bd7c(func_02033fa0(obj));
            int bit = func_02099a68(func_02011584(state), color);
            ActiveEntry021b7284* active = func_0209bdc8((Container0209bdc8*)table->active, lighting->timeOfDayIndex_, bit);
            unsigned short value;
            if (active != NULL) {
                value = active->value;
            } else {
                value = comb->group;
            }
            sub = func_ov017_021b8a34((FindRowByIdRow*)table->rows, comb->group, key);
            if (func_ov017_021b8abc(sub, &out) != 0) {
                goto done;
            }
            func_ov017_021b8b34(&alt2);
            func_ov017_021b8b34(&alt2);
            func_0209afd4((FindRowByIdRow*)table->rows, (short)key, (short)value, (short)comb->group, &alt2, table);
            for (int i = 0; i < 3; i++) {
                out.vals[i] = alt2.vals[i];
                out.bytes[i] = alt2.bytes[i];
                out.key = key;
            }
        }
    }
done:
    result = out;
    req.vals[0] = result.vals[0];
    req.vals[1] = result.vals[1];
    req.vals[2] = result.vals[2];
    req.key = result.key;
    req.bytes[0] = result.bytes[0];
    req.bytes[1] = result.bytes[1];
    req.bytes[2] = result.bytes[2];
    func_ov000_0215d414(self->context, &req);
#if defined(jpn)
    self->field_6ac = self->allocator.Allocate(0x79fc);
#else
    self->field_6ac = self->allocator.Allocate(0x780c);
#endif
    func_ov000_02160140(self->field_6ac);
    func_ov017_02195540((unsigned char*)GetGameResources());
    params.context = self->context;
    params.allocator = &self->allocator;
    params.info = &self->info;
    func_ov000_021605d0((unsigned char*)self->field_6ac, &params);
    holder->flags |= 1;
    func_0205859c(func_02057924());
    SearchStruct0202c1a4* search = func_0202ae18();

    if (self->hasParty != 0) {
        Obj020397cc* leader = (Obj020397cc*)gs->GetUnknownGameObject();
        void* other = func_0200ffc0((PointerField32c_ffc0*)gs);
        Party021b7284* party = (Party021b7284*)func_02010828(gs);
        func_020397cc(leader, 1);
        leader->fieldB2 = 0;
        ColorHolder0204bd7c* colorHolder;
        if (self->useAlt != 0 && other != NULL) {
            colorHolder = func_02033fa0(other);
        } else {
            colorHolder = func_02033fa0(leader);
        }
        for (int i = 0; i < party->count; i++) {
            func_02053f7c((Obj02053f7c*)gs->GetPartyMemberByIndex(party->ids[i]), self->id, 1);
        }
        if (func_0202b7d8(&search->active) == 0) {
            __clear(present, sizeof(present));
            for (int i = 0; i < party->count; i++) {
                present[party->ids[i]] = 1;
            }
            int idx = func_020100a8(gs);
            func_ov017_021b848c(self, present, idx, 0, func_0204bd7c(colorHolder), self->field_51, 1, self->encounter);
        } else {
            Entry0207d9bc* entries = func_0207d78c();
            int found = func_0207d978(entries, self->id) != 0 ? 1 : 0;
            if (func_0207da30((unsigned char*)entries, self->id, func_020100a8(gs))) {
                found = 0;
            }
            if (func_0202c1a4(search) == 0) {
                int a = func_020100a8(gs);
                int b = func_020100a8(gs);
                func_0207d7f4(entries, self->id, a, 1, b, func_0204bd7c(colorHolder), self->field_51);
                if (func_0207d978(entries, self->id)) {
                    Entry0207d9bc* entry = func_0207d9bc(entries, self->id);
                    if (entry != NULL) {
                        func_ov017_021b848c(self, entry->flags, entry->a, found, entry->value, entry->b, found == 0, self->encounter);
                    }
                }
            }
            int depth = search->depth;
            if (depth > 1) {
                if (func_0202c1a4(search) == 0 && found != 0) {
                    func_ov017_021ca2a0(0, self->id);
                    self->field_4c = 1;
                    self->state = 2;
                } else {
                    src.field_22 = self->field_22;
                    src.id = self->id;
                    src.color = func_0204bd7c(colorHolder);
                    src.useAlt = self->useAlt;
                    src.group = self->group;
                    src.field_51 = self->field_51;
                    src.hasField48 = self->field_48 != 0;
                    src.encounter = self->encounter;
                    src.field_21 = self->field_21;
                    func_ov017_021c5284(&src);
                    if (self->field_48 != 0) {
                        self->field_4c = 1;
                        self->state = 2;
                    }
                }
            }
        }
    }

    if (func_0202b7d8(&search->active)) {
        Party021b7284* party = (Party021b7284*)func_02010828(gs);
        for (int i = 0; i < party->count; i++) {
            func_ov017_021cff8c(party->ids[i], 0);
        }
    }
    self->flags |= 0x100;
}
