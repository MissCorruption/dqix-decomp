#include <globaldefs.h>

#if defined(jpn)
#define func_020e0f74 func_020e2b6c
#endif

#include "GameState/GameState.h"
#include "NitroSDK/Graphics.h"

struct Struct_02012de8;

extern "C" void *func_0203b628();
extern "C" void *func_02012fe4();
extern "C" void *func_020d6c00();
extern "C" int func_02046708(Struct_02012de8 *arg0, unsigned int arg1);
extern "C" void *func_0202ae18();
extern "C" int func_0202b7d8(int *arg0);
extern "C" void func_0202756c(void *arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5,
                              unsigned short arg6, unsigned char arg7, int arg8, int arg9);

struct Struct_020e0f74 {
#if defined(jpn)
    unsigned char unknown_0_[0x6b9];
#else
    unsigned char unknown1_0_[0x765];
#endif
    unsigned char unknown_765_;
    unsigned short unknown_766_;
    unsigned char unknown_768_;
};

#if defined(jpn)
enum { Enum_020e0f74_38 = 0x2b, Enum_020e0f74_51 = 0x38, Enum_020e0f74_65 = 0x3b, Enum_020e0f74_5 = 161, Enum_020e0f74_30 = 20, Enum_020e0f74_129 = 159 };
#else
enum { Enum_020e0f74_38 = 0x26, Enum_020e0f74_51 = 0x33, Enum_020e0f74_65 = 0x41, Enum_020e0f74_5 = 5, Enum_020e0f74_30 = 30, Enum_020e0f74_129 = 129 };
#endif

// USA: func_020e0f74
extern "C" ARM void func_020e0f74(void *arg0) {
    Struct_020e0f74 *var0 = static_cast<Struct_020e0f74 *>(arg0);
    GameState::GetInstance();
    func_0203b628();
    func_02012fe4();
    if (func_02046708(static_cast<Struct_02012de8 *>(func_020d6c00()), 0x41)) {
        return;
    }

    if (var0->unknown_768_) {
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1300;
    } else {
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x200;
    }
    if (!var0->unknown_765_) {
        return;
    }

    int *var1 = static_cast<int *>(func_0202ae18());
    int var2      = 5;
    if (func_0202b7d8(var1)) {
        var2 += 14;
    }
    func_0202756c(arg0, var2 << 12, 5 << 12, 0, 0x1f, 1, 0xff, 0xff, 0x1000, 0x1000);
    func_0202756c(arg0, 106 << 12, 130 << 12, 1, Enum_020e0f74_38, 1, 0xff, 0xff, 0x1000, 0x1000);

    if (var0->unknown_766_ < 1000 && var0->unknown_766_ != 0) {
        int var3 = Enum_020e0f74_30;
        if (func_0202b7d8(var1)) {
            var3 += 11;
        }
        func_0202756c(arg0, Enum_020e0f74_5 << 12, var3 << 12, 2, Enum_020e0f74_51, 1, 0xff, 0xff, 0x1000, 0x1000);
    }
    func_0202756c(arg0, 0, Enum_020e0f74_129 << 12, 3, Enum_020e0f74_65, 1, 0xff, 0xff, 0x1000, 0x1000);
}
