#include <globaldefs.h>
#include <std_library_functions.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

struct Struct_020dbd9c {
    char unknown_0_[0x10];
    int unknown_10_;
    unsigned char unknown_14_;
};

struct Struct_ov006_02154614_2 {
    char unknown_0_[0x48];
    void* unknown_48_;
#if defined(jpn)
    char unknown_4c_[0x6f0 - 0x4c];
#else
    char unknown1_4c_[0x774 - 0x4c];
#endif
    unsigned short unknown_774_;
    unsigned char unknown_776_;
    char unknown_777_[0x6];
    signed char unknown_77d_;
    char unknown_77e_[0x1d];
    unsigned char unknown_79b_0_ : 1;
    unsigned char unknown_79b_1_ : 1;
};

struct Struct_ov006_02156e54 {
    char unknown_0_[0x7c];
};

struct Struct_ov006_021537d0 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_[3];
    unsigned short unknown_a_0_ : 4;
    unsigned short unknown_a_4_ : 4;
    unsigned short unknown_b_0_ : 4;
    unsigned short unknown_b_4_ : 4;
    unsigned int unknown_c_0_ : 20;
    unsigned int unknown_e_4_ : 8;
    unsigned int unknown_f_4_ : 4;
};

struct Struct_ov006_021555b0 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short unknown_2_2_ : 14;
};

struct Struct_ov006_02154614 {
#if !defined(jpn)
    char unknown_0_[3][0x80];
#endif
    SafeAllocator* unknown_180_;
    SafeAllocator* unknown_184_;
    SafeAllocator* unknown_188_;
    SafeAllocator unknown_18c_;
    void* unknown_1a0_;
    void* unknown_1a4_;
    unsigned char* unknown_1a8_;
    void* unknown_1ac_;
    void* unknown_1b0_;
    Struct_ov006_021537d0* unknown_1b4_;
    Struct_ov006_021537d0* unknown_1b8_;
    int unknown_1bc_;
    Struct_ov006_021555b0* unknown_1c0_;
    unsigned char* unknown_1c4_;
    void* unknown_1c8_;
    void* unknown_1cc_;
    void* unknown_1d0_;
    void* unknown_1d4_;
    void* unknown_1d8_;
    void* unknown_1dc_;
    void* unknown_1e0_;
    char unknown_1e4_[0x54];
    Object3D unknown_238_;
    Object3D unknown_2e4_;
    Object3D unknown_390_;
    Object3D unknown_43c_;
    Object3D unknown_4e8_;
    char unknown_594_[0x38];
    char unknown_5cc_[0x2c8];
    Struct_ov006_02156e54 unknown_894_[4];
    SafeAllocator unknown_a84_[4];
    int unknown_ad4_;
    int unknown_ad8_;
    unsigned char unknown_adc_;
    unsigned char unknown_add_;
    unsigned char unknown_ade_;
    unsigned char unknown_adf_;
    unsigned char unknown_ae0_;
    unsigned char unknown_ae1_;
    unsigned short unknown_ae2_;
    Struct_ov006_02154614_2 unknown_ae4_;
    SafeAllocator* unknown_1280_;
    SafeAllocator* unknown_1284_;
    char unknown_1288_[0x18];
    Struct_020dbd9c unknown_12a0_;
    short unknown_12b8_;
    signed char unknown_12ba_;
    unsigned char unknown_12bb_;
    unsigned char unknown_12bc_;
    unsigned char unknown_12bd_;
};

struct Struct_ov000_02171c04 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
    unsigned char unknown_c_[0xc];
    short unknown_18_;
    unsigned char unknown_1a_[6];
};

struct Struct_ov000_02171c04_2 {
    unsigned char unknown_0_[0x194];
    Struct_ov000_02171c04 unknown_194_[8];
};

