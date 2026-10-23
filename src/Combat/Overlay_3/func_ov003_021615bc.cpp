#include "Combat/MenuNodeChain.h"
#include "Combat/MapDisplay.h"
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

#if defined(jpn)
enum { Enum_ov003_021615bc_4 = 3, Enum_ov003_021615bc_205 = 0xc9 };
enum { Enum_ov003_021615bc_552 = 0x110, Enum_ov003_021615bc_200 = 8, Enum_ov003_021615bc_2456 = 0x868, Enum_ov003_021615bc_32 = 0x20, Enum_ov003_021615bc_120 = 0x48, Enum_ov003_021615bc_64 = 0x34, Enum_ov003_021615bc_1844 = 0x524 };
extern "C" void func_02080654(void*, void*, const char*);
extern "C" int func_02081b80(void*, const char*);
extern const char data_ov003_0217e7e0[];
extern const char data_ov003_0217e7fa[];
extern const char data_ov003_0217e814[];
extern const char data_ov003_0217e82a[];
extern const char data_ov003_0217e862[];
extern const char data_ov003_0217e865[];
#else
enum { Enum_ov003_021615bc_4 = 4, Enum_ov003_021615bc_205 = 0xcd };
enum { Enum_ov003_021615bc_552 = 0x228, Enum_ov003_021615bc_200 = 0x464 - 0x39c, Enum_ov003_021615bc_2456 = 0x998, Enum_ov003_021615bc_44 = 0x2c, Enum_ov003_021615bc_120 = 0x78, Enum_ov003_021615bc_64 = 0x40, Enum_ov003_021615bc_1844 = 0x734 };
#endif

extern "C" void func_ov003_021602bc(void* arg0);
extern "C" void func_ov003_021672e4(void* arg0, int arg1, int arg2);
struct Struct_0205563c;
extern "C" void func_0205563c(Struct_0205563c*);
extern "C" void func_02032e58(void* arg0);
extern "C" void func_0204c684(void* arg0);
extern "C" void func_020dfec0(void* arg0, void* arg1, void* arg2, unsigned int arg3);
extern "C" void func_0204b5b4(void* arg0, int arg1);
extern "C" void func_0204b174(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_0204bc74(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_0205a528(void* arg0, void* arg1, int arg2, void* arg3);
extern "C" int func_0207f9f4(void* arg0);
extern "C" void func_02081224(void* arg0, int arg1);
extern "C" void* func_0205ec34();
struct Struct_02020cb8;
extern "C" void func_0204af64(Struct_02020cb8*);
extern "C" void func_0204b11c(unsigned char*, int);
struct Struct_0204b12c;
extern "C" void func_0204b12c(Struct_0204b12c*, SafeAllocator*);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5*, int, int);
struct Struct_0204af38;
extern "C" void func_0204af38(Struct_0204af38*, int, SafeAllocator*);
struct Struct_0204c7a8;
extern "C" void func_0204c7a8(Struct_0204c7a8*, SafeAllocator*, int, unsigned int);
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4*);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
struct Struct_0207f914;
extern "C" void func_0207f914(Struct_0207f914*, int, int, int);
extern "C" void* func_020421a0();
extern "C" void func_0208108c(void* arg0, int arg1);
extern "C" void func_02081058(void* arg0, int arg1, int arg2);
extern "C" void func_02080798(void* arg0, int arg1, int arg2);
struct Struct_02043368_2;
extern "C" void func_0205a198(Struct_02043368_2*);
struct Struct_02043368;
extern "C" void func_0205a234(Struct_02043368*);
struct Struct_020e2490;
extern "C" void func_020e2490(Struct_020e2490*, int, int, void*, SafeAllocator*, int, unsigned char);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(Struct_02020cb8_2*, void*);
extern "C" void func_0205aed0(void*, char*, unsigned int, int);
struct Struct_0207f7f0;
struct Struct_0207f7f0_2;
extern "C" void func_0207f7f0(Struct_0207f7f0*, Struct_0207f7f0_2*, int);
extern "C" unsigned char func_ov003_02160b50(void* arg0);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, unsigned char c, int d);

