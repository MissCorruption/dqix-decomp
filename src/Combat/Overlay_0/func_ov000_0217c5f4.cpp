#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_0205d97c(void*);

// USA: func_ov000_0217c5f4
extern "C" ARM int func_ov000_0217c5f4(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = g_keyManager.TestKeysPressed(0x802);
    int var2 = func_0205d97c(var0 + 0x188);
    if ((var1 | (var2 == 2)) != 0) {
        return 1;
    }
    return 0;
}
