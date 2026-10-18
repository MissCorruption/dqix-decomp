#include <globaldefs.h>
#include "Input/Input.h"

int GetGlobalField0x1c020421a0(void);

extern char data_02114e54;

struct Obj0205eaa0;
void DispatchWithShortB4_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern struct Obj0205eaa0 data_02108760;

// USA: func_ov023_021f4fc8  (semantic: CheckStateFlagsAndDispatch_021f4fc8)
extern "C" ARM int func_ov023_021f4fc8(void) {
#if defined(jpn)
 enum {regionalOffset0=0x870, regionalOffset1=0x868};
#else
 enum {regionalOffset0=0x9a0, regionalOffset1=0x998};
#endif
    void* obj = (void*)GetGlobalField0x1c020421a0();
    int state = *(int*)((char*)obj + regionalOffset0);
    int flag = 0;
    if (state == 3 || state == 0) {
        if (g_keyManager.TestKeysPressed(0x1)
            || g_keyManager.TestKeysPressed(0x2)
            || g_keyManager.TestKeysPressed(0x200)
            || g_keyManager.TestKeysPressed(0x100)
            || g_keyManager.TestKeysPressed(0x400)
            || g_keyManager.TestKeysPressed(0x40)
            || g_keyManager.TestKeysPressed(0x80)
            || g_keyManager.TestKeysPressed(0x20)
            || g_keyManager.TestKeysPressed(0x10)) {
            flag = 1;
        }
        if (*((unsigned char*)&data_02114e54 + 0x54)) flag = 1;
    }
    if (flag) {
        DispatchWithShortB4_0205eaa0(&data_02108760, 1, 0);
        return 1;
    }
    int result = *(int*)((char*)obj + regionalOffset1) == 0;
    return result != 0;
}