extern char data_ov003_0217fff0[];
extern char data_ov003_0218000a[];
extern char data_ov003_0218001b[];
extern char data_ov003_02180035[];
extern int data_ov003_0217f454[];
extern int data_ov003_0217f460[];
extern char data_ov003_02180046[];
extern char data_ov003_0218005a[];
extern char data_ov003_0218006a[];
extern char data_ov003_02180083[];
extern short data_ov003_0217f46c[];
extern char data_ov003_0218008a[];

struct Struct_ov003_021615bc {
    char unknown_0_[0x28];
};

struct Struct_ov003_021615bc_2 {
    char unknown_0_[Enum_ov003_021615bc_2456];
    int unknown_998_;
    char unknown_99c_[4];
    int unknown_9a0_;
};

struct Struct_ov003_021615bc_3 {
    char unknown_0_[Enum_ov003_021615bc_552];
    SafeAllocator unknown_228_;
    char unknown_23c_[0x264 - 0x228 - sizeof(SafeAllocator)];
    SafeAllocator unknown_264_;
    SafeAllocator unknown_278_;
    SafeAllocator unknown_28c_;
    SafeAllocator unknown_2a0_;
    SafeAllocator unknown_2b4_;
    SafeAllocator unknown_2c8_;
    char unknown_2dc_[0x3c];
    void* unknown_318_;
    void* unknown_31c_;
    void* unknown_320_;
    Struct_0207f7f0* unknown_324_;
    Struct_02020cb8* unknown_328_;
    Struct_0207f7f0_2* unknown_32c_;
    char unknown_330_[4];
    char unknown_334_[0x3c];
    void* unknown_370_;
    void* unknown_374_;
    char unknown_378_[0x380 - 0x378];
    unsigned short unknown_380_;
    char unknown_382_[2];
    unsigned char unknown_384_;
    char unknown_385_[3];
    Struct_ov003_021615bc* unknown_388_;
    void* unknown_38c_;
    void* unknown_390_;
    void** unknown_394_;
    void* unknown_398_;
    char unknown_39c_[Enum_ov003_021615bc_200];
    unsigned int unknown_464_;
    char unknown_468_[4];
    int unknown_46c_;
    char unknown_470_[0xc];
    short unknown_47c_;
    short unknown_47e_;
    short unknown_480_;
    short unknown_482_;
    short unknown_484_;
    short unknown_486_;
    char unknown_488_[0x49e - 0x488];
    unsigned char unknown_49e_;
    char unknown_49f_[2];
    unsigned char unknown_4a1_;
    char unknown_4a2_;
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
    unsigned char unknown_4a5_;
    char unknown_4a6_;
    unsigned char unknown_4a7_;
};

