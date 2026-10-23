#include <globaldefs.h>
#include "Resource/Brightness.h"

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
extern "C" int abs(int x);
extern "C" int _s32_div_f(int a, int b);

// USA: func_02021428
extern "C" ARM void func_02021428(void* unused0, int amount) {
    GameResources* t = GetGameResources();
    int v = GetBrightness(t, true);
    if (v - 1 <= -16) {
        SetSubBrightness(t, -16, 0);
        return;
    }
    if (v + 1 >= 0x10) {
        SetSubBrightness(t, 0x10, 0);
        return;
    }
    if (v > 0) {
        if (v < 0) v = 0;
        if (v != 0) {
            amount = _s32_div_f(amount, abs(v));
        }
        SetSubBrightness(t, 0x10, amount);
    } else {
        if (v > 0) v = 0;
        if (v != 0) {
            amount = _s32_div_f(amount, abs(v));
        }
        SetSubBrightness(t, -16, amount);
    }
}
