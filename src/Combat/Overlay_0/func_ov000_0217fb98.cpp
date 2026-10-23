#include <globaldefs.h>
#include "GameState/GameState.h"

struct Elem0217fb98 { char pad[0xf78]; unsigned char val; };

extern "C" void* func_02010828(GameState* battleStruct);
extern "C" void* func_ov000_02161318(void*, unsigned char);
extern "C" int func_ov000_0217f464(void* obj);

// USA: func_ov000_0217fb98
extern "C" ARM int func_ov000_0217fb98(void* obj) {
    int result = 0;
    unsigned char* base = (unsigned char*)func_02010828(GameState::GetInstance());
    unsigned char count = base[0xf7c];
    unsigned char i;
    for (i = 0; i < count; i++) {
        struct Elem0217fb98* e = (struct Elem0217fb98*)(base + i);
        void* found = func_ov000_02161318(obj, e->val);
        if (found != NULL) {
            result |= func_ov000_0217f464(found);
        }
    }
    return result;
}
