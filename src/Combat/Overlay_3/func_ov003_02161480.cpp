#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* battleStruct);
extern "C" void func_02039d24(unsigned char* obj);

struct PartyRoster02161480 {
    char pad0[0xf78];
    unsigned char memberIds[4];
    unsigned char memberCount;
};

// USA: func_ov003_02161480
extern "C" ARM void func_ov003_02161480(void) {
    GameState* bs = GameState::GetInstance();
    struct PartyRoster02161480* roster = (struct PartyRoster02161480*)func_02010828(bs);
    unsigned char activeId = func_020100a8(bs);
    for (unsigned char i = 0; i < roster->memberCount; i++) {
        if (activeId != roster->memberIds[i]) {
            GameObject* c = bs->GetPartyMemberByIndex(roster->memberIds[i]);
            if (c != NULL) {
                func_02039d24((unsigned char*)c);
            }
        }
    }
}
