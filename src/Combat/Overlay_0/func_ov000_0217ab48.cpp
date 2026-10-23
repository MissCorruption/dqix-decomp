#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_0205d97c(int);

// USA: func_ov000_0217ab48
extern "C" ARM int func_ov000_0217ab48(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = g_keyManager.TestKeysPressed(0x802);
    int var2 = func_0205d97c(*(int*)(var0 + 0x38));
    if ((var1 | (var2 == 2)) != 0) {
        return 1;
    }
    return 0;
}
