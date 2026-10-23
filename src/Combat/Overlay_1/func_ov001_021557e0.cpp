#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

// USA: func_ov001_021557e0

extern "C" int func_ov001_02153994(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void* arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" void* func_020e2ff8(void);
struct Struct_02033fcc;
extern "C" void func_02033fcc(struct Struct_02033fcc* arg0);
extern "C" unsigned char func_02039d7c(char* arg0);
extern "C" void func_02039d24(unsigned char* arg0);
extern "C" int func_020100a8(GameState* arg0);
struct Struct_02010834;
extern "C" void func_02010834(struct Struct_02010834* arg0, int arg1, int* arg2, int* arg3);
extern "C" void func_02039d58(unsigned char* arg0);
extern "C" void* func_020d6c00(void);
extern "C" void* func_02010828(GameState* arg0);
struct Struct_02048150;
extern "C" int func_02086ef0(struct Struct_02048150* arg0, int arg1);
struct Struct_0205420c;
extern "C" void func_0205420c(struct Struct_0205420c* arg0, int arg1, int arg2);
extern "C" void func_ov017_02191f4c(int arg0, int arg1);
extern "C" void func_ov017_02192400(int arg0, int arg1);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" int func_0202b7d8(int* arg0);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_ov017_021917f0(int arg0, int arg1);
extern "C" void func_020e3368(unsigned char* arg0, unsigned char arg1);
struct Struct_ov001_02154de4;
extern "C" int func_ov001_02154de4(struct Struct_ov001_02154de4* arg0);

#if defined(jpn)
#define data_ov001_02164bd1 data_ov001_02166171
#endif
extern const char data_ov001_02164bd1[];

#if defined(jpn)
#define COMBATANT_FLAGS_021557e0 0x180
#else
#define COMBATANT_FLAGS_021557e0 0x18c
#endif

struct Struct_ov001_021557e0 {
    char unknown_0_[0xc1];
    unsigned char unknown_c1_0_ : 2;
    char unknown_c2_[0x130 - 0xc2];
    unsigned int* unknown_130_;
    char unknown_134_[COMBATANT_FLAGS_021557e0 - 0x134];
    unsigned int unknown_18c_;
};

struct Struct_ov001_021557e0_2 {
    char unknown_0_[0xa];
    unsigned short unknown_a_;
    char unknown_c_[0x12 - 0xc];
    unsigned char unknown_12_;
    char unknown_13_[0x50 - 0x13];
    unsigned short unknown_50_;
#if defined(jpn)
    char unknown_52_[0xf4 - 0x52];
#else
    char unknown1_52_[0xf8 - 0x52];
#endif
    unsigned int unknown_f8_0_ : 27;
    unsigned int unknown_fb_3_ : 5;
    char unknown_fc_[0x101 - 0xfc];
    unsigned char unknown_101_;
    char unknown_102_[0x103 - 0x102];
    unsigned char unknown_103_;
    char unknown_104_[0x116 - 0x104];
    signed char unknown_116_;
};

extern "C" ARM int func_ov001_021557e0(struct Struct_ov001_021557e0_2* arg0) {
    GameResources* var0 = GetGameResources();
    if (IsBrightnessOutsideValidRange((GameResources*)var0, false) != 0) {
        arg0->unknown_101_ = 1;
    }
    if (func_ov001_02153994() != 1) {
        return arg0->unknown_a_;
    }

    void* var1 = func_0202ae18();
    GameState* var2 = GameState::GetInstance();

    if (arg0->unknown_12_ != 0 && func_0202c540(var1) != 0) {
        arg0->unknown_103_ = 1;
        if (arg0->unknown_f8_0_ & 0x10) {
            GameObject* var3 = func_0200ff1c(var2, 0);
            ((unsigned int*)((char*)var3 + COMBATANT_FLAGS_021557e0))[0] |= 2;
        }
    }

    if (arg0->unknown_101_ != 0) {
        for (int var4 = 0; var4 < 4; var4++) {
            GameObject* var5 = var2->GetPartyMemberByIndex(var4);
            if (var5 == 0) {
                continue;
            }
            func_02033fcc((struct Struct_02033fcc*)var5);
            if (func_02039d7c((char*)var5) == 0 || func_020399a8(var5)->unknown_1_ != 2) {
                var5->obj3D_.MaybeSetRegularAnimation(data_ov001_02164bd1, 0x10);
            }
            func_02039d24((unsigned char*)var5);
            var5->obj3D_.EnableFlag(0x800000);
        }

        int var6[4];
        int var7;
        func_02010834((struct Struct_02010834*)var2, func_020100a8(var2), var6, &var7);
        for (int var8 = 0; var8 < var7; var8++) {
            GameObject* var9 = var2->GetPartyMemberByIndex(var6[var8]);
            if (var9 == 0) {
                continue;
            }
            var9->obj3D_.SetInheritedAlpha(0x1f);
            func_02039d58((unsigned char*)var9);
        }

        unsigned int* var10 = (unsigned int*)func_020d6c00();
        void* var11 = func_02010828(var2);
        for (int var12 = 0; var12 < 4; var12++) {
            struct Struct_ov001_021557e0* var13 = (struct Struct_ov001_021557e0*)func_0200ff1c(var2, var12);
            if (var13 == 0) {
                continue;
            }
            if (func_02086ef0((struct Struct_02048150*)var11, var12) != 0) {
                func_0205420c((struct Struct_0205420c*)var13, 1, 0);
            }
            func_ov017_02191f4c((int)var0, var12);
            func_ov017_02192400((int)var0, var12);
        }
        func_020466e4(var10, 0x20000);
    }

    if (func_0202b7d8((int*)var1) != 0 && arg0->unknown_12_ != 0 && arg0->unknown_116_ < 0) {
        if (arg0->unknown_101_ != 0) {
            int var14 = func_020100b0(var2);
            for (int var15 = 0; var15 < 4; var15++) {
                if (var15 == var14) {
                    continue;
                }
                struct Struct_ov001_021557e0* var16 = (struct Struct_ov001_021557e0*)func_0200ff1c(var2, var15);
                if (var16 == 0) {
                    continue;
                }
                var16->unknown_c1_0_ |= 1;
                var16->unknown_c1_0_ |= 2;
                func_ov017_021917f0(var15, 0);
                if (!(*var16->unknown_130_ & 1)) {
                    var16->unknown_18c_ |= 2;
                }
            }
        }
    } else if (arg0->unknown_116_ >= 0) {
        struct Struct_ov001_021557e0* var17 = (struct Struct_ov001_021557e0*)func_0200ff1c(var2, arg0->unknown_116_);
        if (var17 != 0) {
            var17->unknown_c1_0_ |= 1;
            var17->unknown_c1_0_ |= 2;
            var17->unknown_18c_ |= 2;
            func_ov017_021917f0(arg0->unknown_116_, 0);
        }
    }

    SetFlags04(var0, 0x1000);

    if (arg0->unknown_50_ & 0x200) {
        volatile unsigned int* var18 = (volatile unsigned int*)0x4000000;
        *var18 = (*var18 & ~0x1f00) | 0x1100;
    }

    if ((arg0->unknown_f8_0_ & 0x10) && func_0202c508(var1) != 0) {
        func_020e3368((unsigned char*)func_020e2ff8(), 1);
        return 0x12;
    }
    return func_ov001_02154de4((struct Struct_ov001_02154de4*)arg0);
}
