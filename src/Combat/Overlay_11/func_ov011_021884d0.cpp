#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
struct Struct_ov011_02184c68;
extern "C" void func_ov011_02184c68(struct Struct_ov011_02184c68* arg0, void* arg1);

extern int data_02108760;

// USA: func_ov011_021884d0
extern "C" ARM int func_ov011_021884d0(struct Struct_ov011_02184c68* arg0) {
    int var0 = 0;
    if (g_keyManager.TestKeysPressed(0x7f3) || g_touchInput.pressed_) {
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
        var0 = 1;
    }
    func_ov011_02184c68(arg0, (void*)var0);
    return 1;
}
