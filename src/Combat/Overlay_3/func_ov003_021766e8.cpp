#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov003_021766e8_2204 = 0x818 };
enum { Enum_ov003_021766e8_4094 = 0xf7a };
enum { Enum_ov003_021766e8_2208 = 0x81c };
#else
enum { Enum_ov003_021766e8_2204 = 0x89c };
enum { Enum_ov003_021766e8_4094 = 0xffe };
enum { Enum_ov003_021766e8_2208 = 0x8a0 };
#endif

struct Struct_020e28dc;
struct Struct_0207fdcc_2;

extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
extern "C" int func_020e2984(struct Struct_020e28dc* arg0);
extern "C" int func_02080d54(struct Struct_0207fdcc_2* arg0, int arg1, int arg2, int arg3);

struct Struct_ov003_021766e8 {
    struct Struct_020e28dc* unknown_0_;
    char unknown_4_[Enum_ov003_021766e8_2204 - 0x4];
    struct Struct_0207fdcc_2* unknown_89c_;
    char unknown_8a0_[Enum_ov003_021766e8_4094 - Enum_ov003_021766e8_2208];
    short unknown_ffe_;
};

// USA: func_ov003_021766e8
extern "C" ARM int func_ov003_021766e8(struct Struct_ov003_021766e8* arg0) {
    int var0 = 0;
    if (g_keyManager.TestKeysPressed(2)) var0 = 1;

    if (arg0->unknown_0_ != NULL && func_020e28dc(arg0->unknown_0_)) {
        if (func_020e2984(arg0->unknown_0_)) {
            var0 = 1;
        }
    } else if (g_touchInput.pressed_ != 0) {
        int var1, var2;
        g_touchInput.GetTouchPoint(&var1, &var2);
        if (!func_02080d54(arg0->unknown_89c_, arg0->unknown_ffe_, (short)var1, (short)var2)) {
            var0 = 1;
        }
    }
    return var0;
}
