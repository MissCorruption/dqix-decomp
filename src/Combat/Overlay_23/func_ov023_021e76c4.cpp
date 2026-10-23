#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>
#include <NitroSDK/Cache.h>

#define REG_DISPCNT_SUB (*(volatile unsigned int*)0x04001000)
#define REG_BG0CNT_SUB (*(volatile unsigned short*)0x04001008)
#define REG_BG1CNT_SUB (*(volatile unsigned short*)0x0400100a)
#define REG_BG0OFS_SUB (*(volatile unsigned int*)0x04001010)
#define REG_BG1OFS_SUB (*(volatile unsigned int*)0x04001014)
#define REG_BLDCNT_SUB (*(volatile unsigned short*)0x04001050)

struct Struct_ov023_021e76c4_4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov023_021e76c4_5 {
    Struct_ov023_021e76c4_5* unknown_0_;
    Struct_ov023_021e76c4_4* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_ov023_021e76c4_6 {
    char unknown_0_[0x98];
    Struct_ov023_021e76c4_4* unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};

struct Struct_ov023_021e76c4 {
    char unknown_0_[8];
    unsigned int unknown_8_;
    void* unknown_c_;
};

struct Struct_ov023_021e76c4_2 {
#if defined(jpn)
    char unknown_0_[0x28];
#else
    char unknown1_0_[0x5c];
#endif
    void* unknown_5c_;
};

struct Struct_ov023_021e76c4_3 {
    SafeAllocator unknown_0_[3];
    int unknown_3c_;
    unsigned int unknown_40_;
    unsigned int unknown_44_;
    unsigned int unknown_48_;
    char unknown_4c_[0x18];
    char unknown_64_[0x10];
    unsigned char unknown_74_;
    unsigned char unknown_75_;
    char unknown_76_[2];
    Struct_ov023_021e76c4_6 unknown_78_;
    Struct_ov023_021e76c4_4 unknown_134_[2];
    Struct_ov023_021e76c4_5 unknown_174_[5];
    void* unknown_5d4_;
    char* unknown_5d8_;
    int unknown_5dc_;
    int unknown_5e0_;
    int unknown_5e4_;
};

struct Struct_0204b12c;
struct Struct_02020cb8_5;
struct Struct_0204af38;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_02020cb8_2;
struct Struct_0204af14;
struct Struct_0204c7a8;
struct Struct_0205cf78;
struct Struct_0205cf78_2;

extern "C" Struct_ov023_021e76c4_2* func_020421a0();
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);
extern "C" void func_0204b12c(Struct_0204b12c* arg0, SafeAllocator* arg1);
extern "C" int func_0204b5e8(Struct_02020cb8_5* arg0, int arg1, int arg2);
extern "C" void func_0204af38(Struct_0204af38* arg0, int arg1, SafeAllocator* arg2);
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0204b0e8(Struct_02020cb8_2* arg0, void* arg1);
extern "C" Struct_ov023_021e76c4* func_0204af14(Struct_0204af14* arg0, unsigned int arg1);
extern "C" void func_0204c7a8(Struct_0204c7a8* arg0, SafeAllocator* arg1, int arg2, unsigned int arg3);
extern "C" void func_0205cf78(Struct_0205cf78* arg0, Struct_0205cf78_2* arg1, unsigned char arg2);

