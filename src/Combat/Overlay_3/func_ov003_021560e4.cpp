#include "Combat/MenuNodeChain.h"
#include "Combat/MapDisplay.h"
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
enum { Enum_ov003_021560e4_464 = 0x1cc, Enum_ov003_021560e4_1820 = 0x50c, Enum_ov003_021560e4_2456 = 0x868, Enum_ov003_021560e4_32 = 0x20, Enum_ov003_021560e4_44 = 0x2c, Enum_ov003_021560e4_46 = 0x2e };
extern "C" void func_02046574(void*, int, char*);
extern "C" void func_0204500c(void*, void*, int);
extern "C" void func_02080654(void*, void*, const char*);
extern const char data_ov003_0217e554[];
extern const char data_ov003_0217e56e[];
extern const char data_ov003_0217e595[];
extern const char data_ov003_0217e5b3[];
extern const char data_ov003_0217e5c9[];
#else
enum { Enum_ov003_021560e4_464 = 0x1d0, Enum_ov003_021560e4_1820 = 0x71c, Enum_ov003_021560e4_2456 = 0x998, Enum_ov003_021560e4_44_2 = 0x2c, Enum_ov003_021560e4_56 = 0x38, Enum_ov003_021560e4_58 = 0x3a };
#endif

extern "C" {
void ColorEffect_ConfigureAlphaBlend(int, int, int, int, int);
int func_020467f0(void*, int, void**, int*);
int func_02046900(void*);
int func_020100a8(void*);
void func_0205a444(void*);
int func_0206dfb0(void*, void*, int);
void func_020dfc40(void*);
void func_ov023_021e20c0(void*);
void* func_020e0434(void*, int);
void func_0204c7a8(void*, void*, int, int);
void func_0207fcb8(void*);
void func_0204b5e8(void*, int, int);
void func_020807fc(void*, int, int, int);
void func_0204b11c(void*, int);
void* func_020d7a50(void);
void* func_020421a0(void);
void func_02080828(void*, short, short*, short*);
void func_02080878(void*, int, short*, short*);
void func_02080854(void*, short, int, int);
void func_020808a4(void*, int, int, int);
void func_0207fd44(void*);
void func_0207fd88(void*);
void func_0207fe44(void*);
int func_ov003_0215570c(void*);
int func_02081010(void*, int);
void func_020d7aa0(void*);
void func_0204b12c(void*, void*);
void func_020e4bf4(void*, int);
void func_020807c4(void*, int, short*, short*);
void func_0207f914(void*, void*, const char*, const char*);
int func_ov003_02155f88(void*, int);
void _ZN13SafeAllocator5ResetEv(void*);
int func_020420e8(int, int);
#if !defined(jpn)
void func_0204500c(void*, void*, int, int);
#endif
void func_02046380(void*);
void func_0204b174(void*, void*, int, int);
void func_0204b5b4(void*, int);
void func_0205a528(void*, void*, int, void*);
void* func_0205ec34(void);
int func_0207f9f4(void*);
void func_020dfec0(void*, void*, void*, unsigned int);
void func_ov003_02156054(void*);
void func_ov023_021e20f0(void*, void*, void*, unsigned int);
}

extern const char data_ov003_0217fce4[];
extern const char data_ov003_0217fcfe[];
extern const char data_ov003_0217fd0f[];
extern const char data_ov003_0217fd23[];
extern const char data_ov003_0217fd33[];
extern const char data_ov003_0217fd46[];
extern const char data_ov003_0217fd60[];
extern const char data_ov003_0217fd68[];
extern const char data_ov003_0217fd7e[];
extern const char data_ov003_0217fd90[];
extern const char data_ov003_0217fdaa[];
struct Struct_ov003_0217f29c {
    unsigned char unknown_0_[2];
};
extern const Struct_ov003_0217f29c data_ov003_0217f29c[];
extern const short data_ov003_0217f2a0[];
extern const short data_ov003_0217f2ae[];

struct Struct_02000c9c_82 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
};

struct Struct_ov003_021560e4 {
    void* unknown_0_;
    char unknown_4_[0xc - 4];
    int unknown_c_;
    Struct_02020cb8* unknown_10_;
    Struct_0207f7f0_2* unknown_14_;
    Struct_0207f7f0* unknown_18_;
    void* unknown_1c_;
    char unknown_20_[4];
    int unknown_24_;
    char unknown_28_[4];
    char unknown_2c_[0x68 - 0x2c];
    int unknown_68_;
    int unknown_6c_;
    char unknown_70_[0x78 - 0x70];
    short unknown_78_;
    char unknown_7a_[2];
    char unknown_7c_;
    char unknown_7d_[0xe4 - 0x7d];
    char unknown_e4_[0xfc - 0xe4];
    char unknown_fc_[0x114 - 0xfc];
    char unknown_114_[Enum_ov003_021560e4_464 - 0x114];
    int unknown_1d0_;
    char unknown_1d4_[0x1ec - 0x1d4];
    short unknown_1ec_;
    short unknown_1ee_;
    char unknown_1f0_[2];
    unsigned char unknown_1f2_;
    char unknown_1f3_[4];
    char unknown_1f7_;
    unsigned char unknown_1f8_;
    unsigned char unknown_1f9_;
    char unknown_1fa_;
    unsigned char unknown_1fb_;
    unsigned int unknown_1fc_;
};

