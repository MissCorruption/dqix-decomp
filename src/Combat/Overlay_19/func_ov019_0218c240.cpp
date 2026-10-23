#include <globaldefs.h>
#include "Input/Input.h"

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

extern struct Obj0205eaa0 data_02108760;

// USA: func_ov019_0218c240
extern "C" ARM int func_ov019_0218c240(void* scene) {
    if (!g_keyManager.TestKeysPressed(0x7f3)) {
        unsigned char v = g_touchInput.pressed_;
        if (v == 0) return 0;
    }
    func_0205eaa0(&data_02108760, 1, 0);
    return 1;
}
