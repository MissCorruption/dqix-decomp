#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/CombatantRecovery.h"

struct SearchStruct0202c1a4;
struct PartyStatsEvent {
    unsigned char tag;
    unsigned char padding[3];
    unsigned char index : 3;
    unsigned char updateVisibility : 1;
    unsigned char resetEffect : 1;
    unsigned char special : 1;
    unsigned char unused : 2;
    unsigned char condition;
    unsigned short hp;
    unsigned short maxHP;
    unsigned short mp;
    unsigned short maxMP;
    unsigned short padding2;
    unsigned int flags;
};
struct BattlePolicy {
    unsigned char padding[2];
    unsigned char enabled;
};
extern "C" void* func_02053c6c(unsigned char*);
extern "C" void func_02083e28(void*, int);
extern "C" unsigned short func_ov017_021b8480(void*);
extern "C" void func_02054224(void*);
extern "C" void func_02054234(void*);
extern "C" void func_ov017_0218b5f8(int);
extern "C" void func_02026f08(unsigned char*, int, int);
extern "C" void func_02026f20(int, int);
extern "C" int func_020546a8(void*);
extern "C" int func_020100b0(GameState*);
extern "C" signed char func_0202c1a4(SearchStruct0202c1a4*);
extern "C" void func_ov017_021907dc(int, int, int, int, int);
extern "C" void func_ov017_02191108(void*, int, int, int, int);

// USA: func_ov017_021c9f18
extern "C" ARM void func_ov017_021c9f18(void* unused, const PartyStatsEvent* event, GameState* game, GameResources* controller, SearchStruct0202c1a4* search) {
    int memberIndex;
    CombatantRecovery* member;
    int changed;
    int allowVisibility;
    int index = event->index;
    int valid = index >= 0 && index <= 3;
    if (valid == 0) return;
    member = static_cast<CombatantRecovery*>(game->GetPartyMemberByIndex(index));
    if (member == NULL) return;
    void* effect = func_02053c6c((unsigned char*)member);
    if (effect == NULL) return;
    changed = 0;
    int wasDead = member->combatFields_.savedState_130_->flags & 1;
    if ((wasDead != 0 && (event->flags & 1) == 0) || (wasDead == 0 && (event->flags & 1) != 0)) changed = 1;
    unsigned short oldHP = member->combatFields_.savedState_130_->hp;
    unsigned short oldMP = member->combatFields_.savedState_130_->mp;
    member->combatFields_.savedState_130_->hp = event->hp;
    member->combatFields_.savedState_130_->mp = event->mp;
    member->baseStats_->primaryStats.maxHP = event->maxHP;
    member->baseStats_->primaryStats.maxMP = event->maxMP;
    member->combatFields_.savedState_130_->flags = event->flags & 0xffff;
    member->combatFields_.savedState_130_->status = event->condition;
    if (event->resetEffect != 0) func_02083e28(effect, 0);
    BattlePolicy* policy = static_cast<BattlePolicy*>(controller->unknown_ptr_3718);
    allowVisibility = 1;
    if (policy->enabled != 0 && func_ov017_021b8480(policy) == 0) allowVisibility = 0;
    if (event->updateVisibility != 0) {
        if (allowVisibility != 0) {
            if (event->hp == 0) member->recoveryFlags |= 1;
            else member->recoveryFlags &= ~1;
        } else {
            if (event->hp == 0) func_02054224(member);
            else func_02054234(member);
        }
    }
    if (event->special != 0) func_ov017_0218b5f8(-1);
    MapDisplay* flagTable = controller->unknown_ptr_36d0;
    if (flagTable != NULL) {
        func_02026f08((unsigned char*)flagTable, (unsigned char)index, event->special);
        if (event->special != 0 && (oldHP != event->hp || oldMP != event->mp)) func_02026f20((int)flagTable, index & 0xff);
    }
    if (changed == 0) return;
    memberIndex = index;
    if ((member->obj3D_.unknown_0_ & 0x1000) != 0) memberIndex = func_020546a8(member);
    func_020100b0(game);
    if (memberIndex != func_0202c1a4(search)) func_ov017_021907dc((int)controller, memberIndex, 1, 1, 1);
    else func_ov017_02191108(controller, 1, 1, 1, 1);
}
