#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include <globaldefs.h>

struct Struct_ov003_0216e2a4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov003_0216e2a4_2 {
    void *unknown_0_;
    Struct_ov003_0216e2a4 *unknown_4_;
    char unknown_8_[0xc4 - 8];
    unsigned char unknown_c4_;
    char unknown_c5_[0xe0 - 0xc5];
};

struct Struct_ov003_0216e2a4_3 {
    char unknown_0_[0x98];
    Struct_ov003_0216e2a4 *unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};

struct Struct_ov003_0216e2a4_4 {
    char unknown_0_;
    char unknown_1_;
    char unknown_2_;
    char unknown_3_[0x14 - 3];
    void *unknown_14_;
    char unknown_18_[4];
    int unknown_1c_;
    char unknown_20_[0x3c - 0x20];
    Struct_ov003_0216e2a4_3 *unknown_3c_;
    Struct_ov003_0216e2a4 *unknown_40_;
    Struct_ov003_0216e2a4_2 *unknown_44_;
    char unknown_48_[0x60 - 0x48];
    int unknown_60_;
    int unknown_64_;
    char unknown_68_[0xa4 - 0x68];
    int unknown_a4_;
    int unknown_a8_;
    char unknown_ac_[0xb4 - 0xac];
    short unknown_b4_;
    char unknown_b6_[2];
    unsigned char unknown_b8_;
    char unknown_b9_[0xbc - 0xb9];
    SafeAllocator unknown_bc_;
    SafeAllocator *unknown_d0_;
    void *unknown_d4_;
    char unknown_d8_[4];
    char unknown_dc_[0x20];
};

struct Struct_0204b12c;
struct Struct_02020cb8_5;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_02020cb8_2;
struct Struct_0204c7a8;
struct Struct_0205cf78;
struct Struct_0205cf78_2;

extern "C" void func_0204b11c(unsigned char *arg0, int arg1);
extern "C" int func_02046900(Struct_02020cb8_4 *arg0);
extern "C" void *func_020467f0(Struct_02020aec *arg0, int arg1, void **arg2, int *arg3);
extern "C" void func_0204b5b4(Struct_ov003_0216e2a4 *arg0, int arg1);
extern "C" void func_0204b12c(Struct_0204b12c *arg0,
                                                                                         SafeAllocator *arg1);
