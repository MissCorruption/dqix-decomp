#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#if defined(jpn)
#define REGION_VALUE(j,u) j
#define data_ov008_0218b3e4 data_ov008_0218c064
#define data_ov008_0218b400 data_ov008_0218c080
#define data_ov008_0218b41d data_ov008_0218c09d
#define data_ov008_0218b328 data_ov008_0218bf60
#define data_ov008_0218b334 data_ov008_0218bf6c
#define data_ov008_0218b31c data_ov008_0218bf78
#define data_ov008_0218b3e0 data_ov008_0218c060
#define data_ov008_0218b48f data_ov008_0218c0f0
#define func_ov008_02188d74 func_ov008_02189a9c
#define func_ov008_0218712c func_ov008_02188008
#define func_ov008_02187f6c func_ov008_02188ccc
#else
#define REGION_VALUE(j,u) u
#endif

#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" void* __clear(void* arg0, int arg1);

extern const char data_ov008_0218b3e4[];
extern const char data_ov008_0218b400[];
extern const char data_ov008_0218b41d[];
extern const char data_ov008_0218b43c[];
extern const char data_ov008_0218b455[];
extern const char data_ov008_0218b3e0[];
extern const char data_ov008_0218b465[];
extern const char data_ov008_0218b47c[];
extern const char data_ov008_0218b48f[];
extern char data_0211e33c[];
extern int data_02109bf4;

struct Struct_ov008_0218b31c { int unknown_0_; int unknown_4_; int unknown_8_; };
extern const Struct_ov008_0218b31c data_ov008_0218b328;
extern const Struct_ov008_0218b31c data_ov008_0218b334;
extern const Struct_ov008_0218b31c data_ov008_0218b31c;

extern "C" int func_020d2ff0(const char* arg0);

struct Struct_ov008_02184a4c {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_ov008_02184a4c_2 {
    char unknown_0_[REGION_VALUE(0x27c, 0x2cc)];
    char unknown_2cc_[0x87c - REGION_VALUE(0x27c, 0x2cc)];
};

struct Struct_ov008_02184a4c_3 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 23;
    unsigned int unknown_12_7_ : 9;
    char unknown_14_[0xc];
    unsigned int inline_ov008_02184a4c() { return unknown_12_7_; }
};
struct Struct_ov008_02184a4c_4 {
    char unknown_0_[0x90];
    Struct_ov008_02184a4c_3 unknown_90_;
    Struct_ov008_02184a4c_3* inline_ov008_02184a4c_2() { return &unknown_90_; }
};

static inline char* inline_ov008_02184a4c_3(GameState* arg0) { return (char*)arg0 + REGION_VALUE(0x2c4, 0x104); }
static inline char* inline_ov008_02184a4c_4(char* arg0) { return arg0 + REGION_VALUE(0x7000, 0x7400); }
static inline Struct_ov008_02184a4c_4* inline_ov008_02184a4c_5(GameState* arg0) {
    return (Struct_ov008_02184a4c_4*)(inline_ov008_02184a4c_4(inline_ov008_02184a4c_3(arg0)) + 0x3c);
}

struct Struct_ov008_02184a4c_5 {
    char unknown_0_[0x68];
    short unknown_68_;
    short unknown_6a_[1];
};

struct Struct_ov008_02184a4c_6 {
    unsigned int unknown_0_;
    const char* unknown_4_;
    int unknown_8_;
};
struct Struct_ov008_02184a4c_7 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 9;
    unsigned int unknown_2_2_ : 9;
    unsigned int unknown_3_3_ : 3;
    unsigned int unknown_3_6_ : 2;
    char* unknown_4_;
    int unknown_8_;
    char unknown_c_[0x38];
    char unknown_44_[REGION_VALUE(0x118, 0x200)];

};

struct Struct_ov008_02184a4c_8 { char unknown_0_[0x28]; };

struct Struct_ov008_02184a4c_9 {
    char unknown_0_[0x3c];
    void* unknown_3c_;
    struct Struct_ov008_02184a4c_8* unknown_40_;
    char unknown_44_[0x4c - 0x44];
    short unknown_4c_;
    char unknown_4e_[2];
    unsigned char unknown_50_;
    void inline_ov008_02184a4c_6(struct Struct_ov008_02184a4c_8* arg0, int arg1) {
        unknown_40_ = arg0;
        unknown_4c_ = arg1;
    }
};

