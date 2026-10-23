#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020d76b8;

struct Struct_ov000_021626a0_2 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 27;
    unsigned int unknown_13_3_ : 1;
    unsigned int unknown_13_4_ : 4;
};

struct Struct_ov000_021626a0 {
    char unknown_0_[0x148];
    struct Struct_ov000_021626a0_2* unknown_148_;
};

struct Struct_ov000_02160da0 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    char* unknown_29c_;
    unsigned char* unknown_2a0_;
    char unknown_2a4_[0xea4 - 0x2a4];
    struct Struct_020d76b8* unknown_ea4_;
};

extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" struct Struct_ov000_021626a0* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_02049ee8(unsigned char* arg0);
extern "C" void func_020d76b8(struct Struct_020d76b8* arg0, int arg1);
extern "C" void func_020d76d8(unsigned char* arg0, int arg1);
extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);

// USA: func_ov000_021626a0
extern "C" ARM void func_ov000_021626a0(Struct_ov000_02160da0* arg0, int arg1, int arg2) {
    int var0[16];
    GameState* var1;
    char* var2;
    int var3;
    int var4;
    int var5;
    GameObject* var6;
    int var7;
    struct Struct_020d76b8* var8;
    void* var9;
    struct Struct_ov000_021626a0* var10;
    struct Struct_ov000_021626a0_2* var11;

    var1 = GameState::GetInstance();
    var2 = arg0->unknown_29c_;
    var8 = arg0->unknown_ea4_;
    var9 = func_ov000_02160f20(arg0);
    if (var8 == NULL) {
        return;
    }
    var5 = func_ov000_021820bc(arg0->unknown_29c_, (int)var9, arg1, (int)var0);
    for (var3 = 0; var3 < var5; var3++) {
        var6 = var1->GetGameObjectByIndex(var0[var3]);
        if (var6 == NULL) {
            continue;
        }
        var7 = arg2;
        if (var6->obj3D_.unknown_0_ & 0x400) {
            var10 = func_0200fea4(var1, var0[var3]);
            if (var10 != NULL) {
                var11 = var10->unknown_148_;
                if (func_02049ee8((unsigned char*)var10) == 0 && var11->unknown_13_3_) {
                    var7 = 0;
                }
            }
        }
        if (var7) {
            var6->obj3D_.MakeVisible();
            func_020d76b8(var8, var0[var3]);
        } else {
            var6->obj3D_.MakeHidden();
            func_020d76d8((unsigned char*)var8, var0[var3]);
        }
    }
    if (func_ov000_0215fc60(var2) == 0) {
        return;
    }
    for (var4 = 1; var4 < 4; var4++) {
        var6 = var1->GetGameObjectByIndex(var4);
        if (var6 == NULL) {
            continue;
        }
        if (func_020a35e0(arg0->unknown_2a0_, var4)) {
            var6->obj3D_.MakeHidden();
            func_020d76d8((unsigned char*)var8, var4);
        }
    }
}
