#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff94(GameState* battleStruct, int combatantId);

// USA: func_02010890
extern "C" ARM void func_02010890(GameState* bs, int* outList, int* outCount) {
    int count = 0;
    int i;
    for (i = 0; i < 4; i++) {
        if (func_0200ff94(bs, i)) {
            outList[count] = i;
            count++;
        }
    }
    *outCount = count;
}
