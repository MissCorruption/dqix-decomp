// USA: func_ov003_02160b50
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202ba00(int* obj);
extern "C" int func_020100a8(GameState* battleStruct);

extern "C" ARM int func_ov003_02160b50(void*) {
    int result = 0;
    if (func_0202ba00((int*)func_0202ae18())) {
        result = func_020100a8(GameState::GetInstance()) == 0 ? 1 : 2;
    }
    return result;
}
