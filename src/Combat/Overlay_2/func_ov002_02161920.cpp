#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" void* func_02010828(GameState* battleStruct);

// USA: func_ov002_02161920
extern "C" ARM int func_ov002_02161920(void) {
    if (func_0202b7d8((int*)func_0202ae18())) {
        GameState* bs = GameState::GetInstance();
        unsigned char* base = (unsigned char*)func_02010828(bs);
        unsigned char i = 0;
        while (i < base[0xf7c]) {
            unsigned char* p = base + i;
            if (p[0xf78] == 0) {
                return 2;
            }
            i++;
        }
        return 1;
    }
    return 0;
}
