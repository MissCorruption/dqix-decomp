#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov003_021765b4_54 = 0x2a };
enum { Enum_ov003_021765b4_2204 = 0x818 };
enum { Enum_ov003_021765b4_4088 = 0xf74 };
enum { Enum_ov003_021765b4_2208 = 0x81c };
enum { Enum_ov003_021765b4_4094 = 0xf7a };
enum { Enum_ov003_021765b4_4092 = 0xf78 };
#else
enum { Enum_ov003_021765b4_54 = 0x36 };
enum { Enum_ov003_021765b4_2204 = 0x89c };
enum { Enum_ov003_021765b4_4088 = 0xff8 };
enum { Enum_ov003_021765b4_2208 = 0x8a0 };
enum { Enum_ov003_021765b4_4094 = 0xffe };
enum { Enum_ov003_021765b4_4092 = 0xffc };
#endif

struct Struct_020e28dc;

struct Struct_ov000_0217ab8c {
    char unknown_0_[Enum_ov003_021765b4_54];
    short unknown_36_;
};

extern "C" {
void func_020813ec(Struct_ov000_0217ab8c*, int);
}

extern "C" int func_020e28dc(Struct_020e28dc*);
extern "C" int func_020e2918(signed char*);
extern "C" int func_02080dd4(void*, int, int, int, unsigned char*, unsigned char);

struct Struct_ov003_021765b4 {
    Struct_020e28dc* unknown_0_;
    char unknown_4_[Enum_ov003_021765b4_2204 - 0x4];
    Struct_ov000_0217ab8c* unknown_89c_;
    char unknown_8a0_[Enum_ov003_021765b4_4088 - Enum_ov003_021765b4_2208];
    short* unknown_ff8_;
    char unknown_ffc_[Enum_ov003_021765b4_4094 - Enum_ov003_021765b4_4092];
    short unknown_ffe_;
    short unknown_1000_;
};

// USA: func_ov003_021765b4
extern "C" ARM unsigned char func_ov003_021765b4(Struct_ov003_021765b4* arg0)
{
    unsigned char var0 = 0;
    if (g_keyManager.TestKeysPressed(0x401))
        var0 = 1;
    if (arg0->unknown_0_ != 0 && func_020e28dc(arg0->unknown_0_))
    {
        int var1 = func_020e2918((signed char*)arg0->unknown_0_);
        if (var1 >= 0)
        {
            var0 = 1;
            *arg0->unknown_ff8_ = var1 + 2;
        }
    }
    else if (g_touchInput.pressed_ && arg0->unknown_ff8_ != 0)
    {
        int var2;
        int var3;
        Struct_ov000_0217ab8c* var4 = arg0->unknown_89c_;
        g_touchInput.GetTouchPoint(&var2, &var3);
        arg0->unknown_1000_ = *arg0->unknown_ff8_;
        int var5 = func_02080dd4(var4, arg0->unknown_ffe_, (short)var2, (short)var3, &var0, 1);
        if (var5 < 0)
            return 0;
        *arg0->unknown_ff8_ = var5;
        short var6 = *arg0->unknown_ff8_;
        if (arg0->unknown_1000_ != var6)
        {
            var4->unknown_36_ = var6;
            func_020813ec(var4, arg0->unknown_ffe_);
        }
    }
    return var0;
}
