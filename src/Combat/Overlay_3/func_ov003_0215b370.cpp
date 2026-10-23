#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_0205d97c(void* arg0);

// USA: func_ov003_0215b370
extern "C" ARM int func_ov003_0215b370(void* arg0, int arg1) {
    if (g_keyManager.TestKeysPressed(2) != 0) return 1;
    if (arg1 == 0) goto ret0;
    if (func_0205d97c((char*)arg0 + 0xf4) == 2) return 1;
ret0:
    return 0;
}