extern "C" {
void __clear(void* arg0, unsigned long arg1);
void func_020dfec0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
void func_0204b5b4(Struct_ov023_021e76c4_4* arg0, int arg1);
void DisableSubBGVRAMBanks();
void MapVRAMBanksToSubBG(int banks);
void func_0204b174(Struct_ov023_021e76c4_4* arg0, void* arg1, SafeAllocator* arg2, unsigned int arg3);
void func_0204bc74(Struct_ov023_021e76c4_4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
void LoadToSubBG1ScreenData(void* data, int offset, unsigned int size);
void func_020dc7e8(int arg0, int arg1);
void LoadToSubBGStandardPalette(const void* data, int offset, unsigned int size);
}

extern const char data_ov023_021fdd6e[];
#if defined(jpn)
extern const char data_ov023_021fd018[];
#endif
extern const char data_ov023_021fdd88[];
extern const char data_ov023_021fdd99[];
extern const unsigned short data_ov023_021fd760;

// USA: func_ov023_021e76c4
extern "C" ARM int func_ov023_021e76c4(Struct_ov023_021e76c4_3* arg0)
{
    void* var0[4];
    unsigned int var1[4];
    void* var2;
    unsigned int var3;
    int var4[2];
    char var5[4];
    void* var6;
    unsigned int var7;
    if (arg0->unknown_5dc_ != 0)
        return 1;
    int var8 = 1;
    BackgroundLoader* var9 = BackgroundLoader::GetInstance();
    if (arg0->unknown_5e0_ == 0)
    {
        REG_BG0OFS_SUB = 0;
        REG_BG1OFS_SUB = 0;
#if defined(jpn)
        arg0->unknown_5e4_ = var9->QueueLoadFile(data_ov023_021fd018, NULL);
#else
        arg0->unknown_5e4_ = var9->QueueLoadFileInGP2(data_ov023_021fdd6e, data_ov023_021fdd88, NULL);
#endif
        var8 = 0;
        arg0->unknown_5e0_++;
    }
    else if (arg0->unknown_5e0_ == 1)
    {
        if (var9->GetTaskStatus(arg0->unknown_5e4_))
        {
            var9->GetLoadedFileByID(arg0->unknown_5e4_, &var2, &var3);
            arg0->unknown_0_[2].Reset();
            func_020dfec0(arg0->unknown_4c_, &arg0->unknown_0_[2], var2, var3);
            var9->RemoveTask(arg0->unknown_5e4_);
            arg0->unknown_5e4_ = -1;
            arg0->unknown_5e0_++;
        }
        var8 = 0;
    }
    else if (arg0->unknown_5e0_ == 2)
    {
        arg0->unknown_0_[0].Reset();
        arg0->unknown_5d8_ = (char*)func_020421a0()->unknown_5c_;
        __clear(var4, sizeof(var4));
        Struct_ov023_021e76c4_4* var10;
        int var11;
        for (var11 = 0; var11 < 2; var11++)
        {
            var10 = &arg0->unknown_134_[var11];
            func_0204b11c((unsigned char*)var10, var4[var11]);
            var10->unknown_1c_0_ = 1;
            var10->unknown_1c_4_ = var11;
            func_0204b5b4(var10, var11);
            func_0204b12c((Struct_0204b12c*)var10, &arg0->unknown_0_[1]);
            func_0204b5e8((Struct_02020cb8_5*)var10, 0, 0);
        }
        func_0204af38((Struct_0204af38*)&arg0->unknown_134_[1], 1, &arg0->unknown_0_[1]);
        DisableSubBGVRAMBanks();
        MapVRAMBanksToSubBG(0x80);
        REG_BG0CNT_SUB = (REG_BG0CNT_SUB & 0x43) | 0xe00;
        REG_BG1CNT_SUB = (REG_BG1CNT_SUB & 0x43) | 0xf00;
        REG_BLDCNT_SUB = 0;
        var9->MaybeFreeAllocations();
        arg0->unknown_5e4_ = var9->QueueLoadFile(data_ov023_021fdd99, NULL);
        var8 = 0;
        arg0->unknown_5e0_++;
    }
    else if (arg0->unknown_5e0_ == 3)
    {
        if (var9->GetTaskStatus(arg0->unknown_5e4_))
        {
            var9->GetLoadedFileByID(arg0->unknown_5e4_, &var6, &var7);
            int var12 = func_02046900((Struct_02020cb8_4*)var6);
            for (int var13 = 0; var13 < var12; var13++)
                var0[var13] = func_020467f0((Struct_02020aec*)var6, var13, (void**)var5, (int*)&var1[var13]);
            Struct_ov023_021e76c4_4* var14 = &arg0->unknown_134_[0];
            for (int var15 = 0; var15 < var12; var15++)
            {
                if (var0[var15] != NULL)
                    func_0204b174(var14, var0[var15], &arg0->unknown_0_[1], var1[var15]);
                var14 = &arg0->unknown_134_[1];
            }
            var9->RemoveTask(arg0->unknown_5e4_);
            arg0->unknown_5e4_ = -1;
            func_0204bc74(&arg0->unknown_134_[0], 0, 0, 0, 0x20, 0x19, 0);
            func_0204b0e8((Struct_02020cb8_2*)&arg0->unknown_134_[0], 0);
            Struct_ov023_021e76c4* var16 = func_0204af14((Struct_0204af14*)&arg0->unknown_134_[1], 0);
            if (var16 != NULL)
            {
                void* var17;
                unsigned int var18;
                var18 = var16->unknown_8_;
                var17 = var16->unknown_c_;
                CleanInvalidateCacheRange(var17, var18);
                LoadToSubBG1ScreenData(var17, 0, var18);
            }
            arg0->unknown_5d4_ = arg0->unknown_0_[0].Allocate(0x4e00);
            Struct_ov023_021e76c4_5* var19;
            int var20;
            for (var20 = 0; var20 < 4; var20++)
            {
                var19 = &arg0->unknown_174_[var20];
                func_0204c7a8((Struct_0204c7a8*)var19, &arg0->unknown_0_[1], (int)arg0->unknown_5d4_, 0x600);
                var19->unknown_4_ = &arg0->unknown_134_[0];
            }
            var19 = &arg0->unknown_174_[4];
            func_0204c7a8((Struct_0204c7a8*)var19, &arg0->unknown_0_[1], (int)arg0->unknown_5d4_, 0x40);
            var19->unknown_4_ = &arg0->unknown_134_[0];
            arg0->unknown_78_.unknown_98_ = &arg0->unknown_134_[0];
            arg0->unknown_78_.unknown_b2_ = 1;
            func_0205cf78((Struct_0205cf78*)&arg0->unknown_78_, (Struct_0205cf78_2*)arg0->unknown_174_, 5);
            arg0->unknown_5e0_++;
        }
        var8 = 0;
    }
    else if (arg0->unknown_5e0_ == 4)
    {
        REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0x1f00) | 0x1300;
        arg0->unknown_5dc_ = var8;
        arg0->unknown_5e0_ = 0;
        func_020dc7e8(2, -1);
        CleanInvalidateCacheRange(&data_ov023_021fd760, 2);
        LoadToSubBGStandardPalette(&data_ov023_021fd760, 2, 2);
        CleanCacheRange(&data_ov023_021fd760, 2);
        CleanInvalidateCacheRange(&data_ov023_021fd760, 2);
        LoadToSubBGStandardPalette(&data_ov023_021fd760, 0x22, 2);
        CleanCacheRange(&data_ov023_021fd760, 2);
    }
    return var8;
}
