#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Graphics.h"
#include <globaldefs.h>

struct Struct_ov003_0216b07c_2 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov003_0216b07c_3 {
    void *unknown_0_;
    Struct_ov003_0216b07c_2 *unknown_4_;
    char unknown_8_[0xc4 - 8];
    unsigned char unknown_c4_;
    char unknown_c5_[0xe0 - 0xc5];
};

struct Struct_ov003_0216b07c_5 {
    char unknown_0_[0x98];
    Struct_ov003_0216b07c_2 *unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};

struct Struct_ov003_0216b07c_6 {
#if defined(jpn)
    char unknown_0_[0x28];
    char *unknown_28_;
    char unknown_2c_[0x868 - 0x2c];
    int unknown_998_;
    int unknown_99c_;
    char unknown_870_[0x17e2 - 0x870];
#else
    char unknown1_0_[0x5c];
    char *unknown_5c_;
    char unknown_60_[0x998 - 0x60];
    int unknown_998_;
    int unknown_99c_;
    char unknown_9a0_[0x19b2 - 0x9a0];
#endif
    unsigned char unknown_19b2_;
};

struct Struct_ov003_0216b07c {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    char unknown_8_[2];
    short unknown_a_;
#if defined(jpn)
    char unknown_c_[0x10f4 - 0xc];
#else
    char unknown1_c_[0x1264 - 0xc];
#endif
    int unknown_1264_;
    int unknown_1268_;
    char unknown_126c_[0x12a8 - 0x126c];
    int unknown_12a8_;
    int unknown_12ac_;
    char unknown_12b0_[0x12b8 - 0x12b0];
    short unknown_12b8_;
    char unknown_12ba_[2];
    unsigned char unknown_12bc_;
    char unknown_12bd_[0x12c0 - 0x12bd];
    Struct_ov003_0216b07c_5 *unknown_12c0_;
    Struct_ov003_0216b07c_2 *unknown_12c4_;
    Struct_ov003_0216b07c_3 *unknown_12c8_;
    void *unknown_12cc_;
    SafeAllocator *unknown_12d0_;
    char unknown_12d4_[0x12fc - 0x12d4];
    SafeAllocator unknown_12fc_[2];
    char unknown_1324_[0x13ea - 0x1324];
    unsigned char unknown_13ea_;
    char unknown_13eb_;
    unsigned char unknown_13ec_;
    char unknown_13ed_[0x13fc - 0x13ed];
    int unknown_13fc_[3];
};

struct Struct_02018300_3;
struct Struct_0204b12c;
struct Struct_02020cb8_5;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_02020cb8_2;
struct Struct_0204c7a8;
struct Struct_0205cf78;
struct Struct_0205cf78_2;

extern "C" void func_020397cc(Struct_02018300_3 *arg0, int arg1);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" const char *func_020e51cc(int arg0);
extern "C" void func_0204b11c(unsigned char *arg0, int arg1);
extern "C" int func_02046900(Struct_02020cb8_4 *arg0);
extern "C" void *func_020467f0(Struct_02020aec *arg0, int arg1, void **arg2, int *arg3);
extern "C" int func_0202b7d8(int *arg0);
extern "C" void *func_0202ae18();
extern "C" int func_0202c508();
extern "C" int func_0202c540(void *arg0);
extern "C" void func_02046380(void *arg0);
#if defined(jpn)
struct Struct_02046574_2;
extern "C" void func_02046574(Struct_02046574_2 *arg0, int arg1, char *arg2);
extern "C" void func_0204500c(void *arg0, const char *arg1, int arg2);
extern char data_ov003_0217e930[];
#else
extern "C" void func_0204500c(void *arg0, const char *arg1, int arg2, int arg3);
#endif
extern "C" void func_0205a528(void *arg0, void *arg1, unsigned int arg2, SafeAllocator *arg3);
extern "C" void func_020dfec0(void *arg0, SafeAllocator *arg1, void *arg2, unsigned int arg3);
extern "C" void func_0204b5b4(Struct_ov003_0216b07c_2 *arg0, int arg1);
extern "C" void func_0204b12c(Struct_0204b12c *arg0,
                                                                                         SafeAllocator *arg1);
