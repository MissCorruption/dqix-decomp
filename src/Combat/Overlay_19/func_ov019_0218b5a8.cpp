#include <globaldefs.h>
#include "NitroSDK/Graphics.h"
#include "NitroSDK/Matrix.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "Memory/SafeAllocator.h"
#include "Resource/MessageSystem.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "Combat/MapDisplay.h"

#if defined(jpn)
#define func_020c51dc func_020c6ca8
#endif

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

struct Struct_02043368 {
    int unknown_0_;
    unsigned short unknown_4_;
};
struct Struct_0203d028;
struct Struct_0201099c_14;
struct Struct_0201099c_3;
struct Struct_020a9ea4;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_02038598_4;
struct Struct_020444e0;
struct Struct_0203bdb0;

extern "C" unsigned int* func_020d6c00();
extern "C" void func_020daf9c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205a444(char* arg0);
extern "C" void func_0205a198(Struct_02043368_2* arg0);
extern "C" void func_0205a234(Struct_02043368* arg0);
extern "C" void func_020c39a0(short* arg0, int arg1);
extern "C" void func_0200fb84(int* arg0, int arg1);
extern "C" char* func_0203b628();
extern "C" void func_0203b634(char* arg0);
extern "C" void* func_0203bd08(void);
extern "C" void func_0203bd24(char* arg0);
void LockStagedTextureVRAMCopying();
extern "C" unsigned int DisableTextureImageVRAMBanks();
extern "C" unsigned int DisableTexturePaletteVRAMBanks();
extern "C" unsigned int DisableMainBGVRAMBanks();
extern "C" unsigned int DisableSubBGVRAMBanks();
extern "C" unsigned int DisableMainObjVRAMBanks();
extern "C" unsigned int DisableSubObjVRAMBanks();
extern "C" void MapVRAMBanksToTextureImage(int banks);
extern "C" void func_020bb48c(unsigned int arg0, int arg1);
extern "C" void MapVRAMBanksToTexturePalette(int banks);
extern "C" void MapVRAMBanksToMainBG(int banks);
extern "C" void func_020c391c(int arg0, int arg1, int arg2);
extern "C" void MapVRAMBanksToMainObj(int banks);
void UpdateVRAMStagingVRAMBanks();
void UnlockStagedTextureVRAMCopying();
void Finish3DRendering();
extern "C" void func_020c51dc();
extern "C" void func_020c537c();
extern "C" void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020c5770(int, int, int, int, int, int, int, int, void*);
extern "C" void func_020bb780(void* arg0, int arg1);
extern "C" void func_0207de48(void* arg0, int arg1, int arg2);
extern "C" Struct_02021b84* func_020421a0();
extern "C" void func_02042c68(Struct_02021b84* arg0);
extern "C" void func_02043124(Struct_02021b84* arg0);
extern "C" void func_02042b30(void* arg0, void* arg1);
extern "C" void func_0207df50(Struct_0203d028* arg0);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_020432c4(Struct_02021b84* arg0);
extern "C" void func_0207dfac(char* arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020440b8(char* arg0, void* arg1, void* arg2);
extern "C" void func_0202ad30();
extern "C" void func_0202adf0();
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void func_020dfec0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" void func_020d86d0(int arg0, int arg1);
extern "C" void func_020c9820();
extern "C" void func_020bbcb4();
void UnlockAndSetMainBrightness(GameResources* res, int target, int frames);
void UnlockAndSetSubBrightness(GameResources* res, int target, int frames);
void UpdateAndApplyBrightness(GameResources* res);
extern "C" void func_020c38d4();
extern "C" void __clear(void* arg0, int arg1);
unsigned long long GetCurrentTimestamp();
extern "C" void func_02012efc();
extern "C" int func_020457e0(Struct_02021b84* arg0);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020a9ea4(Struct_020a9ea4* arg0);
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0205a528(void* arg0, void* arg1, int arg2, SafeAllocator* arg3);
extern "C" int func_020ab7a8(void* arg0, int arg1);
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_0209c6d8(void* arg0, int arg1);
extern "C" int func_ov019_0218c240(void* arg0);
extern "C" int func_020aba5c(int arg0);
extern "C" void func_02043368(Struct_02021b84* arg0);
extern "C" void func_020bbd9c();
extern "C" void func_020c52e8();
extern "C" void func_020c5414();
extern "C" void func_020c57d4(int, int, int, int, void*);
extern "C" void func_020444e0(Struct_020444e0* arg0);
extern "C" void func_ov019_0218c178(void* arg0);
extern "C" void func_0203bd88(void* arg0);
extern "C" void func_0204359c(void* arg0, int arg1);
extern "C" void func_0203bdb0(Struct_0203bdb0* arg0);
extern "C" void func_020439b0(Struct_02021b84* arg0, int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_0200fb94(char* arg0, unsigned char arg1);
extern "C" void func_02012010(void* arg0, int arg1);

void* LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);
extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);

