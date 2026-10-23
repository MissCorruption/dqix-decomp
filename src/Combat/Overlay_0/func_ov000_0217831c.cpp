#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Combat/Main/BattleList.h>

struct UnkStruct0205c508;
struct Container020e0310;
struct Container020dedd0;
struct Outer_02054000;
struct ItemNameEntry {
    unsigned int id;
    const char* name;
};
struct ActiveSub02054000 {
    unsigned char unk00[0x18];
    short itemKey;
};

struct BattleItemMenu {
    unsigned char unk0000[0x26];
    short itemKeys[37];
    signed char combatantIds[0x48];
    unsigned char textTable[0x48];
    unsigned char itemTable[0xdc];
#if defined(jpn)
    unsigned char range[0x1dc7];
#else
    unsigned char range[0x1b8f];
#endif
    signed char currentCombatant;
    unsigned char unk1d6c[3];
    signed char cursor;
};

extern "C" void func_0205c508(struct UnkStruct0205c508* s, int* first, int* last);
extern "C" const char* func_020e0434(struct Container020e0310* c, int key);
extern "C" struct ActiveSub02054000* func_02054000(struct Outer_02054000* p);
extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" struct ItemNameEntry* func_020dedd0(struct Container020dedd0* c, int key);
extern "C" void func_0206819c(const char* src, char* dst, int flag);
extern "C" int func_02042058(char* dst, const char* src);
#if defined(jpn)
extern "C" int func_02042158(char* dst, int w);
#define func_02041acc func_02042158
#else
extern "C" int func_02041acc(char* dst, int w);
#endif
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" void __clear(void* dst, unsigned int size);

// USA: func_ov000_0217831c
extern "C" ARM void func_ov000_0217831c(BattleItemMenu* menu, char* dst)
{
    int first;
    int last;
    func_0205c508((struct UnkStruct0205c508*)menu->range, &first, &last);
    signed char start = first;
    signed char end = last;
    struct Container020e0310* texts = (struct Container020e0310*)menu->textTable;
    const char* separator = func_020e0434(texts, 0);
    signed char cursor = menu->cursor;
    const char* unknownName = func_020e0434(texts, 5);
    int n = 0;
    signed char combatantId = menu->combatantIds[menu->currentCombatant];
    int selectedKey = -1;
    GameState* state = GameState::GetInstance();
    GameObject* combatant = func_0200ff1c(state, combatantId);
    struct ActiveSub02054000* sub = func_02054000((struct Outer_02054000*)combatant);
    if (sub != NULL) {
        selectedKey = sub->itemKey;
    }
    if (func_ov000_0217542c(menu)) {
        func_02041c08(dst, cursor - start, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor - start);
    for (signed char i = start; i < end; i++) {
        char line[0x40];
        __clear(line, sizeof(line));
        int key = menu->itemKeys[i];
        struct ItemNameEntry* item = func_020dedd0((struct Container020dedd0*)menu->itemTable, key);
        const char* name = unknownName;
        if (item != NULL) {
#if defined(jpn)
            name = item->name;
#else
            char text[0x100];
            __clear(text, sizeof(text));
            func_0206819c(item->name, text, 0);
            name = text;
#endif
        }
        if (selectedKey == key) {
            func_02042058(line, func_020e0434(texts, 0x13));
#if !defined(jpn)
            func_02041acc(line, 3);
#endif
        } else {
            func_02041acc(line, 8);
        }
        func_02042058(line, name);
        func_02041b70(dst, n, line);
        if (i != end - 1) {
            func_02042058(dst, separator);
        }
        n++;
    }
}
