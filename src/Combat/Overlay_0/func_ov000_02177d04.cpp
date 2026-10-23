#include <globaldefs.h>
#include "GameState/GameState.h"

struct Container020e0310;
struct Outer_02054000;

struct ActiveSub_02054000 {
    int unk_0;
    const char* name;
};

extern "C" void* func_02010828(GameState* battleStruct);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" void* func_ov000_02161318(void* obj, int index);
extern "C" GameObject* func_0200ff1c(GameState* gameState, int combatantId);
extern "C" int func_ov000_02170c7c(void* obj);
extern "C" int func_02041dd0(char* dst, int code);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02041a28(char* dst, int x);
extern "C" ActiveSub_02054000* func_02054000(struct Outer_02054000* p);
extern "C" void* __clear(void* dst, int count);
extern "C" void func_0206819c(const char* src, char* dst, int flag);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov000_02177d04
extern "C" ARM void func_ov000_02177d04(char* base, char* dst) {
    GameState* gs = GameState::GetInstance();
    unsigned char count = *((unsigned char*)func_02010828(gs) + 0xf7c);
    const char* sep = (const char*)func_020e0434((struct Container020e0310*)(base + 0xb8), 0);
#if defined(jpn)
    signed char cursor = *(signed char*)(base + 0x1f00 + 0xa3);
#else
    signed char cursor = *(signed char*)(base + 0x1d00 + 0x6b);
#endif

    if (func_ov000_0217542c(base)) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    for (unsigned char i = 0; i < count; i++) {
        signed char id = *(signed char*)(base + 0x70 + i);
        void* entry = func_ov000_02161318(base, id);
        if (entry == 0) {
            continue;
        }
        GameObject* combatant = func_0200ff1c(gs, id);
        if (combatant == 0) {
            continue;
        }
        func_02041dd0(dst, func_ov000_02170c7c(entry));
        func_02041b70(dst, i, combatant->baseStats_->unk);
        func_02041a28(dst, 0x46);
        func_02041dd0(dst, 0);
        ActiveSub_02054000* sub = func_02054000((struct Outer_02054000*)combatant);
        if (sub != 0) {
#if defined(jpn)
            func_02042058(dst, sub->name);
#else
            char text[0x100];
            __clear(text, 0x100);
            func_0206819c(sub->name, text, 0);
            func_02042058(dst, text);
#endif
        }
        if (i != count - 1) {
            func_02042058(dst, sep);
        }
    }
}
