#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov003_02155208_486 = 0x1e2 };
#else
enum { Enum_ov003_02155208_486 = 0x1e6 };
#endif

struct Struct_020e28dc;
struct Struct_0207fdcc_2;

extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
extern "C" int func_020e2984(struct Struct_020e28dc* arg0);
extern "C" int func_02080d54(struct Struct_0207fdcc_2* arg0, int arg1, int arg2, int arg3);

struct Struct_ov003_02155208 {
    char unknown_0_[0x18];
    struct Struct_0207fdcc_2* unknown_18_;
    struct Struct_020e28dc* unknown_1c_;
    char unknown_20_[Enum_ov003_02155208_486 - 0x20];
    short unknown_1e6_;
};

// USA: func_ov003_02155208
extern "C" ARM int func_ov003_02155208(struct Struct_ov003_02155208* arg0) {
    int var0 = 0;
    if (g_keyManager.TestKeysPressed(2)) var0 = 1;

    if (arg0->unknown_1c_ != NULL && func_020e28dc(arg0->unknown_1c_)) {
        if (func_020e2984(arg0->unknown_1c_)) {
            var0 = 1;
        }
    } else if (g_touchInput.pressed_ != 0) {
        int var1, var2;
        g_touchInput.GetTouchPoint(&var1, &var2);
        if (!func_02080d54(arg0->unknown_18_, arg0->unknown_1e6_, (short)var1, (short)var2)) {
            var0 = 1;
        }
    }
    return var0;
}
