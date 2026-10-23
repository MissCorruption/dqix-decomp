#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"
#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov003_02154af4_3 {
#if defined(jpn)
    char unknown_0_[0x28c];
    unsigned int unknown_464_;
    char unknown_290_[0x2cb - 0x290];
#else
    char unknown1_0_[0x464];
    unsigned int unknown_464_;
    char unknown_468_[0x4a3 - 0x468];
#endif
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
#if defined(jpn)
    char unknown_2cd_[0x2d8 - 0x2cd];
#else
    char unknown_4a5_[0x4b0 - 0x4a5];
#endif
    int unknown_4b0_;
};

struct Struct_ov000_0215b278 {
    char unknown_0_[9];
    unsigned char unknown_9_;
#if defined(jpn)
    char unknown_a_[0xc9 - 0xa];
#else
    char unknown1_a_[0xcd - 0xa];
#endif
    unsigned char unknown_cd_;
    unsigned char unknown_ce_;
    unsigned char unknown_cf_;
};

struct Struct_0209a678_2 {
    char unknown_0_[0x14];
    unsigned char unknown_14_0_ : 1;
};

struct Struct_020bc1ec {
    char unknown_0_[8];
    int unknown_8_;
};

struct Struct_01ff91ac_30;
extern "C" Struct_020bc1ec *func_02012fe4();
extern "C" void func_020daf9c(int, int, int, int);
void SetAndLockBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);
extern "C" GameObject *func_0200ff1c(GameState *, int);
extern "C" int func_020100a8(GameState *);
struct Struct_02033834;
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_ov017_021af59c(Struct_ov000_0215b278 *);
struct Struct_020469f8;
struct Struct_020469f8_2;
extern "C" void func_020469f8(Struct_020469f8*, Struct_020469f8_2*);
struct Struct_ov003_021638e4_2;
extern "C" void func_ov017_021b11b0(Struct_ov003_021638e4_2*);
extern "C" int *func_0202ae18();
extern "C" int func_0202b7d8(int *);
extern "C" void func_ov017_021d1810(int, int, signed char);
extern "C" void *func_020936f8();
extern "C" void func_02094030(void *, int, int, int);
extern "C" unsigned int *func_020d6c00();
struct Struct_02038598_4;
extern "C" void func_020466f4(Struct_02038598_4*, unsigned int);
extern "C" int func_020100b0(GameState *);
struct Struct_02052e2c;
extern "C" Struct_0209a678_2 * func_02052e2c(Struct_02052e2c*);
extern "C" void func_ov017_021bbae4(Struct_ov000_0215b278 *, int, int);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
struct Struct_02038598_5;
extern "C" int func_02046b60(Struct_02038598_5*, int);
struct GameResources;
void SetBrightness(GameResources*, int, int);
extern "C" void func_ov017_0219bd1c(int, int, int, int);
extern "C" int *func_0200fd0c(GameState *);
extern "C" char *func_020421a0();
extern "C" void func_02043204(char *);
extern "C" void func_02043124(char *);
extern "C" unsigned char *func_02053c6c(unsigned char *);
extern "C" void func_02086380(unsigned char *);
struct Struct_ov003_021638e4;
extern "C" void func_ov017_021b6b8c(Struct_ov003_021638e4*);
extern "C" void __clear(void *, int);

#if defined(jpn)
#define RES_LIST_021638e4 0x4ec
#define RES_NODE_A_021638e4 0x910
#define RES_NODE_B_021638e4 0x914
#define RES_NODE_C_021638e4 0x524
#define RES_STATE_021638e4 0x8e0
#else
#define RES_LIST_021638e4 0x6fc
#define RES_NODE_A_021638e4 0xb30
#define RES_NODE_B_021638e4 0xb34
#define RES_NODE_C_021638e4 0x734
#define RES_STATE_021638e4 0xb00
#endif

