#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_0205d97c(void* p);

// USA: func_ov002_02161b48
ARM int CheckFlagOrThreshold_02161b48(char* base, int flag) {
    if (g_keyManager.TestKeysPressed(2)) {
        return 1;
    }
    if (flag) {
        if (func_0205d97c(base + 0xec8) == 2) {
            return 1;
        }
    }
    return 0;
}
