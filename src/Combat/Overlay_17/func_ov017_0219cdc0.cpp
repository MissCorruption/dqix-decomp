#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Bytes02033b88;
#if defined(jpn)
enum { ActorFlagsOffset = 0x180 };
#else
enum { ActorFlagsOffset = 0x18c };
#endif
extern "C" void* func_0202ae18();
extern "C" int func_020100a8(GameState*);
extern "C" void func_02048150(GameObject*, int, int);
extern "C" int func_02033b88(Bytes02033b88*, int);
extern "C" void func_ov017_021cedf4(int, int, int);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_ov017_02191108(void*, int, int, int, int);
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" int func_020546a8(void*);
extern "C" void func_ov017_021907dc(int, int, int, int, int);
extern "C" void func_02039d58(unsigned char*);
extern "C" int func_0202c508(void*);
extern "C" void* func_02010828(GameState*);

static inline int Equal(unsigned short value, unsigned short key) { return value == key; }
static inline int NotEqual(unsigned short value, unsigned short key) { return !Equal(value, key); }

// USA: func_ov017_0219cdc0
extern "C" ARM void func_ov017_0219cdc0(unsigned short destinationZone, int wholeParty, signed char memberId) {
    GameState* state = GameState::GetInstance();
    void* search = func_0202ae18();
    GameResources* resources = GetGameResources();
    int special = !NotEqual(destinationZone, 10100);
    unsigned short category = (destinationZone / 100) * 100;
    int recover = (special | (category == 4100)) != 0;
    recover = (recover | (category == 4300)) != 0;
    recover = (recover | (category == 4500)) != 0;
    recover = (recover | (category == 6400)) != 0;
    int fullRecovery = (special | (category == 4300)) != 0;
    fullRecovery = (fullRecovery | (category == 6400)) != 0;
    int reviveParty = Equal(destinationZone, 50101) != 0;
    reviveParty = (reviveParty | (destinationZone == 50201)) != 0;
    reviveParty = (reviveParty | (destinationZone == 50301)) != 0;
    reviveParty = (reviveParty | (destinationZone == 50401)) != 0;
    if (recover) {
        int id = func_020100a8(state);
        if (!wholeParty) id = memberId;
        GameObject* member = (GameObject*)state->GetPartyMemberByIndex(id);
        if (member && (**(unsigned int**)((char*)member + 0x130) & 1)) {
            if (fullRecovery) func_02048150(member, 1, 1);
            else func_02048150(member, 0, 1);
            (*(unsigned int*)((char*)member + ActorFlagsOffset)) &= ~1;
            func_02033b88((Bytes02033b88*)member, 0);
            if (wholeParty) {
                func_ov017_021cedf4(id, 1, 0);
                func_ov017_021c9e00(id, 0, 0, 1);
                func_ov017_02191108(resources, 1, 1, 1, 1);
            } else {
                if (state->GetPartyMemberByIndex(id)) {
                    GameObject* combatant = func_0200ff58(state, memberId);
                    if (combatant) id = func_020546a8(combatant);
                    func_ov017_021907dc((int)resources, id, 1, 1, 1);
                    GameObject* linked = (GameObject*)state->GetPartyMemberByIndex(id);
                    if (linked) {
                        linked->obj3D_.SetInheritedAlpha(31);
                        func_02039d58((unsigned char*)linked);
                    }
                }
            }
        }
    }
    if (reviveParty && func_0202c508(search) && wholeParty) {
        unsigned char* party = (unsigned char*)func_02010828(state);
        GameObject* member;
        int allRevived;
        int i;
        int id;
        allRevived = 1;
        for (i = 0; i < party[0xf7c]; i++) {
            id = (party + i)[0xf78];
            member = (GameObject*)state->GetPartyMemberByIndex(id);
            if (!member) continue;
            GameObject* object = state->GetGameObjectByIndex(id * 12 + 20);
            if (object && (object->obj3D_.unknown_2_ == 9031 || object->obj3D_.unknown_2_ == 9032 || object->obj3D_.unknown_2_ == 9033)) {
                if (**(unsigned int**)((char*)member + 0x130) & 1) {
                    func_02048150(member, 0, 1);
                    (*(unsigned int*)((char*)member + ActorFlagsOffset)) &= ~1;
                    func_02033b88((Bytes02033b88*)member, 0);
                    func_ov017_021cedf4(id, 1, 0);
                    func_ov017_021c9e00(id, 0, 0, 1);
                    func_ov017_02191108(resources, 1, 1, 1, 1);
                }
            } else if (id && !(**(unsigned int**)((char*)member + 0x130) & 1)) allRevived = 0;
        }
        if (allRevived && wholeParty) {
            GameObject* protagonist = (GameObject*)state->GetProtagonist();
            if (protagonist && (**(unsigned int**)((char*)protagonist + 0x130) & 1)) {
                func_02048150(protagonist, 0, 1);
                (*(unsigned int*)((char*)protagonist + ActorFlagsOffset)) &= ~1;
                func_02033b88((Bytes02033b88*)protagonist, 0);
                func_ov017_021cedf4(0, 1, 0);
                func_ov017_021c9e00(0, 0, 0, 1);
                func_ov017_02191108(resources, 1, 1, 1, 1);
            }
        }
    }
}
