#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Combat/ResourceScriptEntry.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

struct Struct_02086f24_3 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_02086f24_8 {
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
    Struct_02086f24_3 unknown_58_[13][3];
    unsigned short unknown_f4_;
    unsigned char unknown_f6_[27];
    unsigned char unknown_111_[9];
    unsigned char unknown_11a_[36];
    unsigned char unknown_13e_;
    unsigned char unknown_13f_0_ : 3;
    unsigned char unknown_13f_3_ : 5;
    unsigned char unknown_140_[12];
    Struct_02086f24_3 unknown_14c_[4];
    unsigned int unknown_15c_0_ : 10;
    unsigned int unknown_15d_2_ : 10;
    unsigned int unknown_15e_4_ : 12;
    Struct_02086f24_8 unknown_160_;
    unsigned char unknown_17c_[0xc0];
};

struct Struct_02086f24 {
    signed char unknown_0_;
    char unknown_1_[3];
    const char* unknown_4_;
    unsigned char unknown_8_;
    char unknown_9_;
    short unknown_a_;
    char unknown_c_[4];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned char unknown_12_;
    char unknown_13_;
    float unknown_14_;
    float unknown_18_;
    short unknown_1c_[10];
    unsigned char unknown_30_[13];
    unsigned char unknown_3d_;
    unsigned char unknown_3e_;
    unsigned char unknown_3f_;
};

struct Struct_0201099c_6 {
    Struct_02086f24* unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    char unknown_a_[2];
    int unknown_c_;
    short unknown_10_;
    char unknown_12_[2];
    int unknown_14_;
    short unknown_18_;
};

struct Struct_01ff8b48 {
    char unknown_0_[0x30];
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
};

struct Struct_0201099c_9 {
    unsigned int unknown_0_[8];
};

struct Struct_02086f24_2 {
    Struct_02086f24_3 unknown_0_[4];
    unsigned char unknown_10_[0x2c];
    Struct_01ff8b48 unknown_3c_;
    unsigned char unknown_74_[0x120];
    Struct_0201099c_9 unknown_194_[11];
#if defined(jpn)
    unsigned char unknown_2f4_[0x5d8];
#else
    unsigned char unknown1_2f4_[0x670];
#endif
};

struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    Struct_0201099c_9* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};

struct Struct_02086f24_4 {
    unsigned char unknown_0_[0xf70];
    unsigned int unknown_f70_;
};

struct Struct_02086f24_5;
struct Struct_02086f24_6 { void* unknown_0_; };
struct Struct_02086f24_7;
struct Struct_02013fb4;

extern "C" void func_02089db4(Struct_0201099c_6* arg0);
extern "C" void func_02089ddc(Struct_0201099c_6* arg0);
extern "C" void func_02089de8(void* arg0, void* arg1, const char* arg2);
extern "C" Struct_02086f24* func_02089fb0(Struct_02086f24_5* arg0, int arg1);
extern "C" void func_02086404(Struct_0201099c_20* arg0);
extern "C" void __clear(void* arg0, unsigned int arg1);
extern "C" int func_020426bc(const void* arg0, void* arg1, int arg2);
extern "C" void func_02082828(Struct_02086f24_2* arg0);
extern "C" void func_02082d6c(Struct_02086f24_2* arg0, Struct_0201099c_20* arg1);
extern "C" void func_02082fc4(void* arg0, void* arg1);
extern "C" void func_020de824(void* arg0);
extern "C" void func_020de848(void* arg0);
extern "C" int func_020def44(int arg0, int arg1, int arg2, short arg3);
extern "C" void func_02083e28(void* arg0, int arg1);
extern "C" void func_0209a804(int* arg0);
extern "C" void func_0209a8b4(Struct_02086f24_6* arg0, SafeAllocator* arg1, Struct_02013fb4* arg2, int arg3);
extern "C" int func_0209ab20(Struct_02086f24_7* arg0, int arg1, int arg2, unsigned char* arg3);
extern "C" int func_02086778(Struct_02086f24_4* arg0, Struct_0201099c_20* arg1, unsigned char arg2, unsigned char arg3);

