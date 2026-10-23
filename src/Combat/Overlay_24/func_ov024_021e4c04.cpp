#include <globaldefs.h>

#if defined(jpn)
enum { kAttackerTraitsOffset = 0x144 };
#else
enum { kAttackerTraitsOffset = 0x150 };
#endif

#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct BattleStage_021e4c04 {
    unsigned char pad_00[0x8e02];
    unsigned char entryCount;
};
struct TurnAction_021e4c04 {
    int value0;
    int value4;
    char pad8[0x18 - 0x8];
    unsigned char byte18;
    unsigned char byte19;
    char pad1a[0x1c - 0x1a];
    unsigned char unused : 7;
    unsigned char forced : 1;
};
struct Self_021e4c04 {
    char pad0[0xc];
    TurnAction_021e4c04* action;
    BattleStage_021e4c04* battle;
};
struct Record_021e4c04 {
    char pad0[0x10];
    unsigned int flags;
};
struct Stats_021e4c04 {
    unsigned short hp;
    char pad2[0x22 - 0x2];
    unsigned short low2 : 2;
    unsigned short kind : 4;
    unsigned short code : 3;
    unsigned short rest : 7;
    unsigned char count;
    char pad25[0x46 - 0x25];
    unsigned char rate46;
    unsigned char rate47;
    unsigned char rate48;
    unsigned char pad49;
    unsigned char rate4a;
    unsigned char rate4b;
    unsigned char rate4c;
    unsigned char rate4d;
    unsigned char rate4e;
    unsigned char rate4f;
    unsigned char rate50;
};
struct Attacker_021e4c04 {
    char pad0[kAttackerTraitsOffset];
    unsigned char* traits;
};
union Effects_021e4c04 { struct { int low; int high; }; unsigned long long value; };

struct FlagObj_021da998;
struct FlagObj_021dd260;
struct FlagObj_021e47dc;
struct FlagObj_021dd010;
struct TargetObj02088418;
struct StatStageStruct02087860;
struct Ctx_021e929c;
struct Ctx_021e9320;
struct Ctx_021e939c;
struct Ctx_021e9464;

extern "C" int func_020851ac(unsigned char*);
extern "C" int func_02085644(unsigned char*);
extern "C" int func_02085670(unsigned char*);
extern "C" int func_0208569c(unsigned char*);
extern "C" int func_020856c8(unsigned char*);
extern "C" int func_020856f4(unsigned char*);
extern "C" int func_02085720(unsigned char*);
extern "C" int func_02085768(unsigned char*);
extern "C" int func_02085794(unsigned char*);
extern "C" int func_020857c0(unsigned char*);
extern "C" int func_020857ec(unsigned char*);
extern "C" short func_ov024_021da998(FlagObj_021da998*);
extern "C" int func_ov024_021dd260(FlagObj_021dd260*);
extern "C" int func_ov024_021e47dc(FlagObj_021e47dc*);
extern "C" int func_ov024_021dd010(FlagObj_021dd010*);
extern "C" void func_02087704(void*);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" int func_02088840(unsigned char*);
extern "C" int func_0208830c(unsigned char*);
extern "C" int func_020883ac(unsigned char*);
extern "C" int func_02088540(unsigned char*);
extern "C" int func_0208824c(unsigned char*);
extern "C" void func_02088854(unsigned char*);
extern "C" void func_02088338(unsigned char*);
extern "C" void func_02088b34(unsigned char*);
extern "C" void func_020883cc(unsigned char*);
extern "C" void func_020888a4(unsigned char*);
extern "C" int func_02088418(TargetObj02088418*, int, int);
extern "C" void func_02088474(void*, int, int);
extern "C" void func_02088560(unsigned char*);
extern "C" void func_0208826c(unsigned char*);
extern "C" int func_0208776c(void*, int);
extern "C" int func_02087860(StatStageStruct02087860*, unsigned char);
void UpdateCombatantAttack(int, int);
void UpdateCombatantDefense(int, int);
extern "C" int func_ov024_021e929c(Ctx_021e929c*, int, int);
extern "C" int func_ov024_021e9320(Ctx_021e9320*, int, int);
extern "C" int func_ov024_021e939c(Ctx_021e939c*, int, int, int);
extern "C" int func_ov024_021e9464(Ctx_021e9464*, int, int);
extern "C" void func_ov000_0215ffc4(void*, void*, int);
struct SlotArrayStruct_021eb4e4;
extern "C" void func_ov024_021eb4e4(SlotArrayStruct_021eb4e4*, int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_02159eac(void*, void*, int);
extern "C" int func_ov000_02156068(void*, int, int, int);
extern "C" void func_ov000_0215a004(void*, int, int, int, void*, Record_021e4c04*, int, int);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, unsigned long long, int);
extern "C" int func_ov024_021e9198(Self_021e4c04*, int, int, int);
extern "C" int func_020877c0(void*, int);
extern "C" int func_020878b4(void*, int);
extern "C" int func_ov024_021e94c4(Self_021e4c04*, int, Record_021e4c04*, int, signed char, unsigned char, unsigned char);
extern "C" int func_ov024_021e95d4(Self_021e4c04*, int, Record_021e4c04*, int, signed char, unsigned char, unsigned char);

