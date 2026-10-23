#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* battleStruct);
extern "C" unsigned int _u32_div_f(unsigned int a, unsigned int b);

struct Obj02179e18 {
    char pad0[0x1a];
    unsigned short f1a;
};

// USA: func_ov003_02179e18
extern "C" ARM unsigned int func_ov003_02179e18(struct Obj02179e18* obj) {
    GameState* bs = GameState::GetInstance();
    void* p = func_02010828(bs);
    unsigned int v = *(unsigned int*)((char*)p + 0xf6c);
    return _u32_div_f(0x98967f - v, obj->f1a);
}
