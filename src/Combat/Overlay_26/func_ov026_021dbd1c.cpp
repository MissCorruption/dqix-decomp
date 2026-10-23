#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct BattleState;
struct Combatant020A36A8;
struct Entry0207da94;
struct Entry0207d9bc;
struct Struct0216377c;

struct PartyState {
    char pad0[0x8];
    unsigned short netId;
    char pad0a[0x20];
    signed char myIndex;
};

struct Container_021dae60 {
    char pad0[0xb8];
};

struct BattleWork {
#if defined(jpn)
    char pad0[0x218];
#else
    char pad0[0x29c];
#endif

    BattleState* battle;
    PartyState* party;
    char pad2a4[0xc08];
    int state;
#if defined(jpn)
    char padeb0[0x28f0];
#else
    char padeb0[0x28b0];
#endif

    Container_021dae60 list;
#if defined(jpn)
    char pad3818[0x4164];
#else
    char pad3818[0x3f30];
#endif

    unsigned char turnFlag;
};

extern "C" char func_020100a8(GameState* gs);
extern "C" void* func_0207d78c();
extern "C" int func_020a36a8(Combatant020A36A8* c);
extern "C" unsigned char func_0207db58(Entry0207d9bc* arr, unsigned short key, char val);
extern "C" void func_ov000_0216377c(Struct0216377c* obj, unsigned char val);
extern "C" void func_ov017_021cc050(unsigned short tag);

extern "C" {
int func_020a35e0(PartyState* party, unsigned char bit);
void func_020a367c(PartyState* party, unsigned char bit);
void func_0207da94(void* entries, unsigned char member);
void func_ov017_02191b40(GameResources* res, int member);
int* func_0202ae18();
int func_0202c508(int*);
void func_ov000_02174a50(Container_021dae60*, int);
void func_ov017_021c9b90(unsigned short, int);
void func_ov000_0215fb04(BattleState*, int);
void func_ov026_021dbf04(BattleWork*);
}

// USA: func_ov026_021dbd1c
extern "C" ARM void func_ov026_021dbd1c(BattleWork* self, int member, int notify) {
    GameState* gs = GameState::GetInstance();
    PartyState* party = self->party;
    Container_021dae60* list = &self->list;
    BattleState* battle = self->battle;
    void* entries = func_0207d78c();
    int* link = func_0202ae18();
    GameResources* res = GetGameResources();
    int wasMember = 0;

    if (func_020a35e0(party, member)) {
        wasMember = 1;
        self->turnFlag = 1;
    }
    func_ov000_02174a50(list, member);
    func_020a367c(party, member);
    func_0207da94(entries, member);
    func_ov017_02191b40(res, member);

    if (member == party->myIndex) {
        if (func_0202c508(link)) {
            func_ov000_0216377c((Struct0216377c*)self, func_0207db58((Entry0207d9bc*)entries, party->netId, func_020100a8(gs)));
        } else {
            func_ov017_021c9b90(party->netId, member);
        }
    }
    func_ov000_0215fb04(battle, member);

    if (notify && self->state != 0x11 && wasMember && func_020a36a8((Combatant020A36A8*)party)) {
        func_ov026_021dbf04(self);
        func_ov017_021cc050(party->netId);
    }
}
