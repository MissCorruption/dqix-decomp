#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov003_021550dc_54 = 0x2a };
enum { Enum_ov003_021550dc_486 = 0x1e2 };
#else
enum { Enum_ov003_021550dc_54 = 0x36 };
enum { Enum_ov003_021550dc_486 = 0x1e6 };
#endif

struct Struct_020e28dc;

struct Struct_ov000_0217ab8c {
    char unknown_0_[Enum_ov003_021550dc_54];
    short unknown_36_;
};

extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
extern "C" int func_020e2918(signed char* arg0);
extern "C" int func_02080dd4(void* arg0, int arg1, int arg2, int arg3, unsigned char* arg4, unsigned char arg5);
extern "C" void func_020813ec(void* arg0, int arg1);

struct Struct_ov003_021550dc {
    char unknown_0_[0x8];
    short* unknown_8_;
    char unknown_c_[0x18 - 0xc];
    Struct_ov000_0217ab8c* unknown_18_;
    Struct_020e28dc* unknown_1c_;
    char unknown_20_[Enum_ov003_021550dc_486 - 0x20];
    short unknown_1e6_;
    short unknown_1e8_;
};

// USA: func_ov003_021550dc
extern "C" ARM unsigned char func_ov003_021550dc(Struct_ov003_021550dc* arg0) {
    unsigned char var0 = 0;
    if (g_keyManager.TestKeysPressed(0x401)) {
        var0 = 1;
    }
    if (arg0->unknown_1c_ != NULL && func_020e28dc(arg0->unknown_1c_)) {
        int var1 = func_020e2918((signed char*)arg0->unknown_1c_);
        if (var1 >= 0) {
            var0 = 1;
            *arg0->unknown_8_ = var1 + 6;
        }
    } else if (g_touchInput.pressed_ != 0 && arg0->unknown_8_ != NULL) {
        Struct_ov000_0217ab8c* var2 = arg0->unknown_18_;
        int var3, var4;
        g_touchInput.GetTouchPoint(&var3, &var4);
        arg0->unknown_1e8_ = *arg0->unknown_8_;
        int var5 = func_02080dd4(var2, arg0->unknown_1e6_, (short)var3, (short)var4, &var0, 1);
        if (var5 < 0) {
            return 0;
        }
        *arg0->unknown_8_ = var5;
        short var6 = *arg0->unknown_8_;
        if (arg0->unknown_1e8_ != var6) {
            var2->unknown_36_ = var6;
            func_020813ec(var2, arg0->unknown_1e6_);
        }
    }
    return var0;
}
