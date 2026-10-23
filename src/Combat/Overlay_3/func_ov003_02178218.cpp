#include <globaldefs.h>
#include "Input/Input.h"

// USA: func_ov003_02178218
extern "C" ARM int func_ov003_02178218(void) {
    if (g_touchInput.isRepeatValid_ == 0 || g_touchInput.currentReading_.isHeld == 0) {
        return 0;
    }
    int var0, var1;
    g_touchInput.GetTouchPoint(&var0, &var1);
    if (var0 < 0x94 || var0 > 0xa7) {
        return 0;
    }
    if (var1 >= 0x24 && var1 <= 0x2d) return 1;
    if (var1 >= 0x30 && var1 <= 0x39) return -1;
    return 0;
}
