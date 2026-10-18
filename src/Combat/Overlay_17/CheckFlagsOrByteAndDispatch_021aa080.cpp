#if defined(jpn)
enum { RegionOffset9a0 = 0x870 };
#else
enum { RegionOffset9a0 = 0x9a0 };
#endif

#include <globaldefs.h>
#include "Input/Input.h"

extern int data_02107800;
extern unsigned char data_02114e54;
struct Obj0205eaa0;
extern struct Obj0205eaa0 data_02108760;

int GetGlobalField0x1c020421a0();
void DispatchWithShortB4_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

// USA: func_ov017_021aa080  (semantic: CheckFlagsOrByteAndDispatch_021aa080)
extern "C" ARM int func_ov017_021aa080() {
    int base = GetGlobalField0x1c020421a0();
    int field = *(int*)(base + RegionOffset9a0);
    int flag = 0;
    if (field == 3 || field == 0) {
        if (g_keyManager.TestKeysPressed(0x1) ||
            g_keyManager.TestKeysPressed(0x200) ||
            g_keyManager.TestKeysPressed(0x100) ||
            g_keyManager.TestKeysPressed(0x40) ||
            g_keyManager.TestKeysPressed(0x80) ||
            g_keyManager.TestKeysPressed(0x20) ||
            g_keyManager.TestKeysPressed(0x10)) {
            flag = 1;
        }
        if (*(unsigned char*)(&data_02114e54 + 0x54) != 0) {
            flag = 1;
        }
    }
    if (flag == 0) {
        return 0;
    }
    DispatchWithShortB4_0205eaa0(&data_02108760, 1, 0);
    return 1;
}
