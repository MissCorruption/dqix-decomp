#include <globaldefs.h>
#if defined(jpn)
enum { kSlotsPointerOffset = 0x144 };
#else
enum { kSlotsPointerOffset = 0x150 };
#endif
#include "GameState/GameState.h"

struct Element020de650 { unsigned int v[8]; };
struct ElementFlagsWord020de650 {
    unsigned int kind : 4;
    unsigned int : 27;
    unsigned int topFlag : 1;
};
struct Container020dedd0;
struct Slots0208386c { unsigned char pad[0x454]; short slots[8]; };
struct S_a0504;

extern "C" struct Element020de650* func_020dedd0(struct Container020dedd0* c, int key);
extern "C" int func_020ddb20(unsigned int* obj);
extern "C" void func_0208386c(struct Slots0208386c* s, int idx);
extern "C" int func_020ac4c0(void* dst);
extern "C" void func_020a0504(struct S_a0504* p, unsigned int amount);
extern "C" int func_020ac494(void* src);

// USA: func_020ddcbc
extern "C" ARM int func_020ddcbc(int n, int idx, struct Container020dedd0* container) {
    GameObject* combatant;
    short* slotsArr;
    struct Element020de650* elem;
    int inRange;
    char localBuf[0xb0];

    inRange = (n >= 0 && n <= 3);
    if (!inRange) return 0;
    if (container == 0) return 0;
    if (idx < 0 || idx >= 8) return 0;

    combatant = func_0200ff1c(GameState::GetInstance(), n);
    if (combatant == 0) return 0;

    slotsArr = (short*)((char*)(*(struct Slots0208386c**)((char*)combatant + kSlotsPointerOffset)) + 0x454);
    if (slotsArr == 0) return 0;

    elem = func_020dedd0(container, slotsArr[idx]);
    if (elem == 0) return 0;
    if (!func_020ddb20(elem->v)) return 0;

    switch (((struct ElementFlagsWord020de650*)&elem->v[2])->kind) {
        case 8:
        case 9:
        case 0xa:
            func_0208386c(*(struct Slots0208386c**)((char*)combatant + kSlotsPointerOffset), (signed char)idx);
            break;
    }

    if (((struct ElementFlagsWord020de650*)&elem->v[2])->topFlag) {
        func_020ac4c0(localBuf);
        func_020a0504((struct S_a0504*)localBuf, 1);
        func_020ac494(localBuf);
    }
    return 1;
}
