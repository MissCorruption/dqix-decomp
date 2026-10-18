#include <globaldefs.h>
#include "Input/Input.h"

extern unsigned char data_02114e54;

// USA: func_ov006_02158c70
ARM int CheckFlagOrByte55_02158c70() {
    int result = 0;
    int b = *(&data_02114e54 + 0x55);
    if (g_keyManager.TestKeysPressed(0x7f3) || b) {
        result = 1;
    }
    return result;
}
