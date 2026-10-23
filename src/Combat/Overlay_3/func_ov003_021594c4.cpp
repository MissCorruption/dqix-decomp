#include <globaldefs.h>
#include <std_library_functions.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Graphics.h"

#if defined(jpn)
enum { Enum_ov003_021594c4_2152 = 0x868 };
enum { Enum_ov003_021594c4_2160 = 0x870 };
#else
enum { Enum_ov003_021594c4_2456 = 0x998 };
enum { Enum_ov003_021594c4_2464 = 0x9a0 };
#endif

struct Struct_ov003_021594c4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov003_021594c4_3 {
    char unknown_0_[4];
    Struct_ov003_021594c4* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_ov003_021594c4_4 {
    unsigned char unknown_0_[2];
};

struct Struct_ov003_0217f380 {
    Struct_ov003_021594c4_4 unknown_0_;
    Struct_ov003_021594c4_4 unknown_2_;
};

struct Struct_0201099c_3;
struct Struct_02020cb8_5;
struct Struct_0204b12c;
struct Struct_02020aec;
struct Struct_02020cb8_4;
struct Struct_02020cb8_2;
struct Struct_0204c7a8;
struct Struct_0205cf78;
struct Struct_0205cf78_2;
struct Struct_ov003_0215917c;

extern "C" int func_020421a0();
extern "C" void func_ov017_021d243c(int arg0);
extern "C" void func_020dfec0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02005a94(const char* arg0);
extern "C" void func_ov003_02159250(void* arg0, void* arg1);
extern "C" void func_ov003_02159464(void* arg0);
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);
extern "C" void func_0204b5b4(Struct_ov003_021594c4* arg0, int arg1);
extern "C" void func_0204b12c(Struct_0204b12c* arg0, SafeAllocator* arg1);
extern "C" void func_0204b5e8(Struct_02020cb8_5* arg0, int arg1, int arg2);
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0204b174(Struct_ov003_021594c4* arg0, void* arg1, SafeAllocator* arg2, unsigned int arg3);
extern "C" void func_0204bc74(Struct_ov003_021594c4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_0204b0e8(Struct_02020cb8_2* arg0, void* arg1);
extern "C" void func_0204c7a8(Struct_0204c7a8* arg0, SafeAllocator* arg1, int arg2, unsigned int arg3);
extern "C" void func_0205cf78(Struct_0205cf78* arg0, Struct_0205cf78_2* arg1, unsigned char arg2);
extern "C" void func_0205a528(void* arg0, void* arg1, int arg2, SafeAllocator* arg3);
extern "C" int func_020d3018(const char* arg0, const char* arg1);
extern "C" void func_ov003_0215917c(Struct_ov003_0215917c* arg0, int arg1);
extern "C" unsigned char func_02011494(char* arg0, void* arg1);

#if defined(jpn)
#include "Filesystem/FileIO.h"
extern char data_ov003_0217e649[];
#else
extern char data_ov003_0217fe2d[];
extern char data_ov003_0217fe48[];
#endif
extern char data_ov003_0217fe5a[];
extern const Struct_ov003_0217f380 data_ov003_0217f380;
extern char data_ov003_0217fe6b[];
extern char data_ov003_0217fe7e[];

struct Struct_ov003_021594c4_2 {
    SafeAllocator unknown_0_[4];
    char unknown_50_[0x64 - 0x50];
    char unknown_64_[0x7c - 0x64];
    void* unknown_7c_;
    char unknown_80_[0x98 - 0x80];
    char unknown_98_[0xd4 - 0x98];
    int unknown_d4_;
    int unknown_d8_;
    char unknown_dc_[0xe4 - 0xdc];
    short unknown_e4_;
    char unknown_e6_[2];
    unsigned char unknown_e8_;
    char unknown_e9_[3];
    int unknown_ec_;
    int unknown_f0_;
    char unknown_f4_[0x18c - 0xf4];
    Struct_ov003_021594c4* unknown_18c_;
    char unknown_190_[0x1a6 - 0x190];
    unsigned char unknown_1a6_;
    char unknown_1a7_[0x1b0 - 0x1a7];
    Struct_ov003_021594c4 unknown_1b0_[2];
    Struct_ov003_021594c4_3 unknown_1f0_[4];
    char unknown_570_[0x578 - 0x570];
    int unknown_578_;
    void* unknown_57c_;
    unsigned char unknown_580_;
    char unknown_581_[0x587 - 0x581];
    unsigned char unknown_587_;
    unsigned char unknown_588_;
    char unknown_589_[0x590 - 0x589];
    unsigned char unknown_590_;
    char unknown_591_[0x59d - 0x591];
    unsigned char unknown_59d_;
    unsigned char unknown_59e_;
    char unknown_59f_;
    unsigned char unknown_5a0_;
    char unknown_5a1_[0x5b1 - 0x5a1];
    unsigned char unknown_5b1_;
    unsigned char unknown_5b2_;
    char unknown_5b3_;
    unsigned char unknown_5b4_;
};

// USA: func_ov003_021594c4
extern "C" ARM void func_ov003_021594c4(Struct_ov003_021594c4_2* arg0) {
#if defined(jpn)
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int var1 = func_020421a0();
    unsigned char var2 = arg0->unknown_580_;

    if (var2 == 0) {
        arg0->unknown_7c_ = *(void**)(func_020421a0() + 0x28);
        func_ov017_021d243c(1);
        arg0->unknown_0_[2].Reset();
        void* var3 = arg0->unknown_0_[2].Allocate(0x4000);
        char var4[0x40];
        unsigned int var5;
        sprintf(var4, data_ov003_0217e649, arg0->unknown_5a0_);
        LoadFileIntoMemory(var4, var3, &var5);
        arg0->unknown_0_[0].Reset();
        func_020dfec0(arg0->unknown_64_, &arg0->unknown_0_[0], var3, var5);
        const char* var6 = func_020e0434((Struct_0201099c_3*)arg0->unknown_64_, 0x32);
        if (var6 != NULL) {
            arg0->unknown_5b1_ = func_02005a94(var6);
        }
        if (arg0->unknown_5b1_ == 3) {
            arg0->unknown_5b1_ = 0;
            arg0->unknown_5b2_ = 0;
        }
        *(int*)(var1 + Enum_ov003_021594c4_2152) = 1;
        *(unsigned char*)(var1 + 0x17ef) = 1;
        *(unsigned char*)(var1 + 0x17ff) |= 2;
        func_ov003_02159250(arg0, arg0->unknown_7c_);
        if (arg0->unknown_5a0_ == 2 || arg0->unknown_587_ == 1 || arg0->unknown_587_ == 2) {
            if (arg0->unknown_5a0_ == 2) {
                arg0->unknown_5b4_ = 1;
                arg0->unknown_580_ = 2;
                arg0->unknown_578_ = var0->QueueLoadFile(data_ov003_0217fe5a, NULL);
                *(int*)(func_020421a0() + Enum_ov003_021594c4_2152) = 1;
            } else {
                arg0->unknown_588_ = 10;
                arg0->unknown_580_ = 0;
            }
            arg0->unknown_59d_ = 1;
            arg0->unknown_59e_ = 0;
            func_ov003_02159464(arg0);
            return;
        }
        Struct_ov003_021594c4_4 var7 = data_ov003_0217f380.unknown_2_;
        Struct_ov003_021594c4_4 var8 = data_ov003_0217f380.unknown_0_;
        Struct_ov003_021594c4* var9;
        for (int var10 = 0; var10 < 2; var10++) {
            var9 = &arg0->unknown_1b0_[var10];
            func_0204b11c((unsigned char*)var9, 0);
            var9->unknown_1c_0_ = 0;
            var9->unknown_1c_4_ = var7.unknown_0_[var10];
            func_0204b5b4(var9, var8.unknown_0_[var10]);
            func_0204b12c((Struct_0204b12c*)var9, &arg0->unknown_0_[1]);
            func_0204b5e8((Struct_02020cb8_5*)var9, 0, 0);
        }
        BG1CNT = (BG1CNT & 0x43) | 0x1d00;
        BG2CNT = (BG2CNT & 0x43) | 0x1e00;
        ColorEffect_ConfigureAlphaBlend(0x4000050, 2, 1, 10, 6);
        arg0->unknown_578_ = var0->QueueLoadFile(data_ov003_0217fe6b, NULL);
        arg0->unknown_580_++;
    }

    if (var2 == 1) {
        BackgroundLoader* var11 = BackgroundLoader::GetInstance();
        if (var11->GetTaskStatus(arg0->unknown_578_) != 0) {
            char var12[4];
            void* var13;
            unsigned int var14;
            void* var15[2];
            int var16[2];
            var11->GetLoadedFileByID(arg0->unknown_578_, &var13, &var14);
            int var17 = func_02046900((Struct_02020cb8_4*)var13);
            for (int var18 = 0; var18 < var17; var18++) {
                var15[var18] = func_020467f0((Struct_02020aec*)var13, var18, (void**)var12, &var16[var18]);
            }
            for (int var19 = 0; var19 < var17; var19++) {
                if (var15[var19] != NULL) {
                    func_0204b174(&arg0->unknown_1b0_[1], var15[var19], &arg0->unknown_0_[1], var16[var19]);
                }
            }
            var11->RemoveTask(arg0->unknown_578_);
            arg0->unknown_578_ = -1;
            Struct_ov003_021594c4* var20;
            for (int var21 = 0; var21 < 2; var21++) {
                var20 = &arg0->unknown_1b0_[var21];
                func_0204bc74(var20, 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((Struct_02020cb8_2*)var20, 0);
            }
            arg0->unknown_0_[2].Reset();
            arg0->unknown_57c_ = arg0->unknown_0_[2].Allocate(0x4000);
            for (int var22 = 0; var22 < 4; var22++) {
                Struct_ov003_021594c4_3* var23 = &arg0->unknown_1f0_[var22];
                func_0204c7a8((Struct_0204c7a8*)var23, &arg0->unknown_0_[1], (int)arg0->unknown_57c_, 0x400);
                var23->unknown_4_ = &arg0->unknown_1b0_[1];
            }
            arg0->unknown_18c_ = &arg0->unknown_1b0_[0];
            arg0->unknown_1a6_ = 2;
            func_0205cf78((Struct_0205cf78*)arg0->unknown_f4_, (Struct_0205cf78_2*)arg0->unknown_1f0_, 4);
            arg0->unknown_578_ = var11->QueueLoadFile(data_ov003_0217fe5a, NULL);
            arg0->unknown_580_++;
        }
    }

    if (var2 == 2) {
        if (var0->GetTaskStatus(arg0->unknown_578_) != 0) {
            char var24[4];
            void* var25;
            unsigned int var26;
            int var27;
            arg0->unknown_e8_ = 0;
            arg0->unknown_d8_ = arg0->unknown_ec_;
            arg0->unknown_e4_ = 0xe;
            arg0->unknown_d4_ = arg0->unknown_f0_;
            var0->GetLoadedFileByID(arg0->unknown_578_, &var25, &var26);
            int var28 = func_02046900((Struct_02020cb8_4*)var25);
            arg0->unknown_0_[3].Reset();
            for (int var29 = 0; var29 < var28; var29++) {
                void* var30 = func_020467f0((Struct_02020aec*)var25, var29, (void**)var24, &var27);
                func_0205a528(arg0->unknown_98_, var30, var27, &arg0->unknown_0_[3]);
            }
            var0->RemoveTask(arg0->unknown_578_);
            arg0->unknown_578_ = -1;
            if (arg0->unknown_5b4_ != 0) {
                arg0->unknown_588_ = 3;
                arg0->unknown_580_ = 0;
                return;
            }
            arg0->unknown_59d_ = 1;
            arg0->unknown_59e_ = 0;
            func_ov003_02159464(arg0);
            arg0->unknown_580_++;
        }
    }

    if (var2 == 3 && *(int*)(var1 + Enum_ov003_021594c4_2160) == 3) {
        arg0->unknown_59d_ = 1;
        BG0CNT = (BG0CNT & ~3) | 2;
        BG1CNT = (BG1CNT & ~3) | 1;
        BG2CNT = (BG2CNT & ~3);
        BG3CNT = (BG3CNT & ~3) | 3;
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
        unsigned char var31 = 0x3f;
        for (int var32 = 0; var32 < 6; var32++) {
            const char* var33 = func_020e0434((Struct_0201099c_3*)arg0->unknown_64_, (short)var32);
            if (func_020d3018(data_ov003_0217fe7e, var33) == 0) {
                var31 &= ~(1 << var32);
            }
        }
        func_ov003_0215917c((Struct_ov003_0215917c*)arg0, var31);
        arg0->unknown_590_ = func_02011494((char*)GameState::GetInstance(), arg0->unknown_591_);
        arg0->unknown_588_ = 1;
        arg0->unknown_580_ = 1;
    }
#else
    BackgroundLoader* var34 = BackgroundLoader::GetInstance();
    int var35 = func_020421a0();
    unsigned char var36 = arg0->unknown_580_;

    if (var36 == 0) {
        arg0->unknown_7c_ = *(void**)(func_020421a0() + 0x5c);
        func_ov017_021d243c(1);
        char var37[0x40];
        char var38[0x18];
        sprintf(var37, data_ov003_0217fe2d, arg0->unknown_5a0_);
        sprintf(var38, data_ov003_0217fe48, arg0->unknown_5a0_);
        arg0->unknown_578_ = var34->QueueLoadFileInGP2(var37, var38, NULL);
        arg0->unknown_580_++;
    }

    if (var36 == 1) {
        if (var34->GetTaskStatus(arg0->unknown_578_) == 0) return;
        void* var39;
        unsigned int var40;
        var34->GetLoadedFileByID(arg0->unknown_578_, &var39, &var40);
        arg0->unknown_0_[0].Reset();
        func_020dfec0(arg0->unknown_64_, &arg0->unknown_0_[0], var39, var40);
        var34->RemoveTask(arg0->unknown_578_);
        arg0->unknown_578_ = -1;
        const char* var41 = func_020e0434((Struct_0201099c_3*)arg0->unknown_64_, 0x32);
        if (var41 != NULL) {
            arg0->unknown_5b1_ = func_02005a94(var41);
        }
        if (arg0->unknown_5b1_ == 3) {
            arg0->unknown_5b1_ = 0;
            arg0->unknown_5b2_ = 0;
        }
        *(int*)(var35 + Enum_ov003_021594c4_2456) = 1;
        *(unsigned char*)(var35 + 0x19bf) = 1;
        *(unsigned char*)(var35 + 0x19cf) = 1;
        func_ov003_02159250(arg0, arg0->unknown_7c_);
        if (arg0->unknown_5a0_ == 2 || arg0->unknown_587_ == 1 || arg0->unknown_587_ == 2) {
            if (arg0->unknown_5a0_ == 2) {
                arg0->unknown_5b4_ = 1;
                arg0->unknown_580_ = 3;
                arg0->unknown_578_ = var34->QueueLoadFile(data_ov003_0217fe5a, NULL);
                *(int*)(func_020421a0() + Enum_ov003_021594c4_2456) = 1;
            } else {
                arg0->unknown_588_ = 10;
                arg0->unknown_580_ = 0;
            }
            arg0->unknown_59d_ = 1;
            arg0->unknown_59e_ = 0;
            func_ov003_02159464(arg0);
            return;
        }
        Struct_ov003_021594c4_4 var42 = data_ov003_0217f380.unknown_2_;
        Struct_ov003_021594c4_4 var43 = data_ov003_0217f380.unknown_0_;
        Struct_ov003_021594c4* var44;
        for (int var45 = 0; var45 < 2; var45++) {
            var44 = &arg0->unknown_1b0_[var45];
            func_0204b11c((unsigned char*)var44, 0);
            var44->unknown_1c_0_ = 0;
            var44->unknown_1c_4_ = var42.unknown_0_[var45];
            func_0204b5b4(var44, var43.unknown_0_[var45]);
            func_0204b12c((Struct_0204b12c*)var44, &arg0->unknown_0_[1]);
            func_0204b5e8((Struct_02020cb8_5*)var44, 0, 0);
        }
        BG1CNT = (BG1CNT & 0x43) | 0x1d00;
        BG2CNT = (BG2CNT & 0x43) | 0x1e00;
        ColorEffect_ConfigureAlphaBlend(0x4000050, 2, 1, 10, 6);
        arg0->unknown_578_ = var34->QueueLoadFile(data_ov003_0217fe6b, NULL);
        arg0->unknown_580_++;
    }

    if (var36 == 2) {
        BackgroundLoader* var46 = BackgroundLoader::GetInstance();
        if (var46->GetTaskStatus(arg0->unknown_578_) != 0) {
            char var47[4];
            void* var48;
            unsigned int var49;
            void* var50[2];
            int var51[2];
            var46->GetLoadedFileByID(arg0->unknown_578_, &var48, &var49);
            int var52 = func_02046900((Struct_02020cb8_4*)var48);
            for (int var53 = 0; var53 < var52; var53++) {
                var50[var53] = func_020467f0((Struct_02020aec*)var48, var53, (void**)var47, &var51[var53]);
            }
            for (int var54 = 0; var54 < var52; var54++) {
                if (var50[var54] != NULL) {
                    func_0204b174(&arg0->unknown_1b0_[1], var50[var54], &arg0->unknown_0_[1], var51[var54]);
                }
            }
            var46->RemoveTask(arg0->unknown_578_);
            arg0->unknown_578_ = -1;
            Struct_ov003_021594c4* var55;
            for (int var56 = 0; var56 < 2; var56++) {
                var55 = &arg0->unknown_1b0_[var56];
                func_0204bc74(var55, 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((Struct_02020cb8_2*)var55, 0);
            }
            arg0->unknown_0_[2].Reset();
            arg0->unknown_57c_ = arg0->unknown_0_[2].Allocate(0x4000);
            for (int var57 = 0; var57 < 4; var57++) {
                Struct_ov003_021594c4_3* var58 = &arg0->unknown_1f0_[var57];
                func_0204c7a8((Struct_0204c7a8*)var58, &arg0->unknown_0_[1], (int)arg0->unknown_57c_, 0x400);
                var58->unknown_4_ = &arg0->unknown_1b0_[1];
            }
            arg0->unknown_18c_ = &arg0->unknown_1b0_[0];
            arg0->unknown_1a6_ = 2;
            func_0205cf78((Struct_0205cf78*)arg0->unknown_f4_, (Struct_0205cf78_2*)arg0->unknown_1f0_, 4);
            arg0->unknown_578_ = var46->QueueLoadFile(data_ov003_0217fe5a, NULL);
            arg0->unknown_580_++;
        }
    }

    if (var36 == 3) {
        if (var34->GetTaskStatus(arg0->unknown_578_) != 0) {
            char var59[4];
            void* var60;
            unsigned int var61;
            int var62;
            arg0->unknown_e8_ = 0;
            arg0->unknown_d8_ = arg0->unknown_ec_;
            arg0->unknown_e4_ = 0xe;
            arg0->unknown_d4_ = arg0->unknown_f0_;
            var34->GetLoadedFileByID(arg0->unknown_578_, &var60, &var61);
            int var63 = func_02046900((Struct_02020cb8_4*)var60);
            arg0->unknown_0_[3].Reset();
            for (int var64 = 0; var64 < var63; var64++) {
                void* var65 = func_020467f0((Struct_02020aec*)var60, var64, (void**)var59, &var62);
                func_0205a528(arg0->unknown_98_, var65, var62, &arg0->unknown_0_[3]);
            }
            var34->RemoveTask(arg0->unknown_578_);
            arg0->unknown_578_ = -1;
            if (arg0->unknown_5b4_ != 0) {
                arg0->unknown_588_ = 3;
                arg0->unknown_580_ = 0;
                return;
            }
            arg0->unknown_59d_ = 1;
            arg0->unknown_59e_ = 0;
            func_ov003_02159464(arg0);
            arg0->unknown_580_++;
        }
    }

    if (var36 == 4 && *(int*)(var35 + Enum_ov003_021594c4_2464) == 3) {
        arg0->unknown_59d_ = 1;
        BG0CNT = (BG0CNT & ~3) | 2;
        BG1CNT = (BG1CNT & ~3) | 1;
        BG2CNT = (BG2CNT & ~3);
        BG3CNT = (BG3CNT & ~3) | 3;
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
        unsigned char var66 = 0x3f;
        for (int var67 = 0; var67 < 6; var67++) {
            const char* var68 = func_020e0434((Struct_0201099c_3*)arg0->unknown_64_, (short)var67);
            if (func_020d3018(data_ov003_0217fe7e, var68) == 0) {
                var66 &= ~(1 << var67);
            }
        }
        func_ov003_0215917c((Struct_ov003_0215917c*)arg0, var66);
        arg0->unknown_590_ = func_02011494((char*)GameState::GetInstance(), arg0->unknown_591_);
        arg0->unknown_588_ = 1;
        arg0->unknown_580_ = 1;
    }
#endif
}
