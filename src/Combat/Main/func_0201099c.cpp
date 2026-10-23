#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Util/Random.h"
#include "Combat/ResourceScriptEntry.h"
#include "std_library_functions.h"

struct Struct_0201099c_12 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_0201099c_19 {
    short unknown_0_[10];
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    unsigned char unknown_15_0_ : 4;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_0201099c_20 {
    signed char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 1;
    unsigned char unknown_1_5_ : 3;
    unsigned char unknown_2_[13];
    unsigned char unknown_f_[13];
    int unknown_1c_[13];
    int unknown_50_;
    unsigned short unknown_54_;
    char unknown_56_[2];
    Struct_0201099c_12 unknown_58_[13][3];
    unsigned short unknown_f4_;
    unsigned char unknown_f6_[27];
    unsigned char unknown_111_[9];
    unsigned char unknown_11a_[36];
    unsigned char unknown_13e_;
    unsigned char unknown_13f_0_ : 3;
    unsigned char unknown_13f_3_ : 5;
    unsigned char unknown_140_[12];
    Struct_0201099c_12 unknown_14c_[4];
    unsigned int unknown_15c_0_ : 10;
    unsigned int unknown_15d_2_ : 10;
    unsigned int unknown_15e_4_ : 12;
    Struct_0201099c_19 unknown_160_;
    unsigned char unknown_17c_[0xc0];
};

struct Struct_0201099c_4 {
#if defined(jpn)
    unsigned char unknown_0_[0x3724];
#else
    unsigned char unknown1_0_[0x3984];
#endif
    Struct_0201099c_20 unknown_3984_[13];
    unsigned char unknown_5690_;
};

struct Struct_0201099c_5 {
    unsigned char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    short unknown_a_;
    unsigned char unknown_c_[0x10];
    short unknown_1c_[10];
    unsigned char unknown_30_[13];
    unsigned char unknown_3d_;
    unsigned char unknown_3e_;
};

struct Struct_0201099c_6 {
    Struct_0201099c_5* unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    char unknown_a_[2];
#if defined(jpn)
    const char** unknown_c_;
#else
    int unknown1_c_;
#endif
    short unknown_10_;
    char unknown_12_[2];
#if defined(jpn)
    const char** unknown_14_;
#else
    int unknown1_14_;
#endif
    short unknown_18_;
};

struct Struct_0201099c_7 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_0201099c_8 {
    unsigned char unknown_0_[0x10c];
    Struct_0201099c_7 unknown_10c_[13][20];
    unsigned char unknown_51c_[0x34];
};

struct Struct_0201099c_9 {
    unsigned int unknown_0_[8];
};

struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    Struct_0201099c_9* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};

struct Struct_0201099c_11 {
    char unknown_0_[0x30];
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
};

struct Struct_0201099c_13 {
    Struct_0201099c_12 unknown_0_[4];
    unsigned char unknown_10_[0x2c];
    Struct_0201099c_11 unknown_3c_;
    unsigned char unknown_74_[0x120];
    Struct_0201099c_9 unknown_194_[8];
#if defined(jpn)
    unsigned char unknown_294_[0x638];
#else
    unsigned char unknown1_294_[0x6d0];
#endif
};

struct Struct_020e6d98 {
    short unknown_0_;
    short unknown_2_;
};

struct Struct_020e6d64 {
    short unknown_0_[2];
};

struct Struct_020e6d74 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

struct Struct_0201099c_14 {
    unsigned char unknown_0_[0x18];
};

