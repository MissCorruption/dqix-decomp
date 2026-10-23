#include <globaldefs.h>
#include "Input/Input.h"
#if defined(jpn)
enum { Enum_ov003_0216950c_228 = 0xe0 };
#else
enum { Enum_ov003_0216950c_228 = 0xe4 };
#endif

struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);

// USA: func_ov003_0216950c
extern "C" ARM int func_ov003_0216950c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = func_0205da38((struct Struct_0205da38*)(var0 + Enum_ov003_0216950c_228), 0x14);
    int var2 = g_keyManager.TestKeysPressed(0x1);
    int var3 = g_keyManager.TestKeysPressed(0x400);
    if ((var2 | var3 | var1) != 0) {
        return 1;
    }
    return 0;
}
