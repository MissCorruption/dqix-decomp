#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct OutStruct0215ccbc;
struct EffectWords_021e3f14 { int lo; int hi; };

struct FlagObj_021e05e4;
struct FlagObj_021da998;
struct FlagObj_021dd260;
extern "C" int func_ov024_021e05e4(struct FlagObj_021e05e4* obj);
extern "C" int func_ov024_021da998(struct FlagObj_021da998* obj);
extern "C" int func_ov024_021dd260(struct FlagObj_021dd260* obj);
extern "C" void func_020488cc(unsigned char* obj, int value);
extern "C" void func_02088e64(unsigned char* stats);
extern "C" void func_02087704(void* obj);
extern "C" void func_ov000_0215a88c(void* objRaw, void* listRaw, int c);
extern "C" void func_ov000_0215ffc4(void* obj, void* node, int idx);
extern "C" struct OutStruct0215ccbc* func_ov000_0215e958(void* ctx);
extern "C" void func_ov000_02159eac(void* ctx, struct EffectWords_021e3f14* words, int effect);
extern "C" void func_ov000_0215cd44(void* ctx, struct OutStruct0215ccbc* entry, GameObject* c, int d,
    struct EffectWords_021e3f14 words, int g);

struct Stats_021e3f14 { char pad[0x24]; unsigned char stage; };
struct Obj_021e3f14 {
    char pad0[0xc];
    void* chain;
    void* ctx;
};

static inline int IsPartySlot(int id) {
    return id >= 0 && id <= 3;
}

// USA: func_ov024_021e3f14
extern "C" ARM unsigned long long func_ov024_021e3f14(struct Obj_021e3f14* obj, int unused, int id, int unused2, int amount) {
    if (amount <= 0) return 0;
    GameObject* c = GetCombatantByID((int)obj->ctx, id);
    if (!c) return 0;
    struct OutStruct0215ccbc* entry = func_ov000_0215e958(obj->ctx);
    if (!entry) return 0;
    int added = 0;
    if (func_ov024_021e05e4((struct FlagObj_021e05e4*)c)) {
        if (!IsPartySlot(id)) func_020488cc((unsigned char*)c, 1);
        func_02088e64((unsigned char*)c->currentStats_);
        func_ov000_0215a88c(obj->ctx, entry, 0x164);
        added = 1;
    }
    struct EffectWords_021e3f14 words;
    words.lo = 0;
    words.hi = 0;
    if (func_ov024_021da998((struct FlagObj_021da998*)c) || func_ov024_021dd260((struct FlagObj_021dd260*)c)) {
        func_02087704(c->currentStats_);
        int msg = 0;
        unsigned char stage = ((struct Stats_021e3f14*)c->currentStats_)->stage;
        switch (stage) {
        case 0: msg = 0x17f; break;
        case 1: msg = 0x180; break;
        case 2: msg = 0x181; break;
        case 3: msg = 0x259; break;
        }
        if (stage == 3) func_ov000_02159eac(obj->ctx, &words, 8);
        func_ov000_0215a88c(obj->ctx, entry, msg);
        added = 1;
    }
    if (added) {
        func_ov000_0215cd44(obj->ctx, entry, c, 0, words, 0);
        func_ov000_0215ffc4(obj->chain, entry, 1);
        ((unsigned char*)obj->ctx)[0x8e02]++;
    }
    return 0;
}
