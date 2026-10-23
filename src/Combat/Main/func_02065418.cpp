#include <globaldefs.h>
#if defined(jpn)
enum { kRegionalFieldOffset = 0x34ec };
#else
enum { kRegionalFieldOffset = 0x36fc };
#endif

#include "GameState/GameState.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/OverlayId.h"

struct HeadNode02046b24;

extern "C" int func_020a18f4(unsigned int idx);
extern "C" int func_0200fb8c(int* obj);
extern "C" int func_02046b24(HeadNode02046b24** head);

static inline int GetVisiblePlanes() {
    return (int)((*(volatile unsigned int*)0x4000000 & 0x1f00) >> 8);
}

static inline void SetVisiblePlanes(int planes) {
    *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | (planes << 8);
}

// USA: func_02065418
extern "C" ARM void func_02065418(int keepPlanes) {
    if (!func_020a18f4(OVERLAY_ID(17))) {
        return;
    }
    HeadNode02046b24** head = *(HeadNode02046b24***)((char*)func_0200fb8c((int*)GameState::GetInstance()) + kRegionalFieldOffset);
    if (head == NULL) {
        return;
    }
    if (func_02046b24(head) == 0x2d) {
        return;
    }
    if (func_02046b24(head) == 0x2a) {
        return;
    }
    if (keepPlanes != 0) {
        return;
    }
    SetVisiblePlanes(GetVisiblePlanes() | 0x10);
    ColorEffect_ConfigureAlphaBlend(0x4000050, 2, 1, 10, 6);
}
