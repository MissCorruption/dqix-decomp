#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"
#include "std_library_functions.h"

struct StoreStruct { void* object; };
struct Status0215b964 { unsigned int flags; unsigned short currentHP; };
struct Combatant0215b964 {
    unsigned char padding_0[4];
    short id;
    unsigned char padding_6[0x12a];
    Status0215b964* status;
    BaseCombatStats* baseStats;
};
struct Detail0215b964 {
    unsigned char padding_0[0x16c];
    unsigned short values[13];
#if defined(jpn)
    unsigned char paddingAfterValues[0x8b8 - 0x186];
#else
    unsigned char paddingAfterValues[0x950 - 0x186];
#endif
    int selected;
};
struct TextBuffers0215b964 {
    char padding_0[0x8e0];
    char formatted[0x40];
    char input[0x40];
};
struct PartyMenu0215b964 {
    unsigned char padding_0[0x64];
    Container020e0310 texts;
#if defined(jpn)
    unsigned char paddingAfterTexts[0x585 - 0x64 - sizeof(Container020e0310)];
#else
    unsigned char padding_6c[0x10];
    TextBuffers0215b964* buffers;
    unsigned char padding_80[0x505];
#endif
    signed char cursor;
    unsigned char padding_586[0xa];
    unsigned char count;
    unsigned char combatants[1];
};
extern "C" int func_020421a0();
extern "C" int func_020e0434(Container020e0310*, int);
extern "C" int func_02053c6c(unsigned char*);
#if defined(jpn)
extern "C" int func_02042638(char*, int, int);
#else
extern "C" int func_02041fac(char*, int, int);
#endif
extern "C" int func_02041c08(char*, int, int, int, int, int);
extern "C" int func_02041ea4(char*, int);
extern "C" int func_02041e70(char*, int);
extern "C" int func_02041a90(char*, int, int);
extern "C" int func_02041a28(char*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" int func_02041b70(char*, int, const char*);
extern "C" void func_020e4bf4(void*, int);
extern "C" void func_02046380(void*);
extern "C" void func_02046608(void*, int, void*, void*, int, int, int);
extern "C" void func_020465c0(StoreStruct*, int, int);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" int func_020e51cc(int);

#if defined(jpn)
extern const char data_ov003_0217fe7f[];
extern "C" void __clear(void*, int);
extern "C" void func_020474a8(void*, int, char*, char*);
#endif

// JPN: func_ov003_0215b964 (0215cd60)
// USA: func_ov003_0215b964
extern "C" ARM void func_ov003_0215b964(PartyMenu0215b964* menu, char* output, int showFrame) {
#if !defined(jpn)
    TextBuffers0215b964* buffers;
#endif
    if (!output) return;
    StoreStruct* formatter = (StoreStruct*)func_020421a0();
    int cursor = menu->cursor;
#if !defined(jpn)
    buffers = menu->buffers;
#endif
    if (cursor == -1) {
#if defined(jpn)
        func_02042638(output, func_020e0434(&menu->texts, 10), 14);
#else
        func_02041fac(output, func_020e0434(&menu->texts, 10), 14);
#endif
    } else {
#if defined(jpn)
        func_02042638(output, func_020e0434(&menu->texts, 11), 14);
#else
        func_02041fac(output, func_020e0434(&menu->texts, 11), 14);
#endif
        if (showFrame) func_02041c08(output, cursor, 8, 5, 5, 5);
        func_02041ea4(output, cursor);
    }
    GameState* game = GameState::GetInstance();
    for (int index = 0; index < menu->count; ++index) {
        Combatant0215b964* combatant = (Combatant0215b964*)func_0200ff1c(game, menu->combatants[index]);
        Detail0215b964* detail = (Detail0215b964*)func_02053c6c((unsigned char*)combatant);
        float ratio;
        int maximumHP;
        Status0215b964* status = combatant->status;
        unsigned int flags = status->flags;
        maximumHP = combatant->baseStats->primaryStats.maxHP;
        if (0.0f == (float)maximumHP) ratio = 0.0f;
        else {
            float currentHP = (float)(int)status->currentHP;
            ratio = currentHP / (float)maximumHP;
        }
        if (flags & 1) func_02041e70(output, 9);
        else if (ratio <= 0.08f) func_02041e70(output, 11);
        else if (ratio <= 0.25f) func_02041e70(output, 13);
        else func_02041e70(output, 15);
#if defined(jpn)
        func_02041a28(output, 12);
#else
        func_02041a90(output, 12, index * 14 + 20);
#endif
        const char* name;
        if (cursor == -1) {
            name = combatant->baseStats->unk;
            func_02042058(output, name);
        } else {
            name = combatant->baseStats->unk;
            func_02041b70(output, index, name);
        }
#if defined(jpn)
        if (combatant->status->flags & 1)
            func_02042058(output, ((const char*)(func_020e0434(&menu->texts, 13))));
        else if (flags & 2)
            func_02042058(output, ((const char*)(func_020e0434(&menu->texts, 14))));
        else if (flags & 4)
            func_02042058(output, ((const char*)(func_020e0434(&menu->texts, 15))));
        if (!(combatant->status->flags & 1) && !(flags & 6)) {
            func_02046380(formatter);
            func_020465c0(formatter, 0, detail->values[detail->selected]);
            func_020465f0(((unsigned char*)(formatter)), 0, 2);
            func_020465d8(((unsigned char*)(formatter)), 0, 1);
            char formatted[0x40];
            __clear(formatted, sizeof(formatted));
            func_020474a8(formatter, 10, ((char*)(func_020e0434(&menu->texts, 12))), formatted);
            func_02042058(output, formatted);
        }
        if (index != menu->count - 1) func_02042058(output, data_ov003_0217fe7f);
#else
        memset(buffers->formatted, 0, 0x40);
        memset(buffers->input, 0, 0x40);
        func_02041a28(buffers->input, 0x40);
        if (combatant->status->flags & 1)
            func_02042058(buffers->input, (const char*)func_020e0434(&menu->texts, 13));
        else if (flags & 2)
            func_02042058(buffers->input, (const char*)func_020e0434(&menu->texts, 14));
        else if (flags & 4)
            func_02042058(buffers->input, (const char*)func_020e0434(&menu->texts, 15));
        unsigned int descriptor[3];
        func_020e4bf4(descriptor, combatant->id);
        func_02046380(formatter);
        formatter->object = descriptor;
        func_02046608(formatter, 10, buffers->input, buffers->formatted, 0x100, 0, 0);
        func_02042058(output, buffers->formatted);
        if (!(combatant->status->flags & 1) && !(flags & 6)) {
            func_02046380(formatter);
            func_020465c0(formatter, 0, detail->values[detail->selected]);
            func_020465f0((unsigned char*)formatter, 0, 2);
            func_020465d8((unsigned char*)formatter, 0, 1);
            memset(buffers->formatted, 0, 0x40);
            memset(buffers->input, 0, 0x40);
            func_02041a28(buffers->input, 0x40);
            func_02042058(buffers->input, (const char*)func_020e51cc(0x3f3));
            func_02042058(buffers->input, (const char*)func_020e0434(&menu->texts, 12));
            func_02046608(formatter, 10, buffers->input, buffers->formatted, 0x100, 0, 0);
            func_02042058(output, buffers->formatted);
        }
#endif
    }
}
