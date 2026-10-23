#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02158334_498 = 0x1ee };
#else
enum { Enum_ov003_02158334_498 = 0x1f2 };
#endif
#include "GameState/GameState.h"

struct Struct_020200c0 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

struct Struct_ov003_02158334 {
    char unknown_0_[0x30];
    unsigned short unknown_30_;
};

struct Struct_ov000_0215ab88 {
    char unknown_0_[0x130];
    Struct_020200c0* unknown_130_;
    Struct_ov003_02158334* unknown_134_;
};

struct Struct_ov003_02158334_2;

struct Struct_ov003_02158334_3 {
    char unknown_0_[0x18];
    Struct_ov003_02158334_2* unknown_18_;
    char unknown_1c_[Enum_ov003_02158334_498 - 0x1c];
    unsigned char unknown_1f2_[4];
    unsigned char unknown_1f6_;
};

struct Struct_02080f8c;
extern "C" void func_02080f8c(Struct_02080f8c*, int, int);
struct Struct_02080cc0;
extern "C" void func_02080cc0(Struct_02080cc0*, int, int);
extern "C" void func_020813ec(Struct_ov003_02158334_2*, int);

// USA: func_ov003_02158334
extern "C" ARM void func_ov003_02158334(Struct_ov003_02158334_3* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 3;
    int var2 = 10;

    switch (arg0->unknown_1f6_) {
    case 3:
        var1 = 4;
        var2 = 0xc;
        break;
    case 4:
        var1 = 5;
        var2 = 0xf;
        break;
    }

    Struct_ov003_02158334_2* var3 = arg0->unknown_18_;
    for (unsigned char var4 = 0; var4 < arg0->unknown_1f6_; var4++) {
        Struct_ov000_0215ab88* var5 = (Struct_ov000_0215ab88*)func_0200ff1c(var0, arg0->unknown_1f2_[var4]);
        if (var5 != NULL) {
            int var6 = 0xf;
            func_02080f8c((Struct_02080f8c*)var3, var2, (int)var5->unknown_134_->unknown_0_);

            int var7 = var5->unknown_134_->unknown_30_;
            float var8;
            if (var7 == 0.0f) {
                var8 = 0.0f;
            } else {
                int var9 = var5->unknown_130_->unknown_4_;
                var8 = (float)var9 / var7;
            }
            if (var8 <= 0.25f) var6 = 0xd;
            if (var8 <= 0.08f) var6 = 0xb;
            if (var5->unknown_130_->unknown_0_ & 1) var6 = 9;

            func_02080cc0((Struct_02080cc0*)var3, var2, var6);
        }
        var2 = (short)(var2 + 1);
    }

    func_020813ec(var3, var1);
}
