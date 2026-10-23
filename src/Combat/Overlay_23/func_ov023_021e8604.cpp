#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

namespace {
struct ProfileValueState {
    unsigned char unknown0[0x4c];
    Container020e0310 messages;
    unsigned char unknown54[0x5d8 - 0x54];
    char* text;
};
}

extern "C" void* func_02010828(GameState* battleStruct);
extern "C" int func_020421a0(void);

struct StoreStruct;
extern "C" void func_020465c0(struct StoreStruct* base, int index, int value);
extern "C" void func_020465d8(unsigned char* base, int index, unsigned char value);
extern "C" void func_020465f0(unsigned char* base, int index, unsigned char value);

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);

#if defined(jpn)
extern "C" void func_020474a8(void* messages, unsigned char font, const char* format, char* output);
#else
extern "C" void func_02046608(int a, int b, void* c, void* d, int e, int f, int g);
#endif

struct Combatant021e8604 { char pad[0xf74]; int val; };

// USA: func_ov023_021e8604
// JPN: func_ov023_021e8574
extern "C" ARM void func_ov023_021e8604(void* obj) {
    ProfileValueState* state = static_cast<ProfileValueState*>(obj);
    GameState* battleStruct = GameState::GetInstance();
    Combatant021e8604* combatant = static_cast<Combatant021e8604*>(func_02010828(battleStruct));
    int field = func_020421a0();
    func_020465c0((struct StoreStruct*)field, 0, combatant->val);
    func_020465d8((unsigned char*)field, 0, 1);
    func_020465f0((unsigned char*)field, 0, 0xa);
    int key = func_020e0434(&state->messages, 2);
#if defined(jpn)
    func_020474a8(((void*)(field)), 0xa, ((const char*)(key)), state->text);
#else
    func_02046608(field, 0xa, ((void*)(key)), state->text, 0x100, 0, 0);
#endif
}
