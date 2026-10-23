#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#if defined(jpn)
extern char data_ov013_02188de0[];
extern char data_ov013_02188dfa[];
#define data_ov013_02187db8 data_ov013_02188ce0
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include "GameState/GameState.h"

extern "C" void func_0205a444(char* arg0);
struct Struct_02043368_2;
extern "C" void func_0205a198(Struct_02043368_2* arg0);
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0205a528(void* arg0, void* arg1, unsigned int arg2, SafeAllocator* arg3);
extern "C" void func_020728ac(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3, int, int, int);
struct Struct_0208df10;
extern "C" void func_0208df10(Struct_0208df10* arg0);
extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" signed char func_020dd11c(unsigned int arg0, unsigned int arg1);
struct Struct_0208df20;
extern "C" void func_0208df20(Struct_0208df20* arg0, void* arg1, int arg2, int arg3, int arg4, void* arg5);
struct Struct_02020cb8;
extern "C" void func_0204af64(Struct_02020cb8* arg0);
extern "C" void func_0204b5b4(void* arg0, int arg1);
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5* arg0, int arg1, int arg2);
struct Struct_0204b12c;
extern "C" void func_0204b12c(Struct_0204b12c* arg0, SafeAllocator* arg1);
struct Struct_0204af38;
extern "C" void func_0204af38(Struct_0204af38* arg0, int arg1, SafeAllocator* arg2);
extern "C" void func_0204c684(void* arg0);
extern "C" void func_ov013_02187a58(void* arg0, void* arg1);
extern "C" void func_0204b174(void* arg0, void* arg1, SafeAllocator* arg2, unsigned int arg3);
struct Struct_0204af14;
extern "C" void* func_0204af14(Struct_0204af14* arg0, unsigned int arg1);
struct Struct_0204ae44;
extern "C" void func_0204ae44(Struct_0204ae44* arg0, int arg1);
struct Struct_0204b988;
extern "C" void func_0204b988(Struct_0204b988* arg0, unsigned int arg1, int arg2, int arg3, unsigned short arg4);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(Struct_02020cb8_2* arg0, void* arg1);
extern "C" void func_020dc7e8(int arg0, int arg1);

extern char data_ov013_02187e48[];
extern char data_ov013_02187e61[];
extern char data_ov013_02187e77[];
extern char data_ov013_02187e89[];
extern char data_ov013_02187e9e[];
extern char data_ov013_02187eaf[];
extern const unsigned char data_ov013_02187db8[2];

#define BLDCNT (*(volatile unsigned short*)0x04000050)
#define BLDCNTSUB (*(volatile unsigned short*)0x04001050)

struct Struct_ov013_021870f0 {
    char unknown_0_[0x28];
};

struct Struct_ov013_021870f0_2 {
    char unknown_0_[0x40];
    Struct_ov013_021870f0* unknown_40_;
    char unknown_44_[4];
    unsigned int unknown_48_;
    short unknown_4c_;
    unsigned short unknown_4e_;
    unsigned char unknown_50_;
    char unknown_51_[3];
};

struct Struct_ov013_021870f0_3 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov013_021870f0_4 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[0xb4 - 0xac];
    short unknown_b4_;
    short unknown_b6_;
    char unknown_b8_[0xe0 - 0xb8];
};

struct Struct_ov013_021870f0_5 {
#if defined(jpn)
    char unknown_0_[0x8b8];
#else
    char unknown1_0_[0x950];
#endif
    int unknown_950_;
};

struct Struct_ov013_021870f0_6 {
    SafeAllocator* unknown_0_;
    char unknown_4_[8];
    char unknown_c_[8];
    char unknown_14_[0x10];
    unsigned char unknown_24_;
    unsigned char unknown_25_;
    char unknown_26_[2];
    Struct_ov013_021870f0_3 unknown_28_;
#if !defined(jpn)
    Struct_ov013_021870f0_2* unknown_48_;
    Struct_ov013_021870f0* unknown_4c_;
    short* unknown_50_;
    short* unknown_54_;
    unsigned char* unknown_58_;
#endif
    int unknown_5c_;
    unsigned int unknown_60_;
    unsigned char unknown_64_;
    bool unknown_65_;
    unsigned char unknown_66_;
    signed char unknown_67_;
};