struct Struct_ov006_021557c0 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_0201099c_3;
struct Struct_0201099c_10;

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020e0434(Struct_0201099c_3* arg0, int arg1);
#if defined(jpn)
extern "C" int func_020e12ec(char* arg0, const char* arg1);
#define data_ov006_0215ff5c data_ov006_021612c0
#endif
extern "C" void func_020de848(void* arg0);
extern "C" int func_020de980(void* arg0, void* arg1, void* arg2, int arg3, int arg4);
extern "C" void* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" void func_ov023_021dcd90(Struct_ov006_02154614_2* arg0, unsigned char arg1);
extern "C" void func_ov023_021dcae0(Struct_ov006_02154614_2* arg0, int arg1);
extern "C" void func_ov023_021dced4(Struct_ov006_02154614_2* arg0, unsigned char arg1);
extern "C" const char** func_020e5294(void* arg0, int arg1);
extern "C" void func_020e4864(const char* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void func_ov023_021dceac(char* arg0, int arg1, int arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5);

extern unsigned char data_ov006_0215ff5c[8];

// USA: func_ov006_021557c0
extern "C" ARM void func_ov006_021557c0(Struct_ov006_02154614* arg0) {
    if (!(arg0->unknown_ae2_ & 2) || arg0->unknown_ae4_.unknown_776_ == 0)
        return;
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    short var1 = arg0->unknown_12b8_;
    if (var1 > 0) {
        if (arg0->unknown_ade_ == 0) {
            short var2 = arg0->unknown_12ba_ + 0x26;
#if defined(jpn)
            const char* var3 = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1b0_, var2);
            char var4[0x40];
            func_020e12ec(var4, var3);
            arg0->unknown_ad4_ = var0->QueueLoadGP1(var4, 0);
#else
            short var5 = arg0->unknown_12ba_ + 0x64;
            const char* var6 = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1b0_, var2);
            const char* var7 = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1b0_, var5);
            arg0->unknown_ad4_ = var0->QueueLoadFileInGP2(var7, var6, 0);
#endif
            arg0->unknown_ade_++;
        }
        if (arg0->unknown_ade_ == 1) {
            if (var0->GetTaskStatus(arg0->unknown_ad4_) == 0)
                return;
            void* var8;
            unsigned int var9;
            var0->GetLoadedFileByID(arg0->unknown_ad4_, &var8, &var9);
            arg0->unknown_188_->Reset();
            short var10 = arg0->unknown_12b8_;
            func_020de848(arg0->unknown_1288_);
            func_020de980(arg0->unknown_1288_, arg0->unknown_188_, var8, var9, var10);
            arg0->unknown_ae4_.unknown_774_ &= ~0x1000;
            arg0->unknown_ae4_.unknown_48_ = arg0->unknown_1288_;
            func_ov023_021dcd90(&arg0->unknown_ae4_, 1);
            var0->RemoveTask(arg0->unknown_ad4_);
            arg0->unknown_1dc_ = func_020dedd0((Struct_0201099c_10*)arg0->unknown_1288_, var10);
            arg0->unknown_ae2_ &= ~2;
            arg0->unknown_ae2_ |= 0x40;
            func_ov023_021dcae0(&arg0->unknown_ae4_, arg0->unknown_12b8_);
            return;
        }
    } else if (var1 == -1) {
        arg0->unknown_ae2_ &= ~2;
        arg0->unknown_ae2_ |= 0x40;
        arg0->unknown_ae4_.unknown_774_ &= ~0x1000;
        func_ov023_021dcd90(&arg0->unknown_ae4_, 1);
        func_ov023_021dcae0(&arg0->unknown_ae4_, arg0->unknown_12b8_);
        return;
    }

    if (arg0->unknown_ade_ == 0) {
#if defined(jpn)
        short var11 = 0x26;
        var11 += arg0->unknown_1b8_->unknown_e_4_;
        const char* var12 = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1b0_, var11);
        char var13[0x40];
        func_020e12ec(var13, var12);
        arg0->unknown_ad4_ = var0->QueueLoadGP1(var13, 0);
#else
        short var14 = 0x64;
        short var15 = 0x26;
        var14 += arg0->unknown_1b8_->unknown_e_4_;
        var15 += arg0->unknown_1b8_->unknown_e_4_;
        const char* var16 = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1b0_, var15);
        const char* var17 = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1b0_, var14);
        arg0->unknown_ad4_ = var0->QueueLoadFileInGP2(var17, var16, 0);
#endif
        arg0->unknown_ade_++;
    } else if (arg0->unknown_ade_ == 1) {
        if (var0->GetTaskStatus(arg0->unknown_ad4_) == 0)
            return;
        void* var18;
        unsigned int var19;
        var0->GetLoadedFileByID(arg0->unknown_ad4_, &var18, &var19);
        if (var18 != 0) {
            arg0->unknown_188_->Reset();
            func_020de848(arg0->unknown_1288_);
            func_020de980(arg0->unknown_1288_, arg0->unknown_188_, var18, var19, arg0->unknown_1b8_->unknown_2_);
            arg0->unknown_1dc_ = func_020dedd0((Struct_0201099c_10*)arg0->unknown_1288_, arg0->unknown_1b8_->unknown_2_);
        }
        var0->RemoveTask(arg0->unknown_ad4_);
        arg0->unknown_ad4_ = -1;
        arg0->unknown_ade_ = 3;
    } else if (arg0->unknown_ade_ == 3) {
        arg0->unknown_1b4_ = arg0->unknown_1b8_;
        SafeAllocator* var20 = arg0->unknown_184_;
        arg0->unknown_184_ = arg0->unknown_188_;
        arg0->unknown_188_ = var20;
        arg0->unknown_ae4_.unknown_48_ = arg0->unknown_1288_;
        func_ov023_021dcd90(&arg0->unknown_ae4_, 1);
        const char* var21[3] = {0};
        if (arg0->unknown_1ac_ != 0) {
#if defined(jpn)
            var21[0] = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1ac_, arg0->unknown_1b8_->unknown_4_[0]);
            var21[1] = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1ac_, arg0->unknown_1b8_->unknown_4_[1]);
            var21[2] = (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_1ac_, arg0->unknown_1b8_->unknown_4_[2]);