extern "C" void func_0204b5e8(Struct_02020cb8_5 *arg0, int arg1, int arg2);
extern "C" void func_0204b174(Struct_ov003_0216b07c_2 *arg0, void *arg1, SafeAllocator *arg2, unsigned int arg3);
extern "C" void func_0204bc74(Struct_ov003_0216b07c_2 *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_0204b0e8(Struct_02020cb8_2 *arg0, void *arg1);
extern "C" void func_0204c7a8(Struct_0204c7a8 *arg0, SafeAllocator *arg1,
                                                                           int arg2, unsigned int arg3);
extern "C" void func_0205cf78(Struct_0205cf78 *arg0,
                                                                                     Struct_0205cf78_2 *arg1,
                                                                                     unsigned char arg2);
extern "C" void *func_020421a0();

struct Struct_ov003_0217f56c {
    const char *unknown_0_[3];
};
extern Struct_ov003_0217f56c data_ov003_0217f56c;
extern char data_ov003_02180198[];

struct Struct_ov003_0216b07c_4 {
    volatile unsigned short unknown_0_0_ : 2;
    volatile unsigned short unknown_0_2_ : 14;
};

// USA: func_ov003_0216b07c
extern "C" ARM void func_ov003_0216b07c(Struct_ov003_0216b07c *arg0) {
    Struct_ov003_0216b07c_6 *var0   = (Struct_ov003_0216b07c_6 *) func_020421a0();
    GameState *var1         = GameState::GetInstance();
    BackgroundLoader *var2 = BackgroundLoader::GetInstance();

    if (arg0->unknown_6_ == 0) {
        func_020397cc((Struct_02018300_3 *) var1->GetUnknownGameObject(), 1);
        ColorEffect_ConfigureAlphaBlend(0x4000050, 0x10, 1, 0x1f, 0);
        func_0202ae18();
        if (func_0202c508() != 0 && *(short *) ((char *) var1->GetUnknownGameObject() + 4) == 0) {
            if (arg0->unknown_a_ == 3) {
                var0->unknown_998_ = 1;
#if defined(jpn)
                func_02042058(var0->unknown_28_, data_ov003_0217e930);
                func_0204500c(var0, var0->unknown_28_, 0);
#else
                char *var3      = var0->unknown_5c_;
                func_02042058(var3, func_020e51cc(0x44));
                func_02046380(var0);
                func_0204500c(var0, var0->unknown_5c_, 0, 0xe3);
#endif
                var0->unknown_19b2_ = 1;
                var0->unknown_99c_  = 2;
                var0->unknown_998_  = 1;
            }
        } else {
            arg0->unknown_13ea_ = 1;
            arg0->unknown_13ec_ |= 1;
            arg0->unknown_4_ = 3;
            arg0->unknown_6_  = 0;
            return;
        }
        arg0->unknown_12fc_[0].CreateTypeA(arg0->unknown_12d0_->Allocate(0x3800), 0x3800);
        arg0->unknown_12fc_[1].CreateTypeA(arg0->unknown_12d0_->Allocate(0xc00), 0xc00);
        arg0->unknown_12fc_[1].Reset();
        int var4               = 0;
        arg0->unknown_12bc_      = 0;
        arg0->unknown_12ac_      = arg0->unknown_1264_;
        arg0->unknown_12b8_      = 0xf;
        arg0->unknown_12a8_      = arg0->unknown_1268_;
        Struct_ov003_0217f56c var5 = data_ov003_0217f56c;
        int var6            = 0;
        for (; var4 < 3; var4++) {
            int var7;
#if defined(jpn)
            var7 = var2->QueueLoadFile(var5.unknown_0_[var4], (SafeAllocator *) var6);
#else
            if (var4 == 0)
                var7 = var2->QueueLoadFileInGP2(data_ov003_02180198, var5.unknown_0_[var4], (SafeAllocator *) var6);
            else
                var7 = var2->QueueLoadFile(var5.unknown_0_[var4], (SafeAllocator *) var6);
#endif
            arg0->unknown_13fc_[var4] = var7;
        }
        arg0->unknown_6_ = 1;
    }
    if (arg0->unknown_6_ == 1) {
        for (int var8 = 0; var8 < 3; var8++) {
            if (arg0->unknown_13fc_[var8] == -1) continue;
            if (var2->GetTaskStatus(arg0->unknown_13fc_[var8]) != 0) {
                arg0->unknown_6_ = var8 + 2;
                break;
            }
        }
    }
#if defined(jpn)
    if (arg0->unknown_6_ == 2) {
        void *var9;
        void *var10;
        unsigned int var11;
        int var12;
        int var13 = arg0->unknown_13fc_[0];
#else
    if (arg0->unknown_6_ == 4) {
        void *var9;
        void *var10;
        unsigned int var11;
        int var12;
        int var13 = arg0->unknown_13fc_[2];
#endif
        var2->GetLoadedFileByID(var13, &var10, &var11);
        int var14            = func_02046900((Struct_02020cb8_4 *) var10);
        SafeAllocator *var15 = &arg0->unknown_12fc_[1];
        for (int var16 = 0; var16 < var14; var16++) {
            void *var17 = func_020467f0((Struct_02020aec *) var10, var16, &var9, &var12);
#if defined(jpn)
            func_0205a528((char *) arg0 + 0x10fc, var17, var12, var15);
#else
            func_0205a528((char *) arg0 + 0x126c, var17, var12, var15);
#endif
        }
        var2->RemoveTask(var13);
#if defined(jpn)
        arg0->unknown_13fc_[0] = -1;
#else
        arg0->unknown_13fc_[2] = -1;
#endif
        arg0->unknown_6_     = 1;
    }
#if defined(jpn)
    if (arg0->unknown_6_ == 3) {
        func_0204b11c((unsigned char *) arg0->unknown_12c4_, 0);
        arg0->unknown_12c4_->unknown_1c_0_ = 0;
        arg0->unknown_12c4_->unknown_1c_4_ = 1;
        func_0204b5b4(arg0->unknown_12c4_, 0);
        func_0204b12c((Struct_0204b12c *) arg0->unknown_12c4_, arg0->unknown_12d0_);
        func_0204b5e8((Struct_02020cb8_5 *) arg0->unknown_12c4_, 0, 0);
        BG1CNT = (BG1CNT & 0x43) | 0xd08;
        func_0204b11c((unsigned char *) &arg0->unknown_12c4_[1], 0);
        arg0->unknown_12c4_[1].unknown_1c_0_ = 0;
        arg0->unknown_12c4_[1].unknown_1c_4_ = 2;
        func_0204b5b4(&arg0->unknown_12c4_[1], 1);
        func_0204b12c((Struct_0204b12c *) &arg0->unknown_12c4_[1], arg0->unknown_12d0_);
        func_0204b5e8((Struct_02020cb8_5 *) &arg0->unknown_12c4_[1], 0, 0);
        BG2CNT = (BG2CNT & 0x43) | 0xe08;
        void *var18;
        void *var19;
        void *var20[2];
        unsigned int var21;
        int var22[2];
        int var23 = arg0->unknown_13fc_[1];
        var2->GetLoadedFileByID(var23, &var19, &var21);
        int var24 = func_02046900((Struct_02020cb8_4 *) var19);
        for (int var25 = 0; var25 < var24; var25++) {
            var20[var25] = func_020467f0((Struct_02020aec *) var19, var25, &var18, &var22[var25]);
        }
        for (int var26 = 0; var26 < var24; var26++) {
            if (var20[var26] != 0) func_0204b174(arg0->unknown_12c4_, var20[var26], arg0->unknown_12d0_, var22[var26]);
        }
        var2->RemoveTask(var23);
        arg0->unknown_13fc_[1] = -1;
        func_0204bc74(arg0->unknown_12c4_, 0, 0, 0, 0x20, 0x19, 0);
        func_0204b0e8((Struct_02020cb8_2 *) arg0->unknown_12c4_, 0);
        func_0204bc74(&arg0->unknown_12c4_[1], 0, 0, 0, 0x20, 0x19, 0);
        func_0204b0e8((Struct_02020cb8_2 *) &arg0->unknown_12c4_[1], 0);
        arg0->unknown_12cc_ = arg0->unknown_12d0_->Allocate(0x2800);
        func_0204c7a8((Struct_0204c7a8 *) arg0->unknown_12c8_, arg0->unknown_12d0_, (int) arg0->unknown_12cc_, 0x400);
        arg0->unknown_12c8_->unknown_4_ = arg0->unknown_12c4_;
        arg0->unknown_12c8_->unknown_c4_      = 0;
        Struct_ov003_0216b07c_5 *var27       = arg0->unknown_12c0_;
        var27->unknown_98_          = arg0->unknown_12c4_;
        var27->unknown_b2_               = 2;
        func_0205cf78((Struct_0205cf78 *) arg0->unknown_12c0_, (Struct_0205cf78_2 *) arg0->unknown_12c8_, 1);
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[0].unknown_0_0_ = 3;
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[1].unknown_0_0_ = 1;
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[2].unknown_0_0_ = 2;
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[3].unknown_0_0_ = 0;
        ColorEffect_ConfigureAlphaBlend(0x4000050, 4, 1, 0xa, 6);
        arg0->unknown_6_ = 1;
    }
#else
    if (arg0->unknown_6_ == 3) {
        Struct_ov003_0216b07c_2 *var28 = arg0->unknown_12c4_;
        func_0204b11c((unsigned char *) var28, 0);
        var28->unknown_1c_0_ = 0;
        var28->unknown_1c_4_ = 1;
        func_0204b5b4(var28, 0);
        func_0204b12c((Struct_0204b12c *) var28,
                                                                                 arg0->unknown_12d0_);
        func_0204b5e8((Struct_02020cb8_5 *) var28, 0, 0);
        BG1CNT                     = (BG1CNT & 0x43) | 0xd08;
        Struct_ov003_0216b07c_2 *var29 = arg0->unknown_12c4_;
        func_0204b11c((unsigned char *) &var29[1], 0);
        var29[1].unknown_1c_0_ = 0;
        var29[1].unknown_1c_4_ = 2;
        func_0204b5b4(&var29[1], 1);
        func_0204b12c((Struct_0204b12c *) &var29[1],
                                                                                 arg0->unknown_12d0_);
        func_0204b5e8((Struct_02020cb8_5 *) &var29[1], 0, 0);
        BG2CNT = (BG2CNT & 0x43) | 0xe08;
        void *var30;
        void *var31;
        void *var32[2];
        unsigned int var33;
        int var34[2];
        int var35 = arg0->unknown_13fc_[1];
        var2->GetLoadedFileByID(var35, &var31, &var33);
        int var36  = func_02046900((Struct_02020cb8_4 *) var31);
        var28 = arg0->unknown_12c4_;
        for (int var37 = 0; var37 < var36; var37++) {
            var32[var37] = func_020467f0((Struct_02020aec *) var31, var37, &var30, &var34[var37]);
        }
        for (int var38 = 0; var38 < var36; var38++) {
            if (var32[var38] != 0) func_0204b174(var28, var32[var38], arg0->unknown_12d0_, var34[var38]);
        }
        var2->RemoveTask(var35);
        arg0->unknown_13fc_[1] = -1;
        func_0204bc74(var28, 0, 0, 0, 0x20, 0x19, 0);
        func_0204b0e8((Struct_02020cb8_2 *) var28, 0);
        var29 = arg0->unknown_12c4_;
        func_0204bc74(&var29[1], 0, 0, 0, 0x20, 0x19, 0);
        func_0204b0e8((Struct_02020cb8_2 *) &var29[1], 0);
        arg0->unknown_12cc_          = arg0->unknown_12d0_->Allocate(0x2800);
        Struct_ov003_0216b07c_3 *var39 = arg0->unknown_12c8_;
        func_0204c7a8((Struct_0204c7a8 *) var39, arg0->unknown_12d0_,
                                                                   (int) arg0->unknown_12cc_, 0x400);
        var39->unknown_4_    = arg0->unknown_12c4_;
        var39->unknown_c4_         = 0;
        Struct_ov003_0216b07c_5 *var40 = arg0->unknown_12c0_;
        var40->unknown_98_    = arg0->unknown_12c4_;
        var40->unknown_b2_         = 2;
        func_0205cf78((Struct_0205cf78 *) arg0->unknown_12c0_,
                                                                             (Struct_0205cf78_2 *) arg0->unknown_12c8_, 1);
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[0].unknown_0_0_ = 3;
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[1].unknown_0_0_ = 1;
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[2].unknown_0_0_ = 2;
        ((Struct_ov003_0216b07c_4 *) 0x4000008)[3].unknown_0_0_ = 0;
        ColorEffect_ConfigureAlphaBlend(0x4000050, 4, 1, 0xa, 6);
        arg0->unknown_6_ = 1;
    }
#endif
#if defined(jpn)
    if (arg0->unknown_6_ == 4) {
        int var41 = arg0->unknown_13fc_[2];
        void *var42;
        unsigned int var43;
        var2->GetLoadedFileByID(var41, &var42, &var43);
        arg0->unknown_12fc_[0].Reset();
        func_020dfec0((char *) arg0 + 0x11b4, &arg0->unknown_12fc_[0], var42, var43);
        var2->RemoveTask(var41);
        arg0->unknown_13fc_[2] = -1;
#else
    if (arg0->unknown_6_ == 2) {
        int var44 = arg0->unknown_13fc_[0];
        void *var45;
        unsigned int var46;
        var2->GetLoadedFileByID(var44, &var45, &var46);
        arg0->unknown_12fc_[0].Reset();
        func_020dfec0((char *) arg0 + 0x1324, &arg0->unknown_12fc_[0], var45, var46);
        var2->RemoveTask(var44);
        arg0->unknown_13fc_[0] = -1;
#endif
        arg0->unknown_6_     = 1;
    }
    int var47 = 1;
    for (int var48 = 0; var48 < 3; var48++) {
        if (arg0->unknown_13fc_[var48] != -1) {
            var47 = 0;
            break;
        }
    }
    if (var47) {
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
        arg0->unknown_13ec_ |= 1;
#if defined(jpn)
        func_02046574((Struct_02046574_2 *) var0, 0, *(char **) ((char *) var1->GetUnknownGameObject() + 0x134));
#endif
        void *var49 = func_0202ae18();
        if ((func_0202b7d8((int *) var49) != 0 && func_0202c540(var49) != 0) ||
            *(short *) ((char *) var1->GetUnknownGameObject() + 4) != 0)
        {
            arg0->unknown_4_ = 3;
            arg0->unknown_6_  = 0;
        } else if (arg0->unknown_a_ != 1 && arg0->unknown_a_ != 2) {
            arg0->unknown_4_ = 2;
            arg0->unknown_6_  = 0;
        } else {
            arg0->unknown_13ea_ = 1;
            arg0->unknown_4_   = 5;
            arg0->unknown_6_    = 0;
        }
    }
}
