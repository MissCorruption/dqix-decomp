#if defined(jpn)
#define data_ov015_021942a2 data_ov015_02194f64
#define data_ov015_021943a5 data_ov015_02194f37
#define data_ov015_021943b0 data_ov015_02194f48
#define data_ov015_021943b7 data_ov015_02194f57
#define data_ov015_021943bd data_ov015_02194f71
#define data_ov015_021943c6 data_ov015_02194f7e
#define data_ov015_021943d0 data_ov015_02194f8b
#define data_ov015_021943d9 data_ov015_02194f98
#define data_ov015_021943df data_ov015_02194f9e
#define data_ov015_021943ef data_ov015_02194fb1
#define data_ov015_021943f8 data_ov015_02194fb8
#define data_ov015_021943ff data_ov015_02194fbd
#define data_ov015_0219440c data_ov015_02194fc4
#define data_ov015_0219441a data_ov015_02194fcb
#define data_ov015_02194426 data_ov015_02194fd0
#define data_ov015_02194434 data_ov015_02194fd7
#define data_ov015_0219443d data_ov015_02194fe0
#define data_ov015_02194442 data_ov015_02194fe5
#define data_ov015_0219444b data_ov015_02194fee
#define data_ov015_02194452 data_ov015_02194ff5
#define data_ov015_02194459 data_ov015_02194ffc
#define data_ov015_0219445e data_ov015_02195001
#define data_ov015_02194463 data_ov015_02195006
#define data_ov015_02194470 data_ov015_02195017
#define data_ov015_0219447f data_ov015_0219502e
#define data_ov015_0219448e data_ov015_02195041
#define data_ov015_02194496 data_ov015_02195048
#define data_ov015_0219449e data_ov015_02195053
#define data_ov015_021944a9 data_ov015_0219505a
#define data_ov015_021944b6 data_ov015_0219506e
#define data_ov015_021944c5 data_ov015_02195083
#define data_ov015_021944d4 data_ov015_02195096
#define data_ov015_021944e3 data_ov015_021950b6
#define data_ov015_021944ec data_ov015_021950d0
#define data_ov015_021944f3 data_ov015_021950d7
#define data_ov015_021944fa data_ov015_021950de
#define data_ov015_02194503 data_ov015_021950eb
#define data_ov015_02194508 data_ov015_021950f5
#define data_ov015_0219450f data_ov015_021950fc
#define data_ov015_02194517 data_ov015_02195104
#define data_ov015_0219451b data_ov015_02195109
#define data_ov015_0219451f data_ov015_0219510e
extern const char data_ov015_021950a5[];
extern const char data_ov015_021950c3[];
extern const char data_ov015_021950f0[];
#endif
#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"
#include "Resource/BCFG.h"

struct Struct_ov015_02192700 { char unknown_0_[0x40]; };

struct Struct_ov015_02192700_2 {
    char unknown_0_[0x62];
    unsigned short unknown_62_;
    char unknown_64_[0x6d - 0x64];
    unsigned char unknown_6d_;
};

struct Struct_ov015_02192700_3 {
    char unknown_0_[0xc];
    char* unknown_c_;
};

struct Struct_ov015_02192700_4 {
    struct Struct_ov015_02192700_3* unknown_0_;
    struct Struct_ov015_02192700_4* unknown_4_;
};

struct Struct_ov015_0218bb14 { char* unknown_0_; int unknown_4_; };
struct Struct_ov015_0218bb14_2 { void* unknown_0_; struct Struct_ov015_0218bb14* unknown_4_; void* unknown_8_; int unknown_c_; };

struct Struct_ov015_02192700_5 {
    char* unknown_0_;
    int unknown_4_;
    short unknown_8_;
};

struct Struct_ov015_02192700_6 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov002_0215a658 {
    int unknown_0_;
    char* unknown_4_;
};

struct BCFG;

struct Struct_ov015_02192700_7 {
    int unknown_0_;
    char unknown_4_[0x24];
    struct Struct_ov015_02192700_7* unknown_28_;
};

