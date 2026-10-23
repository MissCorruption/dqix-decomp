#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
#define func_ov013_02184d80 func_ov013_02185db4
extern char data_ov013_02188d20[];
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Graphics.h"

extern "C" void func_020dfec0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void* func_020421a0(void);
extern "C" void func_0205cef8(void* arg0);
extern "C" void func_0205cf04(void* arg0);
extern "C" void func_ov013_02185310(unsigned char* arg0);
extern "C" void func_ov013_02185cc0(void* arg0);
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);
extern "C" void func_0204b5b4(void* arg0, int arg1);
struct Struct_0204b12c;
extern "C" void func_0204b12c(Struct_0204b12c* arg0, SafeAllocator* arg1);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5* arg0, int arg1, int arg2);
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0204b174(void* arg0, void* arg1, SafeAllocator* arg2, unsigned int arg3);
extern "C" void func_0204bc74(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(Struct_02020cb8_2* arg0, void* arg1);
struct Struct_0204c7a8;
extern "C" void func_0204c7a8(Struct_0204c7a8* arg0, SafeAllocator* arg1, int arg2, unsigned int arg3);
struct Struct_0205cf78;
struct Struct_0205cf78_2;
extern "C" void func_0205cf78(Struct_0205cf78* arg0, Struct_0205cf78_2* arg1, unsigned char arg2);

extern char data_ov013_02187e00[];
extern char data_ov013_02187e19[];
extern char data_ov013_02187e29[];
extern const unsigned char data_ov013_02187d88[2];
extern const unsigned char data_ov013_02187d8a[2];

struct Struct_ov013_02184d80 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov013_02184d80_2 {
    void* unknown_0_;
    Struct_ov013_02184d80* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_ov013_02184d80_3 {
    char unknown_0_[0x98];
    Struct_ov013_02184d80* unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};

struct Struct_ov013_02184d80_4 {
    SafeAllocator unknown_0_;
#if defined(jpn)
    char unknown_14_[0x34 - 0x14];
#else
    char unknown1_14_[0x38 - 0x14];
#endif
    Struct_ov013_02184d80_3 unknown_38_;
    Struct_ov013_02184d80 unknown_f4_[2];
    Struct_ov013_02184d80_2 unknown_134_[3];
#if defined(jpn)
    char unknown_3d0_[0x598 - 0x3d0];
#else
    char unknown_3d4_[0x60c - 0x3d4];
#endif
    SafeAllocator unknown_60c_;
    char unknown_620_[0x18];
    unsigned char unknown_638_[4];
    unsigned char unknown_63c_;
    unsigned char unknown_63d_;
    unsigned char unknown_63e_;
    bool unknown_63f_;
    bool unknown_640_;
    unsigned int unknown_644_;
    int unknown_648_;
#if !defined(jpn)
    int unknown_64c_;
#endif
    int unknown_650_;
    void* unknown_654_;
    char* unknown_658_;
};

// USA: func_ov013_02184d80
extern "C" ARM void func_ov013_02184d80(Struct_ov013_02184d80_4* arg0) {
    if (arg0->unknown_63c_ != 0)
        return;
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_640_)
    {
        if (arg0->unknown_63e_ == 0)
        {
#if defined(jpn)
            arg0->unknown_650_ = var0->QueueLoadFile(data_ov013_02188d20, NULL);
#else
            arg0->unknown_650_ = var0->QueueLoadFileInGP2(data_ov013_02187e00, data_ov013_02187e19, NULL);
#endif
            arg0->unknown_63e_++;
        }
        else if (arg0->unknown_63e_ == 1)
        {
            if (var0->GetTaskStatus(arg0->unknown_650_))
            {
                void* var1;
                unsigned int var2;
                var0->GetLoadedFileByID(arg0->unknown_650_, &var1, &var2);
                arg0->unknown_60c_.Reset();
                func_020dfec0(arg0->unknown_620_, &arg0->unknown_60c_, var1, var2);
                var0->RemoveTask(arg0->unknown_650_);
                arg0->unknown_650_ = -1;
                arg0->unknown_63e_++;
            }
        }
        else if (arg0->unknown_63e_ == 2)
        {
            arg0->unknown_658_ = *(char**)((char*)func_020421a0()
#if defined(jpn)
                + 0x28);
#else
                + 0x5c);
#endif
            BG2CNTSUB = (BG2CNTSUB & ~3) | 1;
            BG0CNTSUB = (BG0CNTSUB & ~3) | 2;
            BG1CNTSUB = (BG1CNTSUB & ~3) | 3;
            DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1700;
            func_0205cef8(&arg0->unknown_38_);
            func_0205cf04(&arg0->unknown_38_);
            func_ov013_02185310((unsigned char*)arg0);
            func_ov013_02185cc0(arg0);
            arg0->unknown_63e_ = 0;
            arg0->unknown_63c_ = 1;
        }
    }
    else
    {
        if (arg0->unknown_63e_ == 0)
        {
            Struct_0208cb08* var3 = func_02094a00();
            func_02094b3c(var3, 0xc);
            func_02094b30(var3, 0x1f7, 0);
            arg0->unknown_63e_++;
        }
        else if (arg0->unknown_63e_ == 1)
        {
            if (func_02094b4c(func_02094a00()))
            {
                arg0->unknown_658_ = *(char**)((char*)func_020421a0()
#if defined(jpn)
                + 0x28);
#else
                + 0x5c);
#endif
#if defined(jpn)
                func_0204b11c((unsigned char*)&arg0->unknown_f4_[0], 0);
                arg0->unknown_f4_[0].unknown_1c_0_ = 0;
                arg0->unknown_f4_[0].unknown_1c_4_ = 1;
                func_0204b5b4(&arg0->unknown_f4_[0], 1);
                func_0204b12c((Struct_0204b12c*)&arg0->unknown_f4_[0], &arg0->unknown_0_);
                func_0204b5e8((Struct_02020cb8_5*)&arg0->unknown_f4_[0], 0, 0);
                BG1CNT = (BG1CNT & (3 | 0x40)) | (0x1d << 8);
                func_0204b11c((unsigned char*)&arg0->unknown_f4_[1], 0);
                arg0->unknown_f4_[1].unknown_1c_0_ = 0;
                arg0->unknown_f4_[1].unknown_1c_4_ = 2;
                func_0204b5b4(&arg0->unknown_f4_[1], 0);
                func_0204b12c((Struct_0204b12c*)&arg0->unknown_f4_[1], &arg0->unknown_0_);
                func_0204b5e8((Struct_02020cb8_5*)&arg0->unknown_f4_[1], 0, 0);
                BG2CNT = (BG2CNT & (3 | 0x40)) | (0x1e << 8);
#else
                Struct_ov013_02184d80* var4 = arg0->unknown_f4_;
                for (int var5 = 0; var5 < 2; var4++, var5++)
                {
                    func_0204b11c((unsigned char*)var4, 0);
                    var4->unknown_1c_0_ = 0;
                    var4->unknown_1c_4_ = data_ov013_02187d8a[var5];
                    func_0204b5b4(var4, data_ov013_02187d88[var5]);
                    func_0204b12c((Struct_0204b12c*)var4, &arg0->unknown_0_);
                    func_0204b5e8((Struct_02020cb8_5*)var4, 0, 0);
                }
                BG1CNT = (BG1CNT & (3 | 0x40)) | (0x1d << 8);
                BG2CNT = (BG2CNT & (3 | 0x40)) | (0x1e << 8);
#endif
                ColorEffect_ConfigureAlphaBlend(0x04000050, 2, 1, 0xa, 6);
                arg0->unknown_650_ = var0->QueueLoadFile(data_ov013_02187e29, NULL);
                arg0->unknown_63e_++;
            }
        }
        else if (arg0->unknown_63e_ == 2)
        {
            if (var0->GetTaskStatus(arg0->unknown_650_))
            {
                void* var6 = NULL;
                void* var7;
                unsigned int var8;
                void* var9[2];
                unsigned int var10[2];
                var0->GetLoadedFileByID(arg0->unknown_650_, &var7, &var8);
                int var11 = func_02046900((Struct_02020cb8_4*)var7);
                for (int var12 = 0; var12 < var11; var12++)
                {
                    var9[var12] = func_020467f0((Struct_02020aec*)var7, var12, &var6, (int*)&var10[var12]);
                }
                for (int var13 = 0; var13 < var11; var13++)
                {
                    if (var9[var13] != NULL)
                        func_0204b174(&arg0->unknown_f4_[1], var9[var13], &arg0->unknown_0_, var10[var13]);
                }
                var0->RemoveTask(arg0->unknown_650_);
                arg0->unknown_650_ = -1;
                func_0204bc74(&arg0->unknown_f4_[0], 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((Struct_02020cb8_2*)&arg0->unknown_f4_[0], NULL);
                func_0204bc74(&arg0->unknown_f4_[1], 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((Struct_02020cb8_2*)&arg0->unknown_f4_[1], NULL);
                arg0->unknown_654_ = arg0->unknown_0_.Allocate(0x3c00);
                for (int var14 = 0; var14 < 3; var14++)
                {
                    func_0204c7a8((Struct_0204c7a8*)&arg0->unknown_134_[var14], &arg0->unknown_0_, (int)arg0->unknown_654_, 0x380);
                    arg0->unknown_134_[var14].unknown_4_ = &arg0->unknown_f4_[1];
                }
                arg0->unknown_38_.unknown_98_ = &arg0->unknown_f4_[0];
                arg0->unknown_38_.unknown_b2_ = 2;
                func_0205cf78((Struct_0205cf78*)&arg0->unknown_38_, (Struct_0205cf78_2*)arg0->unknown_134_, 3);
    #if defined(jpn)
            arg0->unknown_650_ = var0->QueueLoadFile(data_ov013_02188d20, NULL);
#else
            arg0->unknown_650_ = var0->QueueLoadFileInGP2(data_ov013_02187e00, data_ov013_02187e19, NULL);
#endif
                arg0->unknown_63e_++;
            }
        }
        else if (arg0->unknown_63e_ == 3)
        {
            if (var0->GetTaskStatus(arg0->unknown_650_))
            {
                void* var15;
                unsigned int var16;
                var0->GetLoadedFileByID(arg0->unknown_650_, &var15, &var16);
                arg0->unknown_60c_.Reset();
                func_020dfec0(arg0->unknown_620_, &arg0->unknown_60c_, var15, var16);
                var0->RemoveTask(arg0->unknown_650_);
                arg0->unknown_650_ = -1;
                arg0->unknown_63e_++;
            }
        }
        else if (arg0->unknown_63e_ == 4)
        {
            BG0CNT = (BG0CNT & ~3) | 2;
            BG1CNT = (BG1CNT & ~3) | 1;
            BG2CNT = BG2CNT & ~3;
            DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
            func_0205cef8(&arg0->unknown_38_);
            func_0205cf04(&arg0->unknown_38_);
            func_ov013_02185310((unsigned char*)arg0);
            func_ov013_02185cc0(arg0);
            arg0->unknown_63e_ = 0;
            arg0->unknown_63c_ = 1;
        }
    }
}
