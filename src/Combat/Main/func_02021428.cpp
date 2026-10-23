#include <globaldefs.h>
#include "Resource/Brightness.h"

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
extern "C" int abs(int arg0);
extern "C" int _s32_div_f(int a, int b);

// USA: func_02021428
extern "C" ARM void func_02021428(void* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    int var1 = GetBrightness(var0, true);
    if (var1 - 1 <= -16) {
        SetSubBrightness(var0, -16, 0);
        return;
    }
    if (var1 + 1 >= 0x10) {
        SetSubBrightness(var0, 0x10, 0);
        return;
    }
    if (var1 > 0) {
        if (var1 < 0) var1 = 0;
        if (var1 != 0) {
            arg1 = _s32_div_f(arg1, abs(var1));
        }
        SetSubBrightness(var0, 0x10, arg1);
    } else {
        if (var1 > 0) var1 = 0;
        if (var1 != 0) {
            arg1 = _s32_div_f(arg1, abs(var1));
        }
        SetSubBrightness(var0, -16, arg1);
    }
}