#if defined(jpn)
#define data_ov019_0218c2c0 data_ov019_0218cea0
#define data_ov019_0218c2d4 data_ov019_0218ceb4
#define data_ov019_0218c294 data_ov019_0218ce7c
#define data_ov019_0218c2a0 data_ov019_0218ce88
#define data_ov019_0218c2fe data_ov019_0218ced3
#endif
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
extern AllocatorUnion data_02114e20;
extern char data_02109bf4[];
extern char data_ov019_0218c2c0[];
extern char data_ov019_0218c2d4[];
extern char data_ov019_0218c2d8[];
extern char data_ov019_0218c2ed[];
extern char data_ov019_0218c2fe[];
extern Vector3fix data_ov019_0218c294;
extern Vector3fix data_ov019_0218c2a0;

#if defined(jpn)
struct Struct_02072a68_2;
struct Struct_020727d8;
struct Struct_02013fb4;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" void func_020727d8(struct Struct_020727d8* arg0);
extern "C" void func_020728ac(int arg0, int arg1, struct Struct_02013fb4* arg2, int arg3, int arg4, unsigned short arg5, unsigned char arg6);
extern char data_ov019_0218ceb8[];
enum { Enum_ov019_0218b5a8_24 = 0x8, Enum_ov019_0218b5a8_728 = 0x228 };
#else
enum { Enum_ov019_0218b5a8_24 = 0x18, Enum_ov019_0218b5a8_728 = 0x2d8 };
#endif

struct Struct_ov019_0218b5a8 {
    char unknown_0_[0x28];
    unsigned char unknown_28_;
    char unknown_29_[0x2c - 0x29];
    char unknown_2c_[0x34 - 0x2c];
    char unknown_34_[Enum_ov019_0218b5a8_24];
    int unknown_4c_;
    int unknown_50_;
    char unknown_54_[0x90 - 0x54];
    Struct_02043368* unknown_90_;
    Struct_02043368_2* unknown_94_;
    char unknown_98_[0xa0 - 0x98];
    short unknown_a0_;
    char unknown_a2_[0xa4 - 0xa2];
    unsigned char unknown_a4_;
    char unknown_a5_[0xa8 - 0xa5];
    Struct_02043368_2 unknown_a8_[14];
    Struct_02043368 unknown_2d8_;
};

static inline void inline_ov019_0218b5a8(Struct_02021b84* arg0, Struct_ov019_0218b5a8* arg1, int arg2) {
#if defined(jpn)
    func_0204500c(arg0, (const char*)func_02072a68((struct Struct_02072a68_2*)arg1->unknown_34_, arg2), 0);
#else
    func_0204500c(arg0, func_020e0434((Struct_0201099c_3*)arg1->unknown_34_, arg2), 0, 0xe3);
#endif
}

static inline void inline_ov016_0218b5c4(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & ~0x7000000) | (arg0 << 24);
}

static inline void inline_ov016_0218b5c4_2(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & ~0x38000000) | (arg0 << 27);
}

static inline void inline_ov017_021a86d0_2(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & ~0x1f00) | (arg0 << 8);
}

static inline void inline_ov019_0218b5a8_2(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & 0xffcfffef) | arg0;
}

static inline void inline_ov017_021c0850(int arg0) {
    *(volatile unsigned short*)0x4000304 = (unsigned short)((*(volatile unsigned short*)0x4000304 & ~0x8000) | (arg0 << 15));
}

static inline void inline_ov019_0218b5a8_3(int arg0) {
    BG0CNT = (unsigned short)((BG0CNT & ~3) | arg0);
}

static inline void inline_ov019_0218b5a8_4(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, void* arg7) {
    func_020c5770(arg0, arg1, arg2, arg3, arg4, arg5, arg6, 1, arg7);
}

