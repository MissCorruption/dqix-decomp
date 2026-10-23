#include <globaldefs.h>
#include "Input/Input.h"

// USA: func_ov006_02158c70
extern "C" ARM int func_ov006_02158c70() {
    int var0 = 0;
    int var1 = g_touchInput.pressed_;
    if (g_keyManager.TestKeysPressed(0x7f3) || var1) {
        var0 = 1;
    }
    return var0;
}
