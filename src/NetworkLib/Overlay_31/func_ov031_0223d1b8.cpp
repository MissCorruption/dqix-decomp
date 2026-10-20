#include <globaldefs.h>
#include "NitroSDK/TouchScreen.h"

typedef struct TouchPos_0223d1b8 TouchPos_0223d1b8;
struct TouchPos_0223d1b8 {
    unsigned short x;
    unsigned short y;
};

typedef struct InputState_0223d1b8 InputState_0223d1b8;
struct InputState_0223d1b8 {
    TouchScreenSample samples[5];
    TouchPos_0223d1b8 cur;
    TouchPos_0223d1b8 prev;
    unsigned short mask;
    unsigned short pressed;
    unsigned short pressedOrRepeat;
    unsigned short released;
    unsigned char touch : 1;
    unsigned char trg : 1;
    unsigned char rep : 1;
    unsigned char rls : 1;
    unsigned char otherFlags : 4;
};

typedef struct InputGlobal_0223d1b8 InputGlobal_0223d1b8;
struct InputGlobal_0223d1b8 {
    unsigned char enabled;
    unsigned char tpCounter;
    unsigned char pad[2];
    InputState_0223d1b8* inner;
};

extern InputGlobal_0223d1b8 data_ov031_02290d40;

extern "C" void func_ov031_0223cb10(unsigned short a, unsigned short b, TouchPos_0223d1b8* out);
extern "C" int FastIntModulus(int a, int b);

// USA: func_ov031_0223d1b8
extern "C" ARM void func_ov031_0223d1b8(void) {
    int i;
    unsigned char found;
    int prev;
    int idx;
    TouchScreenSample tp;

    prev = data_ov031_02290d40.inner->touch ? 1 : 0;
    found = 0;
    idx = GetCurrentTouchScreenSampleIndex();
    data_ov031_02290d40.inner->prev = data_ov031_02290d40.inner->cur;
    i = 0;
    do {
        TouchScreenSample* s = &data_ov031_02290d40.inner->samples[idx];
        if (s->isHeld == 1 && s->missingCoordFlags == 0) {
            found = 1;
            ConvertTouchScreenSampleToPixels(&tp, s);
            func_ov031_0223cb10(tp.x, tp.y, &data_ov031_02290d40.inner->cur);
            break;
        }
        i++;
        idx = FastIntModulus(idx + 4, 5);
    } while (i < 4);

    data_ov031_02290d40.inner->trg = found & (found ^ prev);
    data_ov031_02290d40.inner->rls = prev & (found ^ prev);
    data_ov031_02290d40.inner->touch = found;
    data_ov031_02290d40.inner->rep = data_ov031_02290d40.inner->trg;

    if (!found) {
        data_ov031_02290d40.tpCounter = 0;
        return;
    }
    if (++data_ov031_02290d40.tpCounter == 0x28) {
        data_ov031_02290d40.inner->rep = 1;
    } else if (data_ov031_02290d40.tpCounter == 0x2f) {
        data_ov031_02290d40.inner->rep = 1;
        data_ov031_02290d40.tpCounter = 0x28;
    }
}