struct Struct_ov015_02192700_8 {
    char unknown_0_[0x2c];
    struct Struct_ov015_02192700_4* unknown_2c_;
    void* unknown_30_;
    struct Struct_ov015_02192700_3* unknown_34_;
    char unknown_38_[0x3c - 0x38];
    struct Struct_ov015_0218bb14_2 unknown_3c_;
    char unknown_4c_[0x64 - 0x4c];
    char unknown_64_[0x194 - 0x64];
    int unknown_194_;
    char unknown_198_[0x19c - 0x198];
    unsigned char unknown_19c_[5];
    char unknown_1a1_[0x1a4 - 0x1a1];
    int unknown_1a4_;
    char unknown_1a8_[0x268 - 0x1a8];
    short unknown_268_[(0x2c4 - 0x268) / 2];
    struct Struct_ov015_02192700_2 unknown_2c4_;
    char unknown_332_[0x344 - 0x332];
    struct Struct_ov015_02192700* unknown_344_;
    int unknown_348_;
    float unknown_34c_;
    unsigned char unknown_350_;
    char unknown_351_[0x354 - 0x351];
    int unknown_354_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
struct Struct_02029634_3;
extern "C" void func_0202a91c(Struct_02029634_3*);
extern "C" void func_02029568(struct Struct_ov015_02192700_2* arg0);
extern "C" void func_020294cc(void* arg0, const char* arg1);
extern "C" void func_0202949c(char*);
extern "C" const char* func_020e51cc(int arg0);
struct Struct_0202a944_2;
struct Struct_0202a944;
extern "C" void func_0202a944(Struct_0202a944_2*, Struct_0202a944*);
extern "C" struct Struct_ov015_0218bb14* func_ov015_0218bb14(struct Struct_ov015_0218bb14_2* arg0, int arg1);
extern "C" struct Struct_ov015_02192700_5* func_ov015_02193160(struct Struct_ov015_02192700_8* arg0, int arg1, int* arg2);
struct Struct_0206f01c_2;
extern "C" struct Struct_ov015_02192700_6* func_0206f4f0(Struct_0206f01c_2*, int);
extern "C" int func_ov015_02190d08(struct Struct_ov015_02192700_8* arg0);
struct Struct_0201099c_10;
extern "C" struct Struct_ov002_0215a658* func_020dedd0(Struct_0201099c_10*, int);
struct Struct_ov015_02192700_9;
extern "C" void func_ov015_0219313c(Struct_ov015_02192700_9*, int, int);
struct Struct_ov015_02192700_10;
extern "C" void func_ov015_02193150(Struct_ov015_02192700_10*, int);
extern "C" void func_0202a6c4(struct Struct_ov015_02192700_2* arg0);
extern "C" void func_0202a8cc(char*, int);
extern "C" struct Struct_ov015_02192700_7* func_ov015_0218f344(void* arg0);

extern AllocatorUnion data_02114e20;
extern const char data_ov015_021942a2[];
extern const char data_ov015_021943a5[];
extern const char data_ov015_021943b0[];
extern const char data_ov015_021943b7[];
extern const char data_ov015_021943bd[];
extern const char data_ov015_021943c6[];
extern const char data_ov015_021943d0[];
extern const char data_ov015_021943d9[];
extern const char data_ov015_021943df[];
extern const char data_ov015_021943ef[];
extern const char data_ov015_021943f8[];
extern const char data_ov015_021943ff[];
extern const char data_ov015_0219440c[];
extern const char data_ov015_0219441a[];
extern const char data_ov015_02194426[];
extern const char data_ov015_02194434[];
extern const char data_ov015_0219443d[];
extern const char data_ov015_02194442[];
extern const char data_ov015_0219444b[];
extern const char data_ov015_02194452[];
extern const char data_ov015_02194459[];
extern const char data_ov015_0219445e[];
extern const char data_ov015_02194463[];
extern const char data_ov015_02194470[];
extern const char data_ov015_0219447f[];
extern const char data_ov015_0219448e[];
extern const char data_ov015_02194496[];
extern const char data_ov015_0219449e[];
extern const char data_ov015_021944a9[];
extern const char data_ov015_021944b6[];
extern const char data_ov015_021944c5[];
extern const char data_ov015_021944d4[];
extern const char data_ov015_021944e3[];
extern const char data_ov015_021944ec[];
extern const char data_ov015_021944f3[];
extern const char data_ov015_021944fa[];
extern const char data_ov015_02194503[];
extern const char data_ov015_02194508[];
extern const char data_ov015_0219450f[];
extern const char data_ov015_02194517[];
extern const char data_ov015_0219451b[];
extern const char data_ov015_0219451f[];

static inline const char* inline_ov015_02192700(struct Struct_ov015_02192700_3* arg0) {
    return arg0->unknown_c_;
}

// USA: func_ov015_02192700
extern "C" ARM void func_ov015_02192700(struct Struct_ov015_02192700_8* arg0, int arg1) {
    char var0[0x80];
    char var1[0x100];
    char var2[0x80];
    int var3;
    int var4;

    if (arg0->unknown_344_ != 0) {
        func_02012da4(&data_02114e20, arg0->unknown_344_);
        arg0->unknown_344_ = 0;
    }
    arg0->unknown_354_ = arg1;
    __clear(var0, 0x80);
    func_0202a91c((Struct_02029634_3*)&arg0->unknown_2c4_);
    func_02029568(&arg0->unknown_2c4_);
    arg0->unknown_2c4_.unknown_6d_ |= 6;

    if (arg0->unknown_194_ == 0 || arg0->unknown_194_ == 2) {
        switch (arg0->unknown_1a4_) {
        case 0:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943a5);
            break;
        case 1:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943b0);
            break;
        case 2:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943b7);
            break;
        case 3:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021942a2);
            break;
        case 4:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943bd);
            break;
        case 6:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943c6);
            break;
        case 7:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943d0);
            break;
        case 5:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943d9);
            break;
        case 8:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943df);
            break;
        case 15:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943ef);
            break;
        case 17:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943f8);
            break;
        case 18:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021943ff);
            break;
        case 19:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219440c);
            break;
        case 20:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219441a);
            break;
        case 21:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194426);
            break;
        case 23:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194434);
            break;
        case 24:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219443d);
            break;
        case 25:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194442);
            break;
        case 26:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219444b);
            break;
        case 27:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194452);
            break;
        case 28:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194459);
            break;
        case 22:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219445e);
            break;
        case 29:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194463);
            break;
        case 30:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194470);
            break;
        case 31:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219447f);
            break;
        case 16:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219448e);
            break;
        case 11:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_02194496);
            break;
        case 12:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_0219449e);
            break;
        case 33:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944a9);
            break;
        case 32:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944b6);
            break;
        case 13:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944c5);
            break;
        case 14:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944d4);
            break;
        case 34:
