#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov003_02160a68_804 = 0x20c };
enum { Enum_ov003_02160a68_912 = 0x278 };
enum { Enum_ov003_02160a68_808 = 0x210 };
enum { Enum_ov003_02160a68_1160 = 0x2b0 };
enum { Enum_ov003_02160a68_916 = 0x27c };
#else
enum { Enum_ov003_02160a68_804 = 0x324 };
enum { Enum_ov003_02160a68_912 = 0x390 };
enum { Enum_ov003_02160a68_808 = 0x328 };
enum { Enum_ov003_02160a68_1160 = 0x488 };
enum { Enum_ov003_02160a68_916 = 0x394 };
#endif

extern "C" int func_0200fb8c(int* arg0);
extern "C" int func_ov017_021a4e70(unsigned char* arg0);

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
extern "C" int func_020e2984(struct Struct_020e28dc* arg0);

struct Struct_0207fdcc_2;
extern "C" int func_02080d54(struct Struct_0207fdcc_2* arg0, int arg1, int arg2, int arg3);

struct Struct_ov003_02160a68 {
    char unknown_0_[Enum_ov003_02160a68_804];
    struct Struct_0207fdcc_2* unknown_324_;
    char unknown_328_[Enum_ov003_02160a68_912 - Enum_ov003_02160a68_808];
    struct Struct_020e28dc* unknown_390_;
    char unknown_394_[Enum_ov003_02160a68_1160 - Enum_ov003_02160a68_916];
    short unknown_488_;
};

// USA: func_ov003_02160a68
extern "C" ARM int func_ov003_02160a68(struct Struct_ov003_02160a68* arg0) {
    int var0 = 0;
    unsigned char* var1 = (unsigned char*)func_0200fb8c((int*)GameState::GetInstance());
    if (g_keyManager.TestKeysPressed(2)) {
        if (func_ov017_021a4e70(var1)) {
            var0 = 1;
        }
    }

    if (func_020e28dc(arg0->unknown_390_)) {
        if (func_020e2984(arg0->unknown_390_)) {
            var0 = 1;
        }
    } else if (g_touchInput.pressed_ != 0) {
        int var2, var3;
        g_touchInput.GetTouchPoint(&var2, &var3);
        if (!func_02080d54(arg0->unknown_324_, arg0->unknown_488_, (short)var2, (short)var3)) {
            var0 = 1;
        }
    }
    return var0;
}
