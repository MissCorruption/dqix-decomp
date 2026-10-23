#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Graphics.h"

struct Struct_0201099c_14;
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void func_020dfec0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);
extern "C" void func_0204b5b4(void* arg0, int arg1);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5* arg0, int arg1, int arg2);
extern "C" int func_ov017_02199964(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov017_021999b4(int arg0, int arg1, int arg2, int arg3);
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0204b174(void* arg0, void* arg1, SafeAllocator* arg2, unsigned int arg3);
struct Struct_ov017_02199684;
extern "C" void func_ov017_02199684(Struct_ov017_02199684* arg0, int arg1, int arg2);
extern "C" void func_ov017_021996bc(Struct_ov017_02199684* arg0, int arg1);
extern "C" void func_0204bc74(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(Struct_02020cb8_2* arg0, void* arg1);
struct Struct_0204c7a8;
extern "C" void func_0204c7a8(Struct_0204c7a8* arg0, SafeAllocator* arg1, int arg2, unsigned int arg3);
struct Struct_0205cf78;
struct Struct_0205cf78_2;
extern "C" void func_0205cf78(Struct_0205cf78* arg0, Struct_0205cf78_2* arg1, unsigned char arg2);

struct Struct_ov017_021999fc;
extern "C" void func_ov017_0219a388(Struct_ov017_021999fc* arg0);

struct Struct_ov017_021d643c {
    unsigned char unknown_0_[2];
};

#if defined(jpn)
#define data_ov017_021d73f8 data_ov017_021d7858
#define data_ov017_021d7423 data_ov017_021d7872
#define data_ov017_021d643c data_ov017_021d688c
enum { Enum_ov017_021999fc_15536 = 0x3a90, Enum_ov017_021999fc_15956 = 0x3e54 };
#else
enum { Enum_ov017_021999fc_15536 = 0x3cb0, Enum_ov017_021999fc_16500 = 0x4074 };
#endif

extern char data_ov017_021d73f8[];
extern char data_ov017_021d7412[];
extern char data_ov017_021d7423[];
extern const Struct_ov017_021d643c data_ov017_021d643c[2];

struct Struct_ov017_021999fc_2 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov017_021999fc_3 {
    void* unknown_0_;
    Struct_ov017_021999fc_2* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_ov017_021999fc_4 {
    char unknown_0_[0x98];
    Struct_ov017_021999fc_2* unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
};

struct Struct_ov017_021999fc {
    char unknown_0_[0x178];
    SafeAllocator unknown_178_;
    char unknown_18c_[Enum_ov017_021999fc_15536 - 0x18c];
    Struct_ov017_021999fc_4* unknown_3cb0_;
    Struct_ov017_021999fc_2 unknown_3cb4_[2];
    Struct_ov017_021999fc_3 unknown_3cf4_[4];
    void* unknown_4074_;
    int unknown_4078_;
    int unknown_407c_;
    int unknown_4080_;
    Struct_0201099c_14* unknown_4084_;
};

// USA: func_ov017_021999fc
// JPN: func_ov017_0219a5ac
extern "C" ARM void func_ov017_021999fc(Struct_ov017_021999fc* arg0) {
    if (arg0->unknown_4074_ != 0)
        return;
    if (arg0->unknown_4080_ == 0)
        return;
    if (arg0->unknown_4078_ == 0)
    {
        arg0->unknown_178_.Reset();
        arg0->unknown_4084_ = (Struct_0201099c_14*)arg0->unknown_178_.Allocate(0x18);
        func_020dfc40(arg0->unknown_4084_);
#if defined(jpn)
        arg0->unknown_407c_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov017_021d73f8, NULL);
#else
        arg0->unknown_407c_ = BackgroundLoader::GetInstance()->QueueLoadFileInGP2(data_ov017_021d73f8, data_ov017_021d7412, NULL);
#endif
        arg0->unknown_4078_++;
    }
    else if (arg0->unknown_4078_ == 1)
    {
        BackgroundLoader* var0 = BackgroundLoader::GetInstance();
        if (var0->GetTaskStatus(arg0->unknown_407c_))
        {
            void* var1;
            unsigned int var2;
            var0->GetLoadedFileByID(arg0->unknown_407c_, &var1, &var2);
            func_020dfec0(arg0->unknown_4084_, &arg0->unknown_178_, var1, var2);
            var0->RemoveTask(arg0->unknown_407c_);
            arg0->unknown_407c_ = -1;
            arg0->unknown_4078_++;
        }
    }
    if (arg0->unknown_4078_ == 2)
    {
        Struct_ov017_021d643c var3 = data_ov017_021d643c[0];
        Struct_ov017_021d643c var4 = data_ov017_021d643c[1];
        Struct_ov017_021999fc_2* var5;
        for (int var6 = 0; var6 < 2; var6++)
        {
            var5 = &arg0->unknown_3cb4_[var6];
            func_0204b11c((unsigned char*)var5, 0);
            var5->unknown_1c_0_ = 0;
            var5->unknown_1c_4_ = var3.unknown_0_[var6];
            func_0204b5b4(var5, var4.unknown_0_[var6]);
            func_0204b5e8((Struct_02020cb8_5*)var5, 0, 0);
        }
        DISPCNT = (DISPCNT & ~0x1f00) | 0x100;
        func_ov017_02199964(0, 0, 0x1d, 0, 0);
        func_ov017_021999b4(0, 0, 0x1e, 0);
        ColorEffect_ConfigureAlphaBlend(0x04000050, 2, 1, 0xa, 6);
        arg0->unknown_407c_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov017_021d7423, NULL);
        arg0->unknown_4078_++;
    }
    else if (arg0->unknown_4078_ == 3)
    {
        BackgroundLoader* var7 = BackgroundLoader::GetInstance();
        if (var7->GetTaskStatus(arg0->unknown_407c_))
        {
            void* var8;
            void* var9;
            void* var10[2];
            unsigned int var11;
            unsigned int var12[2];
            var7->GetLoadedFileByID(arg0->unknown_407c_, &var9, &var11);
            int var13 = func_02046900((Struct_02020cb8_4*)var9);
            for (int var14 = 0; var14 < var13; var14++)
            {
                var10[var14] = func_020467f0((Struct_02020aec*)var9, var14, &var8, (int*)&var12[var14]);
            }
            for (int var15 = 0; var15 < var13; var15++)
            {
                if (var10[var15] != NULL)
                    func_0204b174(&arg0->unknown_3cb4_[1], var10[var15], &arg0->unknown_178_, var12[var15]);
            }
            var7->RemoveTask(arg0->unknown_407c_);
            arg0->unknown_407c_ = -1;
            func_ov017_02199684((Struct_ov017_02199684*)arg0->unknown_3cb4_, 2, 0x800);
            Struct_ov017_021999fc_2* var16;
            for (int var17 = 0; var17 < 2; var17++)
            {
                var16 = &arg0->unknown_3cb4_[var17];
                func_0204bc74(var16, 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((Struct_02020cb8_2*)var16, NULL);
            }
            func_ov017_021996bc((Struct_ov017_02199684*)arg0->unknown_3cb4_, 2);
            arg0->unknown_4074_ = arg0->unknown_178_.Allocate(0x400);
            Struct_ov017_021999fc_3* var18;
            for (int var19 = 0; var19 < 4; var19++)
            {
                var18 = &arg0->unknown_3cf4_[var19];
                func_0204c7a8((Struct_0204c7a8*)var18, &arg0->unknown_178_, (int)arg0->unknown_4074_, 0x40);
                var18->unknown_4_ = &arg0->unknown_3cb4_[1];
            }
            Struct_ov017_021999fc_4* var20 = arg0->unknown_3cb0_;
            var20->unknown_98_ = &arg0->unknown_3cb4_[0];
            var20->unknown_b2_ = 2;
            func_0205cf78((Struct_0205cf78*)arg0->unknown_3cb0_, (Struct_0205cf78_2*)arg0->unknown_3cf4_, 4);
            BG0CNT = (BG0CNT & ~3) | 2;
            BG1CNT = (BG1CNT & ~3) | 1;
            BG2CNT = BG2CNT & ~3;
            BG3CNT = (BG3CNT & ~3) | 3;
            DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
            func_ov017_0219a388(arg0);
            arg0->unknown_4078_++;
        }
    }
}
