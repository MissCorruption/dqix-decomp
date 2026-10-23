#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct PackedPair_021dc540 {
    unsigned int a : 10;
    unsigned int b : 10;
    unsigned int c : 10;
    unsigned int hi : 2;
};

struct Range_021dc540 {
    char pad[0x20];
    struct PackedPair_021dc540 f20;
    struct PackedPair_021dc540 f24;
};

struct Flag_021dc540 { unsigned char pad : 7; unsigned char flag : 1; };

struct Obj_021dc540 {
    char pad0[0xc];
    void* fc;
    void* f10;
};

struct OutStruct0215ccbc;

extern "C" unsigned short func_ov024_021da644(int idx, int a, int b);
extern "C" struct OutStruct0215ccbc* func_ov000_0215e958(void* world);
extern "C" void func_ov000_0215a88c(void* world, void* entry, int msg);
extern "C" short func_ov000_0215a1d4(void* world, int id, int delta, short* outApplied);
extern "C" void func_ov000_02159eac(void* world, unsigned long long* bits, int bit);
extern "C" int func_ov000_0215a124(void* world, int id, int amount);
extern "C" void func_ov000_0215ccbc(void* world, struct OutStruct0215ccbc* out, GameObject* combatant,
                            short valC, short valA, short valB, unsigned long long words, unsigned char byteE);

static inline int GetCurrentHP(GameObject* c) { SDK_NULL_ASSERT(c); return c->currentStats_->primaryStats.currHP; }

static inline unsigned short GetMaxMP(GameObject* c) { SDK_NULL_ASSERT(c); return c->currentStats_->primaryStats.maxMP; }

// USA: func_ov024_021dc540
extern "C" ARM struct OutStruct0215ccbc* func_ov024_021dc540(struct Obj_021dc540* obj, int srcId, int id, struct Range_021dc540* range, int amount, int unused, unsigned char flagArg) {
    GameObject* src = GetCombatantByID((int)obj->f10, srcId);
    if (!src) return 0;
    GameObject* tgt = GetCombatantByID((int)obj->f10, id);
    if (!tgt) return 0;
    int srcMP = src->currentStats_->primaryStats.currMP;
    if (srcMP == 0) amount = 0;
    if (tgt->currentStats_->primaryStats.currMP >= GetMaxMP(tgt)) amount = 0;
    if (srcId == id) amount = 0;
    if (amount > srcMP) amount = srcMP;
    unsigned short sel;
    if (flagArg && amount > 0) {
        sel = func_ov024_021da644(id, range->f20.c, range->f24.a);
    } else {
        amount = 0;
        sel = func_ov024_021da644(id, range->f24.b, range->f24.c);
    }
    struct OutStruct0215ccbc* entry = func_ov000_0215e958(obj->f10);
    if (!entry) return 0;
    func_ov000_0215a88c(obj->f10, entry, sel);
    unsigned long long bits = 0;
    short applied = 0;
    short delta = func_ov000_0215a1d4(obj->f10, id, amount, &applied);
    if (applied != 0) {
        func_ov000_02159eac(obj->f10, &bits, 0x22);
    }
    func_ov000_0215a124(obj->f10, srcId, applied);
    struct Flag_021dc540* fl = (struct Flag_021dc540*)((char*)obj->fc + 0x1c);
    func_ov000_0215ccbc(obj->f10, entry, tgt, -applied, GetCurrentHP(tgt), delta, bits, fl->flag != 0);
    return entry;
}
