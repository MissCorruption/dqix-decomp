#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"
#include "Resource/CharacterCreationUI.h"
#include "Resource/ActionDataTables.h"
#include <std_library_functions.h>

struct Obj02048350;
struct StoreStruct;
struct Obj02046574 {
    void* actor;
    unsigned char unknown_4[12];
    void* target;
};
struct CommandEntry0215a0a4 {
    char* name;
    int unknown_4;
    unsigned int counter : 8;
    unsigned int unused : 24;
};
struct BattleTextState0215a0a4 {
    unsigned char unknown_0[0xbb8];
    int state;
    int nextState;
    int timer;
    unsigned char unknown_bc4[12];
    char* text;
    char* textCopy;
};
struct BattleMessage0215a0a4 {
    unsigned char unknown_0[8];
    unsigned char actorName[12];
    unsigned char targetName[12];
    Container020e0310 texts;
    unsigned char unknown_28[0x1000 - 0x28];
    BattleTextState0215a0a4 textState;
    unsigned char unknown_1bd8[0x1c20 - 0x1bd8];
    signed char actorId;
    signed char partyIndex;
    unsigned char unknown_1c22[4];
    short command;
    short messageKey;
    short alternateKey;
    unsigned char unknown_1c2c[5];
    unsigned char pending;
    unsigned char unknown_1c32[0x2488 - 0x1c32];
    short secondaryKey;
    unsigned char active;
};
struct ActionResult0215a0a4 {
    unsigned char kind;
    unsigned char unknown_1[5];
};
struct BattleEvent0215a0a4 {
    unsigned char unknown_0[2];
    signed char actor;
    unsigned char count;
    signed char targets[4];
    ActionResult0215a0a4 results[4];
};
struct PartyFlags0215a0a4 {
    unsigned char unknown_0[0x130];
    unsigned int* flags;
};

