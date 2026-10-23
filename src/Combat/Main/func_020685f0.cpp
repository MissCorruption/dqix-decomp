#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" void* func_02010828(GameState*);

struct Sub0x150_020685f0 {
    char pad[0x49c];
    unsigned char bit0 : 1;
};

struct PartyRow_020685f0 {
    char pad[0xf78];
    unsigned char id;
};

// USA: func_020685f0
extern "C" ARM int func_020685f0(GameState* battleStruct) {
    unsigned char* p = (unsigned char*)func_02010828(battleStruct);
    int i;
    for (i = 0; i < p[0xf7c]; i++) {
        GameObject* c = battleStruct->GetPartyMemberByIndex(((struct PartyRow_020685f0*)(p + i))->id);
        if (c != 0) {
            struct Sub0x150_020685f0* sub = *(struct Sub0x150_020685f0**)((char*)c + 0x150);
            if (sub->bit0 == 0) {
                return 1;
            }
        }
    }
    return 0;
}
