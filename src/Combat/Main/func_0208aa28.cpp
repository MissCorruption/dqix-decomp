#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" GameObject* func_0200ff94(GameState* battleStruct, int combatantId);
extern "C" int func_020855d0(unsigned char* actor);
extern "C" void* func_02033fa0(void* obj);
extern "C" int func_0204bdc0(unsigned short* obj);
extern "C" int func_0204bdd8(unsigned short* obj);
extern "C" int func_0204bdf0(unsigned short* obj);
extern "C" int func_0204be08(unsigned short* obj);
extern "C" unsigned char func_02039d7c(char* obj);

#if defined(jpn)
enum { ReactionActorOffset = 0x144 };
#else
enum { ReactionActorOffset = 0x150 };
#endif

// USA: func_0208aa28
extern "C" ARM int func_0208aa28(unsigned char* obj, int combatantId, int flag) {
    ((unsigned int*)GetGameResources());
    GameState* battle = GameState::GetInstance();
    GameObject* c1 = func_0200ff94(battle, combatantId);
    GameObject* c2 = func_0200ff1c(battle, combatantId);
    if (c1 == NULL || (**(int**)((char*)c1 + 0x130) & 1)) {
        return 0;
    }
    if (func_020855d0(*(unsigned char**)((char*)c2 + ReactionActorOffset)) != 0 || flag != 0) {
        return 0;
    }
    unsigned short* field = (unsigned short*)func_02033fa0(c1);
    switch (obj[4]) {
        case 0:
            if (!func_0204bdc0(field)) return 0;
            break;
        case 1:
            if (!func_0204bdd8(field)) return 0;
            break;
        case 2:
            if (!func_0204bdf0(field)) return 0;
            break;
        case 3:
            if (!func_0204be08(field)) return 0;
            break;
        default:
            break;
    }
    GameObject* c3 = battle->GetUnknownGameObject();
    if (*(short*)((char*)c3 + 0xb2) == 0) {
        return 0;
    }
    return func_02039d7c((char*)c3) == 0 ? 1 : 0;
}
