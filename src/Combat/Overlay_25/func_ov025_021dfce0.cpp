#include <globaldefs.h>
#include "GameState/GameState.h"

struct CombatantEntry_021e1048 {
    unsigned char index;
    unsigned char adjustedIndex;
    char pad2[6];
    GameObject* object;
};
struct CombatWork {
#if defined(jpn)
    char pad0[0x218];
    void* battle;
    char pad2a0[0x57c8-0x21c];
#else
    char pad0[0x29c];
    void* battle;
    char pad2a0[0x55d8-0x2a0];
#endif
    int firstSlot;
};
struct Obj02048c90;
extern "C" void func_02048c90(Obj02048c90*);
extern "C" int func_02049468(unsigned char*);
extern "C" int func_0204948c(unsigned char*);
extern "C" int func_02049ee8(unsigned char*);
extern "C" void func_02049458(unsigned char*, unsigned char);
extern "C" void func_0204947c(unsigned char*, unsigned char);
extern "C" int func_ov000_02162864(void*, int);
extern "C" int func_ov000_02162908(void*, int, int*);
extern "C" int func_ov025_021e1048(void*, CombatantEntry_021e1048*);

inline int IsPartyActor(int id) { return id >= 0 && id <= 3; }
inline int IsMonsterActor(int id) { return id >= 0xc0 && id <= 0xc7; }

// USA: func_ov025_021dfce0
extern "C" ARM void func_ov025_021dfce0(CombatWork* work) {
    GameState* state = GameState::GetInstance();
    CombatantEntry_021e1048 entries[12];
    int count = func_ov025_021e1048(work->battle, entries);
    for (int i = 0; i < count; i++) {
        GameObject* actor = entries[i].object;
        func_02048c90((Obj02048c90*)actor);
        if (func_02049468((unsigned char*)actor) != 0xff) {
            GameObject* target = state->GetCombatantByIndex(func_02049468((unsigned char*)actor));
            if (!target) func_02049458((unsigned char*)actor, 0xff);
            else if (!func_02049ee8((unsigned char*)target)) func_02049458((unsigned char*)actor, 0xff);
        }
        if (func_0204948c((unsigned char*)actor) != 0xff) {
            GameObject* target = state->GetCombatantByIndex(func_0204948c((unsigned char*)actor));
            if (!target) func_0204947c((unsigned char*)actor, 0xff);
            else if (!func_02049ee8((unsigned char*)target)) func_0204947c((unsigned char*)actor, 0xff);
        }
    }
    for (int i = 0; i < count; i++) {
        GameObject* actor = entries[i].object;
        int targetId = func_02049468((unsigned char*)actor);
        if (targetId != 0xff) continue;
        int mappedIds[12];
        if (work->firstSlot <= func_ov000_02162864(work, entries[i].index)) {
            if (func_ov000_02162908(work, func_ov000_02162864(work, entries[i].index), mappedIds) > 0) {
                targetId = mappedIds[0];
                func_02049458((unsigned char*)actor, targetId);
            }
        }
        if (targetId != 0xff) continue;
        Vector3i position = actor->obj3D_.position_;
        targetId = 0xff;
        int nearestDistance = 0x400000;
        for (int j = 0; j < count; j++) {
            if (!func_02049ee8((unsigned char*)entries[j].object)) continue;
            int otherId = entries[j].index;
            int actorId = entries[i].index;
            int sameSide;
            if (IsPartyActor(actorId) && IsPartyActor(otherId)) sameSide = 1;
            else if (IsMonsterActor(actorId) && IsMonsterActor(otherId)) sameSide = 1;
            else sameSide = 0;
            if (sameSide) continue;
            Vector3i targetPosition = entries[j].object->obj3D_.position_;
            int distance = Vector3fix_Distance(&position, &targetPosition);
            if (distance < nearestDistance) {
                targetId = entries[j].index;
                nearestDistance = distance;
            }
        }
        func_0204947c((unsigned char*)actor, targetId);
    }
}
