#include <globaldefs.h>
#include "Input/Input.h"

extern char data_02114e54;

// USA: func_020e2918
ARM int GetField0x15UnlessInactive_020e2918(signed char* param) {
    if (*(unsigned char*)(&data_02114e54 + 0x55) != 0
        || g_keyManager.TestKeysPressed(0x1)
        || g_keyManager.TestKeysPressed(0x400)
        || g_keyManager.TestKeysPressed(0x200))
    {
        return param[0x15];
    }
    return -1;
}
