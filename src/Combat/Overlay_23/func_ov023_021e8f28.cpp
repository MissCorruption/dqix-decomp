#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* battleStruct);
extern "C" unsigned char func_02011494(char* obj, void* dst);
extern "C" void* __clear(void* dst, int count);
extern "C" GameObject* func_0200ff1c(GameState* battleStruct, int combatantId);

// USA: func_ov023_021e8f28
extern "C" ARM GameObject* func_ov023_021e8f28(int index) {
    GameState* battle = GameState::GetInstance();
    GameObject* result = 0;
    if (index >= 0) {
        int inRange = (index >= 0) && (index <= 3);
        if (inRange) {
            result = func_0200ff1c(battle, index);
        }
    } else {
        if (index == -1) {
            int key = func_020100a8(battle);
            result = func_0200ff1c(battle, key);
        } else {
            unsigned char local[4];
            __clear(local, 4);
            unsigned char count = func_02011494((char*)battle, local);
            int i = -1 - index;
            if (i < count) {
                result = func_0200ff1c(battle, local[i]);
            }
        }
    }
    return result;
}