#if defined(jpn)
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021950a5);
#else
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021942a2);
#endif
            break;
        case 35:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944e3);
            break;
        case 36:
#if defined(jpn)
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021950c3);
#else
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021942a2);
#endif
            break;
        case 38:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944ec);
            break;
        case 39:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944f3);
            break;
        case 40:
            func_020294cc(&arg0->unknown_2c4_, data_ov015_021944fa);
            break;
        case 37:
            if (arg0->unknown_34_ != 0) {
                sprintf(var0, data_ov015_02194503, arg0->unknown_34_->unknown_c_);
            }
            func_020294cc(&arg0->unknown_2c4_, var0);
            break;
        }

        var4 = 0;
        if (arg0->unknown_1a4_ == 2 || arg0->unknown_1a4_ == 3 || arg0->unknown_1a4_ == 36) {
            struct Struct_ov015_02192700_4* var5;
            for (var5 = arg0->unknown_2c_; var5 != 0; var5 = var5->unknown_4_) {
                var4++;
            }
            if (var4 == 0) {
                arg0->unknown_344_ = (struct Struct_ov015_02192700*)func_02012d88(&data_02114e20, sizeof(struct Struct_ov015_02192700));
            } else {
                arg0->unknown_344_ = (struct Struct_ov015_02192700*)func_02012d88(&data_02114e20, var4 * sizeof(struct Struct_ov015_02192700));
            }
            if (var4 == 0) {
                func_0202949c((char*)arg0->unknown_344_);
#if defined(jpn)
                func_020294cc(arg0->unknown_344_, data_ov015_021950f0);
#else
                func_020294cc(arg0->unknown_344_, func_020e51cc(1000));
#endif
                func_0202a944((Struct_0202a944_2*)&arg0->unknown_2c4_, (Struct_0202a944*)arg0->unknown_344_);
                var4 = 1;
            } else {
                struct Struct_ov015_02192700_4* var6 = arg0->unknown_2c_;
                for (var4 = 0; var6 != 0; var4++) {
                    func_0202949c((char*)&arg0->unknown_344_[var4]);
                    func_020294cc(&arg0->unknown_344_[var4], inline_ov015_02192700(var6->unknown_0_));
                    func_0202a944((Struct_0202a944_2*)&arg0->unknown_2c4_, (Struct_0202a944*)&arg0->unknown_344_[var4]);
                    var6 = var6->unknown_4_;
                }
            }
        } else if (arg0->unknown_1a4_ == 40) {
            arg0->unknown_344_ = (struct Struct_ov015_02192700*)func_02012d88(&data_02114e20, arg0->unknown_3c_.unknown_c_ * sizeof(struct Struct_ov015_02192700));
            for (; var4 < arg0->unknown_3c_.unknown_c_; var4++) {
                struct Struct_ov015_0218bb14* var7 = func_ov015_0218bb14(&arg0->unknown_3c_, var4);
                func_0202949c((char*)&arg0->unknown_344_[var4]);
                func_020294cc(&arg0->unknown_344_[var4], var7->unknown_0_);
                func_0202a944((Struct_0202a944_2*)&arg0->unknown_2c4_, (Struct_0202a944*)&arg0->unknown_344_[var4]);
            }
        } else {
            struct Struct_ov015_02192700_5* var8;

            var3 = 0;
            var8 = func_ov015_02193160(arg0, arg0->unknown_1a4_, &var3);
            while (var8 != 0) {
                var3++;
                var4++;
                var8 = func_ov015_02193160(arg0, arg0->unknown_1a4_, &var3);
            }
            arg0->unknown_344_ = (struct Struct_ov015_02192700*)func_02012d88(&data_02114e20, var4 * sizeof(struct Struct_ov015_02192700));
            var4 = 0;
            var3 = 0;
            var8 = func_ov015_02193160(arg0, arg0->unknown_1a4_, &var3);
            while (var8 != 0) {
                func_0202949c((char*)&arg0->unknown_344_[var4]);
                if (arg0->unknown_1a4_ == 6) {
                    struct Struct_ov015_02192700_6* var9 = func_0206f4f0((Struct_0206f01c_2*)arg0->unknown_64_, var8->unknown_8_);
                    if (var9 != 0) {
                        __clear(var1, 0x100);
                        sprintf(var1, data_ov015_02194508, var9->unknown_4_ + 1, var9->unknown_0_);
                        func_020294cc(&arg0->unknown_344_[var4], var1);
                    } else if ((unsigned short)var8->unknown_8_ == 0) {
                        func_020294cc(&arg0->unknown_344_[var4], var8->unknown_0_);
                    } else {
                        func_020294cc(&arg0->unknown_344_[var4], data_ov015_0219450f);
                    }
                } else if (func_ov015_02190d08(arg0) != 0) {
                    struct Struct_ov002_0215a658* var10 = func_020dedd0((Struct_0201099c_10*)arg0->unknown_4c_, var8->unknown_8_);
                    if (var10 != 0) {
                        if (var10->unknown_4_ != 0) {
                            func_020294cc(&arg0->unknown_344_[var4], var10->unknown_4_);
                        } else {
                            func_020294cc(&arg0->unknown_344_[var4], var8->unknown_0_);
                        }
                    } else {
                        func_020294cc(&arg0->unknown_344_[var4], var8->unknown_0_);
                    }
                } else if (arg0->unknown_1a4_ == 38) {
                    unsigned char var11;

                    __clear(var2, 0x80);
                    var11 = 0;
                    switch (var4) {
                    case 0:
                        var11 = arg0->unknown_19c_[0];
                        break;
                    case 1:
                        var11 = arg0->unknown_19c_[1];
                        break;
                    case 2:
                        var11 = arg0->unknown_19c_[2];
                        break;
                    case 3:
                        var11 = arg0->unknown_19c_[3];
                        break;
                    case 4:
                        var11 = arg0->unknown_19c_[4];
                        break;
                    }
                    if (var11 != 0) {
                        sprintf(var2, data_ov015_02194517);
                    } else {
                        sprintf(var2, data_ov015_0219451b);
                    }
                    strcat(var2, var8->unknown_0_);
                    func_020294cc(&arg0->unknown_344_[var4], var2);
                } else {
                    func_020294cc(&arg0->unknown_344_[var4], var8->unknown_0_);
                }
                func_0202a944((Struct_0202a944_2*)&arg0->unknown_2c4_, (Struct_0202a944*)&arg0->unknown_344_[var4]);
                var4++;
                var3++;
                var8 = func_ov015_02193160(arg0, arg0->unknown_1a4_, &var3);
            }
        }
        func_ov015_0219313c((Struct_ov015_02192700_9*)&arg0->unknown_2c4_, 0, var4 - 1);
        func_ov015_02193150((Struct_ov015_02192700_10*)&arg0->unknown_2c4_, arg0->unknown_268_[arg0->unknown_1a4_]);
        func_0202a6c4(&arg0->unknown_2c4_);
        func_0202a8cc((char*)&arg0->unknown_2c4_, 1);
    } else {
        struct Struct_ov015_02192700_7* var12;
        struct Struct_ov015_02192700_7* var13;

        func_020294cc(&arg0->unknown_2c4_, data_ov015_0219451f);
        var4 = 0;
        for (var12 = func_ov015_0218f344(arg0->unknown_30_); var12 != 0; var12 = var12->unknown_28_) {
            struct BCFG* var14 = (struct BCFG*)var12->unknown_4_;
            if (var14 != 0) {
                var4 += var14->GetNumAnimations();
            }
        }
        arg0->unknown_344_ = (struct Struct_ov015_02192700*)func_02012d88(&data_02114e20, var4 * sizeof(struct Struct_ov015_02192700));
        var13 = func_ov015_0218f344(arg0->unknown_30_);
        var3 = 0;
        for (; var13 != 0; var13 = var13->unknown_28_) {
            struct BCFG* var15 = (struct BCFG*)var13->unknown_4_;
            if (var15 != 0) {
                int var16 = var15->GetNumAnimations();
                for (int var17 = 0; var17 < var16; var17++) {
                    const char* var18 = (const char*)var15->GetAnimationRecord(var17);
                    if (var18 != 0) {
                        func_0202949c((char*)&arg0->unknown_344_[var3]);
                        func_020294cc(&arg0->unknown_344_[var3], var18);
                        func_0202a944((Struct_0202a944_2*)&arg0->unknown_2c4_, (Struct_0202a944*)&arg0->unknown_344_[var3++]);
                    }
                }
            }
        }
        func_ov015_0219313c((Struct_ov015_02192700_9*)&arg0->unknown_2c4_, 0, var4 - 1);
        func_ov015_02193150((Struct_ov015_02192700_10*)&arg0->unknown_2c4_, 0);
        func_0202a6c4(&arg0->unknown_2c4_);
        func_0202a8cc((char*)&arg0->unknown_2c4_, 1);
    }

    int var19 = arg0->unknown_2c4_.unknown_62_;
    float var20 = (float)var19 / (float)var4;
    if (var20 > 1.0f) {
        var20 = 1.0f;
    }
    arg0->unknown_348_ = (int)(156.0f * var20);
    int var21 = var4 - var19;
    arg0->unknown_34c_ = (float)(156 - arg0->unknown_348_) / (float)var21;
    if (arg0->unknown_348_ < 4) {
        arg0->unknown_34c_ -= (float)(4 - arg0->unknown_348_) / (float)var21;
        arg0->unknown_348_ = 4;
    }
    arg0->unknown_350_ = 1;
}
