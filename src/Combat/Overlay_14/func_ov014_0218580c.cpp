#if defined(jpn)
#define R(j,u) (j)
#define data_ov014_02189692 data_ov014_0218a4a3
#define data_ov014_021896a7 data_ov014_0218a4b8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "Resource/Brightness.h"

#define BG0CNT (*(volatile unsigned short*)(0x04000008))
#define BG1CNT (*(volatile unsigned short*)(0x0400000a))
#define BG2CNT (*(volatile unsigned short*)(0x0400000c))
#define BG3CNT (*(volatile unsigned short*)(0x0400000e))
#define DISPCNT (*(volatile unsigned int*)0x04000000)
#define BGCNT_MASK_PRIORITY 3
#define BGCNT_MASK_MOSAIC 0x40

struct Struct_ov006_0215b7e8 {
    short unknown_0_;
    unsigned short unknown_2_;
    short* unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    short unknown_12_;
    short unknown_14_;
    unsigned char unknown_16_;
    unsigned char unknown_17_;
};

struct Struct_ov006_021580b8 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[6];
    unsigned char unknown_22_;
    char unknown_23_[2];
    unsigned char unknown_25_;
    unsigned char unknown_26_;
    char unknown_27_;
};

struct Struct_ov008_02188d74;
struct Struct_02020cb8_4;
struct Struct_02020aec;

struct Struct_ov014_02184dcc {
    void** unknown_0_;
    Struct_ov008_02188d74* unknown_4_;
    Struct_ov006_021580b8* unknown_8_;
    char unknown_c_[0x3c - 0xc];
    SafeAllocator* unknown_3c_;
    void* unknown_40_;
    void* unknown_44_;
    char unknown_48_[0x58 - 0x48];
    void* unknown_58_;
    char unknown_5c_[0x6c - 0x5c];
    int unknown_6c_;
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
    unsigned char unknown_7c_;
    unsigned char unknown_7d_;
    unsigned char unknown_7e_;
    unsigned char unknown_7f_;
    unsigned char unknown_80_;
    unsigned char unknown_81_;
};

struct Struct_ov014_02189800 {
    char unknown_0_[0xc];
    void* unknown_c_;
};
extern Struct_ov014_02189800 data_ov014_02189800;
extern char data_ov014_02189692[];
extern char data_ov014_021896a7[];