struct Struct_ov008_02184a4c_10 {
    char unknown_0_[0xc2];
    short unknown_c2_;
};

struct Struct_01ff91ac_35 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    unsigned char unknown_49c_1_ : 7;
};
struct Struct_ov008_02184a4c_11 {
    char unknown_0_[REGION_VALUE(0x144, 0x150)];
    Struct_01ff91ac_35* unknown_150_;
    int inline_ov008_02184a4c_7() { return unknown_150_->unknown_49c_0_; }
};

struct Struct_01ff91ac_36 {
    char unknown_0_[0x44];
    Struct_ov008_0218b31c unknown_44_;
    void inline_ov008_02184a4c_8(const Struct_ov008_0218b31c* arg0) { *(Vector3i*)&unknown_44_ = *(Vector3i const*)arg0; }
};

struct Struct_ov008_02184a4c_12 {
    SafeAllocator unknown_0_;
#if defined(jpn)
    SafeAllocator unknown_14_;
#else
    char unknown1_14_[0x28 - 0x14];
#endif
    SafeAllocator unknown_28_;
    SafeAllocator unknown_3c_;
    char unknown_50_[0x64 - 0x50];
    SafeAllocator unknown_64_;
    SafeAllocator unknown_78_;
    char unknown_8c_[0xa0 - 0x8c];
    char unknown_a0_[0xb8 - 0xa0];
    char* unknown_b8_;
    char unknown_bc_[0xd0 - 0xbc];
    char unknown_d0_[0xec - 0xd0];
    unsigned char unknown_ec_0_ : 4;
    unsigned char unknown_ec_4_ : 4;
    char unknown_ed_[0x130 - 0xed];
    char unknown_130_[0x730 - 0x130];
    Struct_ov008_02184a4c_9* unknown_730_;
    Struct_ov008_02184a4c_8* unknown_734_;
    void* unknown_738_;
    char unknown_73c_[0x790 - 0x73c];
    Struct_01ff91ac_36 unknown_790_;
    Struct_ov008_0218b31c unknown_7e0_;
    char unknown_7ec_[0x83c - 0x7ec];
    char unknown_83c_[0xb04 - 0x83c];
    Struct_ov008_02184a4c_5* unknown_b04_;
    int unknown_b08_;
    Struct_ov008_02184a4c_7* unknown_b0c_;
    unsigned char unknown_b10_;
    unsigned char unknown_b11_;
    char unknown_b12_[2];
    short unknown_b14_;
    short unknown_b16_;
    unsigned int unknown_b18_;
    int unknown_b1c_;
    int unknown_b20_;
    int unknown_b24_;

    Struct_01ff91ac_36* inline_ov008_02184a4c_9() { return &unknown_790_; }
    Struct_ov008_02184a4c_8* inline_ov008_02184a4c_10() { return unknown_734_; }
    Struct_ov008_02184a4c_9* inline_ov008_02184a4c_11() { return unknown_730_; }
    int inline_ov008_02184a4c_12(unsigned int arg0) volatile { return (unknown_b18_ & arg0) != 0; }
};

