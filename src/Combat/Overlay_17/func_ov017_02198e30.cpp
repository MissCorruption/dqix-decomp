#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_02198e30_17478 = 0x4196 };
#else
enum { Enum_ov017_02198e30_17478 = 0x4446 };
#endif
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov017_02198e30 {
    unsigned short unknown_0_;
    short unknown_2_;
    char unknown_4_[0x10 - 4];
    unsigned int unknown_10_;
    char unknown_14_[0x2c - 0x14];
    struct Struct_ov017_02198e30* unknown_2c_;
};

struct Struct_ov017_02198e30_2 {
    char unknown_0_[0x491];
    signed char unknown_491_;
    char unknown_492_[0x494 - 0x492];
    struct Struct_ov017_02198e30* unknown_494_;
};

struct Struct_ov017_02198e30_3 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x30 - 8];
    int unknown_30_;
};

extern "C" struct Struct_ov017_02198e30_2* func_0205ec34(void);
extern "C" int func_020321e0(Vector3fix* arg0, void* arg1, int arg2, void* arg3, unsigned int arg4);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);

// USA: func_ov017_02198e30
extern "C" ARM void func_ov017_02198e30(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov017_02198e30_2* var1 = func_0205ec34();
    struct Struct_ov017_02198e30* var2 = var1->unknown_494_;
    GameObject* var3 = var0->GetUnknownGameObject();

    for (; var2 != 0; var2 = var2->unknown_2c_) {
        if (func_020321e0(&var3->obj3D_.position_, var2->unknown_14_, var2->unknown_2_, var2->unknown_4_, var2->unknown_10_)) {
            break;
        }
    }

    signed char var4 = var1->unknown_491_;

    if (var2 == 0) {
        if (var4 > -1) {
            struct Struct_ov017_02198e30_3 var5;
            var5.unknown_4_ = var4;
            if (func_020649b0(var1, 5, &var5)) {
                func_0206f81c(&var5);
            }
            var1->unknown_491_ = -1;
        }
        return;
    }

    if (var2->unknown_0_ == var4) return;

    struct Struct_ov017_02198e30_3 var6;
    if (var4 > -1) {
        var6.unknown_4_ = var4;
        if (func_020649b0(var1, 5, &var6)) {
            func_0206f81c(&var6);
        }
        var6.unknown_4_ = -1;
        var6.unknown_30_ = 0;
    }

    arg0[Enum_ov017_02198e30_17478] = var2->unknown_0_;
    var6.unknown_4_ = var2->unknown_0_;
    if (func_020649b0(var1, 2, &var6)) {
        func_0206f81c(&var6);
    }

    unsigned short var7 = var2->unknown_0_;
    func_0205ec34()->unknown_491_ = var7;
}