extern const char* data_020f2a38;
extern const char* data_020f2a30;
extern const signed char data_020e8a94[10];
extern const char data_020f102e[];
extern unsigned char data_0211e33c[];
#if defined(jpn)
extern "C" void* func_020e0968(const char* arg0, unsigned int* arg1);
extern const char data_020f1150[];
#define HEAP_SIZE_02086f24 0xc00
#else
#define HEAP_SIZE_02086f24 0x800
#endif

#define FX_F32_TO_FX16(x) ((short)(((x) > 0) ? (short)((x) * 4096.0f + 0.5f) : (short)((x) * 4096.0f - 0.5f)))

static inline void inline_02086f24(Struct_0201099c_20* arg0, int arg1) {
    arg0->unknown_54_ |= 1 << arg1;
    arg0->unknown_50_ = arg1;
}

static inline int inline_02086f24_2(int arg0) { return arg0 / 8; }

static inline int inline_02086f24_3(int arg0) { return arg0 % 8; }

static inline short inline_02086f24_4(const Struct_02086f24* arg0, int arg1) { return arg0->unknown_1c_[arg1]; }

static inline unsigned short inline_02086f24_5(const Struct_01ff8b48* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_30_; }

static inline unsigned short inline_02086f24_6(const Struct_01ff8b48* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_32_; }

static inline unsigned short inline_02086f24_7(const Struct_01ff8b48* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_34_; }

static inline unsigned short inline_02086f24_8(const Struct_01ff8b48* arg0) { SDK_NULL_ASSERT(arg0); return arg0->unknown_36_; }