// USA: func_ov013_021870f0
extern "C" ARM bool func_ov013_021870f0(Struct_ov013_021870f0_6* arg0) {
    SafeAllocator* var0;
    if (arg0->unknown_65_)
        return true;
    bool var1 = true;
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    if (arg0->unknown_66_ == 0)
    {
#if defined(jpn)
        Struct_0208cb08* var3 = func_02094a00();
        func_02094b3c(var3, 10);
        func_02094b30(var3, 0x68, 0);
#else
        SafeAllocator* var4 = arg0->unknown_0_;
        var4[4].Reset();
        arg0->unknown_48_ = (Struct_ov013_021870f0_2*)var4[4].Allocate(sizeof(Struct_ov013_021870f0_2));
        arg0->unknown_4c_ = (Struct_ov013_021870f0*)var4[4].Allocate(13 * sizeof(Struct_ov013_021870f0));
        arg0->unknown_50_ = (short*)var4[4].Allocate(13 * sizeof(short));
        arg0->unknown_54_ = (short*)var4[4].Allocate(13 * sizeof(short));
        arg0->unknown_58_ = (unsigned char*)var4[4].Allocate(13);
        func_0205a444((char*)arg0->unknown_48_);
        arg0->unknown_48_->unknown_50_ = arg0->unknown_64_;
        Struct_ov013_021870f0_2* var5 = arg0->unknown_48_;
        var5->unknown_40_ = arg0->unknown_4c_;
        var5->unknown_4c_ = 13;
        for (int var6 = 0; var6 < 13; var6++)
        {
            func_0205a198((Struct_02043368_2*)&arg0->unknown_4c_[var6]);
        }
        for (int var7 = 0; var7 < 10; var7++)
        {
            arg0->unknown_50_[var7] = -1;
            arg0->unknown_54_[var7] = -1;
            arg0->unknown_58_[var7] = 2;
        }
        arg0->unknown_5c_ = var2->QueueLoadFile(data_ov013_02187e48, NULL);
#endif
        var1 = false;
        arg0->unknown_66_++;
    }
    else if (arg0->unknown_66_ == 1)
    {
#if defined(jpn)
        if (func_02094b4c(func_02094a00())) {
            arg0->unknown_66_++;
        }
#else
        if (var2->GetTaskStatus(arg0->unknown_5c_))
        {
            SafeAllocator* var8 = arg0->unknown_0_;
            void* var9;
            void* var10;
            unsigned int var11;
            var2->GetLoadedFileByID(arg0->unknown_5c_, &var10, &var11);
            int var12 = func_02046900((Struct_02020cb8_4*)var10);
            for (int var13 = 0; var13 < var12; var13++)
            {
                unsigned int var14;
                void* var15 = func_020467f0((Struct_02020aec*)var10, var13, &var9, (int*)&var14);
                func_0205a528(arg0->unknown_48_, var15, var14, &var8[4]);
            }
            var2->RemoveTask(arg0->unknown_5c_);
            arg0->unknown_5c_ = -1;
            arg0->unknown_66_++;
        }
#endif
        var1 = false;
    }
    else if (arg0->unknown_66_ == 2)
    {
        var2->MaybeFreeAllocations();
#if defined(jpn)
        arg0->unknown_5c_ = var2->QueueLoadFile(data_ov013_02188de0, NULL);
#else
        arg0->unknown_5c_ = var2->QueueLoadFileInGP2(data_ov013_02187e61, data_ov013_02187e77, NULL);
#endif
        var1 = false;
        arg0->unknown_66_++;
    }
    else if (arg0->unknown_66_ == 3)
    {
        if (var2->GetTaskStatus(arg0->unknown_5c_))
        {
            void* var16;
            unsigned int var17;
            var2->GetLoadedFileByID(arg0->unknown_5c_, &var16, &var17);
            SafeAllocator* var18 = arg0->unknown_0_;
            var18[3].Reset();
            func_020728ac(arg0->unknown_4_, &var18[3], var16, var17, 0, 0, 0);
            var2->RemoveTask(arg0->unknown_5c_);
            arg0->unknown_5c_ = -1;
            arg0->unknown_66_++;
        }
        var1 = false;
    }
    else if (arg0->unknown_66_ == 4)
    {
        func_0208df10((Struct_0208df10*)arg0->unknown_c_);
        var2->MaybeFreeAllocations();
#if defined(jpn)
        arg0->unknown_5c_ = var2->QueueLoadFile(data_ov013_02188dfa, NULL);
#else
        arg0->unknown_5c_ = var2->QueueLoadFileInGP2(data_ov013_02187e89, data_ov013_02187e9e, NULL);
#endif
        var1 = false;
        arg0->unknown_66_++;
    }
    else if (arg0->unknown_66_ == 5)
    {
        if (var2->GetTaskStatus(arg0->unknown_5c_))
        {
            void* var19;
            unsigned int var20;
            var2->GetLoadedFileByID(arg0->unknown_5c_, &var19, &var20);
            SafeAllocator* var21 = arg0->unknown_0_;
            var21[2].Reset();
            short* var22 = NULL;
            short var23[5] = {};
            GameObject* var24 = func_0200ff1c(GameState::GetInstance(), arg0->unknown_67_);
            if (var24 != NULL)
            {
                Struct_ov013_021870f0_5* var25 = (Struct_ov013_021870f0_5*)func_02053c6c((unsigned char*)var24);
                if (var25 != NULL)
                {
                    for (unsigned char var26 = 0; var26 < 5; var26++)
                    {
                        var23[var26] = func_020dd11c((unsigned char)var25->unknown_950_, var26);
                    }
                    var22 = var23;
                }
            }
            func_0208df20((Struct_0208df20*)arg0->unknown_c_, &var21[2], (int)var19, var20, (int)var22, (void*)5);
            var2->RemoveTask(arg0->unknown_5c_);
            arg0->unknown_5c_ = -1;
            arg0->unknown_66_++;
        }
        var1 = false;
    }
    else if (arg0->unknown_66_ == 6)
    {
        SafeAllocator* var27 = arg0->unknown_0_;
        var27->Reset();
        unsigned char var28[2];
        var28[0] = data_ov013_02187db8[0];
        var28[1] = data_ov013_02187db8[1];
        func_0204af64((Struct_02020cb8*)&arg0->unknown_28_);
        arg0->unknown_28_.unknown_1c_0_ = arg0->unknown_64_;
        arg0->unknown_28_.unknown_1c_4_ = var28[arg0->unknown_64_];
        func_0204b5b4(&arg0->unknown_28_, 0);
        func_0204b11c((unsigned char*)&arg0->unknown_28_, 0);
        func_0204b5e8((Struct_02020cb8_5*)&arg0->unknown_28_, 0, 0);
        func_0204b12c((Struct_0204b12c*)&arg0->unknown_28_, var27);
        func_0204af38((Struct_0204af38*)&arg0->unknown_28_, 1, var27);
        if (arg0->unknown_64_ == 0)
        {
            DISPCNT = (DISPCNT & ~0x1f00) | 0x1200;
            BLDCNT = 0;
        }
        else
        {
            BG0CNTSUB = (BG0CNTSUB & (3 | 0x40)) | (0xf << 8);
            BLDCNTSUB = 0;
        }
        var1 = false;
        arg0->unknown_66_++;
    }
    else if (arg0->unknown_66_ == 7)
    {
        var2->MaybeFreeAllocations();
        arg0->unknown_5c_ = var2->QueueLoadFile(data_ov013_02187eaf, NULL);
        var1 = false;
        arg0->unknown_66_++;
    }
    else if (arg0->unknown_66_ == 8)
    {
        if (var2->GetTaskStatus(arg0->unknown_5c_))
        {
            void* var29;
            void* var30;
            void* var31;
            unsigned int var32;
            var2->GetLoadedFileByID(arg0->unknown_5c_, &var31, &var32);
            int var33 = func_02046900((Struct_02020cb8_4*)var31);
            var0 = arg0->unknown_0_;
            var0[1].Reset();
            for (int var34 = 0; var34 < var33; var34++)
            {
                unsigned int var35;
                var29 = func_020467f0((Struct_02020aec*)var31, var34, &var30, (int*)&var35);
                if (var29 != NULL)
                {
                    if (var34 == 0)
                    {
                        Struct_ov013_021870f0_4 var36;
                        func_0204c684(&var36);
                        var36.unknown_b4_ = 0xa;
                        var36.unknown_b6_ = 0xb;
                        var36.unknown_a8_ = 0x20;
                        var36.unknown_aa_ = 0x18;
                        var36.unknown_8_ = (char*)var29 + 0x10;
                        func_ov013_02187a58(arg0, &var36);
                    }
                    func_0204b174(&arg0->unknown_28_, var29, &var0[1], var35);
                }
            }
            var2->RemoveTask(arg0->unknown_5c_);
            arg0->unknown_5c_ = -1;
            void* var37 = func_0204af14((Struct_0204af14*)&arg0->unknown_28_, 0);
            if (var37 != NULL)
                func_0204ae44((Struct_0204ae44*)var37, arg0->unknown_67_);
            func_0204b988((Struct_0204b988*)&arg0->unknown_28_, 0, 0, 0, 0xffff);
            func_0204b0e8((Struct_02020cb8_2*)&arg0->unknown_28_, NULL);
            arg0->unknown_65_ = true;
            arg0->unknown_66_ = 0;
            if (arg0->unknown_64_ == 0)
                func_020dc7e8(4, -1);
            else
                func_020dc7e8(3, -1);
        }
        var1 = false;
    }
    return var1;
}