extern "C" void func_ov023_021e20c0(void* arg0);
extern "C" int func_ov023_021e20f0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" Struct_ov006_0215b7e8* func_ov014_021842a0(void* arg0, short arg1);
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0205a528(Struct_ov008_02188d74* arg0, void* arg1, unsigned int arg2, SafeAllocator* arg3);
extern "C" void func_ov023_021e2bdc(void* arg0, int arg1, short* arg2, short* arg3);
extern "C" void* func_020100f8(char* arg0);
extern "C" void func_020a2010(void* arg0);
extern "C" void func_0202e5c8(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0202e5d8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0202e0a4(void* arg0);
extern "C" void func_020a27a0(void* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);
extern "C" void func_020c54a4(int, unsigned int, unsigned int, unsigned short);
extern "C" void func_020c5588(int, int, int, int, int);

#define HIDE_ELEMENT(layout, id)                                        \
    {                                                                   \
        Struct_ov006_0215b7e8* element = func_ov014_021842a0(layout, id);       \
        if (element != NULL)                                            \
            element->unknown_16_ &= ~1;                                      \
    }

// USA: func_ov014_0218580c
extern "C" ARM void func_ov014_0218580c(Struct_ov014_02184dcc* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_7d_ == 0) {
        BG1CNT = (BG1CNT & (BGCNT_MASK_PRIORITY | BGCNT_MASK_MOSAIC)) | (0x1f << 8);
        arg0->unknown_81_ |= 0x10;
        arg0->unknown_7d_++;
    }

    if (arg0->unknown_7d_ == 1) {
        func_ov023_021e20c0(arg0->unknown_58_);
        arg0->unknown_6c_ = var0->QueueLoadFile(data_ov014_02189692, NULL);
        arg0->unknown_7d_++;
    }

    if (arg0->unknown_7d_ == 2 && var0->GetTaskStatus(arg0->unknown_6c_)) {
        void* var1;
        unsigned int var2;
        var0->GetLoadedFileByID(arg0->unknown_6c_, &var1, &var2);
        if (var1 != NULL) {
            SafeAllocator* var3 = arg0->unknown_3c_;
            var3[3].Reset();
            func_ov023_021e20f0(arg0->unknown_58_, &var3[3], var1, var2);
            HIDE_ELEMENT(arg0->unknown_58_, 1);
        }
        var0->RemoveTask(arg0->unknown_6c_);
        arg0->unknown_6c_ = -1;
        arg0->unknown_6c_ = var0->QueueLoadFile(data_ov014_021896a7, NULL);
        arg0->unknown_7d_++;
    }

    if (arg0->unknown_7d_ == 3 && var0->GetTaskStatus(arg0->unknown_6c_)) {
        void* var4;
        void* var5;
        unsigned int var6;
        int var7;
        var0->GetLoadedFileByID(arg0->unknown_6c_, &var5, &var6);
        int var8 = func_02046900((Struct_02020cb8_4*)var5);
        arg0->unknown_3c_[5].Reset();
        for (int var9 = 0; var9 < var8; var9++) {
            void* var10 = func_020467f0((Struct_02020aec*)var5, var9, &var4, &var7);
            if (var10 != NULL)
                func_0205a528(arg0->unknown_4_, var10, var7, &arg0->unknown_3c_[5]);
        }

        short var11 = 0;
        short var12 = 0;
        Struct_ov006_021580b8* var13;
        HIDE_ELEMENT(arg0->unknown_58_, 0x1a);
        func_ov023_021e2bdc(arg0->unknown_58_, 0x1a, &var11, &var12);
        var13 = &arg0->unknown_8_[0];
        var13->unknown_14_ = var11 << 12;
        var13->unknown_18_ = var12 << 12;
        var13->unknown_22_ = 0x21;
        var13->unknown_26_ = 0;
        HIDE_ELEMENT(arg0->unknown_58_, 0x1b);
        func_ov023_021e2bdc(arg0->unknown_58_, 0x1b, &var11, &var12);
        var13 = &arg0->unknown_8_[1];
        var13->unknown_14_ = var11 << 12;
        var13->unknown_18_ = var12 << 12;
        var13->unknown_22_ = 0x22;
        var13->unknown_26_ = 0;
        func_ov023_021e2bdc(arg0->unknown_58_, 0x14, &var11, &var12);
        var13 = &arg0->unknown_8_[2];
        var13->unknown_14_ = var11 << 12;
        var13->unknown_18_ = var12 << 12;
        var13->unknown_22_ = 0x20;
        var13->unknown_26_ = 0;
        var0->RemoveTask(arg0->unknown_6c_);
        arg0->unknown_6c_ = -1;
        arg0->unknown_7d_++;
    }

    if (arg0->unknown_7d_ == 4) {
        BG0CNT = (BG0CNT & ~BGCNT_MASK_PRIORITY);
        BG1CNT = (BG1CNT & ~BGCNT_MASK_PRIORITY) | 1;
        BG2CNT = (BG2CNT & ~BGCNT_MASK_PRIORITY) | 2;
        BG3CNT = (BG3CNT & ~BGCNT_MASK_PRIORITY) | 3;
        DISPCNT = (DISPCNT & ~0x1f00) | (0x13 << 8);
        GameState* var14 = GameState::GetInstance();
        data_ov014_02189800.unknown_c_ = func_020100f8((char*)var14);
        func_020a2010(arg0->unknown_44_);
        func_0202e5c8((unsigned char*)arg0->unknown_44_, 0, 0, 0);
        func_0202e5d8(arg0->unknown_44_, 0, 0, 0xa000);
        func_0202e0a4(arg0->unknown_44_);
        func_020a27a0(arg0->unknown_44_);
        func_020100c4(var14, (int)arg0->unknown_44_);
        GameResources* var15 = GetGameResources();
        SetFlags04(var15, 0x6093e);
        ClearFlags04(var15, 0x20);
        func_020c54a4(0, 0, 0, 0);
        func_020c5588(0, 0, 0x7fff, 0, 0);
        LightingManager::GetInstance()->fogEnabled_ = false;
        arg0->unknown_7c_ = 1;
        arg0->unknown_7d_ = 0;
    }
}
