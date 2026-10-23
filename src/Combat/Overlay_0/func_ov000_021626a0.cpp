#include <globaldefs.h>
#include "GameState/GameState.h"

struct RemapFlagOwner;

struct CombatantInfo {
    char pad0[0x10];
    unsigned int pad10_0 : 27;
    unsigned int hidden : 1;
    unsigned int pad10_28 : 4;
};

struct BattleCombatant {
    char pad0[0x148];
    struct CombatantInfo* info;
};

struct BattleWork {
#if defined(jpn)
    char pad0[0x218];
#else
    char pad0[0x29c];
#endif
    char* field_0x29c;
    unsigned char* field_0x2a0;
    char pad2A4[0xea4 - 0x2a4];
    struct RemapFlagOwner* remapFlags;
};

extern "C" void* func_ov000_02160f20(void* obj);
extern "C" int func_ov000_021820bc(void* obj, int unused, int index, int arg);
extern "C" struct BattleCombatant* func_0200fea4(GameState* gameState, int combatantId);
extern "C" int func_02049ee8(unsigned char* obj);
extern "C" void func_020d76b8(struct RemapFlagOwner* obj, int index);
extern "C" void func_020d76d8(unsigned char* base, int bit);
extern "C" int func_ov000_0215fc60(char* base);
extern "C" int func_020a35e0(unsigned char* obj, unsigned char index);

// USA: func_ov000_021626a0
extern "C" ARM void func_ov000_021626a0(BattleWork* work, int index, int show) {
    int ids[16];
    GameState* gs;
    char* field29c;
    int i;
    int j;
    int count;
    GameObject* obj;
    int visible;
    struct RemapFlagOwner* remap;
    void* slot;
    struct BattleCombatant* combatant;
    struct CombatantInfo* info;

    gs = GameState::GetInstance();
    field29c = work->field_0x29c;
    remap = work->remapFlags;
    slot = func_ov000_02160f20(work);
    if (remap == NULL) {
        return;
    }
    count = func_ov000_021820bc(work->field_0x29c, (int)slot, index, (int)ids);
    for (i = 0; i < count; i++) {
        obj = gs->GetGameObjectByIndex(ids[i]);
        if (obj == NULL) {
            continue;
        }
        visible = show;
        if (obj->obj3D_.unknown_0_ & 0x400) {
            combatant = func_0200fea4(gs, ids[i]);
            if (combatant != NULL) {
                info = combatant->info;
                if (func_02049ee8((unsigned char*)combatant) == 0 && info->hidden) {
                    visible = 0;
                }
            }
        }
        if (visible) {
            obj->obj3D_.MakeVisible();
            func_020d76b8(remap, ids[i]);
        } else {
            obj->obj3D_.MakeHidden();
            func_020d76d8((unsigned char*)remap, ids[i]);
        }
    }
    if (func_ov000_0215fc60(field29c) == 0) {
        return;
    }
    for (j = 1; j < 4; j++) {
        obj = gs->GetGameObjectByIndex(j);
        if (obj == NULL) {
            continue;
        }
        if (func_020a35e0(work->field_0x2a0, j)) {
            obj->obj3D_.MakeHidden();
            func_020d76d8((unsigned char*)remap, j);
        }
    }
}
