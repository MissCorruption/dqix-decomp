#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

extern "C" int func_ov017_0218d75c(void* arg0);
extern "C" int func_02039820(void* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);
extern "C" int func_020421a0(void);

struct Struct_02015ef4 { unsigned int unknown_0_[3]; };
extern "C" int func_0202ec84(void* arg0, struct Struct_02015ef4* arg1, int* arg2, int* arg3);

struct Struct_02015ef4_2;
extern "C" void func_020473c8(struct Struct_02015ef4_2* arg0, int arg1);

struct Struct_ov017_021bfc40 {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
    char unknown_a_[0x10 - 0xa];
    unsigned char* unknown_10_;
    char unknown_14_[0x16 - 0x14];
    short unknown_16_;
    short unknown_18_;
    char unknown_1a_[0x28 - 0x1a];
    struct Struct_02015ef4 unknown_28_;
    char unknown_34_[0x48 - 0x34];
    unsigned char unknown_48_;
};

// USA: func_ov017_021bfc40
extern "C" ARM int func_ov017_021bfc40(struct Struct_ov017_021bfc40* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = var0->GetTickCount();
    GameResources* var2 = GetGameResources();

    if (arg0->unknown_48_ != 0) {
        GameResources* var3 = GetGameResources();
        if (func_ov017_0218d75c(var3) != 0) {
            return 4;
        }
        GameObject* var4 = var0->GetUnknownGameObject();
        if (var4 != NULL && func_02039820(var4) == 0) {
            func_020397c0(var4);
        }
        int var5 = func_020100f8((char*)var0);
        if (var5 != 0) {
            func_020a27ac((void*)var5);
        }
        if (var3 != NULL) {
            ClearFlags04(var3, 0x80);
        }
        arg0->unknown_16_ = 0;
        arg0->unknown_8_ = 0;
        return 6;
    }

    GameState* var6 = GameState::GetInstance();
    void* var7 = func_020100bc(var6);
    struct Struct_02015ef4 var8 = arg0->unknown_28_;

    if (arg0->unknown_18_ < 0x191e) {
        arg0->unknown_18_ += var6->GetTickCount() * 0x199;
    }

    var8.unknown_0_[1] += fix32sin(arg0->unknown_18_);

    int var9;
    int var10;
    if (var7 != NULL) {
        func_0202ec84(var7, &var8, &var10, &var9);
    }

    int var11 = (var10 - 0xc) << 0xc;
    int var12 = (var9 - 0x28) << 0xc;
    unsigned char* var13 = arg0->unknown_10_;
    *(int*)(var13 + 0x1c) = var11;
    *(int*)(var13 + 0x20) = var12;
    *(int*)(var13 + 0x24) = 0;
    func_020473c8((struct Struct_02015ef4_2*)var13, 1);

    short var14 = arg0->unknown_16_;
    if (var14 > 0x1f) {
        var14 = 0x1f;
    }
    *(short*)(var13 + 0x82) = var14;

    unsigned int var15 = var0->GetEffectiveDeltaTime();
    if (var15 < arg0->unknown_8_) {
        arg0->unknown_8_ = arg0->unknown_8_ - var15;
    } else {
        arg0->unknown_8_ = 0;
    }

    if (arg0->unknown_8_ == 0) {
        GameObject* var16 = var0->GetUnknownGameObject();
        if (var16 != NULL && func_02039820(var16) == 0) {
            func_020397c0(var16);
        }
        int var17 = func_020100f8((char*)var0);
        if (var17 != 0) {
            func_020a27ac((void*)var17);
        }
        if (var2 != NULL) {
            ClearFlags04(var2, 0x80);
        }
    }

    func_020421a0();
    if (var1 < arg0->unknown_16_) {
        arg0->unknown_16_ -= var1;
    } else {
        arg0->unknown_16_ = 0;
        arg0->unknown_8_ = 0x12c;
        return 6;
    }
    return 4;
}
