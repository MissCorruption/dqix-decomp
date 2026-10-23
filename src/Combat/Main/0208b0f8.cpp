#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Base02010834;
struct Container020e34bc;
struct Entry020e3054;
struct Combatant02048228;
struct Combatant02048284;
extern "C" void* func_0205ec34();
extern "C" void* func_0202ae18();
extern "C" void* func_02012fe4();
extern "C" void* __clear(void*, int);
extern "C" void func_0206f81c(void*);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_02010834(Base02010834*, int, int*, int*);
extern "C" int func_02046b08(void**);
extern "C" int func_020649b0(void*, int, void*);
extern "C" void* func_020e2ff8();
extern "C" int func_020e34bc(Container020e34bc*, int);
extern "C" int func_0202b7d8(int*);
extern "C" unsigned char func_02039d7c(char*);
extern "C" int func_020852a4(unsigned char*);
extern "C" int func_02085318(unsigned char*);
extern "C" void func_020e3368(unsigned char*, unsigned char);
extern "C" void func_02026f08(unsigned char*, int, int);
extern "C" int func_02048228(Combatant02048228*, int);
extern "C" int func_02048284(Combatant02048284*, int);
extern "C" void func_020e3428(void*, int);
extern "C" void func_020e3468(Entry020e3054*, int);

struct Actor0208b0f8 {
    char pad0[4];
    short slot;
    char pad6[0xb2 - 6];
    short active;
    char padb4[0x130 - 0xb4];
    unsigned int* restorationState;
#if defined(jpn)
    char pad134[0x144 - 0x134];
#else
    char pad134[0x150 - 0x134];
#endif
    unsigned char* skills;
};
struct State0208b0f8 {
    char pad0[0x94];
    unsigned char hpTimers[4];
    unsigned char mpTimers[4];
    unsigned char enabled;
    char pad9d[0xa8 - 0x9d];
    unsigned char countdown;
};
struct Record0208b0f8 {
    char pad0[0xc];
    unsigned int zone;
    char pad10[0x30 - 0x10];
    void* nodes;
};

// USA: func_0208b0f8
extern "C" ARM void func_0208b0f8(void* receiver) {
    State0208b0f8* self = (State0208b0f8*)receiver;
    GameState* game;
    void* data;
    GameResources* resources;
    int* search;
    unsigned char* flags;
    unsigned int blocked;
    int changed;
    void** list;
    void* entries;
    unsigned char* mpTimer;
    unsigned char* hpTimer;
    Actor0208b0f8* leader;
    int i;
    int status;
    Actor0208b0f8* party;
    int hp;
    int mp;
    game = GameState::GetInstance();
    resources = GetGameResources();
    leader = (Actor0208b0f8*)game->GetUnknownGameObject();
    data = func_0205ec34();
    func_02010828(game);
    search = (int*)func_0202ae18();
    flags = (unsigned char*)resources->unknown_ptr_36d0;
    list = (void**)resources->unknown_ptr_array_36fc[0];
    if (leader == NULL) return;
    blocked = TestFlags04(resources, 0x10);
    int ids[4];
    int count;
    __clear(ids, sizeof(ids));
    func_02010834((Base02010834*)game, leader->slot, ids, &count);
    if (func_02046b08(list) && leader->active != 0 && self->countdown != 0) {
        self->countdown--;
        if (self->countdown == 0) {
            Record0208b0f8 record;
            record.zone = *(unsigned short*)func_02012fe4();
            if (func_020649b0(data, 0x19, &record)) {
                func_0206f81c(&record);
            }
        }
    }
    entries = func_020e2ff8();
    changed = 0;
    hpTimer = self->hpTimers;
    mpTimer = self->mpTimers;
    for (i = 0; i < count; i++) {
        status = func_020e34bc((Container020e34bc*)entries, 1);
        party = (Actor0208b0f8*)game->GetPartyMemberByIndex(ids[i]);
        if (!func_0202b7d8(search) || (func_0202b7d8(search) && status != 1)) {
            if (party == NULL || leader->active == 0 || func_02039d7c((char*)leader) != 0 ||
                (party->restorationState[0] & 1) || !func_02046b08(list)) {
                changed = 1;
                continue;
            }
        }
        hp = func_020852a4(party->skills);
        if (hp > 0 && self->enabled && !blocked) {
            if (hpTimer[i] == 0) {
                if (status != 2 && status != 1) func_020e3368((unsigned char*)entries, 1);
                if (status == 1) {
                    func_02026f08(flags, (unsigned char)ids[i], 0);
                    if (!(party->restorationState[0] & 1)) func_02048228((Combatant02048228*)party, hp);
                    hpTimer[i] = 0x28;
                    if (func_0202b7d8(search)) func_ov017_021c9e00(ids[i], 1, 0, 0);
                    changed = 1;
                }
            } else hpTimer[i]--;
        }
        mp = func_02085318(party->skills);
        if (mp > 0 && self->enabled && !blocked) {
            if (mpTimer[i] == 0) {
                if (status != 2 && status != 1) func_020e3368((unsigned char*)entries, 1);
                if (status == 1) {
                    func_02026f08(flags, (unsigned char)ids[i], 0);
                    if (!(party->restorationState[0] & 1)) func_02048284((Combatant02048284*)party, mp);
                    mpTimer[i] = 0x28;
                    if (func_0202b7d8(search)) func_ov017_021c9e00(ids[i], 1, 1, 0);
                    changed = 1;
                }
            } else mpTimer[i]--;
        }
    }
    if (changed) {
        int status = func_020e34bc((Container020e34bc*)entries, 1);
        if (status == 1) func_020e3428(entries, 1);
        else if ((unsigned int)(status - 3) <= 2) func_020e3468((Entry020e3054*)entries, 1);
    }
}