extern "C" void func_0204b5e8(Struct_02020cb8_5 *arg0, int arg1, int arg2);
extern "C" void func_0204b174(Struct_ov003_0216e2a4 *arg0, void *arg1, SafeAllocator *arg2, unsigned int arg3);
extern "C" void func_0204bc74(Struct_ov003_0216e2a4 *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_0204b0e8(Struct_02020cb8_2 *arg0, void *arg1);
extern "C" void func_0204c7a8(Struct_0204c7a8 *arg0, SafeAllocator *arg1,
                                                                           int arg2, unsigned int arg3);
extern "C" void func_0205cf78(Struct_0205cf78 *arg0,
                                                                                     Struct_0205cf78_2 *arg1,
                                                                                     unsigned char arg2);
extern "C" void func_0205a528(void *arg0, void *arg1, unsigned int arg2, SafeAllocator *arg3);
extern "C" void func_020dfec0(void *arg0, SafeAllocator *arg1, void *arg2, unsigned int arg3);
extern "C" void func_ov023_021e20f0(void *arg0, SafeAllocator *arg1, void *arg2, unsigned int arg3);

extern const unsigned char data_ov003_0217f5ba[2];
extern const unsigned char data_ov003_0217f5b8[2];
extern char data_ov003_02180222[];
extern char data_ov003_02180235[];
extern char data_ov003_02180249[];
extern char data_ov003_02180260[];
#if defined(jpn)
#define data_ov003_02180222 data_ov003_0217e9c0
#define data_ov003_02180235 data_ov003_0217e9d3
#define data_ov003_02180249 data_ov003_0217e9ee
extern char data_ov003_0217e9c0[];
extern char data_ov003_0217e9d3[];
extern char data_ov003_0217e9ee[];
extern char data_ov003_0217ea05[];
#endif
extern char data_ov003_0218027a[];

// USA: func_ov003_0216e2a4
#if defined(jpn)
extern "C" ARM void func_ov003_0216e2a4(Struct_ov003_0216e2a4_4 *arg0) {
    BackgroundLoader *var0 = BackgroundLoader::GetInstance();

    if (arg0->unknown_2_ == 0) {
        func_0204b11c((unsigned char *) &arg0->unknown_40_[0], 0);
        arg0->unknown_40_[0].unknown_1c_0_ = 0;
        arg0->unknown_40_[0].unknown_1c_4_ = 1;
        func_0204b5b4(&arg0->unknown_40_[0], 0);
        func_0204b12c((Struct_0204b12c *) &arg0->unknown_40_[0], arg0->unknown_d0_);
        func_0204b5e8((Struct_02020cb8_5 *) &arg0->unknown_40_[0], 0, 0);
        BG1CNT = (BG1CNT & 0x43) | 0xd08;
        func_0204b11c((unsigned char *) &arg0->unknown_40_[1], 0);
        arg0->unknown_40_[1].unknown_1c_0_ = 0;
        arg0->unknown_40_[1].unknown_1c_4_ = 2;
        func_0204b5b4(&arg0->unknown_40_[1], 1);
        func_0204b12c((Struct_0204b12c *) &arg0->unknown_40_[1], arg0->unknown_d0_);
        func_0204b5e8((Struct_02020cb8_5 *) &arg0->unknown_40_[1], 0, 0);
        BG2CNT = (BG2CNT & 0x43) | 0xe08;
        arg0->unknown_1c_ = var0->QueueLoadFile(data_ov003_02180222, 0);
        arg0->unknown_2_ = 1;
    } else if (arg0->unknown_2_ == 1) {
        if (var0->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var1;
            void *var2;
            void *var3[2];
            unsigned int var4;
            int var5[2];
            var0->GetLoadedFileByID(arg0->unknown_1c_, &var2, &var4);
            int var6 = func_02046900((Struct_02020cb8_4 *) var2);
            for (int var7 = 0; var7 < var6; var7++)
                var3[var7] = func_020467f0((Struct_02020aec *) var2, var7, &var1, &var5[var7]);
            for (int var8 = 0; var8 < var6; var8++) {
                if (var3[var8] != 0) func_0204b174(arg0->unknown_40_, var3[var8], arg0->unknown_d0_, var5[var8]);
            }
            var0->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_                    = -1;
            func_0204bc74(&arg0->unknown_40_[0], 0, 0, 0, 0x20, 0x19, 0);
            func_0204b0e8((Struct_02020cb8_2 *) &arg0->unknown_40_[0], 0);
            func_0204bc74(&arg0->unknown_40_[1], 0, 0, 0, 0x20, 0x19, 0);
            func_0204b0e8((Struct_02020cb8_2 *) &arg0->unknown_40_[1], 0);
            arg0->unknown_14_ = arg0->unknown_d0_->Allocate(0x2800);
            func_0204c7a8((Struct_0204c7a8 *) &arg0->unknown_44_[0], arg0->unknown_d0_, (int) arg0->unknown_14_, 0x500);
            arg0->unknown_44_[0].unknown_4_ = &arg0->unknown_40_[0];
            arg0->unknown_44_[0].unknown_c4_      = 0;
            func_0204c7a8((Struct_0204c7a8 *) &arg0->unknown_44_[1], arg0->unknown_d0_, (int) arg0->unknown_14_, 0x500);
            arg0->unknown_44_[1].unknown_4_ = &arg0->unknown_40_[1];
            arg0->unknown_44_[1].unknown_c4_      = 0;
            Struct_ov003_0216e2a4_3 *var9 = arg0->unknown_3c_;
            var9->unknown_98_    = arg0->unknown_40_;
            var9->unknown_b2_         = 2;
            func_0205cf78((Struct_0205cf78 *) arg0->unknown_3c_,
                                                                                 (Struct_0205cf78_2 *) arg0->unknown_44_, 2);
            arg0->unknown_b8_ = 0;
            arg0->unknown_a8_ = arg0->unknown_60_;
            arg0->unknown_b4_ = 0xa;
            arg0->unknown_a4_ = arg0->unknown_64_;
            arg0->unknown_1c_  = var0->QueueLoadFile(data_ov003_02180235, 0);
            arg0->unknown_2_  = 2;
        }
    } else if (arg0->unknown_2_ == 2) {
        if (var0->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var10;
            void *var11;
            unsigned int var12;
            int var13;
            var0->GetLoadedFileByID(arg0->unknown_1c_, &var11, &var12);
            int var14 = func_02046900((Struct_02020cb8_4 *) var11);
            for (int var15 = 0; var15 < var14; var15++) {
                void *var16 = func_020467f0((Struct_02020aec *) var11, var15, &var10, &var13);
                func_0205a528((char *) arg0 + 0x68, var16, var13, &arg0->unknown_bc_);
            }
            var0->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_ = -1;
            arg0->unknown_1c_ = var0->QueueLoadFile(data_ov003_02180249, 0);
            arg0->unknown_2_ = 3;
        }
    } else if (arg0->unknown_2_ == 3) {
        if (var0->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var17;
            unsigned int var18;
            var0->GetLoadedFileByID(arg0->unknown_1c_, &var17, &var18);
            func_ov023_021e20f0(arg0->unknown_d4_, arg0->unknown_d0_, var17, var18);
            var0->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_ = -1;
            arg0->unknown_1c_ = var0->QueueLoadFile(data_ov003_0217ea05, 0);
            arg0->unknown_2_ = 4;
        }
    } else if (arg0->unknown_2_ == 4) {
        if (var0->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var19;
            unsigned int var20;
            var0->GetLoadedFileByID(arg0->unknown_1c_, &var19, &var20);
            func_020dfec0(arg0->unknown_dc_, arg0->unknown_d0_, var19, var20);
            var0->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_  = -1;
            arg0->unknown_1_ = 2;
            arg0->unknown_2_  = 0;
        }
    }
}
#else
extern "C" ARM void func_ov003_0216e2a4(Struct_ov003_0216e2a4_4 *arg0) {
    BackgroundLoader *var21 = BackgroundLoader::GetInstance();

    if (arg0->unknown_2_ == 0) {
        Struct_ov003_0216e2a4 *var22 = arg0->unknown_40_;
        for (int var23 = 0; var23 < 2; var23++) {
            func_0204b11c((unsigned char *) var22, 0);
            var22->unknown_1c_0_ = 0;
            var22->unknown_1c_4_ = data_ov003_0217f5ba[var23];
            func_0204b5b4(var22, data_ov003_0217f5b8[var23]);
            func_0204b12c((Struct_0204b12c *) var22,
                                                                                     arg0->unknown_d0_);
            func_0204b5e8((Struct_02020cb8_5 *) var22, 0, 0);
            var22++;
        }
        BG1CNT      = (BG1CNT & 0x43) | 0xd08;
        BG2CNT      = (BG2CNT & 0x43) | 0xe08;
        arg0->unknown_1c_ = var21->QueueLoadFile(data_ov003_02180222, 0);
        arg0->unknown_2_ = 1;
    } else if (arg0->unknown_2_ == 1) {
        if (var21->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var24;
            void *var25;
            void *var26[2];
            unsigned int var27;
            int var28[2];
            var21->GetLoadedFileByID(arg0->unknown_1c_, &var25, &var27);
            int var29 = func_02046900((Struct_02020cb8_4 *) var25);
            for (int var30 = 0; var30 < var29; var30++)
                var26[var30] = func_020467f0((Struct_02020aec *) var25, var30, &var24, &var28[var30]);
            for (int var31 = 0; var31 < var29; var31++) {
                if (var26[var31] != 0) func_0204b174(arg0->unknown_40_, var26[var31], arg0->unknown_d0_, var28[var31]);
            }
            var21->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_                    = -1;
            Struct_ov003_0216e2a4 *var32 = arg0->unknown_40_;
            for (int var33 = 0; var33 < 2; var33++) {
                func_0204bc74(var32, 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((Struct_02020cb8_2 *) var32, 0);
                var32++;
            }
            arg0->unknown_14_          = arg0->unknown_d0_->Allocate(0x2800);
            Struct_ov003_0216e2a4_2 *var34 = arg0->unknown_44_;
            for (int var35 = 0; var35 < 2; var35++) {
                func_0204c7a8((Struct_0204c7a8 *) var34, arg0->unknown_d0_,
                                                                           (int) arg0->unknown_14_, 0x500);
                var34->unknown_4_ = &arg0->unknown_40_[var35];
                var34->unknown_c4_      = 0;
                var34++;
            }
            Struct_ov003_0216e2a4_3 *var36 = arg0->unknown_3c_;
            var36->unknown_98_    = arg0->unknown_40_;
            var36->unknown_b2_         = 2;
            func_0205cf78((Struct_0205cf78 *) arg0->unknown_3c_,
                                                                                 (Struct_0205cf78_2 *) arg0->unknown_44_, 2);
            arg0->unknown_b8_ = 0;
            arg0->unknown_a8_ = arg0->unknown_60_;
            arg0->unknown_b4_ = 0x16;
            arg0->unknown_a4_ = arg0->unknown_64_;
            arg0->unknown_1c_  = var21->QueueLoadFile(data_ov003_02180235, 0);
            arg0->unknown_2_  = 2;
        }
    } else if (arg0->unknown_2_ == 2) {
        if (var21->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var37;
            void *var38;
            unsigned int var39;
            int var40;
            var21->GetLoadedFileByID(arg0->unknown_1c_, &var38, &var39);
            int var41 = func_02046900((Struct_02020cb8_4 *) var38);
            for (int var42 = 0; var42 < var41; var42++) {
                void *var43 = func_020467f0((Struct_02020aec *) var38, var42, &var37, &var40);
                func_0205a528((char *) arg0 + 0x68, var43, var40, &arg0->unknown_bc_);
            }
            var21->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_ = -1;
            arg0->unknown_1c_ = var21->QueueLoadFile(data_ov003_02180249, 0);
            arg0->unknown_2_ = 3;
        }
    } else if (arg0->unknown_2_ == 3) {
        if (var21->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var44;
            unsigned int var45;
            var21->GetLoadedFileByID(arg0->unknown_1c_, &var44, &var45);
            func_ov023_021e20f0(arg0->unknown_d4_, arg0->unknown_d0_, var44, var45);
            var21->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_ = -1;
            arg0->unknown_1c_ = var21->QueueLoadFileInGP2(data_ov003_02180260, data_ov003_0218027a, 0);
            arg0->unknown_2_ = 4;
        }
    } else if (arg0->unknown_2_ == 4) {
        if (var21->GetTaskStatus(arg0->unknown_1c_) != 0) {
            void *var46;
            unsigned int var47;
            var21->GetLoadedFileByID(arg0->unknown_1c_, &var46, &var47);
            func_020dfec0(arg0->unknown_dc_, arg0->unknown_d0_, var46, var47);
            var21->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_  = -1;
            arg0->unknown_1_ = 2;
            arg0->unknown_2_  = 0;
        }
    }
}
#endif