extern "C" void* func_020e2ff8();
extern "C" void func_020e3428(void*, int);
extern "C" Obj02046574* func_020421a0();
extern "C" CommandEntry0215a0a4* func_02079e2c(char*, int);
extern "C" void* func_020e46c4(void*);
extern "C" void func_02046574(Obj02046574*, int, char*);
extern "C" void func_020e4bf4(void*, int);
extern "C" int func_02048350(Obj02048350*, int);
extern "C" int func_0202b7d8(int*);
extern "C" int func_020e0434(Container020e0310*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" void func_020465c0(StoreStruct*, int, int);
extern "C" int* func_0202ae18();
extern "C" void func_02046380(void*);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_02046608(void*, int, int, void*, int, int, int);

static inline char* CombatantName0215a0a4(GameObject* target) { SDK_NULL_ASSERT(target); return target->baseStats_->unk; }

// USA: func_ov002_0215a0a4
extern "C" ARM void func_ov002_0215a0a4(BattleMessage0215a0a4* self, BattleEvent0215a0a4* event, int any) {
    GameObject* target;
    int rejectedKey;
    int* state;
    GameObject* actor;
    ActionResult0215a0a4* results;
    char* buffer;
    signed char* targetIds;
    GameState* gs;
    Obj02046574* message;
    CommandEntry0215a0a4* entry;
    int index;
    func_020e3428(func_020e2ff8(), 1);
    gs = GameState::GetInstance();
    message = func_020421a0();
    state = func_0202ae18();
    entry = func_02079e2c((char*)func_020797dc(), self->command);
    if (!entry) return;
    memset(self->textState.text, 0, 0x960);
    memset(self->textState.textCopy, 0, 0x960);
    func_02046380(message);
    buffer = self->textState.text;
    func_020e46c4(self->actorName);
    func_020e46c4(self->targetName);
    actor = func_0200ff1c(gs, event->actor);
    if (actor) {
        func_02046574(message, 0, actor->baseStats_->unk);
        func_020e4bf4(self->actorName, event->actor);
        message->actor = self->actorName;
    }
    func_02046574(message, 1, entry->name);
    if (self->command == 0x1e || self->command == 0x1f || self->command == 0x20 ||
        self->command == 0x21 || self->command == 0x23 || self->command == 0x26 || self->command == 0x27) {
        self->active = 1;
        self->messageKey = 0x232d;
        self->alternateKey = -1;
        GameObject* party = gs->GetPartyMemberByIndex(self->partyIndex);
        int consumed = 0;
        if (any && party) {
            if (self->command == 0x1e || self->command == 0x1f || self->command == 0x20 || self->command == 0x21) {
                self->secondaryKey = 0x232c;
                consumed = 1;
            } else if (self->command == 0x23) {
                self->secondaryKey = 0x794b;
                consumed = 1;
            } else if (self->command == 0x27 || self->command == 0x26) {
                self->secondaryKey = 0x2336;
                consumed = 1;
            }
        } else if (!party) {
            self->messageKey = 0x232d;
            self->secondaryKey = 0x232b;
        } else if (*((PartyFlags0215a0a4*)party)->flags & 1) {
            if (self->command == 0x26) {
                self->secondaryKey = 0x2337;
                consumed = 1;
            } else {
                self->secondaryKey = 0x232b;
            }
        } else if (event->results[0].kind == 1) {
            self->messageKey = 0x232d;
            self->secondaryKey = 0x232b;
        } else {
            self->messageKey = 0x2333;
            self->secondaryKey = 0x2334;
        }
        self->textState.state = 0x26;
        self->textState.nextState = 0x11;
        self->textState.timer = 0;
        if (consumed) {
            func_02048350((Obj02048350*)actor, entry->counter);
            if (func_0202b7d8(state)) func_ov017_021c9e00(self->actorId, 0, 0, 1);
        }
        return;
    }
    if (self->command != 0x22 && self->command != 0x310) return;
    if (any) {
        func_02046608(message, 0xc, func_020e0434(&self->texts, 0x232d), buffer + 0x860, 0xe3, 0, 1);
        func_02042058(self->textState.text, buffer + 0x860);
        results = event->results;
        rejectedKey = 0x232c;
        index = 0;
        targetIds = event->targets;
        while (index < event->count) {
            int key = results[index].kind == 3 ? rejectedKey : 0x233a;
            if (key >= 0) {
                target = func_0200ff1c(gs, targetIds[index]);
                if (target) {
                    func_02046380(message);
                    func_02046574(message, 2, CombatantName0215a0a4(target));
                    func_020e4bf4(self->targetName, targetIds[index]);
                    message->target = self->targetName;
                    func_020465c0((StoreStruct*)message, 9, target->obj3D_.unknown_4_);
                    func_02046608(message, 0xc, func_020e0434(&self->texts, key), buffer + 0x860, 0xe3, 0, 1);
                    func_02042058(self->textState.text, (const char*)func_020e0434(&self->texts, 8));
                    func_02042058(self->textState.text, buffer + 0x860);
                }
            }
            index++;
        }
        func_02048350((Obj02048350*)actor, entry->counter);
        if (func_0202b7d8(state)) func_ov017_021c9e00(self->actorId, 0, 0, 1);
    } else {
        target = gs->GetUnknownGameObject();
        if (target) {
            func_02046574(message, 2, CombatantName0215a0a4(target));
            func_020e4bf4(self->targetName, target->obj3D_.unknown_4_);
            message->target = self->targetName;
        }
        func_02042058(buffer + 0x860, (const char*)func_020e0434(&self->texts, 0x2333));
        func_02042058(buffer + 0x860, (const char*)func_020e0434(&self->texts, 8));
        if (func_02011538(gs) == 1)
            func_02042058(buffer + 0x860, (const char*)func_020e0434(&self->texts, 0x2334));
        else
            func_02042058(buffer + 0x860, (const char*)func_020e0434(&self->texts, 0x2335));
        func_02046608(message, 0xc, (int)(buffer + 0x860), self->textState.text, 0xe3, 0, 1);
    }
    self->pending = 1;
    memcpy(self->textState.textCopy, self->textState.text, 0x960);
    self->secondaryKey = -1;
    self->active = 0;
}