struct Struct_0201099c_3;
struct Struct_0201099c_15;
struct Struct_0201099c_16;
struct Struct_0201099c_17;
struct Struct_0201099c_18 {
    int unknown_0_;
};

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_020dfc2c(void* arg0);
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void func_020dfc6c(Struct_0201099c_14* arg0);
extern "C" void func_020dfec0(Struct_0201099c_14* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void func_02089db4(Struct_0201099c_6* arg0);
extern "C" void func_02089ddc(Struct_0201099c_6* arg0);
extern "C" void func_02089de8(void* arg0, void* arg1, const char* arg2);
extern "C" void* func_0208a018(unsigned char* arg0, int arg1);
extern "C" void func_02086404(Struct_0201099c_20* arg0);
extern "C" void func_02086598(Struct_0201099c_15* arg0, int arg1);
extern "C" char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" void __clear(void* arg0, unsigned int arg1);
extern "C" int func_020426bc(void* arg0, void* arg1, int arg2);
extern "C" void func_0209a804(int* arg0);
extern "C" void func_0209a810(Struct_0201099c_18* arg0, void* arg1);
extern "C" int func_020865b0(Struct_0201099c_16* arg0);
extern "C" void func_020865b8(Struct_0201099c_17* arg0, int arg1);
extern "C" void func_020de824(void* arg0);
extern "C" void func_020de848(void* arg0);
extern "C" int func_020dea64(void* arg0, void* arg1, void* arg2, unsigned int arg3, const void* arg4, short arg5);
extern "C" void* func_0208247c(void* arg0);
extern "C" void func_02082828(Struct_0201099c_13* arg0);
extern "C" void func_02083cbc(void* arg0, void* arg1, void* arg2);
extern "C" Struct_0201099c_9* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" void func_02083e28(void* arg0, int arg1);

extern AllocatorUnion data_02114e20;
extern char data_020ef08c[];
extern char data_020ef0a5[];
extern const Struct_020e6d64 data_020e6d64;
extern const Struct_020e6d98 data_020e6d98[];
extern const char* data_020f2a38;
extern const char* data_020f2a30;
extern const char data_020e6d6c[];
extern const char data_020ef0b5[];
extern unsigned char data_0211e33c[];
extern const Struct_020e6d74 data_020e6d74[];
#if defined(jpn)
extern const Struct_020e6d98 data_020e763c[];
extern const Struct_020e6d74 data_020e7618[];
extern unsigned char data_020e7610[];
extern const char data_020eeff3[];
extern "C" int func_020e052c(void*, void*, const char*, void*, short, unsigned char);
extern "C" int func_020d2ff0(const char*);
#endif

static inline const Struct_020e6d98* inline_0201099c(int arg0) {
#if defined(jpn)
    return &data_020e763c[arg0];
#else
    return &data_020e6d98[arg0];
#endif
}

static inline const Struct_020e6d74* inline_0201099c_2(int arg0) {
#if defined(jpn)
    return &data_020e7618[arg0];
#else
    return &data_020e6d74[arg0];
#endif
}

static inline unsigned short inline_0201099c_3(const Struct_0201099c_11* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_30_; }

static inline unsigned short inline_0201099c_4(const Struct_0201099c_11* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_32_; }

static inline unsigned short inline_0201099c_5(const Struct_0201099c_11* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_34_; }

static inline unsigned short inline_0201099c_6(const Struct_0201099c_11* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_36_; }

// USA: func_0201099c
extern "C" ARM void func_0201099c(Struct_0201099c_4* arg0) {
    Struct_0201099c_8 var0;
    Struct_0201099c_2 var1;
    Random* var2 = GetBTRandom();
    Struct_0201099c_5* var3;
    Struct_0201099c_20* var4;
    long var5;
    int var6;
    unsigned char var7[3];
    var7[0] = NextRandomMax(var2, 4);
    var7[1] = NextRandomMax(var2, 2) + 4;
    unsigned char var8 = var7[0] % 2 + var7[1] % 2;
    if (var8 == 0) {
        var7[2] = 7;
    } else if (var8 == 2) {
        var7[2] = 6;
    } else {
        var7[2] = NextRandomMax(var2, 2) + 6;
    }

#if !defined(jpn)
    SafeAllocator var9;
    var9.ResetAllocatorPointer();
    var9.ResetAllocatorPointer();
    var9.CreateTypeA(func_02012d88(&data_02114e20, 0x5000), 0x5000);
    Struct_0201099c_14 var10;
    func_020dfc2c(&var10);
    func_020dfc40(&var10);
    BackgroundLoader::AddLockGlobal();
    unsigned int var11 = 0;
    void* var12 = ExtractFileFromGP2(data_020ef08c, data_020ef0a5, &var11);
    if (var12 != NULL) {
        func_020dfec0(&var10, &var9, var12, var11);
    }
    BackgroundLoader::RemoveLockGlobal();

    Struct_020e6d64 var13 = data_020e6d64;
#endif
    Struct_0201099c_6 var14;
    SafeAllocator var15;
    var15.ResetAllocatorPointer();
#if defined(jpn)
    var15.CreateTypeA(func_02012d88(&data_02114e20, 0x1400), 0x1400);
#else
    var15.ResetAllocatorPointer();
    var15.CreateTypeA(func_02012d88(&data_02114e20, 0x800), 0x800);
#endif
    func_02089db4(&var14);
    func_02089de8(&var14, &var15, NULL);
    int var16 = var14.unknown_4_;

    for (var5 = 0; var5 < 3; var5++) {
        var3 = (Struct_0201099c_5*)func_0208a018((unsigned char*)&var14, var7[var5]);
        if (var3 == NULL) {
            break;
        }
        var6 = -1;
        if (var3->unknown_3d_ == 1) {
            var6 = 0;
        } else if (var3->unknown_3d_ == 4) {
            var6 = 0;
        } else if (var3->unknown_3d_ == 2) {
            var6 = 1;
        } else if (var3->unknown_3d_ == 3) {
            var6 = 2;
        }
        if (var6 < 0) {
            continue;
        }
        var4 = &arg0->unknown_3984_[var6];
        func_02086404(var4);
        var4->unknown_0_0_ = var6;
        var4->unknown_0_6_ = 0;
        var4->unknown_0_7_ = 0;
        var4->unknown_1_0_ = var3->unknown_3e_;
        Struct_0201099c_19* var17 = &var4->unknown_160_;
        var17->unknown_16_ = var3->unknown_a_;
        var17->unknown_14_1_ = NextRandomMax(var2, 8);
        var17->unknown_14_4_ = NextRandomMax(var2, 8);
        var17->unknown_15_0_ = NextRandomMax(var2, 10);
        var17->unknown_14_0_ = var3->unknown_8_;
        int var18 = var17->unknown_14_0_ * 5 + NextRandomMax(var2, 5);
        var17->unknown_18_ = inline_0201099c(var18)->unknown_0_;
        var17->unknown_1a_ = inline_0201099c(var18)->unknown_2_;
        func_02086598((Struct_0201099c_15*)var4, var3->unknown_3d_);
        for (int var19 = 0; var19 < 13; var19++) {
            var4->unknown_2_[var19] = var3->unknown_30_[var19];
        }
#if defined(jpn)
        const char** var20 = var17->unknown_14_0_ == 0 ? var14.unknown_c_ : var14.unknown_14_;
        unsigned char var21 = func_020865b0((Struct_0201099c_16*)var4);
        if (var21 == 1) {
            var20 += NextRandomMax(var2, 5);
        } else if (var21 == 4) {
            var20 += NextRandomMax(var2, 5) + 5;
        } else if (var21 == 2) {
            var20 += NextRandomMax(var2, 5) + 10;
        } else if (var21 == 3) {
            var20 += NextRandomMax(var2, 5) + 15;
        } else {
            var20 += NextRandomMax(var2, 5);
        }
        memcpy(var4->unknown_140_, *var20, func_020d2ff0(*var20));
#else
        short var22 = 20000;
        if (var17->unknown_14_0_ == 1) {
            var22 += 1000;
        }
        short var23;
        int var24;
        do {
            var24 = 0;
            var23 = var22 + NextRandomMax(var2, 101);
            for (int var25 = var5 - 1; var25 >= 0; var25--) {
                if (var23 == var13.unknown_0_[var25]) {
                    var24 = 1;
                }
            }
        } while (var24);
        var13.unknown_0_[var5] = var23;
        char* var26 = func_020e0434((Struct_0201099c_3*)&var10, var23);
        unsigned char var27[12];
        __clear(var27, sizeof(var27));
        func_020426bc(var26, var27, 1);
        memcpy(var4->unknown_140_, var27, sizeof(var27));
#endif
        short* var28 = var4->unknown_160_.unknown_0_;
        for (int var29 = 0; var29 < 10; var29++) {
            if (var29 == 2) {
                var28[var29] = NextRandomMax(var2, 10) + 0x233c;
            } else if (var29 == 3) {
                var28[var29] = NextRandomMax(var2, 10) + 0x2328;
            } else {
                var28[var29] = var3->unknown_1c_[var29];
            }
        }
        arg0->unknown_5690_++;
    }

    func_02089ddc(&var14);
    SignedAllocatorHeader* var30 = var15.GetSignedAllocator();
    var15.Destroy();
    func_02012da4(&data_02114e20, var30);
#if !defined(jpn)
    func_020dfc6c(&var10);
    SignedAllocatorHeader* var31 = var9.GetSignedAllocator();
    if (var31 != NULL) {
        var9.Destroy();
        func_02012da4(&data_02114e20, var31);
    }

#endif

    if (var16 > 0) {
        Struct_0201099c_13 var32;
        Struct_0201099c_18 var33;
        func_0209a804(&var33.unknown_0_);
        func_0209a810(&var33, &var0);
        for (int var34 = 0; var34 < arg0->unknown_5690_; var34++) {
            var4 = &arg0->unknown_3984_[var34];
            unsigned char var35 = func_020865b0((Struct_0201099c_16*)var4);
            unsigned char var36 = var4->unknown_2_[var35];
            Struct_0201099c_7* var37 = var0.unknown_10c_[var35];
            for (int var38 = 0; var38 < 20; var38++) {
                if (var36 >= var37[var38].unknown_2_ && var37[var38].unknown_2_ != 0) {
                    func_020865b8((Struct_0201099c_17*)var4, var37[var38].unknown_0_);
                }
            }
        }

        SafeAllocator var39;
        var39.ResetAllocatorPointer();
        var39.ResetAllocatorPointer();
#if defined(jpn)
        var39.CreateTypeA(func_02012d88(&data_02114e20, 0x12c00), 0x12c00);
#else
        var39.CreateTypeA(func_02012d88(&data_02114e20, 0x13800), 0x13800);
#endif
        var39.Reset();
        Struct_0201099c_10 var40;
        func_020de824(&var40);
        func_020de848(&var40);
#if defined(jpn)
        func_020e052c(&var40, &var39, data_020f2a38, data_020e7610, 8, 1);
#else
        BackgroundLoader::AddLockGlobal();
        unsigned int var41 = 0;
        void* var42 = ExtractFileFromGP2(data_020f2a38, data_020f2a30, &var41);
        if (var42 != NULL) {
            func_020dea64(&var40, &var39, var42, var41, data_020e6d6c, 8);
        }
        BackgroundLoader::RemoveLockGlobal();
#endif
        BackgroundLoader::AddLockGlobal();
        Struct_0201099c_13* var43;
        for (int var44 = 0; var44 < 13; var44++) {
            char var45[0x19];
            unsigned int var46;
#if defined(jpn)
            sprintf(var45, data_020eeff3, var44);
#else
            sprintf(var45, data_020ef0b5, var44);
#endif
            if (LoadFileIntoMemory(var45, data_0211e33c, &var46) != NULL) {
                Struct_0201099c_2* var47 = &var1;
                for (int var48 = 0; var48 < arg0->unknown_5690_; var48++) {
                    var4 = &arg0->unknown_3984_[var48];
                    func_0208247c(var47);
                    func_02082490(var47, data_0211e33c, var46, var4->unknown_2_[var44], 0);
                    var4->unknown_1c_[var44] = var47->unknown_0_.unknown_0_0_;
                    var4->unknown_f4_ += var47->unknown_0_.unknown_4_7_;
                    if (var44 == func_020865b0((Struct_0201099c_16*)var4)) {
                        var43 = &var32;
                        Struct_0201099c_11* var49 = &var43->unknown_3c_;
                        func_02082828(var43);
                        func_02083cbc(var43, &var1, var1.unknown_3c_);
                        short* var50 = var4->unknown_160_.unknown_0_;
                        for (int var51 = 0; var51 < 8; var51++) {
                            Struct_0201099c_9* var52 = func_020dedd0(&var40, var50[inline_0201099c_2(var51)->unknown_0_]);
                            if (var52 != NULL) {
                                memcpy(&var32.unknown_194_[inline_0201099c_2(var51)->unknown_1_], var52, sizeof(Struct_0201099c_9));
                            }
                        }
                        func_02083e28(&var32, 0);
                        var4->unknown_14c_[0].unknown_0_0_ = var43->unknown_0_[0].unknown_0_0_;
                        var4->unknown_14c_[0].unknown_1_2_ = var43->unknown_0_[0].unknown_1_2_;
                        var4->unknown_14c_[0].unknown_2_4_ = var43->unknown_0_[0].unknown_2_4_;
                        var4->unknown_14c_[1].unknown_0_0_ = var43->unknown_0_[1].unknown_0_0_;
                        var4->unknown_14c_[1].unknown_1_2_ = var43->unknown_0_[1].unknown_1_2_;
                        var4->unknown_14c_[1].unknown_2_4_ = var43->unknown_0_[1].unknown_2_4_;
                        var4->unknown_14c_[2].unknown_0_0_ = var43->unknown_0_[2].unknown_0_0_;
                        var4->unknown_14c_[2].unknown_1_2_ = inline_0201099c_3(var49);
                        var4->unknown_14c_[2].unknown_2_4_ = inline_0201099c_4(var49);
                        Struct_0201099c_12* var53 = &var4->unknown_14c_[3];
                        var53->unknown_0_0_ = inline_0201099c_3(var49);
                        var53->unknown_1_2_ = inline_0201099c_4(var49);
                        var53->unknown_2_4_ = inline_0201099c_5(var49);
                        var4->unknown_15c_0_ = inline_0201099c_6(var49);
                        var4->unknown_15d_2_ = var43->unknown_0_[3].unknown_0_0_;
                    }
                }
            }
        }
        BackgroundLoader::RemoveLockGlobal();
        SignedAllocatorHeader* var54 = var39.GetSignedAllocator();
        var39.Destroy();
        func_02012da4(&data_02114e20, var54);
    }
}
