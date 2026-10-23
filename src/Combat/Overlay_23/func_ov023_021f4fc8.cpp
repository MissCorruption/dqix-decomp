#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_020421a0(void);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;

// USA: func_ov023_021f4fc8
extern "C" ARM int func_ov023_021f4fc8(void) {
#if defined(jpn)
 enum {Enum_ov023_021f4fc8_2464=0x870, Enum_ov023_021f4fc8_2456=0x868};
#else
 enum {Enum_ov023_021f4fc8_2464=0x9a0, Enum_ov023_021f4fc8_2456=0x998};
#endif
    void* var0 = (void*)func_020421a0();
    int var1 = *(int*)((char*)var0 + Enum_ov023_021f4fc8_2464);
    int var2 = 0;
    if (var1 == 3 || var1 == 0) {
        if (g_keyManager.TestKeysPressed(0x1)
            || g_keyManager.TestKeysPressed(0x2)
            || g_keyManager.TestKeysPressed(0x200)
            || g_keyManager.TestKeysPressed(0x100)
            || g_keyManager.TestKeysPressed(0x400)
            || g_keyManager.TestKeysPressed(0x40)
            || g_keyManager.TestKeysPressed(0x80)
            || g_keyManager.TestKeysPressed(0x20)
            || g_keyManager.TestKeysPressed(0x10)) {
            var2 = 1;
        }
        if (g_touchInput.released_) var2 = 1;
    }
    if (var2) {
        func_0205eaa0(&data_02108760, 1, 0);
        return 1;
    }
    int var3 = *(int*)((char*)var0 + Enum_ov023_021f4fc8_2456) == 0;
    return var3 != 0;
}
