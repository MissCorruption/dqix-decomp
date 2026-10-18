#include <globaldefs.h>

struct TPData_0223d1b8 {
    unsigned short x;
    unsigned short y;
    unsigned short touch;
    unsigned short validity;
};

struct TouchPos_0223d1b8 {
    unsigned short x;
    unsigned short y;
};

struct InputState_0223d1b8 {
    TPData_0223d1b8 samples[5];
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

struct InputGlobal_0223d1b8 {
    unsigned char enabled;
    unsigned char tpCounter;
    unsigned char pad[2];
    InputState_0223d1b8* inner;
};

extern InputGlobal_0223d1b8 data_ov031_02290d40;

unsigned short GetHalfword021117b0At0x10_020cdddc();
extern "C" void func_020cdfd8(TPData_0223d1b8* dst, const TPData_0223d1b8* src);
extern "C" void func_ov031_0223cb10(unsigned short a, unsigned short b, TouchPos_0223d1b8* out);
extern "C" int FastIntModulus(int a, int b);

// USA: func_ov031_0223d1b8
extern "C" ARM void func_ov031_0223d1b8(void) {
    int i;
    unsigned char found;
    int prev;
    int idx;
    TPData_0223d1b8 tp;
    InputState_0223d1b8* in;
    unsigned short x;
    unsigned short y;

    prev = data_ov031_02290d40.inner->touch ? 1 : 0;
    found = 0;
    idx = GetHalfword021117b0At0x10_020cdddc();
    in = data_ov031_02290d40.inner;
    x = in->cur.x;
    y = in->cur.y;
    in->prev.x = x;
    in->prev.y = y;
    i = 0;
    do {
        TPData_0223d1b8* s = &data_ov031_02290d40.inner->samples[idx];
        if (s->touch == 1 && s->validity == 0) {
            found = 1;
            func_020cdfd8(&tp, s);
            x = tp.x;
            func_ov031_0223cb10(x, tp.y, &data_ov031_02290d40.inner->cur);
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
