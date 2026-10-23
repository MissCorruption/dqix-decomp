#include <globaldefs.h>
#include "Input/Input.h"

// USA: func_020e2984
extern "C" ARM int func_020e2984(struct Outer020e28dc* window) {
    return g_keyManager.TestKeysPressed(2) != 0;
}
