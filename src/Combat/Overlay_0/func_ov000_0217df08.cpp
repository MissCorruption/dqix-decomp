#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Util/Random.h"
#include "Input/Input.h"

struct NameParts0217df08 { char* singular; char* plural; unsigned int flags; };

struct Rank0217df08 {
    char pad0[0xa];
    unsigned short level : 7;
    unsigned short rest : 9;
};

struct Combatant0217df08 {
    char pad0[0x144];
    Rank0217df08* rank;
};

struct Node0217df08 {
    char pad0[0xc];
    short fc;
};

struct Messages0217df08 {
    char pad0[0x10];
    void* names;
    char pad14[0x20 - 0x14];
    NameParts0217df08* parts;
    char pad24[0x30 - 0x24];
    signed char count30;
    signed char count31;
    char pad32[0x5c - 0x32];
    char* work;
    char* text;
    char pad64[0x998 - 0x64];
    int active;
};

struct Battle0217df08 {
    char pad0[0xb8];
    char messages[0x90c - 0xb8];
    int taskId;
    char pad910[0x950 - 0x910];
    int f950;
    unsigned char f954;
    unsigned char f955;
    char pad956[0x1d3c - 0x956];
    int combatantIds[8];
    char pad1d5c[0x1d60 - 0x1d5c];
    signed char commands[8];
    signed char index;
    char pad1d69[0x1d70 - 0x1d69];
    unsigned char state;
    char pad1d71;
    unsigned short flags;
};

extern "C" Messages0217df08* func_020421a0();
extern "C" Node0217df08* func_ov000_02161318(void* obj, int id);
extern "C" int func_ov000_02171a60(void*);
extern "C" void func_020e46c4(void*);
struct Container020e0310;
extern "C" const char* func_020e0434(Container020e0310*, int);
extern "C" void* memset(void* dst, int value, unsigned int length);
extern "C" int sprintf(char* buffer, const char* format, ...);
extern "C" Combatant0217df08* func_0200fea4(GameState*, int);
extern "C" void func_020e4ce8(NameParts0217df08*, Combatant0217df08*, int);
extern "C" int func_ov000_0217ff34(void* self, int id, int* amount);
extern "C" void func_02046380(Messages0217df08*);
extern "C" void func_020e4bf4(void*, int);
extern "C" void func_02042058(char*, const char*);
extern "C" char* func_020e046c(char* buf, void* data, unsigned int size, int idx);
extern "C" void func_02046608(Messages0217df08*, int, char*, char*, int, int, int);
extern "C" void __clear(void*, int);
extern "C" void func_ov000_0217aa08(char*, char*);
extern "C" void func_020e4f18(NameParts0217df08*, NameParts0217df08*, int);
#if !defined(jpn)
extern "C" void func_0204500c(Messages0217df08*, char*, int, int);
#endif
extern "C" void func_02043124(Messages0217df08*);
extern "C" void func_02043204(char*);
#if !defined(jpn)
extern "C" void func_ov000_0217c638(Battle0217df08* obj, int arg1, int arg2);
#endif
#if !defined(jpn)
extern "C" void func_ov000_02176e3c(Battle0217df08* obj, int zero, int val, int arg1, int arg2, int one);
#endif

extern const char data_ov000_02184070[];
extern const char data_ov000_0218408a[];

#if defined(jpn)
struct CombatantJ0217df08 {
    char pad0[0x144];
    Rank0217df08* rank;
    char pad148[0x14c - 0x148];
    char name[1];
};

struct MessagesJ0217df08 {
    char pad0[0x28];
    char* work;
    char* text;
    char pad30[0x868 - 0x30];
    int active;
};

struct BattleJ0217df08 {
    char pad0[0xb8];
    char messages[0x90c - 0xb8];
    int taskId;
    char pad910[0x950 - 0x910];
    int f950;
    unsigned char f954;
    unsigned char f955;
    char pad956[0x1f74 - 0x956];
    int combatantIds[8];
    char pad1f94[0x1f98 - 0x1f94];
    signed char commands[8];
    signed char index;
    char pad1fa1[0x1fa8 - 0x1fa1];
    unsigned char state;
    char pad1fa9;
    unsigned short flags;
};

struct Obj02046574;
extern "C" void func_02046574(Obj02046574*, int, char*);
extern "C" void func_020474a8(MessagesJ0217df08*, int, char*, char*);
extern "C" void func_0204500c(MessagesJ0217df08*, char*, int);
extern "C" void func_ov000_0217c638(BattleJ0217df08* obj, int arg1, int arg2);
extern "C" void func_ov000_02176e3c(BattleJ0217df08* obj, int zero, int val, int arg1, int arg2, int one);
extern const char data_ov000_021851cc[];

