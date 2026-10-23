#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

extern struct Struct_02108760 data_02108760;

// USA: func_ov019_0218c240
extern "C" ARM int func_ov019_0218c240(void* arg0) {
    if (!g_keyManager.TestKeysPressed(0x7f3)) {
        unsigned char var0 = g_touchInput.pressed_;
        if (var0 == 0) return 0;
    }
    func_0205eaa0(&data_02108760, 1, 0);
    return 1;
}
