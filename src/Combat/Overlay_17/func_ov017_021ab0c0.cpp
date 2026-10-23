#if defined(jpn)
enum { Enum_ov017_021ab0c0_54 = 0x2a };
#else
enum { Enum_ov017_021ab0c0_54 = 0x36 };
#endif

#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov017_021aa59c_5 {
    char unknown_0_[0x18];
    void* unknown_18_;
    char unknown_1c_[0x44 - 0x1c];
    short* unknown_44_;
    char unknown_48_[0x48 - 0x48];
    short unknown1_48_;
    char unknown_4a_[0x4e - 0x4a];
    short unknown_4e_;
};

extern "C" int func_02080dd4(void* arg0, int arg1, int arg2, int arg3, unsigned char* arg4, unsigned char arg5);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov017_021ab0c0
extern "C" ARM int func_ov017_021ab0c0(struct Struct_ov017_021aa59c_5* arg0) {
    unsigned char var0 = 0;
    if (g_keyManager.TestKeysPressed(0x401)) {
        var0 = 1;
    }
    if (g_touchInput.pressed_ != 0 && arg0->unknown_44_ != NULL) {
        void* var1 = arg0->unknown_18_;
        int var2, var3;
        g_touchInput.GetTouchPoint(&var2, &var3);
        arg0->unknown_4e_ = *arg0->unknown_44_;
        int var4 = func_02080dd4(var1, arg0->unknown1_48_, (short)var2, (short)var3, &var0, 1);
        if (var4 < 0) {
            return 0;
        }
        *arg0->unknown_44_ = (short)var4;
        short var5 = *arg0->unknown_44_;
        if (arg0->unknown_4e_ != var5) {
            *(short*)((char*)var1 + Enum_ov017_021ab0c0_54) = var5;
            func_020813ec(var1, arg0->unknown1_48_);
        }
    }
    return var0;
}
