#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#if defined(jpn)
#define func_020e0f74 func_020e2b6c
#define func_02026f34 func_02026898
#endif

#include "Resource/Brightness.h"

struct Struct_02012de8;
struct Struct_0202343c;
struct Struct_0202343c_2;
struct Struct_0202343c_3;
struct Struct_0202343c_4;

extern "C" void *func_020d6c00();
extern "C" int func_02046708(Struct_02012de8 *arg0, unsigned int arg1);
extern "C" int *func_020936f8();
extern "C" int func_0209497c(Struct_0202343c *arg0, int arg1);
extern "C" int func_020949bc(Struct_0202343c_2 *arg0, int arg1);
extern "C" void func_02093a58(char *arg0);
extern "C" void func_02093a98(char *arg0);
extern "C" int func_020e0a78(void *arg0);
extern "C" void func_020e0f74(void *arg0);
extern "C" void func_02026f34(void *arg0);
extern "C" void func_020235c8(Struct_0202343c_3 *arg0);
extern "C" void func_02027438(Struct_0202343c_4 *arg0);

struct Struct_0202343c_5 {
    unsigned char unknown_0_[IS_JPN ? 0x6b8 : 0x764];
    unsigned char unknown_764_;
    unsigned char unknown_765_[0x778 - 0x765];
    unsigned char unknown_778_;
    unsigned char unknown_779_[0x9c2 - 0x779];
    signed char unknown_9c2_;
    unsigned char unknown_9c3_;
    unsigned char unknown_9c4_;
    unsigned char unknown_9c5_;
    unsigned char unknown_9c6_;
    unsigned char unknown_9c7_;
    unsigned char unknown_9c8_;
};

// USA: func_0202343c
extern "C" ARM void func_0202343c(void *arg0) {
    Struct_0202343c_5 *var0 = static_cast<Struct_0202343c_5 *>(arg0);
    if (func_02046708(static_cast<Struct_02012de8 *>(func_020d6c00()), 0x41)) return;

    GameResources *var1 = GetGameResources();
    int *var2                = func_020936f8();
    if (var0->unknown_9c3_ || var0->unknown_9c2_ <= 0) {
        if (func_0209497c(reinterpret_cast<Struct_0202343c *>(var2), 4)) {
            func_02093a58(reinterpret_cast<char *>(var2));
        }
        return;
    }
    if (func_020949bc(reinterpret_cast<Struct_0202343c_2 *>(var2), 4)) {
        func_02093a98(reinterpret_cast<char *>(var2));
    }
    if (var0->unknown_764_) {
        if (var0->unknown_778_) {
            func_020e0a78(arg0);
            var0->unknown_778_ = 0;
        }
        func_020e0f74(arg0);
    } else {
        func_02026f34(arg0);
        func_020235c8(static_cast<Struct_0202343c_3 *>(arg0));
    }
    if (func_0209497c(reinterpret_cast<Struct_0202343c *>(var2), 4)) {
        var0->unknown_9c6_          = 0;
        var0->unknown_9c7_          = 0;
        var0->unknown_9c4_ = 1;
        var0->unknown_9c8_   = 0;
    }
    if (IsBrightnessWithinValidRange((GameResources*)var1, false) && IsBrightnessOutsideValidRange((GameResources*)var1, true)) {
        if (var0->unknown_9c6_ || var0->unknown_9c7_) return;
        if (!var0->unknown_9c4_) return;
        if (var0->unknown_9c8_) {
            var0->unknown_9c8_--;
            return;
        }
        func_02027438(static_cast<Struct_0202343c_4 *>(arg0));
        SetSubBrightness(var1, 0, 25);
        var0->unknown_9c4_ = 0;
    } else {
        if (IsBrightnessZero((GameResources*)var1, true)) var0->unknown_9c4_ = 0;
    }
}
