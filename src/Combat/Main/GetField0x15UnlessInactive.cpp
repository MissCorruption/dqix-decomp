#include <globaldefs.h>
#include "Input/Input.h"

// USA: func_020e2918
ARM int GetField0x15UnlessInactive_020e2918(signed char* param) {
    if (g_touchInput.pressed_ != 0
        || g_keyManager.TestKeysPressed(0x1)
        || g_keyManager.TestKeysPressed(0x400)
        || g_keyManager.TestKeysPressed(0x200))
    {
        return param[0x15];
    }
    return -1;
}
