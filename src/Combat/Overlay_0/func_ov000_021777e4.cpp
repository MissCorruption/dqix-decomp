#include <globaldefs.h>
#include "GameState/GameState.h"

struct Container020e0310;

struct PartyInfo_021777e4 {
    char pad0[0xf7c];
    unsigned char memberCount;
};

struct MenuEntry_021777e4 {
    char pad0[0x24];
    unsigned char flags;
    char pad25[0x4c - 0x25];
    int memberIndex;
#if defined(jpn)
    char pad50[0x88 - 0x50];
    char nameSlot[0x488 - 0x88];
#else
    char pad50[0x68 - 0x50];
    char nameSlot[0x448 - 0x68];
#endif
};

struct MemberInfo_021777e4 {
#if defined(jpn)
    char pad0[0x8b4];
#else
    char pad0[0x94c];
#endif
    int vocation;
};

struct Menu_021777e4 {
    char pad0[0x6c];
    signed char order[0xb8 - 0x6c];
    char strings[0x958 - 0xb8];
    MenuEntry_021777e4 entries[4];
#if defined(jpn)
    char pad[0x1fa3 - 0x958 - 4 * 0x488];
#else
    char pad[0x1d6b - 0x958 - 4 * 0x448];
#endif
    signed char cursor;
    char pad1d6c[0x1d74 - 0x1d6c];
    unsigned char choices[8];
};

extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" MemberInfo_021777e4* func_02053c6c(unsigned char* obj);
extern "C" void __clear(void* dst, int size);
extern "C" int func_ov000_02170c7c(MenuEntry_021777e4* entry);
extern "C" int func_02041dd0(char* dst, int value);
#if defined(jpn)
extern "C" void func_0203bdf4(char* slot, char* out);
#define func_0203c248 func_0203bdf4
#else
extern "C" void func_0203c248(char* slot, char* out);
#endif
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02041a28(char* dst, int x);
extern "C" const char* func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" const char* func_020e51cc(int key);
#if defined(jpn)
extern char data_ov000_02185160[];
#endif

static inline int IsPartyIndex(int i) {
    return i >= 0 && i <= 3;
}

// USA: func_ov000_021777e4
extern "C" ARM void func_ov000_021777e4(Menu_021777e4* menu, char* dst) {
    if (dst == NULL) return;

    MenuEntry_021777e4* entry;
    GameState* gs;
    int cursor;
    int n;
    PartyInfo_021777e4* party;
    unsigned char i;
    GameObject* obj;
    MemberInfo_021777e4* info;
    signed char vocation;
#if defined(jpn)
    char name[0x20];
#else
    char name[0x80];
#endif
    int member;

    gs = GameState::GetInstance();
    cursor = menu->cursor;
    n = 0;

    if (func_ov000_0217542c(menu)) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    party = (PartyInfo_021777e4*)func_02010828(gs);
    for (i = 0; i < party->memberCount; i++) {
        entry = &menu->entries[menu->order[i]];
        member = entry->memberIndex;
        if (!IsPartyIndex(member)) continue;
        if (entry->flags & 2) continue;

        obj = gs->GetPartyMemberByIndex(member);
        if (obj == NULL) return;
        info = func_02053c6c((unsigned char*)obj);
        __clear(name, sizeof(name));
        vocation = info->vocation;

        func_02041dd0(dst, func_ov000_02170c7c(entry));
        func_0203c248(entry->nameSlot, name);
        func_02041b70(dst, n, name);
        func_02041a28(dst, 0x4e);
        func_02041dd0(dst, 0);
        func_02042058(dst, func_020e0434((struct Container020e0310*)menu->strings, (short)(vocation + 0x753e)));
        func_02042058(dst, func_020e0434((struct Container020e0310*)menu->strings, 0));
        menu->choices[n] = member;
        n++;
    }
    menu->choices[n] = 4;
#if defined(jpn)
    func_02041b70(dst, n, data_ov000_02185160);
#else
    func_02041b70(dst, n, func_020e51cc(0x1a));
#endif
}
