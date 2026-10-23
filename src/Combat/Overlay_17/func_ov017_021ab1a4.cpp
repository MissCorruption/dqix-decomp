#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0207fdcc_2;

struct Struct_ov017_021aa59c_6 {
    char unknown_0_[0x18];
    struct Struct_0207fdcc_2* unknown_18_;
};

extern "C" int func_02080d54(struct Struct_0207fdcc_2* arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_021ab1a4
extern "C" ARM int func_ov017_021ab1a4(struct Struct_ov017_021aa59c_6* arg0) {
    int var0 = 0;
    if (g_keyManager.TestKeysPressed(0x2)) {
        var0 = 1;
    }
    if (g_touchInput.pressed_ != 0) {
        int var1, var2;
        g_touchInput.GetTouchPoint(&var1, &var2);
        if (!func_02080d54(arg0->unknown_18_, 0, (short)var1, (short)var2)) {
            if (!func_02080d54(arg0->unknown_18_, 1, (short)var1, (short)var2)) {
                var0 = 1;
            }
        }
    }
    return var0;
}
