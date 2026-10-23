#if defined(jpn)
enum { Enum_ov017_0219814c_108 = 0x8c };
#else
enum { Enum_ov017_0219814c_108 = 0x6c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov017_0219814c {
    char unknown_0_[0x2c];
    unsigned char unknown_2c_;
    char unknown_2d_[0x70 - 0x2d];
    struct Struct_ov017_0219814c* unknown_70_;
};

struct Struct_ov017_0219814c_2 {
    unsigned int unknown_0_[3];
};

struct Struct_ov017_0219814c_3 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x30 - 0x08];
    int unknown_30_;
};

extern "C" void* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" int func_02094b9c(struct Struct_ov017_0219814c* arg0, struct Struct_ov017_0219814c_2* arg1);
extern "C" struct Struct_ov017_0219814c* func_02053ccc(unsigned char* arg0);
extern "C" void func_02053cc4(unsigned char* arg0, int arg1);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);

// USA: func_ov017_0219814c
extern "C" ARM void func_ov017_0219814c(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02012fe4();
    void* var2 = func_0205ec34();
    GameObject* var3 = var0->GetUnknownGameObject();
    struct Struct_ov017_0219814c_2 var4 = *(struct Struct_ov017_0219814c_2*)((char*)var3 + 0x44);
    struct Struct_ov017_0219814c_3 var5;
    struct Struct_ov017_0219814c* var6;
    struct Struct_ov017_0219814c* var7;

    var6 = (struct Struct_ov017_0219814c*)func_0201e838((unsigned char*)var1 + Enum_ov017_0219814c_108, 3);
    while (var6 != 0) {
        if (func_02094b9c(var6, &var4)) {
            break;
        }
        var6 = var6->unknown_70_;
    }

    var7 = func_02053ccc((unsigned char*)var3);
    if (var7 != 0) {
        if (var6 == 0) {
            var5.unknown_4_ = var7->unknown_2c_;
            if (func_020649b0(var2, 5, &var5)) {
                func_0206f81c(&var5);
            }
        } else if (var6 != var7) {
            var5.unknown_4_ = var7->unknown_2c_;
            if (func_020649b0(var2, 5, &var5)) {
                func_0206f81c(&var5);
            }
            var5.unknown_30_ = 0;
            var5.unknown_4_ = var6->unknown_2c_;
            if (func_020649b0(var2, 2, &var5)) {
                func_0206f81c(&var5);
            }
        }
    } else if (var6 != 0) {
        var5.unknown_4_ = var6->unknown_2c_;
        if (func_020649b0(var2, 2, &var5)) {
            func_0206f81c(&var5);
        }
    }
    func_02053cc4((unsigned char*)var3, (int)var6);
}