// USA: func_ov000_0217df08
extern "C" ARM void func_ov000_0217df08(BattleJ0217df08* self, int arg1, int arg2) {
    GameState* gs = GameState::GetInstance();
    MessagesJ0217df08* g = (MessagesJ0217df08*)func_020421a0();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();

    if (self->state == 0) {
        if (self->taskId >= 0) {
            loader->RemoveTask(self->taskId);
            self->taskId = -1;
        }
        self->taskId = loader->QueueLoadFile(data_ov000_021851cc, 0);
        self->state++;
    } else if (self->state == 1) {
        if (loader->GetTaskStatus(self->taskId) != 0) {
            void* data;
            unsigned int size;
            loader->GetLoadedFileByID(self->taskId, &data, &size);
            if (data != 0) {
                const char* separator = func_020e0434((Container020e0310*)self->messages, 6);
                char* work = g->work;
                char* text = g->text;
                memset(work, 0, 0x800);
                memset(text, 0, 0x800);
                int best = -1;
                char* bestName = 0;
                int appended;
                int i;
                int j;
                CombatantJ0217df08* c;
                int msg;
                Rank0217df08* rank;
                for (i = 0; i < arg2; i++) {
                    CombatantJ0217df08* c = (CombatantJ0217df08*)func_0200fea4(gs, self->combatantIds[i]);
                    if (c != 0) {
                        rank = c->rank;
                        if (rank == 0) {
                            return;
                        }
                        if (best < rank->level) {
                            best = rank->level;
                            bestName = c->name;
                        }
                    }
                }
                appended = 0;
                for (j = 0; j < arg2; j++) {
                    c = (CombatantJ0217df08*)func_0200fea4(gs, self->combatantIds[j]);
                    if (c != 0) {
                        int amount = -1;
                        msg = func_ov000_0217ff34(self, self->combatantIds[j], &amount);
                        if (msg >= 0) {
                            char* memberName = 0;
                            GameObject* member = gs->GetPartyMemberByIndex(amount);
                            if (member != 0) {
                                memberName = *(char**)((char*)member + 0x134);
                            }
                            func_02046380((Messages0217df08*)g);
                            func_02046574((Obj02046574*)g, 0, c->name);
                            func_02046574((Obj02046574*)g, 1, memberName);
                            if (appended != 0) {
                                func_02042058(text, separator);
                            }
                            appended = 1;
                            memset(work, 0, 0x800);
                            func_020e046c(work, data, size, msg);
                            func_02042058(text, work);
                            memset(work, 0, 0x800);
                            func_020474a8(g, 0xc, text, work);
                            memset(text, 0, 0x800);
                            sprintf(text, work);
                        }
                    }
                }
                if (appended == 0) {
                    short msg = 0;
                    msg = msg + (NextRandomMax(GetBTRandom(), 100) & 1);
                    if (self->f950 == 0 && self->f954 == 1) {
                        msg = self->f955 + 0x3c;
                    }
                    if (arg2 > 1) {
                        msg = msg + 2;
                    }
                    char name[0x40];
                    __clear(name, 0x40);
                    if (bestName != 0) {
                        func_ov000_0217aa08(bestName, name);
                    }
                    func_02046380((Messages0217df08*)g);
                    func_02046574((Obj02046574*)g, 2, name);
                    func_020e046c(text, data, size, msg);
                    func_020474a8(g, 0xc, text, work);
                }
                func_0204500c(g, work, 0);
                g->active = 1;
            }
            loader->RemoveTask(self->taskId);
            self->taskId = -1;
            self->state++;
        }
    } else if (self->state == 2) {
        if (g->active == 0 || g_keyManager.TestKeysPressed(0x800) != 0) {
            func_02043124((Messages0217df08*)g);
            func_02043204((char*)g);
            self->state = 0;
            self->commands[self->index] = 0;
            self->index = self->index - 1;
            func_ov000_0217c638(self, arg1, arg2);
            self->flags |= 0x100;
            func_ov000_02176e3c(self, 0, 1, arg1, arg2, 0);
        }
    }
}
#else
// USA: func_ov000_0217df08
extern "C" ARM void func_ov000_0217df08(Battle0217df08* self, int arg1, int arg2) {
    GameState* gs = GameState::GetInstance();
    Messages0217df08* g = func_020421a0();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();

    if (self->state == 0) {
        if (self->taskId >= 0) {
            loader->RemoveTask(self->taskId);
            self->taskId = -1;
        }
        self->taskId = loader->QueueLoadFileInGP2(data_ov000_02184070, data_ov000_0218408a, 0);
        self->state++;
    } else if (self->state == 1) {
        if (loader->GetTaskStatus(self->taskId) != 0) {
            void* data;
            unsigned int size;
            loader->GetLoadedFileByID(self->taskId, &data, &size);
            if (data != 0) {
                signed char present = 0;
                signed char ready = 0;
                for (int i = 0; i < 4; i++) {
                    Node0217df08* node = func_ov000_02161318(self, i);
                    if (node != 0) {
                        present++;
                        if (!func_ov000_02171a60(node)) {
                            if (node->fc != 0) {
                                ready++;
                            }
                        }
                    }
                }
                NameParts0217df08 names;
                NameParts0217df08 parts;
                NameParts0217df08 original;
                func_020e46c4(&names);
                func_020e46c4(&parts);
                const char* separator = func_020e0434((Container020e0310*)self->messages, 6);
                char* work = g->work;
                char* text = g->text;
                memset(work, 0, 0x960);
                memset(text, 0, 0x960);
                int best = -1;
                int i;
                int j;
                int appended;
                int msg;
                Rank0217df08* rank;
                for (i = 0; i < arg2; i++) {
                    Combatant0217df08* c = func_0200fea4(gs, self->combatantIds[i]);
                    if (c != 0) {
                        rank = c->rank;
                        if (rank == 0) {
                            return;
                        }
                        if (best < rank->level) {
                            func_020e4ce8(&parts, c, 1);
                            func_020e4ce8(&original, c, 0);
                            best = rank->level;
                        }
                    }
                }
                appended = 0;
                for (j = 0; j < arg2; j++) {
                    Combatant0217df08* c = func_0200fea4(gs, self->combatantIds[j]);
                    if (c != 0) {
                        int amount = -1;
                        msg = func_ov000_0217ff34(self, self->combatantIds[j], &amount);
                        if (msg >= 0) {
                            func_02046380(g);
                            func_020e4ce8(&parts, c, 1);
                            func_020e4ce8(&original, c, 0);
                            func_020e4bf4(&names, amount);
                            g->parts = &parts;
                            g->names = &names;
                            if (appended != 0) {
                                func_02042058(text, separator);
                            }
                            appended = 1;
                            memset(work, 0, 0x960);
                            func_020e046c(work, data, size, msg);
                            func_02042058(text, work);
                            memset(work, 0, 0x960);
                            g->count30 = present;
                            g->count31 = ready;
                            func_02046608(g, 0xc, text, work, 0xe3, 0, 1);
                            memset(text, 0, 0x960);
                            sprintf(text, work);
                        }
                    }
                }
                if (appended == 0) {
                    short msg = 0;
                    msg = msg + (NextRandomMax(GetBTRandom(), 100) & 1);
                    if (self->f950 == 0 && self->f954 == 1) {
                        msg = self->f955 + 0x3c;
                    }
                    if (arg2 > 1) {
                        msg = msg + 2;
                    }
                    func_02046380(g);
                    char singular[0x80];
                    __clear(singular, 0x80);
                    char plural[0x80];
                    __clear(plural, 0x80);
                    func_ov000_0217aa08(parts.singular, singular);
                    func_ov000_0217aa08(parts.plural, plural);
                    parts.singular = singular;
                    parts.plural = plural;
                    func_020e4f18(&original, &parts, 2);
                    parts.flags &= ~0x80000000;
                    g->parts = &parts;
                    func_020e046c(text, data, size, msg);
                    g->count30 = present;
                    g->count31 = ready;
                    func_02046608(g, 0xc, text, work, 0xe3, 0, 1);
                }
                g->count30 = present;
                g->count31 = ready;
                func_0204500c(g, work, 0, 0xe3);
                g->active = 1;
                g->count30 = -1;
            }
            loader->RemoveTask(self->taskId);
            self->taskId = -1;
            self->state++;
        }
    } else if (self->state == 2) {
        if (g->active == 0 || g_keyManager.TestKeysPressed(0x800) != 0) {
            func_02043124(g);
            func_02043204((char*)g);
            self->state = 0;
            self->commands[self->index] = 0;
            self->index = self->index - 1;
            func_ov000_0217c638(self, arg1, arg2);
            self->flags |= 0x100;
            func_ov000_02176e3c(self, 0, 1, arg1, arg2, 0);
        }
    }
}
#endif