static inline void inline_ov019_0218b5a8_5(int arg0) {
    GXFIFO_MATRIX_STORE = arg0;
}

static inline void inline_ov019_0218b5a8_6(int arg0, int arg1, int arg2, int arg3) {
    *(volatile unsigned int*)0x4000580 = arg0 | (arg1 << 8) | (arg2 << 16) | (arg3 << 24);
}

static inline void inline_ov019_0218b5a8_7() {
    DISPCNTSUB |= 0x10000;
}

static inline void inline_ov019_0218b5a8_8(int arg0) {
    GXFIFO_MATRIX_MODE = arg0;
}

static inline void inline_ov019_0218b5a8_9(Vector3fix* arg0, Vector3fix* arg1, Vector3fix* arg2, void* arg3) {
    func_020c57d4((int)arg0, (int)arg1, (int)arg2, 1, arg3);
}

// USA: func_ov019_0218b5a8
extern "C" ARM void func_ov019_0218b5a8(Struct_ov019_0218b5a8* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    unsigned int* var2 = func_020d6c00();
    func_020daf9c(0, 0, 1, 0);
    arg0->unknown_4c_ = 0;
    arg0->unknown_50_ = 0;
    func_0205a444(arg0->unknown_54_);
    for (int var3 = 0; var3 < 14; var3++) {
        func_0205a198(&arg0->unknown_a8_[var3]);
    }
    func_0205a234(&arg0->unknown_2d8_);
    func_020c39a0((short*)0x400006c, -16);
    func_020c39a0((short*)0x400106c, -16);
    func_0200fb84((int*)var0, (int)arg0);
    var1->MaybeReset();
    func_0203b634(func_0203b628());
    void* var4 = func_0203bd08();
    func_0203bd24((char*)var4);
    LockStagedTextureVRAMCopying();
    DisableTextureImageVRAMBanks();
    DisableTexturePaletteVRAMBanks();
    DisableMainBGVRAMBanks();
    DisableSubBGVRAMBanks();
    DisableMainObjVRAMBanks();
    DisableSubObjVRAMBanks();
    MapVRAMBanksToTextureImage(0xf);
    func_020bb48c(4, 1);
    MapVRAMBanksToTexturePalette(0x40);
    MapVRAMBanksToMainBG(0x10);
    inline_ov016_0218b5c4(0);
    inline_ov016_0218b5c4_2(0);
    BG1CNT = (BG1CNT & 0x43) | 4;
    inline_ov017_021a86d0_2(0x11);
    func_020c391c(1, 0, 1);
    MapVRAMBanksToMainObj(0x20);
    inline_ov019_0218b5a8_2(0x10);
    inline_ov017_021c0850(0);
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
    Finish3DRendering();
    func_020c51dc();
    func_020c537c();
    inline_ov019_0218b5a8_3(0);
    func_020c5588(0, 0x1f, 0x7fff, 0, 0);
    inline_ov019_0218b5a8_4(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, NULL);
    inline_ov019_0218b5a8_5(0);
    inline_ov019_0218b5a8_6(0, 0, 255, 191);
    func_020bb48c(4, 1);
    func_020bb780((void*)0x4000, 1);

    char var5[0x70];
    char var6[0x70];
    func_0207de48(var5, 0x4000, 0x20);
    func_0207de48(var6, 0x4000, 0x20);
    Struct_02021b84* var7 = func_020421a0();
    func_02042c68(var7);
    func_02043124(var7);
    func_02042b30(var7, var5);
    func_0207df50((Struct_0203d028*)var5);
    func_0207df90(var5);
    func_020432c4(var7);
    func_0207dfac(var5);

    unsigned int var8;
    BackgroundLoader::AddLockGlobal();
    if (LoadFileIntoMemory(data_ov019_0218c2c0, data_0211e33c, &var8) == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    void* var9 = func_02012d88(&data_02114e20, 0x19000);
    SafeAllocator var10;
    var10.ResetAllocatorPointer();
    var10.CreateTypeA(var9, 0x19000);
    NarcHandle var11;
    if (var11.Initialize(data_ov019_0218c2d4, data_0211e33c)) {
        func_0207df90(var6);
        func_020440b8((char*)var7, &var10, data_0211e33c);
        func_0207dfac(var6);
        var11.Destroy();
    }
    func_0202ad30();
    func_0202adf0();
    *(int*)((char*)var7 + Enum_ov019_0218b5a8_728) = 0;
#if defined(jpn)
    if (LoadFileIntoMemory(data_ov019_0218ceb8, data_0211e33c, &var8) == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_020727d8((struct Struct_020727d8*)arg0->unknown_34_);
    func_020728ac((int)arg0->unknown_34_, (int)&var10, (struct Struct_02013fb4*)data_0211e33c, var8, 0, 0, 0);
#else
    void* var12 = ExtractFileFromGP2(data_ov019_0218c2d8, data_ov019_0218c2ed, &var8);
    if (var12 == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_020dfc40((Struct_0201099c_14*)arg0->unknown_34_);
    func_020dfec0(arg0->unknown_34_, &var10, var12, var8);
#endif
    BackgroundLoader::RemoveLockGlobal();

    int var13 = 0;
    unsigned char var14 = var0->unknown_5cc8_;
    if (var14 == 0) {
        inline_ov019_0218b5a8(var7, arg0, 0);
    } else if (var14 == 1) {
        inline_ov019_0218b5a8(var7, arg0, 1);
    } else if (var14 == 2) {
        inline_ov019_0218b5a8(var7, arg0, 2);
        var13 = 1;
    } else if (var14 == 4) {
        inline_ov019_0218b5a8(var7, arg0, 10);
    } else {
        inline_ov019_0218b5a8(var7, arg0, 8);
        var13 = 8;
    }
    var7->unknown_998_ = 1;
    func_020d86d0(0, 1);
    func_020c9820();
    func_020bbcb4();
    UnlockAndSetMainBrightness((GameResources*)arg0, 0, 5);
    UnlockAndSetSubBrightness((GameResources*)arg0, -16, 1);
    UpdateAndApplyBrightness((GameResources*)arg0);
    func_020c38d4();
    inline_ov019_0218b5a8_7();

    Vector3fix var15 = data_ov019_0218c294;
    Vector3fix var16;
    __clear(&var16, sizeof(var16));
    Vector3fix var17 = data_ov019_0218c2a0;
    int var18 = 1;
    unsigned long long var19 = GetCurrentTimestamp();

    for (;;) {
        func_02012efc();
        switch (var13) {
        case 1:
            if (var7->unknown_998_ == 0) {
                if (func_020457e0(var7) == 0) {
                    func_020466e4(var2, 0x80);
                    inline_ov019_0218b5a8(var7, arg0, 5);
                    func_020a9ea4((Struct_020a9ea4*)arg0->unknown_2c_);
                    var13 = 3;
                } else if (func_020457e0(var7) == 1) {
                    inline_ov019_0218b5a8(var7, arg0, 3);
                    var13 = 2;
                }
                var7->unknown_998_ = 1;
            }
            break;
        case 2:
            if (var7->unknown_998_ == 0) {
                if (func_020457e0(var7) == 0) {
                    inline_ov019_0218b5a8(var7, arg0, 4);
                    var13 = 9;
                } else if (func_020457e0(var7) == 1) {
                    inline_ov019_0218b5a8(var7, arg0, 2);
                    var13 = 1;
                }
                var7->unknown_998_ = 1;
            }
            break;
        case 3:
            if (var7->unknown_9a0_ == 4) {
                BackgroundLoader::AddLockGlobal();
                BackgroundLoader::FreeAllocationsGlobal();
                if (arg0->unknown_50_ == 0) {
                    if (LoadFileIntoMemory(data_ov019_0218c2fe, data_0211e33c, &var8) == NULL) {
                        BackgroundLoader::RemoveLockGlobal();
                        return;
                    }
                    func_0205a444(arg0->unknown_54_);
                    for (int var20 = 0; var20 < 14; var20++) {
                        func_0205a198(&arg0->unknown_a8_[var20]);
                    }
                    func_0205a234(&arg0->unknown_2d8_);
                    arg0->unknown_a4_ = 0;
                    arg0->unknown_94_ = arg0->unknown_a8_;
                    arg0->unknown_a0_ = 14;
                    arg0->unknown_90_ = &arg0->unknown_2d8_;
                    void* var21 = data_0211e33c;
                    int var22 = func_02046900((Struct_02020cb8_4*)var21);
                    for (int var23 = 0; var23 < var22; var23++) {
                        void* var24;
                        int var25;
                        void* var26 = func_020467f0((Struct_02020aec*)var21, var23, &var24, &var25);
                        func_0205a528(arg0->unknown_54_, var26, var25, &var10);
                    }
                    arg0->unknown_4c_ |= 1;
                    arg0->unknown_50_++;
                } else if (arg0->unknown_50_ == 1) {
                    int var27 = func_020ab7a8(arg0->unknown_2c_, 1);
                    if (var27 == 1) {
                        inline_ov019_0218b5a8(var7, arg0, 0);
                        var7->unknown_998_ = 1;
                        func_020466f4((Struct_02038598_4*)var2, 0x80);
                        arg0->unknown_4c_ &= ~1;
                        var13 = 0;
                    } else if (var27 == 2) {
                        inline_ov019_0218b5a8(var7, arg0, 1);
                        var7->unknown_998_ = 1;
                        func_020466f4((Struct_02038598_4*)var2, 0x80);
                        arg0->unknown_4c_ &= ~1;
                        var13 = 0;
                    } else if (var27 == 3) {
                        func_020466f4((Struct_02038598_4*)var2, 0x80);
                        var13 = 6;
                    } else if (var27 == 5) {
                        func_020466f4((Struct_02038598_4*)var2, 0x80);
                        var13 = 4;
                    }
                    BackgroundLoader::RemoveLockGlobal();
                }
            }
            break;
        case 4:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_998_ == 0) {
                inline_ov019_0218b5a8(var7, arg0, 7);
                var7->unknown_998_ = 1;
                func_0209c6d8(data_02109bf4, 0x35);
                var13 = 5;
            }
            break;
        case 5:
            if (var7->unknown_998_ == 0) {
                var18 = 0;
            }
            break;
        case 6:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_998_ == 0) {
                if (var0->unknown_5cc8_ == 0) {
                    inline_ov019_0218b5a8(var7, arg0, 0);
                    var13 = 0;
                } else {
                    inline_ov019_0218b5a8(var7, arg0, 6);
                    func_0209c6d8(data_02109bf4, 0x3d);
                    var13 = 7;
                }
                var7->unknown_998_ = 1;
            }
            break;
        case 7:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_998_ == 0) {
                inline_ov019_0218b5a8(var7, arg0, 4);
                var13 = 9;
                var7->unknown_998_ = 1;
            }
            break;
        case 9:
            if (var7->unknown_998_ == 0) {
                var18 = 0;
            }
            break;
        case 8:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_9a0_ == 3 && func_ov019_0218c240(arg0) != 0) {
                if (func_020aba5c(1) == 0) {
                    inline_ov019_0218b5a8(var7, arg0, 1);
                    var13 = 0;
                } else {
                    inline_ov019_0218b5a8(var7, arg0, 9);
                    var13 = 9;
                }
            }
            break;
        }
        if (!var18) {
            break;
        }
        UpdateAndApplyBrightness((GameResources*)arg0);
        var1->RemoveAllLocks();
        if (!(arg0->unknown_4c_ & 1)) {
            func_02043368(var7);
        }
        if (var7->unknown_9a0_ != 3 && !(var13 == 3 && var7->unknown_9a0_ == 4)) {
            var7->func_020444d4(1);
        }
        func_020bbd9c();
        func_020c52e8();
        func_020c5414();
        RenderConfig::Reset();
        DISP3DCNT = (DISP3DCNT & ~0x3000) | 8;
        DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x10;
        inline_ov019_0218b5a8_8(0);
        inline_ov019_0218b5a8_9(&var16, &var17, &var15, NULL);
        inline_ov019_0218b5a8_4(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, NULL);
        inline_ov019_0218b5a8_8(2);
        func_020444e0((Struct_020444e0*)var7);
        func_ov019_0218c178(arg0);
        func_0203bd88(var4);
        func_0204359c(var7, 0x10);
        func_020d86d0(0, 1);
        arg0->unknown_28_ = 1;
        func_020c9820();
        func_0203bdb0((Struct_0203bdb0*)var4);
        func_020439b0(var7, 1);
        var0->CalculateDeltaTime((GetCurrentTimestamp() - var19) * 64 * 1000 / 33514);
        var19 = GetCurrentTimestamp();
    }

    var10.Destroy();
    func_02012da4(&data_02114e20, var9);
    func_0200fb94((char*)var0, 6);
    func_02012010(var0, 0);
}
