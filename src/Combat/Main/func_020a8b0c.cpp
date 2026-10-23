#include <globaldefs.h>
#if defined(jpn)
enum { kManagerPrefix = 0x34ec };
#else
enum { kManagerPrefix = 0x36fc };
#endif
#include <GameState/GameState.h>
#include <std_library_functions.h>
#include "Resource/GameResources.h"
struct Obj020a8b0c { char pad[4]; unsigned char mask; char pad2[3]; int progress, step, limit; signed char count; };
struct Actor020a8b0c { Object3D obj; short height, y; };
struct Field020a8b0c { char pad[0xc]; unsigned char flag; };
struct HeadNode02046b24;
struct Party020874bc;
struct Manager020a8b0c { char pad[kManagerPrefix]; HeadNode02046b24** head; };
struct Obj020397cc;
struct Obj02033874;
extern "C" Field020a8b0c* func_0200fd0c(GameState*);
extern "C" void func_020397cc(Obj020397cc*, int);
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" void func_0205eb80(void*);
extern "C" void func_0205eb54(void*, int, int);
extern "C" void func_0205eb90(void*, int, int);
extern "C" void func_02033874(Obj02033874*, int);
extern "C" void func_020874bc(Party020874bc*, int);
int fix32abs(int);
extern char data_02108760;
// USA: func_020a8b0c
extern "C" ARM void func_020a8b0c(Obj020a8b0c* self, int index) {
    if (!(self->mask & (1<<index))) return;
    GameState* state = GameState::GetInstance();
    Actor020a8b0c* actor = (Actor020a8b0c*)state->GetPartyMemberByIndex(index);
    Field020a8b0c* field = func_0200fd0c(state);
    Party020874bc* party;
    HeadNode02046b24** head = ((Manager020a8b0c*)GetGameResources())->head;
    party = (Party020874bc*)func_02010828(state);
    int height = actor->height;
    field->flag = 0;
    func_020397cc((Obj020397cc*)actor, 1);
    self->progress+=self->step;
    if (self->limit < self->progress) self->progress = self->limit;
    int difference;
    if (func_02046b24(head) == 3) { difference = -3686; actor->obj.DisableFlag(0x8000100); }
    else {
        difference = height-self->progress;
        if (fix32abs(difference) < 40) {
            func_0205eb80(&data_02108760);
            func_0205eb54(&data_02108760, 114, 114);
            func_0205eb90(&data_02108760, 3, 0);
        }
    }
    actor->height = difference;
    if (difference < 0) {
        int y = actor->y;
        func_02033874((Obj02033874*)actor, y+labs(difference));
        func_020874bc(party, self->count);
        int count = self->count;
        if (count > 0) count--;
        self->count = count;
    }
}
