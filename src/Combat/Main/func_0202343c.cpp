#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#if defined(jpn)
#define func_020e0f74 func_020e2b6c
#define func_02026f34 func_02026898
#endif

#include "Resource/Brightness.h"

struct FlagWord02046708;
struct List0209497c;
struct List020949bc;
struct Obj020235c8;
struct ScrollState02027438;

extern "C" void *func_020d6c00();
extern "C" int func_02046708(FlagWord02046708 *flags, unsigned int mask);
extern "C" int *func_020936f8();
extern "C" int func_0209497c(List0209497c *list, int key);
extern "C" int func_020949bc(List020949bc *list, int key);
extern "C" void func_02093a58(char *list);
extern "C" void func_02093a98(char *list);
extern "C" int func_020e0a78(void *receiver);
extern "C" void func_020e0f74(void *receiver);
extern "C" void func_02026f34(void *receiver);
extern "C" void func_020235c8(Obj020235c8 *receiver);
extern "C" void func_02027438(ScrollState02027438 *receiver);

struct CombatUpdateReceiverView {
    unsigned char unknown0[IS_JPN ? 0x6b8 : 0x764];
    unsigned char field764;
    unsigned char unknown765[0x778 - 0x765];
    unsigned char field778;
    unsigned char unknown779[0x9c2 - 0x779];
    signed char loadState;
    unsigned char field9c3;
    unsigned char brightnessPending;
    unsigned char unknown9c5;
    unsigned char field9c6;
    unsigned char field9c7;
    unsigned char brightnessDelay;
};

// USA: func_0202343c
extern "C" ARM void func_0202343c(void *receiver) {
    CombatUpdateReceiverView *state = static_cast<CombatUpdateReceiverView *>(receiver);
    if (func_02046708(static_cast<FlagWord02046708 *>(func_020d6c00()), 0x41)) return;

    GameResources *resources = GetGameResources();
    int *list                = func_020936f8();
    if (state->field9c3 || state->loadState <= 0) {
        if (func_0209497c(reinterpret_cast<List0209497c *>(list), 4)) {
            func_02093a58(reinterpret_cast<char *>(list));
        }
        return;
    }
    if (func_020949bc(reinterpret_cast<List020949bc *>(list), 4)) {
        func_02093a98(reinterpret_cast<char *>(list));
    }
    if (state->field764) {
        if (state->field778) {
            func_020e0a78(receiver);
            state->field778 = 0;
        }
        func_020e0f74(receiver);
    } else {
        func_02026f34(receiver);
        func_020235c8(static_cast<Obj020235c8 *>(receiver));
    }
    if (func_0209497c(reinterpret_cast<List0209497c *>(list), 4)) {
        state->field9c6          = 0;
        state->field9c7          = 0;
        state->brightnessPending = 1;
        state->brightnessDelay   = 0;
    }
    if (IsBrightnessWithinValidRange((GameResources*)resources, false) && IsBrightnessOutsideValidRange((GameResources*)resources, true)) {
        if (state->field9c6 || state->field9c7) return;
        if (!state->brightnessPending) return;
        if (state->brightnessDelay) {
            state->brightnessDelay--;
            return;
        }
        func_02027438(static_cast<ScrollState02027438 *>(receiver));
        SetSubBrightness(resources, 0, 25);
        state->brightnessPending = 0;
    } else {
        if (IsBrightnessZero((GameResources*)resources, true)) state->brightnessPending = 0;
    }
}