// USA: func_02086f24
extern "C" ARM int func_02086f24(Struct_02086f24_4* arg0, unsigned char arg1, SafeAllocator* arg2) {
    Struct_0201099c_20 var0;
    Struct_0201099c_2 var1;
    Struct_02086f24_2 var2;
    Struct_0201099c_6 var3;
    SafeAllocator var4;
#if !defined(jpn)
    unsigned char var5[12];
#endif
    Struct_0201099c_10 var6;
    unsigned char var7[20];
    unsigned int var8;
    unsigned int var9;
    Struct_02086f24_6 var10;

    if (arg2->GetMaxPossibleAllocation() < HEAP_SIZE_02086f24) {
        return 0;
    }
    var4.ResetAllocatorPointer();
    var4.ResetAllocatorPointer();
    var4.CreateTypeA(arg2->Allocate(HEAP_SIZE_02086f24), HEAP_SIZE_02086f24);
    var4.Reset();
    func_02089db4(&var3);
    func_02089de8(&var3, &var4, NULL);
    Struct_02086f24* var11 = func_02089fb0((Struct_02086f24_5*)&var3, (short)(arg1 + 7));
    func_02086404(&var0);
    int var12 = 0;
    int var13;
    if (var11 != NULL) {
        var0.unknown_0_6_ = 1;
        var0.unknown_1_0_ = var11->unknown_3e_;
        var0.unknown_13f_0_ = var11->unknown_3f_;
        inline_02086f24(&var0, var11->unknown_3d_);
#if defined(jpn)
        sprintf((char*)var0.unknown_140_, data_020f1150, var11->unknown_4_);
#else
        __clear(var5, sizeof(var5));
        func_020426bc(var11->unknown_4_, var5, 1);
        memcpy(var0.unknown_140_, var5, sizeof(var5));
#endif
        VectorizedInvertedMemcpy(var11->unknown_30_, var0.unknown_2_, sizeof(var0.unknown_2_));
        Struct_02086f24_8* var14 = &var0.unknown_160_;
        VectorizedInvertedMemcpy(var11->unknown_1c_, var14->unknown_0_, sizeof(var14->unknown_0_));
        var14->unknown_14_0_ = var11->unknown_8_;
        var14->unknown_14_1_ = var11->unknown_10_;
        var14->unknown_14_4_ = var11->unknown_12_;
        var14->unknown_15_0_ = var11->unknown_11_;
        var14->unknown_16_ = var11->unknown_a_;
        var14->unknown_18_ = FX_F32_TO_FX16(var11->unknown_14_);
        var14->unknown_1a_ = FX_F32_TO_FX16(var11->unknown_18_);
        func_02082828(&var2);
        func_02082d6c(&var2, &var0);
        func_02082fc4(&var2, &var1);
        BackgroundLoader::AddLockGlobal();
        var8 = 0;
        func_020de824(&var6);
        func_020de848(&var6);
#if defined(jpn)
        func_020e0968(data_020f2a38, &var8);
#else
        void* var15 = ExtractFileFromGP2(data_020f2a38, data_020f2a30, &var8);
#endif
        for (int var16 = 0; var16 < 10; var16++) {
            short var17 = inline_02086f24_4(var11, var16);
#if defined(jpn)
            func_020def44((int)&var2.unknown_194_[data_020e8a94[var16]], (int)data_0211e33c, var8, var17);
#else
            func_020def44((int)&var2.unknown_194_[data_020e8a94[var16]], (int)var15, var8, var17);
#endif
        }
        BackgroundLoader::RemoveLockGlobal();
        func_02083e28(&var2, 0);
        var0.unknown_14c_[0].unknown_0_0_ = var2.unknown_0_[0].unknown_0_0_;
        var0.unknown_14c_[0].unknown_1_2_ = var2.unknown_0_[0].unknown_1_2_;
        var0.unknown_14c_[0].unknown_2_4_ = var2.unknown_0_[0].unknown_2_4_;
        var0.unknown_14c_[1].unknown_0_0_ = var2.unknown_0_[1].unknown_0_0_;
        var0.unknown_14c_[1].unknown_1_2_ = var2.unknown_0_[1].unknown_1_2_;
        var0.unknown_14c_[1].unknown_2_4_ = var2.unknown_0_[1].unknown_2_4_;
        var0.unknown_14c_[2].unknown_0_0_ = var2.unknown_0_[2].unknown_0_0_;
        var0.unknown_14c_[2].unknown_1_2_ = inline_02086f24_5(&var2.unknown_3c_);
        var0.unknown_14c_[3].unknown_0_0_ = inline_02086f24_5(&var2.unknown_3c_) & 0x3ff;
        var0.unknown_14c_[2].unknown_2_4_ = inline_02086f24_6(&var2.unknown_3c_);
        var0.unknown_14c_[3].unknown_1_2_ = inline_02086f24_6(&var2.unknown_3c_);
        var0.unknown_14c_[3].unknown_2_4_ = inline_02086f24_7(&var2.unknown_3c_);
        var0.unknown_15c_0_ = inline_02086f24_8(&var2.unknown_3c_);
        var0.unknown_15d_2_ = var2.unknown_0_[3].unknown_0_0_;
        var0.unknown_f4_ = var1.unknown_0_.unknown_4_7_;
        var0.unknown_1c_[var11->unknown_3d_] = var1.unknown_0_.unknown_0_0_;
        var12 = var11->unknown_3d_;
    } else {
        var13 = 0;
    }
    func_02089ddc(&var3);
    var4.Reset();
    if (var13) {
        void* var18 = LoadFileIntoMemory(data_020f102e, data_0211e33c, &var9);
        if (var18 != NULL) {
            func_0209a804((int*)&var10);
            func_0209a8b4(&var10, &var4, (Struct_02013fb4*)var18, var9);
            int var19 = func_0209ab20((Struct_02086f24_7*)&var10, var12, var0.unknown_2_[var12], var7);
            unsigned char* var20 = var7;
            for (int var21 = 0; var21 < var19; var21++) {
                int var22 = *var20;
                int var23 = inline_02086f24_2(var22);
                int var24 = inline_02086f24_3(var22);
                var0.unknown_111_[var23] |= 1 << var24;
                var20++;
            }
        }
    }
    if (var13) {
        var13 = func_02086778(arg0, &var0, 1, 0);
        arg0->unknown_f70_++;
        if (arg0->unknown_f70_ > 4) {
            arg0->unknown_f70_ = 4;
        }
    }
    var4.Destroy();
    return var13;
}