// USA: func_ov003_021638e4
extern "C" ARM void func_ov003_021638e4(Struct_ov003_02154af4_3 *arg0) {
    char *var0;
    GameState *var1;
    unsigned char *var2;
    void *var3;
    BackgroundLoader *var4;
    var0    = (char *) GetGameResources();
    var3   = *(void **) (var0 + 0x3000 + RES_LIST_021638e4);
    var1     = GameState::GetInstance();
    var4 = BackgroundLoader::GetInstance();
    var2     = (unsigned char *)func_02010828(var1);
    func_02012fe4();
    unsigned char var5 = arg0->unknown_4a4_;

    if (var5 == 0) {
        if (!(arg0->unknown_464_ & 0x40) || arg0->unknown_4b0_ != 0) {
            func_020daf9c(1, 0, 1, 0);
            SetAndLockBrightness((GameResources*)var0, 0x10, 0xf);
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        }
    } else if (var5 == 1) {
        if (IsBrightnessTransitionActive((GameResources*)var0) == 0) {
            for (int var6 = 0; var6 < var2[0xf7c]; var6++) {
                GameObject *var7 = func_0200ff1c(var1, (var2 + var6)[0xf78]);
                if (var7 != 0) {
                    var7->obj3D_.MakeHidden();
                }
            }
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        }
    } else if (var5 == 2) {
        if (IsBrightnessTransitionActive((GameResources*)var0) == 0 && var4->GetNumQueuedTasks() <= 0) {
            if (arg0->unknown_464_ & 0x40) {
                GameObject *var8 = func_0200ff1c(var1, func_020100a8(var1));
                if (var8 != 0) {
                    Vector3i *var9 = &var8->obj3D_.position_;
                    var9->x        = 0x5800;
                    var9->y        = 0x199;
                    var9->z        = -0x785;
                    func_02033874((Struct_02033834*)var8, 0);
                }
                Struct_ov000_0215b278 *var10 = *(Struct_ov000_0215b278 **) (var0 + 0x3000 + RES_NODE_A_021638e4);
                func_ov017_021af59c(var10);
                var10->unknown_9_ = 2;
                func_020469f8((Struct_020469f8*)var3, (Struct_020469f8_2*)var10);
            } else {
                Struct_ov000_0215b278 *var11 = *(Struct_ov000_0215b278 **) (var0 + 0x3000 + RES_NODE_B_021638e4);
                func_ov017_021b11b0((Struct_ov003_021638e4_2*)var11);
                func_020469f8((Struct_020469f8*)var3, (Struct_020469f8_2*)var11);
            }
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        }
    } else if (var5 == 3) {
        if (arg0->unknown_464_ & 0x40) {
            Vector3i var12[4];
            for (int var13 = 0; var13 < 4; var13++) {
                GameObject *var14 = func_0200ff1c(var1, (var2 + var13)[0xf78]);
                if (var14 != 0) {
                    var12[var13] = var14->obj3D_.position_;
                    var14->obj3D_.MakeVisible();
                }
            }
            if (func_0202b7d8(func_0202ae18()) != 0) {
                func_ov017_021d1810(0, -1, (signed char) func_020100a8(var1));
                func_02094030(func_020936f8(), 1, -1, 0);
            }
        } else {
            if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() > 0) {
                return;
            }
            Vector3i var15;
            __clear(&var15, 12);
            GameObject *var16 = var1->GetPartyMemberByIndex(0);
            if (var16 != 0) {
                var15 = *(Vector3i *) ((char *) var16 + 0x44);
            }
            for (int var17 = 0; var17 < 4; var17++) {
                GameObject *var18 = func_0200ff1c(var1, var17);
                if (var18 != 0) {
                    var18->obj3D_.MakeVisible();
                    var18->obj3D_.position_ = var15;
                }
            }
        }
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
    } else if (var5 == 4) {
        if (IsBrightnessTransitionActive((GameResources*)var0) == 0) {
            func_020466f4((Struct_02038598_4*)func_020d6c00(), 0x80000);
            Struct_020bc1ec *var19   = func_02012fe4();
            Struct_ov000_0215b278 *var20     = *(Struct_ov000_0215b278 **) (var0 + 0x3000 + RES_NODE_C_021638e4);
            Struct_0209a678_2 *var21 = func_02052e2c((Struct_02052e2c*)(var1->GetGameObjectByIndex(func_020100b0(var1))));
            func_ov017_021bbae4(var20, var19->unknown_8_, 2);
            var20->unknown_cd_ = func_020100b0(var1);
            var20->unknown_ce_ = var21->unknown_14_0_;
            if (arg0->unknown_464_ & 0x40) {
                arg0->unknown_464_ &= ~0x40;
                if (func_0202b7d8(func_0202ae18()) != 0) {
                    var20->unknown_cf_ = 2;
                    func_020469b4((Struct_0201bdac_2*)var3, (Struct_0201bdac*)var20);
                }
                if (func_02046b60((Struct_02038598_5*)var3, 3) == 0) {
                    SetBrightness((GameResources*)var0, 0, 8);
                }
            } else {
                var20->unknown_cf_ = 3;
                func_020469f8((Struct_020469f8*)var3, (Struct_020469f8_2*)var20);
                func_ov017_0219bd1c(1, 0, 0, 1);
                int *var22                         = func_0200fd0c(var1);
                var22[4]                           = 0x48cc;
                var22[5]                           = 0x199;
                var22[6]                           = -0x733;
                *(short *) ((char *) var22 + 0x1c) = 0;
                *((unsigned char *) var22 + 0x6e)  = 0x40;
                *((unsigned char *) var22 + 0xa)   = 0;
            }
            char *var23 = func_020421a0();
            func_02043204(var23);
            func_02043124(var23);
            arg0->unknown_4a3_  = 0x10;
            arg0->unknown_4a4_ = 0;
            for (signed char var24 = 0; var24 < 4; var24++) {
                GameObject *var25 = var1->GetPartyMemberByIndex(var24);
                if (var25 != 0) {
                    unsigned char *var26 = func_02053c6c((unsigned char *) var25);
                    if (var26 != 0) {
                        func_02086380(var26);
                    }
                }
            }
            func_ov017_021b6b8c((Struct_ov003_021638e4*)(*(void **) (var0 + 0x3000 + RES_STATE_021638e4)));
        }
    }
}