#else
            memset(arg0->unknown_0_, 0, sizeof(arg0->unknown_0_));
            const char** var22 = func_020e5294(arg0->unknown_1ac_, arg0->unknown_1b8_->unknown_4_[0]);
            if (var22 != 0) {
                func_020e4864(*var22, arg0->unknown_0_[0], 1, 0, 0, 0);
                var21[0] = arg0->unknown_0_[0];
            }
            var22 = func_020e5294(arg0->unknown_1ac_, arg0->unknown_1b8_->unknown_4_[1]);
            if (var22 != 0) {
                func_020e4864(*var22, arg0->unknown_0_[1], 1, 0, 0, 0);
                var21[1] = arg0->unknown_0_[1];
            }
            var22 = func_020e5294(arg0->unknown_1ac_, arg0->unknown_1b8_->unknown_4_[2]);
            if (var22 != 0) {
                func_020e4864(*var22, arg0->unknown_0_[2], 1, 0, 0, 0);
                var21[2] = arg0->unknown_0_[2];
            }
#endif
        }
        unsigned char var23[3] = {0};
        GameState* var24 = GameState::GetInstance();
        Struct_ov006_021557c0* var25 = (Struct_ov006_021557c0*)func_02010828(var24);
        for (int var26 = 0; var26 < var25->unknown_f7c_; var26++) {
            char* var27 = (char*)func_0200ff1c(var24, var25->unknown_f78_[var26]);
            if (var27 != 0) {
                for (int var28 = 0; var28 < 8; var28++) {
                    Struct_ov000_02171c04_2* var29 = *(Struct_ov000_02171c04_2**)(var27
#if defined(jpn)
                        + 0x144
#else
                        + 0x150
#endif
                    );
                    Struct_ov000_02171c04* var30 = &var29->unknown_194_[data_ov006_0215ff5c[var28]];
                    if (var30 != 0) {
                        int var31 = var30->unknown_8_0_ <= 7;
                        if (var31) {
                            if (arg0->unknown_1b8_->unknown_4_[0] == var30->unknown_18_)
                                var23[0]++;
                            if (arg0->unknown_1b8_->unknown_4_[1] == var30->unknown_18_)
                                var23[1]++;
                            if (arg0->unknown_1b8_->unknown_4_[2] == var30->unknown_18_)
                                var23[2]++;
                        }
                    }
                }
            }
        }
        func_ov023_021dceac((char*)&arg0->unknown_ae4_, 0, (int)var21[0], arg0->unknown_1b8_->unknown_a_0_, arg0->unknown_1a8_[0], var23[0]);
        func_ov023_021dceac((char*)&arg0->unknown_ae4_, 1, (int)var21[1], arg0->unknown_1b8_->unknown_a_4_, arg0->unknown_1a8_[1], var23[1]);
        func_ov023_021dceac((char*)&arg0->unknown_ae4_, 2, (int)var21[2], arg0->unknown_1b8_->unknown_b_0_, arg0->unknown_1a8_[2], var23[2]);
        func_ov023_021dced4(&arg0->unknown_ae4_, 1);
        int var32 = 0;
        if (arg0->unknown_1c0_ != 0 && arg0->unknown_1c0_->unknown_2_0_)
            var32 = 1;
        if (var32)
            arg0->unknown_ae4_.unknown_774_ &= ~0x1000;
        else
            arg0->unknown_ae4_.unknown_774_ |= 0x1000;
        func_ov023_021dcae0(&arg0->unknown_ae4_, arg0->unknown_1b8_->unknown_2_);
        arg0->unknown_1d8_ = arg0->unknown_1dc_;
        arg0->unknown_1dc_ = 0;
        arg0->unknown_ade_ = 0;
        arg0->unknown_ae2_ &= ~2;
        arg0->unknown_ae2_ |= 0x44;
    }
}