static inline int IsPartyMember(int id) {
    return id >= 0 && id <= 3;
}

static inline Stats_021e4c04* StatsOf(GameObject* c) {
    return (Stats_021e4c04*)c->currentStats_;
}

static inline unsigned short GetHP(GameObject* c) { SDK_NULL_ASSERT(c); return StatsOf(c)->hp; }

// USA: func_ov024_021e4c04
extern "C" ARM void func_ov024_021e4c04(Self_021e4c04* self, int attackerId, int targetId, Record_021e4c04* rec, int amount) {
    GameState* gs = GameState::GetInstance();
    GameObject* target = GetCombatantByID((int)self->battle, targetId);
    if (!target) return;
    void* entry = func_ov000_0215e958(self->battle);
    if (!entry) return;
    short special;
    float chance;
    int count;
    int any = 0;
    int msg = 0;
    Effects_021e4c04 effects;
    effects.low = 0;
    effects.high = 0;
    special = 0;
    int roll = NextRandomMax((Random*)self->battle, 100);
    if (rec->flags & 0x80000) {
        if (!IsPartyMember(attackerId)) return;
        Attacker_021e4c04* attacker = (Attacker_021e4c04*)func_0200ff1c(gs, attackerId);
        if (!attacker) return;

        if (func_020851ac(attacker->traits)
            && (func_ov024_021da998((FlagObj_021da998*)target) || func_ov024_021dd260((FlagObj_021dd260*)target))) {
            func_02087704(target->currentStats_);
            count = StatsOf(target)->count;
            switch (count) {
            case 0: msg = 0x17f; break;
            case 1: msg = 0x180; break;
            case 2: msg = 0x181; break;
            case 3: msg = 0x259; break;
            }
            func_ov000_02159eac(self->battle, &effects, 0x1d);
            if (count == 3) func_ov000_02159eac(self->battle, &effects, 8);
            func_ov000_0215a88c(self->battle, entry, msg);
            any = 1;
        }

        if (func_02085644(attacker->traits)
            && func_02088840((unsigned char*)target->currentStats_)
            && (int)StatsOf(target)->rate46 > 0) {
            if ((float)roll < (self->action->forced ? 100.0f : 20.0f)) {
                int msg = func_ov024_021e9198(self, targetId, 1, 1);
                if (!msg) msg = 0x25;
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
                func_02088854((unsigned char*)target->currentStats_);
                StatsOf(target)->code = 1;
            }
        }

        if (func_02085670(attacker->traits)
            && func_0208830c((unsigned char*)target->currentStats_)
            && (int)StatsOf(target)->rate47 > 0) {
            if ((float)roll < (self->action->forced ? 100.0f : 20.5f)) {
                special = func_ov024_021da998((FlagObj_021da998*)target);
                int msg = func_ov024_021e929c((Ctx_021e929c*)self, targetId, 1);
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
                func_02088338((unsigned char*)target->currentStats_);
            }
        }

        if (func_0208569c(attacker->traits)) {
            chance = 10.5f;
            if (func_ov000_02156068(self->battle, targetId, 0, 1) == 0 && StatsOf(target)->rate48 == 0) chance = 0.0f;
            if ((float)roll < chance) {
                GameObject* victim = GetCombatantByID((int)self->battle, targetId);
                if (func_ov024_021e47dc((FlagObj_021e47dc*)victim)) {
                    func_ov000_02159eac(self->battle, &effects, 0x29);
                    func_02088b34((unsigned char*)victim->currentStats_);
                    func_ov000_0215a004(self->battle, attackerId, targetId, GetHP(victim) - 1, &effects, rec, self->action->forced != 0, 0);
                    func_ov000_0215a88c(self->battle, entry, 200);
                } else {
                    func_ov000_0215a004(self->battle, attackerId, targetId, 0xffff, &effects, rec, self->action->forced != 0, 8);
                    effects.low = 0;
                    effects.high = 0;
                    func_ov000_02159eac(self->battle, &effects, 0xd);
                    func_ov000_0215a88c(self->battle, entry, 0x257);
                }
                self->action->value0 = 0;
                self->action->byte18 = 0;
                self->action->value4 = 0;
                self->action->byte19 = 0;
                any = 1;
            }
        }

        if (func_020856c8(attacker->traits)
            && func_020883ac((unsigned char*)target->currentStats_)
            && StatsOf(target)->rate4a != 0) {
            if ((float)roll < (self->action->forced ? 100.0f : 10.5f)) {
                int msg = func_ov024_021e9320((Ctx_021e9320*)self, targetId, 1);
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
                func_020883cc((unsigned char*)target->currentStats_);
            }
        }

        if (func_020856f4(attacker->traits)
            && func_ov024_021dd010((FlagObj_021dd010*)target)
            && StatsOf(target)->rate4b != 0) {
            if ((float)roll < (self->action->forced ? 100.0f : 25.0f)) {
                int msg = 0x18;
                if (func_ov024_021dd010((FlagObj_021dd010*)target)) msg = 0x1a;
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
                func_020888a4((unsigned char*)target->currentStats_);
            }
        }

        if (func_02085720(attacker->traits)
            && func_02088418((TargetObj02088418*)target->currentStats_, 5, 0)
            && StatsOf(target)->rate4c != 0) {
            if ((float)roll < (self->action->forced ? 100.0f : 12.5f)) {
                special = func_ov024_021da998((FlagObj_021da998*)target);
                int msg = 0x5e;
                if (StatsOf(target)->kind == 5) msg = 0x60;
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
                func_02088474(target->currentStats_, 5, 0);
            }
        }

        if (func_02085768(attacker->traits)
            && func_02088540((unsigned char*)target->currentStats_)
            && StatsOf(target)->rate4d != 0) {
            if ((float)roll < (self->action->forced ? 100.0f : 12.5f)) {
                int msg = func_ov024_021e939c((Ctx_021e939c*)self, targetId, 1, 1);
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
                func_02088560((unsigned char*)target->currentStats_);
            }
        }

        if (func_02085794(attacker->traits)
            && func_0208824c((unsigned char*)target->currentStats_)
            && StatsOf(target)->rate4e != 0) {
            if ((float)roll < (self->action->forced ? 100.0f : 10.0f)) {
                special = func_ov024_021da998((FlagObj_021da998*)target);
                int msg = func_ov024_021e9464((Ctx_021e9464*)self, targetId, 1);
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
                func_0208826c((unsigned char*)target->currentStats_);
            }
        }

        if (func_020857c0(attacker->traits)
            && func_0208776c(target->currentStats_, 1)
            && StatsOf(target)->rate4f != 0) {
            chance = 20.0f;
            if ((float)roll < chance) {
                int result = func_020877c0(target->currentStats_, -1);
                UpdateCombatantAttack((int)self->battle, targetId);
                int msg = func_ov024_021e94c4(self, targetId, rec, 1, (signed char)result, 1, 1);
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
            }
        }

        if (func_020857ec(attacker->traits)
            && func_02087860((StatStageStruct02087860*)target->currentStats_, 1)
            && StatsOf(target)->rate50 != 0) {
            chance = 20.0f;
            if ((float)roll < chance) {
                int result = func_020878b4(target->currentStats_, -1);
                UpdateCombatantDefense((int)self->battle, targetId);
                int msg = func_ov024_021e95d4(self, targetId, rec, 1, (signed char)result, 1, 1);
                func_ov000_0215a88c(self->battle, entry, msg);
                any = 1;
            }
        }
    }
    if (any) {
        func_ov000_0215cd44(self->battle, entry, target, 0, effects.value, 0);
        func_ov000_0215ffc4(self->action, entry, 2);
        self->battle->entryCount++;
        func_ov024_021eb4e4((SlotArrayStruct_021eb4e4*)self, (int)self->action);
    }
    if (special) {
        void* extra = func_ov000_0215e958(self->battle);
        if (!extra) return;
        func_ov000_0215a88c(self->battle, extra, 0x25c);
        func_ov000_0215ffc4(self->action, extra, 2);
        self->battle->entryCount++;
        func_ov000_0215cd44(self->battle, extra, target, 0, 0, 0);
    }
}
