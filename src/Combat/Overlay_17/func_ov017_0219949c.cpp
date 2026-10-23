#if defined(jpn)
enum { RegionOffset4447 = 0x4197 };
#else
enum { RegionOffset4447 = 0x4447 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
struct U16Field0x6_020375f8;
extern "C" void func_ov017_021d0860(int a, int b, int c);

// USA: func_ov017_0219949c
extern "C" ARM void func_ov017_0219949c(void* ctx, int combatantId, int matchType, unsigned char slotId, signed char threshold) {
    struct SearchStruct0202c1a4* search = (struct SearchStruct0202c1a4*)func_0202ae18();
    signed char arrEntry = func_0202c1a4(search);

    if (matchType != arrEntry && matchType != 4) {
        return;
    }

    GameState* battle = GameState::GetInstance();
    GameObject* combatant = battle->GetGameObjectByIndex(combatantId);
    GameObject* target = battle->GetUnknownGameObject();
    unsigned short v1 = ((Object3D*)((struct U16Field0x6_020375f8*)combatant))->GetField06();
    unsigned short v2 = ((Object3D*)((struct U16Field0x6_020375f8*)target))->GetField06();

    if (v1 != v2) {
        func_ov017_021d0860(slotId, 1, 1);
        return;
    }

    if (threshold != *(signed char*)((char*)ctx + RegionOffset4447)) {
        GetGameResources();
        func_ov017_021d0860(slotId, 1, 1);
        return;
    }

    unsigned char arrEntry2 = (unsigned char)func_0202c1a4(search);
    if (slotId < arrEntry2) {
        func_ov017_021d0860(slotId, 1, 1);
        return;
    }
    func_ov017_021d0860(slotId, 1, 0);
}
