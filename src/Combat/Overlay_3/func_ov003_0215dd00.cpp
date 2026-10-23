#include <globaldefs.h>
#include "Input/Input.h"
#if defined(jpn)
enum { Enum_ov003_0215dd00_152 = 0xb0 };
#else
enum { Enum_ov003_0215dd00_152 = 0x98 };
#endif

extern "C" int func_0205d97c(void* arg0);

// USA: func_ov003_0215dd00
extern "C" ARM int func_ov003_0215dd00(char* arg0) {
    if (g_keyManager.TestKeysPressed(2)) {
        return 1;
    }
    return func_0205d97c(arg0 + Enum_ov003_0215dd00_152) == 2;
}