// USA: func_ov003_021560e4
extern "C" ARM void func_ov003_021560e4(Struct_ov003_021560e4* arg0) {
    char* var0;
    int var1;
    BackgroundLoader* var2;
    var2 = BackgroundLoader::GetInstance();
    var1 = arg0->unknown_1f9_;

    if (var1 == 0) {
        if (arg0->unknown_1fc_ & 1) {
            func_020d7aa0(func_020d7a50());
        }
        func_ov003_02156054(arg0);
        Struct_0208cb08* var3 = func_02094a00();
        func_02094ab0(var3);
        func_02094b34(var3, 0x66, 0x1f5, 0, 0);
        arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
    } else if (var1 == 1) {
        if (func_02094b4c(func_02094a00())) {
#if defined(jpn)
            arg0->unknown_1d0_ = var2->QueueLoadFile(data_ov003_0217e554, 0);
#else
            arg0->unknown_1d0_ = var2->QueueLoadFileInGP2(data_ov003_0217fce4, data_ov003_0217fcfe, 0);
#endif
            arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
        }
    } else if (var1 == 2) {
        if (var2->GetTaskStatus(arg0->unknown_1d0_)) {
            int var4[3];
            void* var5;
            unsigned int var6;
            var2->GetLoadedFileByID(arg0->unknown_1d0_, &var5, &var6);
            void* var7 = arg0->unknown_0_;
            _ZN13SafeAllocator5ResetEv(var7);
            func_020dfc40(arg0->unknown_e4_);
            func_020dfec0(arg0->unknown_e4_, var7, var5, var6);
            var2->RemoveTask(arg0->unknown_1d0_);
            arg0->unknown_1d0_ = -1;
            char* var8 = (char*)func_020421a0();
            int var9 = -1;
            if (arg0->unknown_1fc_ & 1) {
                var9 = 0x1a;
                char* var10 = (char*)GetGameResources();
                int var11 = *(short*)(*(char**)(var10 + 0x3000 + Enum_ov003_021560e4_1820) + 0x22);
                GameState* var12 = GameState::GetInstance();
                GameObject* var13 = var12->GetPartyMemberByIndex(var11);
                if (var13 == 0) {
                    var13 = var12->GetPartyMemberByIndex(func_020100a8(var12));
                }
                func_02046380(var8);
#if defined(jpn)
                if (var13 != 0) {
                    func_02046574(var8, 0, *(char**)((char*)var13 + 0x134));
                }
#else
                func_020e4bf4(var4, var13->obj3D_.unknown_4_);
                *(void**)var8 = var4;
#endif
            } else {
                char* var14 = (char*)func_0205ec34();
                if (func_0206dfb0(var14, var14 + 0x8c, 0x799)) {
                    var9 = 0;
                } else {
                    arg0->unknown_1ec_ = 0;
                    arg0->unknown_1ee_ = 1;
                    arg0->unknown_1f8_ = 7;
                }
            }
            void* var15 = func_020e0434(arg0->unknown_e4_, var9);
            if (var15) {
#if defined(jpn)
                func_0204500c(var8, var15, 0);
#else
                func_0204500c(var8, var15, 0, 0xe3);
#endif
                *(int*)(var8 + Enum_ov003_021560e4_2456) = 1;
                *(int*)(var8 + Enum_ov003_021560e4_2456 + 4) = 1;
            }
            func_0205a444(arg0->unknown_2c_);
            arg0->unknown_7c_ = 0;
            arg0->unknown_6c_ = arg0->unknown_24_;
            arg0->unknown_78_ = 10;
            if (arg0->unknown_1c_) {
                arg0->unknown_68_ = *(int*)((char*)arg0->unknown_1c_ + 0x20);
            }
#if defined(jpn)
            arg0->unknown_1d0_ = var2->QueueLoadFile(data_ov003_0217e56e, 0);
#else
            arg0->unknown_1d0_ = var2->QueueLoadFileInGP2(data_ov003_0217fd0f, data_ov003_0217fd23, 0);
#endif
            arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
        }
    } else if (var1 == 3) {
        if (var2->GetTaskStatus(arg0->unknown_1d0_)) {
            void* var16;
            void* var17;
            unsigned int var18;
            int var19;
            var2->GetLoadedFileByID(arg0->unknown_1d0_, &var17, &var18);
            int var20 = func_02046900(var17);
            var0 = (char*)arg0->unknown_0_;
            _ZN13SafeAllocator5ResetEv(var0 + 0x3c);
            for (int var21 = 0; var21 < var20; var21++) {
                void* var22 = (void*)func_020467f0(var17, var21, &var16, &var19);
                func_0205a528(arg0->unknown_2c_, var22, var19, var0 + 0x3c);
            }
            var2->RemoveTask(arg0->unknown_1d0_);
            arg0->unknown_1d0_ = -1;
            var0 = (char*)arg0->unknown_0_;
            _ZN13SafeAllocator5ResetEv(var0 + 0x14);
            Struct_ov003_0217f29c var23 = data_ov003_0217f29c[0];
            Struct_ov003_0217f29c var24 = data_ov003_0217f29c[1];
            for (unsigned char var25 = 0; var25 < 2; var25++) {
                Struct_02020cb8* var26 = arg0->unknown_10_ + var25;
                func_0204b11c(var26, 0);
                var26->unknown_1c_0_ = 0;
                var26->unknown_1c_4_ = var23.unknown_0_[var25];
                func_0204b5b4(var26, var24.unknown_0_[var25]);
                func_0204b12c(var26, var0 + 0x14);
                func_0204b5e8(var26, 0, 0);
            }
            *(volatile unsigned short*)0x400000a = (*(volatile unsigned short*)0x400000a & 0x43) | 0x1e00;
            *(volatile unsigned short*)0x400000c = (*(volatile unsigned short*)0x400000c & 0x43) | 0x1f00;
            ColorEffect_ConfigureAlphaBlend(0x4000050, 4, 1, 10, 6);
            arg0->unknown_1d0_ = var2->QueueLoadFile(data_ov003_0217fd33, 0);
            arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
        }
    } else if (var1 == 4) {
        if (var2->GetTaskStatus(arg0->unknown_1d0_)) {
            void* var27;
            void* var28;
            unsigned int var29;
            int var30;
            var2->GetLoadedFileByID(arg0->unknown_1d0_, &var28, &var29);
            int var31 = func_02046900(var28);
            Struct_02020cb8* var32 = arg0->unknown_10_;
            for (int var33 = 0; var33 < var31; var33++) {
                void* var34 = (void*)func_020467f0(var28, var33, &var27, &var30);
                func_0204b174(var32, var34, 0, var30);
            }
            var2->RemoveTask(arg0->unknown_1d0_);
            arg0->unknown_1d0_ = -1;
            char* var35 = (char*)arg0->unknown_0_;
            for (unsigned char var36 = 0; var36 < 3; var36++) {
                Struct_0207f7f0_2* var37 = arg0->unknown_14_ + var36;
                func_0204c7a8(var37, var35 + 0x14, arg0->unknown_c_, 0x4cc);
                var37->unknown_4_ = arg0->unknown_10_;
            }
            var35 = (char*)arg0->unknown_0_;
            _ZN13SafeAllocator5ResetEv(var35 + 0x28);
#if defined(jpn)
            func_02080654(arg0->unknown_18_, var35 + 0x28, data_ov003_0217e595);
#else
            func_0207f914(arg0->unknown_18_, var35 + 0x28, data_ov003_0217fd46, data_ov003_0217fd60);
#endif
            arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
        }
    } else if (var1 == 5) {
        int var38 = func_0207f9f4(arg0->unknown_18_);
        if (var38 == 0) {
            arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
        }
        if (var38 < 0) {
            arg0->unknown_1f8_ = 7;
        }
    } else if (var1 == 6) {
        void* var39 = arg0->unknown_18_;
#if !defined(jpn)
        short var40, var41, var42, var43;
        func_020807c4(var39, 2, &var40, &var41);
        func_02080878(var39, 2, &var42, &var43);
        int var44 = 0;
        for (int var45 = 0; var45 < 2; var45++) {
            int var46 = func_020420e8(func_02081010(var39, data_ov003_0217f2a0[var45]), 0);
            if (var44 < var46) var44 = var46;
        }
        var42 = (var44 + 0x1b) & ~7;
        var42 = var42 >> 3;
        if (var42 & 1) var42 = var42 + 1;
        var40 = (0x20 - var42) >> 1;
        var40 = var40 << 3;
        func_020807fc(var39, 2, var40, var41);
        func_020808a4(var39, 2, var42, var43);
#endif
        if (func_ov003_0215570c(arg0) >= 9) {
            for (unsigned char var47 = 0; var47 < 12; var47++) {
                for (int var48 = 0; var48 < 3; var48++) {
                    int var49 = var47 + data_ov003_0217f2ae[var48];
                    short var50, var51;
                    func_02080828(var39, var49, &var50, &var51);
                    func_02080854(var39, var49, var50, (short)(var51 - 1));
                }
            }
        }
#if defined(jpn)
            arg0->unknown_1d0_ = var2->QueueLoadFile(data_ov003_0217e5b3, 0);
#else
        arg0->unknown_1d0_ = var2->QueueLoadFileInGP2(data_ov003_0217fd68, data_ov003_0217fd7e, 0);
#endif
        arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
    } else if (var1 == 7) {
        if (var2->GetTaskStatus(arg0->unknown_1d0_)) {
            void* var52;
            unsigned int var53;
            var2->GetLoadedFileByID(arg0->unknown_1d0_, &var52, &var53);
            if (var52) {
                char* var54 = (char*)arg0->unknown_0_;
                _ZN13SafeAllocator5ResetEv(var54 + 0x50);
                func_ov023_021e20c0(arg0->unknown_114_);
                func_ov023_021e20f0(arg0->unknown_114_, var54 + 0x50, var52, var53);
            }
            var2->RemoveTask(arg0->unknown_1d0_);
            arg0->unknown_1d0_ = -1;
#if defined(jpn)
            arg0->unknown_1d0_ = var2->QueueLoadFile(data_ov003_0217e5c9, 0);
#else
            arg0->unknown_1d0_ = var2->QueueLoadFileInGP2(data_ov003_0217fd90, data_ov003_0217fdaa, 0);
#endif
            arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
        }
    } else if (var1 == 8) {
        if (var2->GetTaskStatus(arg0->unknown_1d0_)) {
            void* var55;
            unsigned int var56;
            var2->GetLoadedFileByID(arg0->unknown_1d0_, &var55, &var56);
            if (var55) {
                void* var57 = arg0->unknown_0_;
                func_020dfc40(arg0->unknown_fc_);
                func_020dfec0(arg0->unknown_fc_, var57, var55, var56);
            }
            var2->RemoveTask(arg0->unknown_1d0_);
            arg0->unknown_1d0_ = -1;
            arg0->unknown_1f9_ = arg0->unknown_1f9_ + 1;
        }
    } else if (var1 == 9) {
        char* var58 = (char*)func_020421a0();
        if (*(int*)(var58 + Enum_ov003_021560e4_2456 + 8) == 3) {
            Struct_0207f7f0* var59 = arg0->unknown_18_;
            var59->unknown_2c_ = arg0->unknown_10_;
            var59->unknown_38_ = 2;
            func_0207f7f0(var59, arg0->unknown_14_, 3);
            var59->unknown_3a_ = 1;
            func_0207fcb8(var59);
            func_0207fd44(var59);
            func_0207fd88(var59);
            volatile unsigned short* var60 = (volatile unsigned short*)0x4000008;
            var60[0] = (var60[0] & ~3) | 2;
            var60[1] = var60[1] & ~3;
            var60[2] = (var60[2] & ~3) | 1;
            var60[3] = (var60[3] & ~3) | 3;
            *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | 0x1700;
            arg0->unknown_1f8_ = 7;
            arg0->unknown_1f9_ = 0;
            if (arg0->unknown_1fc_ & 1) {
                GameState* var61 = GameState::GetInstance();
                if (arg0->unknown_1fb_ == 0) {
                    arg0->unknown_1f7_ = func_020100a8(var61);
                    arg0->unknown_1f9_ = 0;
                    if (func_ov003_02155f88(arg0, arg0->unknown_1f7_)) {
                        arg0->unknown_1ec_ = 8;
                        arg0->unknown_1f8_ = 7;
                        func_0207fe44(var59);
                    } else {
                        arg0->unknown_1fc_ = arg0->unknown_1fc_ | 2;
                        arg0->unknown_1ec_ = 9;
                        arg0->unknown_1f8_ = 3;
                        arg0->unknown_1f9_ = 0;
                    }
                } else {
                    arg0->unknown_1f7_ = arg0->unknown_1f2_;
                    arg0->unknown_1ec_ = 6;
                    arg0->unknown_1f8_ = 2;
                    arg0->unknown_1f9_ = 2;
                }
            } else {
                char* var62 = (char*)func_0205ec34();
                if (func_0206dfb0(var62, var62 + 0x8c, 0x796)) {
                    arg0->unknown_1ec_ = 4;
                    arg0->unknown_1f8_ = 1;
                } else {
                    arg0->unknown_1ec_ = 2;
                    arg0->unknown_1f8_ = 2;
                }
            }
        }
    }
}
