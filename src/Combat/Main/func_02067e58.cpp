#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02067b28(void* obj);

// USA: func_02067e58
extern "C" ARM void func_02067e58(void* obj, int count) {
    GameState* battleStruct;
    unsigned int minCount;
    if (count == 0) {
        return;
    }
    battleStruct = GameState::GetInstance();
    minCount = ((GameState*)(battleStruct))->GetTickCount();
    if ((unsigned int)count < minCount) {
        count = minCount;
    }
#if defined(jpn)
    while (count != 0 || ((unsigned char*)obj)[0x17f2] != 0) {
#else
    while (count > 0) {
#endif
        func_02067b28(obj);
        if (count != 0) {
            count--;
        }
    }
}
