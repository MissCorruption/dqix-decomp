#include <globaldefs.h>
#include "Input/Input.h"
#if defined(jpn)
enum { Enum_ov003_0215dcb8_152 = 0xb0 };
#else
enum { Enum_ov003_0215dcb8_152 = 0x98 };
#endif

struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);

// USA: func_ov003_0215dcb8
extern "C" ARM int func_ov003_0215dcb8(char* arg0) {
    int var0 = func_0205da38((struct Struct_0205da38*)(arg0 + Enum_ov003_0215dcb8_152), 0x14);
    int var1 = g_keyManager.TestKeysPressed(1);
    int var2 = g_keyManager.TestKeysPressed(0x400);
    return (var0 | (var1 | var2)) != 0;
}