extern "C" void* func_0202ae18(void);
extern "C" char* func_0205ec34(void);
extern "C" int func_0206dfb0(char* arg0, char* arg1, int arg2);
extern "C" int func_020ac4c0(void* arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_0202c540(void* arg0);
struct Struct_020727d8;
extern "C" void func_020727d8(Struct_020727d8*);
extern "C" void func_020727f8(void* arg0, const char* arg1, int arg2, void* arg3, unsigned char arg4);
extern "C" void func_0209fe9c(char*);
struct Struct_0209fee4;
extern "C" void func_0209fee4(Struct_0209fee4*, SafeAllocator*, int, int);
struct Struct_0209ff64;
extern "C" void func_0209ff64(Struct_0209ff64*, int);
struct Struct_0209ff6c;
extern "C" void func_0209ff6c(Struct_0209ff6c*);
extern "C" int func_ov008_02185964(void* arg0);
extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);
extern "C" void func_020dfec0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b5b4(void* arg0, int arg1);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5*, int, int);
struct Struct_0204b12c;
extern "C" void func_0204b12c(Struct_0204b12c*, SafeAllocator*);
struct Struct_0204af38;
extern "C" void func_0204af38(Struct_0204af38*, int, SafeAllocator*);
struct Struct_0201099c_3;
extern "C" const char* func_020e0434(Struct_0201099c_3*, int);
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4*);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" void func_0204b174(void* arg0, void* arg1, SafeAllocator* arg2, int arg3);
struct Struct_0204b8d0;
extern "C" void func_0204b8d0(Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(Struct_02020cb8_2*, void*);
extern "C" int func_ov008_02188a54(Struct_ov008_02184a4c_12* arg0, int arg1);
extern "C" void func_0205a444(char*);
struct Struct_02043368_2;
extern "C" void func_0205a198(Struct_02043368_2*);
struct Struct_02043368;
extern "C" void func_0205a234(Struct_02043368*);
extern "C" int func_0205a528(void* arg0, void* arg1, int arg2, SafeAllocator* arg3);
extern "C" int func_ov008_02188d74(Struct_ov008_02184a4c_12* arg0);
struct Struct_0203d028;
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
int LoadFileIntoMemory(const char* path, void* dst, unsigned int* outSize);
struct ObjectArchiveLoadInfo;
struct Vector3i;
extern "C" void func_020a2010(void* arg0);
struct Struct_0202e5c0;
extern "C" void func_0202e5c0(Struct_0202e5c0*, int, int, int);
extern "C" void func_0202e5c8(unsigned char*, int, int, int);
extern "C" void func_020a27a0(void* arg0);
extern "C" void func_020100c4(GameState*, int);
struct Struct_020a13c4;
extern "C" void func_020a13c4(Struct_020a13c4*);
extern "C" void func_020a13e4(void* arg0, void* arg1, int arg2, unsigned short arg3, unsigned char arg4);
extern "C" int func_ov023_021ed724(void* arg0, short* arg1, int arg2);
struct Struct_020a15bc;
extern "C" Struct_ov008_02184a4c_6* func_020a15bc(Struct_020a15bc*, int);
extern "C" void func_020e046c(char* arg0, void* arg1, unsigned int arg2, int arg3);
extern "C" int func_0201081c(char*);
extern "C" int func_020d3018(const char* arg0, const char* arg1);
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov008_0218712c(Struct_ov008_02184a4c_12* arg0, int arg1);
struct Struct_ov008_02184a4c_13;
extern "C" void func_ov008_02187664(Struct_ov008_02184a4c_13*, int);
extern "C" void func_ov008_02187a70(Struct_ov008_02184a4c_12* arg0, int arg1);
extern "C" void func_ov008_02187f6c(Struct_ov008_02184a4c_12* arg0, int arg1);
struct Struct_0205d81c;
extern "C" Struct_ov008_02184a4c_10* func_0205d81c(Struct_0205d81c*, int);
extern "C" char* func_020421a0(void);
extern "C" void func_020432c4(char* arg0);
struct Struct_0209c3b4_2;
extern "C" void func_0209c3b4(Struct_0209c3b4_2*, int);
extern "C" void func_ov008_02186964(Struct_ov008_02184a4c_12* arg0);

struct Struct_ov008_02184a4c_14 {
    int unknown_0_;
    const void* unknown_4_;
    int unknown_8_;
    SafeAllocator* unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

#if defined(jpn)
extern const char data_ov008_0218c0bc[];
extern const char data_ov008_0218c0d5[];
extern "C" void func_020e2168(char*, const char*, int, int, int);
#endif

// USA: func_ov008_02184a4c
extern "C" ARM void func_ov008_02184a4c(Struct_ov008_02184a4c_12* arg0) {
#if defined(jpn)
    Struct_ov008_02184a4c_2* var1;
    GameState* var0 = GameState::GetInstance();
    var1 = (Struct_ov008_02184a4c_2*)GetGameResources();
#else
    GameState* var0 = GameState::GetInstance();
    Struct_ov008_02184a4c_2* var1 = (Struct_ov008_02184a4c_2*)GetGameResources();
#endif
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    void* var3 = func_0202ae18();

    unsigned char var4 = arg0->unknown_b11_;
    if (var4 == 0) {
        arg0->unknown_b18_ |= 0x200000;
        char* var5 = func_0205ec34();
        int var6 = func_0206dfb0(var5, var5 + 0x8c, 0x113b);
        if (var6 != 0) {
            arg0->unknown_b18_ |= 0x80;
            arg0->unknown_b18_ &= ~1;
        }
        Struct_ov008_02184a4c_4 var7;
        func_020ac4c0(&var7);
        Struct_ov008_02184a4c_4* var8 = &var7;
        unsigned int var9 = var8->inline_ov008_02184a4c_2()->inline_ov008_02184a4c();
        if (var9 == 0) {
            if (func_0206dfb0(var5, var5 + 0x8c, 0x796) != 0) {
                if (func_0202c508(var3) != 0) {
                    arg0->unknown_b18_ |= 2;
                }
            }
        } else if (var9 != 0) {
            arg0->unknown_b18_ |= 4;
        }
        if (!arg0->inline_ov008_02184a4c_12(1)) {
            if (var6 == 0) {
                arg0->unknown_b18_ |= 0x20000;
            }
            arg0->unknown_b11_ = 2;
            if (arg0->unknown_b24_ == 1) {
                arg0->unknown_b11_ = 3;
            }
        } else {
            if (arg0->inline_ov008_02184a4c_12(2)) {
                arg0->unknown_b20_ = var2->QueueLoadFile(data_ov008_0218b3e4, NULL);
            } else {
                char var10[0x80];
                __clear(var10, 0x80);
                Struct_ov008_02184a4c var11;
                func_020727d8((Struct_020727d8*)&var11);
                func_020727f8(&var11, data_ov008_0218b400, 1000, var10, REGION_VALUE(1, 2));
                arg0->unknown_b20_ = var2->QueueLoadFile(var10, NULL);
                arg0->unknown_b18_ |= 0x400;
            }
            arg0->unknown_b11_++;
        }
    } else if (var4 == 1) {
        if (var2->GetTaskStatus(arg0->unknown_b20_) != 0) {
            void* var12;
            unsigned int var13;
            var2->GetLoadedFileByID(arg0->unknown_b20_, &var12, &var13);
            arg0->unknown_78_.Reset();
            arg0->unknown_b04_ = (Struct_ov008_02184a4c_5*)arg0->unknown_78_.Allocate(0xd0);
            func_0209fe9c((char*)arg0->unknown_b04_);
            func_0209fee4((Struct_0209fee4*)arg0->unknown_b04_, &arg0->unknown_78_, (int)var12, var13);
            func_0209ff64((Struct_0209ff64*)arg0->unknown_b04_, 100);
            do {
                func_0209ff6c((Struct_0209ff6c*)arg0->unknown_b04_);
            } while (func_ov008_02185964(arg0->unknown_b04_) == 0);
            var2->RemoveTask(arg0->unknown_b20_);
            arg0->unknown_b20_ = -1;
            arg0->unknown_b11_++;
        }
    } else if (var4 == 2) {
        if (arg0->inline_ov008_02184a4c_12(0x400)) {
            if (arg0->unknown_b04_->unknown_68_ > 0) {
                arg0->unknown_b14_ = arg0->unknown_b04_->unknown_6a_[0];
                arg0->unknown_b16_ = 1000;
                arg0->unknown_78_.Reset();
                arg0->unknown_b04_ = NULL;
                arg0->unknown_b18_ &= ~1;
                arg0->unknown_b18_ &= ~0x400;
            } else {
                arg0->unknown_78_.Reset();
                arg0->unknown_b04_ = NULL;
                arg0->unknown_b18_ &= ~0x400;
                arg0->unknown_b20_ = var2->QueueLoadFile(data_ov008_0218b41d, NULL);
                arg0->unknown_b11_ = 1;
                return;
            }
        }
        Struct_0208cb08* var14 = func_02094a00();
        func_02094b40(var14);
        func_02094b34(var14, 0x6b, 0x1fc, 0, 0);
        arg0->unknown_b11_++;
    } else if (var4 == 3) {
        if (func_02094b4c(func_02094a00()) != 0) {
#if defined(jpn)
            arg0->unknown_14_.Reset();
            void* var15 = arg0->unknown_14_.Allocate(0x2000);
            unsigned int var16;
            LoadFileIntoMemory(data_ov008_0218c0bc, var15, &var16);
            arg0->unknown_28_.Reset();
            func_020dfec0(arg0->unknown_a0_, &arg0->unknown_28_, var15, var16);
            arg0->unknown_14_.Reset();
#else
            BackgroundLoader::AddLockGlobal();
            BackgroundLoader::FreeAllocationsGlobal();
            unsigned int var17;
            void* var18 = ExtractFileFromGP2(data_ov008_0218b43c, data_ov008_0218b455, &var17);
            arg0->unknown_28_.Reset();
            func_020dfec0(arg0->unknown_a0_, &arg0->unknown_28_, var18, var17);
            BackgroundLoader::RemoveLockGlobal();
#endif
            if (arg0->unknown_b24_ != 0) {
                arg0->unknown_b11_ = 5;
            } else {
                func_0204b11c((unsigned char*)arg0->unknown_d0_, 0);
                arg0->unknown_ec_0_ = 0;
                arg0->unknown_ec_4_ = 1;
                func_0204b5b4(arg0->unknown_d0_, 3);
                func_0204b5e8((Struct_02020cb8_5*)arg0->unknown_d0_, 0, 0);
                func_0204b12c((Struct_0204b12c*)arg0->unknown_d0_, &arg0->unknown_0_);
                func_0204af38((Struct_0204af38*)arg0->unknown_d0_, 1, &arg0->unknown_0_);
                arg0->unknown_b20_ = var2->QueueLoadFile(func_020e0434((Struct_0201099c_3*)arg0->unknown_a0_, 0), NULL);
                arg0->unknown_b11_++;
            }
        }
    } else if (var4 == 4) {
        if (var2->GetTaskStatus(arg0->unknown_b20_) != 0) {
            void* var19;
            void* var20;
            unsigned int var21;
            int var22;
            var2->GetLoadedFileByID(arg0->unknown_b20_, &var20, &var21);
            int var23 = func_02046900((Struct_02020cb8_4*)var20);
            for (int var24 = 0; var24 < var23; var24++) {
                void* var25 = func_020467f0((Struct_02020aec*)var20, var24, &var19, &var22);
                if (var25 != NULL) {
                    func_0204b174(arg0->unknown_d0_, var25, &arg0->unknown_0_, var22);
                }
            }
            var2->RemoveTask(arg0->unknown_b20_);
            arg0->unknown_b20_ = -1;
            func_0204b8d0((Struct_0204b8d0*)arg0->unknown_d0_, 0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
            func_0204b0e8((Struct_02020cb8_2*)arg0->unknown_d0_, NULL);
            arg0->unknown_b11_++;
        }
    } else if (var4 == 5) {
        if (func_ov008_02188a54(arg0, 0) != 0) {
            if (arg0->unknown_b24_ == 0) {
                func_0205a444((char*)arg0->unknown_730_);
                arg0->unknown_730_->unknown_50_ = 0;
                Struct_ov008_02184a4c_8* var26 = arg0->inline_ov008_02184a4c_10();
                arg0->inline_ov008_02184a4c_11()->inline_ov008_02184a4c_6(var26, 0x12);
                arg0->unknown_730_->unknown_3c_ = arg0->unknown_738_;
                for (int var27 = 0; var27 < 0x12; var27++) {
                    func_0205a198((Struct_02043368_2*)&arg0->unknown_734_[var27]);
                }
                func_0205a234((Struct_02043368*)arg0->unknown_738_);
#if defined(jpn)
                arg0->unknown_b20_ = var2->QueueLoadFile(func_020e0434((Struct_0201099c_3*)arg0->unknown_a0_, 3), NULL);
#else
                const char* var28 = func_020e0434((Struct_0201099c_3*)arg0->unknown_a0_, 6);
                arg0->unknown_b20_ = var2->QueueLoadFileInGP2(func_020e0434((Struct_0201099c_3*)arg0->unknown_a0_, 5), var28, NULL);
#endif
                arg0->unknown_b11_++;
            } else {
                arg0->unknown_b11_ = 0xff;
            }
        }
    } else if (var4 == 6) {
        if (var2->GetTaskStatus(arg0->unknown_b20_) != 0) {
            void* var29;
            void* var30;
            unsigned int var31;
            int var32;
            var2->GetLoadedFileByID(arg0->unknown_b20_, &var30, &var31);
            int var33 = func_02046900((Struct_02020cb8_4*)var30);
            arg0->unknown_3c_.Reset();
            for (int var34 = 0; var34 < var33; var34++) {
                void* var35 = func_020467f0((Struct_02020aec*)var30, var34, &var29, &var32);
                if (var35 != NULL) {
                    func_0205a528(arg0->unknown_730_, var35, var32, &arg0->unknown_3c_);
                }
            }
            arg0->unknown_b18_ |= 0x80000;
            var2->RemoveTask(arg0->unknown_b20_);
            arg0->unknown_b20_ = -1;
            arg0->unknown_b11_++;
        }
    } else if (var4 == 7) {
        if (func_ov008_02188d74(arg0) != 0) {
            if (arg0->inline_ov008_02184a4c_12(0x80)) {
                arg0->unknown_b11_ = 9;
            } else {
                arg0->unknown_b11_++;
            }
        }
    } else if (var4 == 8) {
        char* var36 = var1->unknown_2cc_;
        func_0207df50((Struct_0203d028*)(var36 + 0x230));
        func_0207df90(var36 + 0x230);
        BackgroundLoader::AddLockGlobal();
        unsigned int var37 = 0;
        if (LoadFileIntoMemory(func_020e0434((Struct_0201099c_3*)arg0->unknown_a0_, 10), data_0211e33c, &var37) != 0) {
            Struct_ov008_02184a4c_14 var38;
            var38.unknown_0_ = 0;
            var38.unknown_14_ = 0;
            var38.unknown_18_ = 0;
            var38.unknown_1c_ = 0;
            var38.unknown_c_ = &arg0->unknown_64_;
            var38.unknown_4_ = data_0211e33c;
            var38.unknown_8_ = var37;
            var38.unknown_10_ = 1;
            ((Object3D*)&arg0->unknown_790_)->LoadFromCCHROrCMOTArchive((ObjectArchiveLoadInfo*)&var38, (int (*)(BCFG::AnimationRecord*))NULL);
            Struct_ov008_0218b31c var39 = data_ov008_0218b328;
            ((Object3D*)&arg0->unknown_790_)->SetScale((Vector3i const*)&var39);
            Struct_ov008_0218b31c var40 = data_ov008_0218b334;
            arg0->inline_ov008_02184a4c_9()->inline_ov008_02184a4c_8(&var40);
            Struct_ov008_0218b31c var41 = data_ov008_0218b31c;
            *(Vector3i*)&arg0->unknown_7e0_ = *(Vector3i const*)&var41;
            ((Object3D*)&arg0->unknown_790_)->MaybeSetBCFGAnimation(0, 0);
        }
        BackgroundLoader::RemoveLockGlobal();
        func_0207dfac(var36 + 0x230);
        func_020a2010(arg0->unknown_83c_);
        func_0202e5c0((Struct_0202e5c0*)arg0->unknown_83c_, 0, 0x8000, 0x40000);
        func_0202e5c8((unsigned char*)arg0->unknown_83c_, 0, 0, 0);
        func_020a27a0(arg0->unknown_83c_);
        func_020100c4(var0, (int)arg0->unknown_83c_);
        arg0->unknown_b11_++;
    } else if (var4 == 9) {
        if (!arg0->inline_ov008_02184a4c_12(1)) {
            arg0->unknown_b11_ = 0xff;
        } else if (func_ov008_02185964(arg0->unknown_b04_) != 0) {
            if (arg0->unknown_b04_->unknown_68_ > 0) {
                func_020a13c4((Struct_020a13c4*)arg0->unknown_bc_);
                func_020a13e4(arg0->unknown_bc_, arg0->unknown_8c_, 0, 0, 1);
                short var42[50];
                int var43 = arg0->unknown_b04_->unknown_68_;
                for (int var44 = 0; var44 < var43; var44++) {
                    var42[var44] = arg0->unknown_b04_->unknown_6a_[var44];
                }
                if (func_ov023_021ed724(arg0->unknown_bc_, var42, var43) & 1) {
                    arg0->unknown_b18_ |= 0x8000;
                }
                if (arg0->inline_ov008_02184a4c_12(2)) {
                    inline_ov008_02184a4c_5(var0)->inline_ov008_02184a4c_2()->unknown_12_7_ = var42[0];
                    arg0->unknown_b18_ |= 4;
                    arg0->unknown_b16_ = 0x3e9;
                } else {
                    arg0->unknown_b16_ = 1000;
                }
                arg0->unknown_b14_ = var42[0];
                arg0->unknown_78_.Reset();
                arg0->unknown_b04_ = NULL;
                arg0->unknown_b0c_ = (Struct_ov008_02184a4c_7*)arg0->unknown_78_.Allocate(REGION_VALUE(0x15c, 0x244));
                Struct_ov008_02184a4c_7* var45 = arg0->unknown_b0c_;
                var45->unknown_0_0_ = 0;
                var45->unknown_1_1_ = 0;
                var45->unknown_2_2_ = 0;
                var45->unknown_3_3_ = 0;
                var45->unknown_3_6_ = 0;
                var45->unknown_4_ = NULL;
                var45->unknown_8_ = 0;
                memset(var45->unknown_c_, 0, 0x38);
                memset(var45->unknown_44_, 0, REGION_VALUE(0x118, 0x200));
                var45->unknown_4_ = var45->unknown_44_;
                Struct_ov008_02184a4c_6* var46 = func_020a15bc((Struct_020a15bc*)arg0->unknown_bc_, var42[0]);
                var45 = arg0->unknown_b0c_;
                if (var46 != NULL) {
                    *(unsigned int*)var45 = var46->unknown_0_;
                    var45->unknown_4_ = (char*)var46->unknown_4_;
                    var45->unknown_8_ = var46->unknown_8_;
                    var45->unknown_4_ = var45->unknown_44_;
                    const char* var47 = var46->unknown_4_;
                    if (var47 != NULL) {
                        memset(var45->unknown_44_, 0, REGION_VALUE(0x118, 0x200));
                        sprintf(var45->unknown_44_ + func_020d2ff0(var45->unknown_44_), data_ov008_0218b3e0, var47);
                    }
                }
                Struct_ov008_02184a4c_11* var48 = (Struct_ov008_02184a4c_11*)GameState::GetInstance()->GetProtagonist();
#if defined(jpn)
                int var49 = var48->inline_ov008_02184a4c_7();
                func_020e2168(arg0->unknown_b0c_->unknown_c_, data_ov008_0218c0d5, var42[0], var49, 1);
#else
                BackgroundLoader::AddLockGlobal();
                unsigned int var50 = 0;
                char var51[0x40];
                __clear(var51, 0x40);
                char var52[0x20];
                __clear(var52, 0x20);
                int var53 = var48->inline_ov008_02184a4c_7();
                sprintf(var51, data_ov008_0218b465, var53);
                sprintf(var52, data_ov008_0218b47c, var48->inline_ov008_02184a4c_7());
                void* var54 = ExtractFileFromGP2(var51, var52, &var50);
                if (var54 != NULL) {
                    func_020e046c(arg0->unknown_b0c_->unknown_c_, var54, var50, var42[0]);
                }
                BackgroundLoader::RemoveLockGlobal();
#endif
            } else {
                arg0->unknown_78_.Reset();
                arg0->unknown_b04_ = NULL;
            }
            if (arg0->unknown_b14_ <= 0) {
                int var55 = func_0201081c((char*)var0);
                if (func_0202c540(var3) != 0) {
                    arg0->unknown_b18_ |= 0x100;
                    var55 = 0x3eb;
                }
                memset(arg0->unknown_b8_, 0, REGION_VALUE(0x800, 0x960));
                Struct_ov008_02184a4c var56;
                func_020727d8((Struct_020727d8*)&var56);
                func_020727f8(&var56, data_ov008_0218b400, (short)var55, arg0->unknown_b8_, REGION_VALUE(1, 2));
                if (func_020d3018(arg0->unknown_b8_, data_ov008_0218b48f) == 0) {
                    arg0->unknown_b11_ = 0xff;
                } else {
                    arg0->unknown_b20_ = var2->QueueLoadFile(arg0->unknown_b8_, NULL);
                    arg0->unknown_b11_++;
                }
            } else {
                arg0->unknown_b11_ = 0xff;
            }
        }
    } else if (var4 == 10) {
        if (var2->GetTaskStatus(arg0->unknown_b20_) != 0) {
            void* var57;
            unsigned int var58;
            var2->GetLoadedFileByID(arg0->unknown_b20_, &var57, &var58);
            arg0->unknown_78_.Reset();
            arg0->unknown_b04_ = (Struct_ov008_02184a4c_5*)arg0->unknown_78_.Allocate(0xd0);
            func_0209fe9c((char*)arg0->unknown_b04_);
            func_0209fee4((Struct_0209fee4*)arg0->unknown_b04_, &arg0->unknown_78_, (int)var57, var58);
            func_0209ff64((Struct_0209ff64*)arg0->unknown_b04_, 100);
            do {
                func_0209ff6c((Struct_0209ff6c*)arg0->unknown_b04_);
            } while (func_ov008_02185964(arg0->unknown_b04_) == 0);
            var2->RemoveTask(arg0->unknown_b20_);
            arg0->unknown_b20_ = -1;
            arg0->unknown_b11_++;
        }
    } else if (var4 == 11) {
        if (arg0->unknown_b04_->unknown_68_ > 0) {
            arg0->unknown_b14_ = arg0->unknown_b04_->unknown_6a_[0];
            arg0->unknown_b16_ = func_0201081c((char*)var0);
            if (arg0->inline_ov008_02184a4c_12(0x100)) {
                arg0->unknown_b18_ &= ~0x100;
                arg0->unknown_b16_ = 0x3ea;
                if (func_0202c540(var3) != 0) {
                    arg0->unknown_b16_ = 0x3eb;
                }
            }
            arg0->unknown_78_.Reset();
            arg0->unknown_b04_ = NULL;
            arg0->unknown_b11_ = 0xff;
        } else if (arg0->inline_ov008_02184a4c_12(0x100)) {
            arg0->unknown_b18_ &= ~0x100;
            arg0->unknown_b11_ = 0xff;
        } else {
            void* var59 = func_0202ae18();
            int var60 = 0x3ea;
            if (func_0202b7d8((int*)var59) != 0) {
                if (func_0202c540(var59) != 0) {
                    var60++;
                }
            }
            memset(arg0->unknown_b8_, 0, REGION_VALUE(0x800, 0x960));
            Struct_ov008_02184a4c var61;
            func_020727d8((Struct_020727d8*)&var61);
            func_020727f8(&var61, data_ov008_0218b400, var60, arg0->unknown_b8_, REGION_VALUE(1, 2));
            arg0->unknown_b20_ = var2->QueueLoadFile(arg0->unknown_b8_, NULL);
            arg0->unknown_b11_ = 10;
            arg0->unknown_b18_ |= 0x100;
        }
    } else if (var4 == 0xff) {
        func_ov008_0218712c(arg0, 0);
        func_ov008_02187664((Struct_ov008_02184a4c_13*)arg0, 0);
        func_ov008_02187a70(arg0, 0);
        func_ov008_02187f6c(arg0, 0);
        for (int var62 = 0; var62 < 6; var62++) {
            Struct_ov008_02184a4c_10* var63 = func_0205d81c((Struct_0205d81c*)arg0->unknown_130_, (unsigned char)var62);
            if (var63 != NULL) {
                if (!(var62 != 4 && var62 != 5)) {
                    var63->unknown_c2_ = 1;
                } else {
                    var63->unknown_c2_ = 0;
                }
            }
        }
        if (arg0->unknown_b24_ == 0) {
            char* var64 = var1->unknown_2cc_;
            char* var65 = func_020421a0();
            func_0207df50((Struct_0203d028*)(var64 + 0x5b0));
            func_0207df90(var64 + 0x5b0);
            func_020432c4(var65);
            func_0207dfac(var64 + 0x5b0);
            func_0209c3b4((Struct_0209c3b4_2*)&data_02109bf4, 0x29);
            arg0->unknown_b10_ = 3;
            arg0->unknown_b11_ = 0;
            if (arg0->unknown_b0c_ == NULL) {
                arg0->unknown_b18_ &= ~0x200000;
                func_ov008_02186964(arg0);
            }
        } else {
            arg0->unknown_b18_ &= ~0x200000;
            arg0->unknown_b10_ = 4;
            arg0->unknown_b11_ = 0;
        }
    }
}