// USA: func_ov003_021615bc
extern "C" ARM void func_ov003_021615bc(Struct_ov003_021615bc_3* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    Struct_02020cb8* var1;
    int var2;
    int var3;
    int var4;
    if (arg0->unknown_4a4_ == 0) {
        arg0->unknown_228_.Reset();
        arg0->unknown_318_ = arg0->unknown_228_.Allocate(Enum_ov003_021615bc_120);
        arg0->unknown_31c_ = arg0->unknown_228_.Allocate(0x1c);
        arg0->unknown_320_ = arg0->unknown_228_.Allocate(0x130);
        arg0->unknown_324_ = (Struct_0207f7f0*)arg0->unknown_228_.Allocate(Enum_ov003_021615bc_64);
        arg0->unknown_328_ = (Struct_02020cb8*)arg0->unknown_228_.Allocate(0x60);
        arg0->unknown_32c_ = (Struct_0207f7f0_2*)arg0->unknown_228_.Allocate(0x380);
        arg0->unknown_394_ = (void**)arg0->unknown_228_.Allocate(0x10);
        func_ov003_021602bc(arg0);
        func_ov003_021672e4(arg0->unknown_318_, 0, -1);
        func_0205563c((Struct_0205563c*)arg0->unknown_31c_);
        func_02032e58(arg0->unknown_320_);
        func_0207f84c(arg0->unknown_324_);
        for (int var5 = 0; var5 < 3; var5++) {
            func_0204af64((Struct_02020cb8*)(arg0->unknown_328_ + var5));
        }
        for (int var6 = 0; var6 < 4; var6++) {
            func_0204c684(arg0->unknown_32c_ + var6);
        }
        if (arg0->unknown_464_ & 0x10000) {
#if defined(jpn)
            arg0->unknown_46c_ = var0->QueueLoadFile(data_ov003_0217e7e0, NULL);
#else
            arg0->unknown_46c_ = var0->QueueLoadFileInGP2(data_ov003_0217fff0, data_ov003_0218000a, NULL);
#endif
        } else {
#if defined(jpn)
            arg0->unknown_46c_ = var0->QueueLoadFile(data_ov003_0217e7fa, NULL);
#else
            arg0->unknown_46c_ = var0->QueueLoadFileInGP2(data_ov003_0218001b, data_ov003_02180035, NULL);
#endif
        }
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
    }
    if (arg0->unknown_4a4_ == 1) {
        if (var0->GetTaskStatus(arg0->unknown_46c_) != 0) {
            void* var7;
            unsigned int var8;
            var0->GetLoadedFileByID(arg0->unknown_46c_, &var7, &var8);
            arg0->unknown_2b4_.Reset();
            func_020dfec0(arg0->unknown_2dc_, &arg0->unknown_2b4_, var7, var8);
            var0->RemoveTask(arg0->unknown_46c_);
            arg0->unknown_46c_ = -1;
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        }
    }
    if (arg0->unknown_4a4_ == 2) {
        arg0->unknown_264_.Reset();
        for (var2 = 0; var2 < 3; var2++) {
            var1 = arg0->unknown_328_ + var2;
            func_0204b11c((unsigned char*)var1, 0);
            var4 = data_ov003_0217f454[var2];
            var1->unknown_1c_0_ = 0;
            var1->unknown_1c_4_ = var4;
            func_0204b5b4(var1, data_ov003_0217f460[var2]);
            func_0204b12c((Struct_0204b12c*)var1, (SafeAllocator*)&arg0->unknown_264_);
            func_0204b5e8((Struct_02020cb8_5*)var1, 0, 0);
            if (var4 == 3) {
                func_0204af38((Struct_0204af38*)var1, 5, (SafeAllocator*)&arg0->unknown_264_);
            }
        }
        BG1CNT = (BG1CNT & 0x43) | 0x1e00;
        BG2CNT = (BG2CNT & 0x43) | 0x1f00;
        BG3CNT = (BG3CNT & 0x43) | 0x1d08;
        ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, 2, 9, 0xa, 6);
#if defined(jpn)
            arg0->unknown_46c_ = var0->QueueLoadFile(data_ov003_0217e814, NULL);
#else
        arg0->unknown_46c_ = var0->QueueLoadFileInGP2(data_ov003_02180046, data_ov003_0218005a, NULL);
#endif
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
    }
    if (arg0->unknown_4a4_ == 3) {
        if (var0->GetTaskStatus(arg0->unknown_46c_) != 0) {
            void* var9[8];
            int var10[8];
            void* var11;
            void* var12;
            unsigned int var13;
            var0->GetLoadedFileByID(arg0->unknown_46c_, &var12, &var13);
            int var14 = func_02046900((Struct_02020cb8_4*)var12);
            for (int var15 = 0; var15 < var14; var15++) {
                var9[var15] = func_020467f0((Struct_02020aec*)var12, var15, &var11, &var10[var15]);
            }
            for (int var16 = 0; var16 < var14; var16++) {
                if (var9[var16] != NULL) {
                    if (var16 == 0) {
                        func_0204b174(arg0->unknown_328_ + 1, var9[var16], &arg0->unknown_264_, var10[var16]);
                    } else {
                        func_0204b174(arg0->unknown_328_ + 2, var9[var16], &arg0->unknown_264_, var10[var16]);
                    }
                }
            }
            var0->RemoveTask(arg0->unknown_46c_);
            arg0->unknown_46c_ = -1;
            Struct_02020cb8* var17;
            for (int var18 = 0; var18 < 3; var18++) {
                var17 = arg0->unknown_328_ + var18;
                func_0204bc74(var17, 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((Struct_02020cb8_2*)var17, NULL);
            }
            arg0->unknown_278_.Reset();
            arg0->unknown_398_ = arg0->unknown_278_.Allocate(0x6000);
            Struct_0207f7f0_2* var19;
            for (int var20 = 0; var20 < 4; var20++) {
                var19 = arg0->unknown_32c_ + var20;
                func_0204c7a8((Struct_0204c7a8*)var19, (SafeAllocator*)&arg0->unknown_278_, (int)arg0->unknown_398_, 0x400);
                var19->unknown_4_ = arg0->unknown_328_ + 1;
            }
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        }
    }
    if (arg0->unknown_4a4_ == 4) {
        arg0->unknown_28c_.Reset();
#if defined(jpn)
        func_02080654(arg0->unknown_324_, &arg0->unknown_28c_, data_ov003_0217e82a);
#else
        func_0207f914((Struct_0207f914*)arg0->unknown_324_, (int)&arg0->unknown_28c_, (int)data_ov003_0218006a, (int)data_ov003_02180083);
#endif
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
    }
    if (arg0->unknown_4a4_ == 5) {
        int var21 = func_0207f9f4(arg0->unknown_324_);
        if (var21 == 0) {
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        }
        if (var21 < 0) {
            arg0->unknown_4a3_ = 0x10;
        }
    }
    if (arg0->unknown_4a4_ == 6) {
#if defined(jpn)
        Struct_0207f7f0* var22 = arg0->unknown_324_;
        var22->unknown_3b_ = 0x12;
        var22->unknown_3c_ = 0x10;
#endif
        if (arg0->unknown_464_ & 0x20000) {
            Struct_ov003_021615bc_2* var23 = (Struct_ov003_021615bc_2*)func_020421a0();
            if (var23->unknown_998_ != 0 && var23->unknown_9a0_ != 3) {
                return;
            }
            arg0->unknown_464_ &= ~0x20000;
        }
#if !defined(jpn)
        Struct_0207f7f0* var24 = arg0->unknown_324_;
        var24->unknown_3b_ = 0x12;
        var24->unknown_3c_ = 0x10;
        func_0208108c(var24, 0);
        func_0208108c(var24, 1);
        short* var25 = data_ov003_0217f46c;
        for (;;) {
            if (*var25 < 0) {
                break;
            }
            func_02081058(var24, *var25, 0x90);
            var25++;
        }
        func_02081058(var24, 0xc1, 0x9c);
        func_02081058(var24, 0xc2, 0x9c);
        func_02081058(var24, 0xc3, 0x9c);
        short var26 = 0x64;
        for (int var27 = 0; var27 < 8; var27++) {
            func_02080798(var24, var26, 1);
            var26++;
        }
#endif
        arg0->unknown_2a0_.Reset();
        arg0->unknown_388_ = (Struct_ov003_021615bc*)arg0->unknown_2a0_.Allocate(0x3e8);
        arg0->unknown_38c_ = arg0->unknown_2a0_.Allocate(8);
        for (int var28 = 0; var28 < 0x19; var28++) {
            func_0205a198((Struct_02043368_2*)(arg0->unknown_388_ + var28));
        }
        func_0205a234((Struct_02043368*)arg0->unknown_38c_);
        arg0->unknown_384_ = 0;
        arg0->unknown_374_ = arg0->unknown_388_;
        arg0->unknown_380_ = 0x19;
        arg0->unknown_370_ = arg0->unknown_38c_;
        arg0->unknown_2c8_.Reset();
        arg0->unknown_390_ = arg0->unknown_2c8_.Allocate(0x24);
        func_020e2490((Struct_020e2490*)arg0->unknown_390_, 0, 1, arg0->unknown_38c_, &arg0->unknown_2c8_, Enum_ov003_021615bc_4, 0x40);
        arg0->unknown_46c_ = var0->QueueLoadFile(data_ov003_0218008a, NULL);
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
    }
    if (arg0->unknown_4a4_ == 7) {
        if (var0->GetTaskStatus(arg0->unknown_46c_) != 0) {
            void* var29;
            void* var30;
            unsigned int var31;
            int var32;
            var0->GetLoadedFileByID(arg0->unknown_46c_, &var30, &var31);
            int var33 = func_02046900((Struct_02020cb8_4*)var30);
            for (int var34 = 0; var34 < var33; var34++) {
                void* var35 = func_020467f0((Struct_02020aec*)var30, var34, &var29, &var32);
                func_0205a528(arg0->unknown_334_, var35, var32, &arg0->unknown_2a0_);
            }
            func_0205aed0(arg0->unknown_334_, (char*)arg0->unknown_388_, 0x19, 0x40);
            var0->RemoveTask(arg0->unknown_46c_);
            arg0->unknown_46c_ = -1;
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        }
    }
    if (arg0->unknown_4a4_ == 8) {
        Struct_0207f7f0* var36 = arg0->unknown_324_;
#if defined(jpn)
        arg0->unknown_47c_ = func_02081b80(var36, data_ov003_0217e862);
        arg0->unknown_47e_ = func_02081b80(var36, data_ov003_0217e865);
#endif
        BG0CNT = (BG0CNT & ~3) | 3;
        BG1CNT = (BG1CNT & ~3) | 1;
        BG2CNT = (BG2CNT & ~3);
        BG3CNT = (BG3CNT & ~3) | 2;
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1f00;
        ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, 2, 9, 0xa, 6);
        var36->unknown_2c_ = arg0->unknown_328_;
        var36->unknown_38_ = 2;
        func_0207f7f0(var36, arg0->unknown_32c_, 4);
        var36->unknown_3a_ = 2;
#if !defined(jpn)
        func_02081224(var36, 0x19);
        func_02081224(var36, 0x1a);
        func_02081224(var36, 0x1b);
        arg0->unknown_49e_ = func_ov003_02160b50(arg0);
#endif
        char* var37 = (char*)func_0205ec34();
        if (arg0->unknown_464_ & 0x10000) {
            arg0->unknown_4a3_ = 0xa;
            arg0->unknown_4a4_ = 0;
        } else if (arg0->unknown_4a1_ == 1) {
            arg0->unknown_4a3_ = 4;
            arg0->unknown_4a4_ = 2;
        } else if (arg0->unknown_4a1_ == 2) {
            arg0->unknown_4a3_ = 4;
            arg0->unknown_4a4_ = 0;
        } else if (arg0->unknown_4a1_ == 3) {
            arg0->unknown_484_ = 0x50;
            arg0->unknown_486_ = 2;
            arg0->unknown_4a4_ = 0;
            arg0->unknown_4a5_ = 0;
            arg0->unknown_4a3_ = 1;
            arg0->unknown_464_ |= 0x10;
            char* var38 = (char*)GetGameResources();
            arg0->unknown_482_ = *(unsigned char*)(*(char**)(var38 + 0x3000 + Enum_ov003_021615bc_1844) + Enum_ov003_021615bc_205);
        } else if (arg0->unknown_4a1_ == 4) {
            arg0->unknown_484_ = 0xd;
            arg0->unknown_486_ = 2;
            arg0->unknown_4a4_ = 0;
            arg0->unknown_4a5_ = 0;
            arg0->unknown_4a3_ = 1;
            arg0->unknown_464_ |= 8;
        } else {
#if defined(jpn)
            arg0->unknown_49e_ = func_ov003_02160b50(arg0);
#endif
            if (arg0->unknown_49e_ != 0 && arg0->unknown_49e_ != 1) {
                if (arg0->unknown_49e_ == 2) {
                    var3 = 3;
                }
            } else {
                var3 = 0;
            }
            arg0->unknown_484_ = var3;
            arg0->unknown_486_ = -1;
            int var39 = 1;
            GameObject* var40 = GameState::GetInstance()->GetProtagonist();
            if (var40 != NULL && (**(unsigned int**)((char*)var40 + 0x130) & 1)) {
                arg0->unknown_484_ = 3;
                arg0->unknown_486_ = -1;
                var39 = 0;
            }
            if (var39 != 0 && arg0->unknown_49e_ != 2) {
                if (func_0206dfb0((int)var37, (unsigned char*)(var37 + 0x8c), 0x77e) == 0) {
                    func_0206df6c(var37, (unsigned char*)(var37 + 0x8c), 0x77e, 1);
                    arg0->unknown_484_ = 0x4b;
                    arg0->unknown_486_ = var3;
                }
            }
            arg0->unknown_4a3_ = 1;
            arg0->unknown_4a4_ = 0;
            arg0->unknown_4a5_ = 0;
        }
        arg0->unknown_464_ |= 0x1000;
        arg0->unknown_4a7_ = 0;
    }
}
