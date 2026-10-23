#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* battleStruct);

struct S_a0b8c;
extern "C" int func_020a0b8c(struct S_a0b8c* p);
extern "C" int func_02053c6c(unsigned char* obj);
struct Slots02083960;
extern "C" int func_02083960(struct Slots02083960* s);

// USA: func_ov002_02157108
extern "C" ARM int func_ov002_02157108(void* unused, int id) {
    GameState* bs = GameState::GetInstance();
    int result = 0;
    if (id == 5) {
        void* p = (char*)func_02010828(bs) + 0xe04;
        result = func_020a0b8c((struct S_a0b8c*)p);
    } else if (id == 4) {
        void* p = func_02010828(bs);
        result = func_020a0b8c((struct S_a0b8c*)p);
    } else {
        GameObject* c = func_0200ff1c(bs, id);
        if (c != NULL) {
            int ptrAsInt = func_02053c6c((unsigned char*)c);
            result = func_02083960((struct Slots02083960*)ptrAsInt);
        }
    }
    return result;
}
