#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/Field3b0.h"
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct GameResources;
struct Struct_020deb08;
struct Struct_0205faf4_9;
struct Struct_ov005_02159c24;
struct Struct_0203d028;
struct Struct_0202e5c0;
struct Struct_02043368_2;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_0201099c_3;

struct Struct_ov023_021e33b4_2 {
    char unknown_0_[0xc20];
};

struct Struct_ov023_021e33b4_3 {
    char unknown_0_[0x3c];
    void* unknown_3c_;
    void* unknown_40_;
    char unknown_44_[0x4c - 0x44];
    unsigned short unknown_4c_;
    char unknown_4e_[0x50 - 0x4e];
    unsigned char unknown_50_;

    void inline_ov023_021e33b4(void* arg0, int arg1)
    {
        unknown_40_ = arg0;
        unknown_4c_ = arg1;
    }
};

struct Struct_ov023_021e33b4_4 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
    unsigned int unknown_b_2_ : 6;
};

struct Struct_ov023_021e33b4 {
    void* unknown_0_;
    SafeAllocator* unknown_4_;
    char* unknown_8_;
    void* unknown_c_;
    SafeAllocator* unknown_10_;
    SafeAllocator* unknown_14_;
    char unknown_18_[0x2c - 0x18];
    SafeAllocator unknown_2c_;
    SafeAllocator unknown_40_;
#if defined(jpn)
    SafeAllocator unknown_54_;
#else
    char unknown1_54_[0x68 - 0x54];
#endif
    SafeAllocator unknown_68_;
    SafeAllocator unknown_7c_;
    SafeAllocator unknown_90_;
    char unknown_a4_[0xbc - 0xa4];
    unsigned short unknown_bc_;
    unsigned short unknown_be_;
    void* unknown_c0_;
    unsigned int unknown_c4_;
    Struct_ov023_021e33b4_3* unknown_c8_;
    char* unknown_cc_;
    void* unknown_d0_;
#if defined(jpn)
    char unknown_d4_[0x11c - 0xd4];
#else
    char unknown_d4_[0x120 - 0xd4];
#endif
    Struct_ov023_021e33b4_2* unknown_120_[2];
    Struct_ov023_021e33b4_2* unknown_128_[2];
    char unknown_130_[0x138 - 0x130];
    void* unknown_138_;
    char unknown_13c_[0x404 - 0x13c];
    char unknown_404_[0x474 - 0x404];
    char unknown_474_[0x4e4 - 0x474];
    unsigned char unknown_4e4_;
    signed char unknown_4e5_;
    char unknown_4e6_[0x4fc - 0x4e6];
    int unknown_4fc_;
#if defined(jpn)
    char unknown1_4fc_[0x568 - 0x4fc];
#else
    char unknown_500_[0x630 - 0x500];
#endif
    int unknown_630_;
    unsigned short unknown_634_;
    void* unknown_638_;
    void* unknown_63c_;
    void* unknown_640_[2];
};

extern const char* data_020f2a38;
extern const char* data_020f2a30;
extern const char* data_020f2a40;
extern const char data_ov023_021fd66c[];
extern const char data_ov023_021fdca4[];
extern const char data_ov023_021fdcb6[];
extern const char data_ov023_021fdcc4[];
extern const char data_ov023_021fdc94[];

#if defined(jpn)
#define data_020f2a40 data_020f2bcc
#define data_ov023_021fd66c data_ov023_021fc936
#define data_ov023_021fdca4 data_ov023_021fcf60
#define data_ov023_021fdcc4 data_ov023_021fcf75
#define data_ov023_021fdc94 data_ov023_021fcf50
#define func_ov005_0215ae7c func_ov005_0215c33c
#define func_ov023_021e49a4 func_ov023_021e4bc8
struct Struct_ov005_02154da8_2;
extern "C" void func_ov005_02154da8(Struct_ov005_02154da8_2*, int, int);
extern const char* data_020f2bcc;
extern const char data_ov023_021fc936[];
extern const char data_ov023_021fcf60[];
extern const char data_ov023_021fcf75[];
extern const char data_ov023_021fcf50[];
#define BATTLE_SIZE_021e33b4 0x3e9c
#define SPRITE_COUNT_021e33b4 0xf
#else
#define BATTLE_SIZE_021e33b4 0x428c
#define SPRITE_COUNT_021e33b4 0x10
#endif

extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);

int IsMainBrightnessTransitionActive(GameResources* resources);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
extern "C" void func_0207df50(Struct_0203d028* arg0);
extern "C" void func_020de848(void* arg0);
extern "C" void func_020dea40(void* arg0, void* arg1, void* arg2, int arg3, int arg4);
extern "C" int func_020deb08(Struct_020deb08* arg0);
extern "C" void func_020deb24(Struct_0205faf4_9* arg0, int arg1);
extern "C" void func_ov023_021e4e8c(void* arg0);
extern "C" void func_ov023_021e4f64(void* arg0, SafeAllocator* arg1);
extern "C" void func_ov023_021e4fd8(void* arg0);
extern "C" void func_ov023_021e6198(void* arg0, int arg1);
extern "C" void func_ov023_021e6150(void* arg0, unsigned char arg1);
extern "C" void func_ov023_021e60e0(void* arg0, unsigned int arg1);
extern "C" void* func_020421a0();
extern "C" void func_02042b30(void* arg0, void* arg1);
extern "C" void func_020100c4(GameState* arg0, int arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_020a2010(void* arg0);
extern "C" void func_0202e5c0(Struct_0202e5c0* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0202e5c8(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020a27a0(void* arg0);
extern "C" void func_020c54a4(int arg0, unsigned int arg1, unsigned int arg2, unsigned short arg3);
extern "C" void func_0205a444(char* arg0);
extern "C" void func_0205a198(Struct_02043368_2* arg0);
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_020e46c4(void* arg0);
extern "C" void func_020e4bf4(void* arg0, int arg1);
extern "C" void* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" void func_ov023_021e20c0(void* arg0);
extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" void func_020c555c(int arg0);
extern "C" void func_ov023_021e33a0(char* arg0, signed char arg1);
extern "C" void func_ov005_02159c24(Struct_ov005_02159c24*, void*, void*);

extern "C" {
void func_ov017_0219ba0c(GameResources* arg0, int arg1);
void func_ov005_02153ba4(void* arg0);
void func_ov005_02153954(void* arg0, SafeAllocator* arg1, void* arg2);
void func_ov004_02154da8(void* arg0, void* arg1, unsigned int arg2);
void func_ov005_02153b20(void* arg0);
int func_ov005_0215436c(void* arg0);
void func_ov005_0215a960(void* arg0);
void func_ov005_0215ae7c(void* arg0);
void func_020dea64(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3, const void* arg4, int arg5);
void func_0207de48(void* arg0, int arg1, int arg2);
void func_020432c4(void* arg0);
void func_0205a528(void* arg0, void* arg1, int arg2, SafeAllocator* arg3);
void func_02046380(void* arg0);
void func_02046608(void* arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
void func_ov023_021e20f0(void* arg0, void* arg1, void* arg2, unsigned int arg3);
void func_ov023_021e3d3c(void* arg0, int arg1, int arg2);
int func_ov023_021e5974(void* arg0, void* arg1, int arg2, int arg3, int arg4);
void func_ov023_021e49a4(Struct_ov023_021e33b4* arg0);
void func_ov023_021e2ce8(int arg0, void* arg1);
}

// USA: func_ov023_021e33b4
extern "C" ARM void func_ov023_021e33b4(Struct_ov023_021e33b4* arg0)
{
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();

    if (arg0->unknown_4e4_ == 0)
        arg0->unknown_4e4_++;

    if (IsMainBrightnessTransitionActive(var1))
        return;

    if (arg0->unknown_4e4_ == 1)
    {
        Struct_0208cb08* var3 = func_02094a00();
        func_02094b40(var3);
        func_02094b34(var3, 0x79, 0x1fa, 0, 0);
        arg0->unknown_4e4_++;
    }
    else if (arg0->unknown_4e4_ == 2)
    {
        if (func_02094b4c(func_02094a00()))
        {
            func_ov017_0219ba0c(var1, 1);
#if defined(jpn)
            arg0->unknown_630_ = var2->QueueLoadGP1(data_020f2a38, NULL);
#else
            arg0->unknown_630_ = var2->QueueLoadFileInGP2(data_020f2a38, data_020f2a30, NULL);
#endif
            arg0->unknown_4e4_++;
        }
    }
    else if (arg0->unknown_4e4_ == 3)
    {
        if (var2->GetTaskStatus(arg0->unknown_630_))
        {
            void* var4;
            unsigned int var5;
            var2->GetLoadedFileByID(arg0->unknown_630_, &var4, &var5);
            SetFlags04(var1, 0x601fe);
            func_0207df90(arg0->unknown_8_);
            arg0->unknown_14_->Reset();
            func_020de848(arg0->unknown_a4_);
            func_020dea40(arg0->unknown_a4_, arg0->unknown_14_, var4, var5, 0xb);
            arg0->unknown_be_ = func_020deb08((Struct_020deb08*)arg0->unknown_a4_);
            arg0->unknown_bc_ = arg0->unknown_be_ + 0x31;
            for (int var6 = 0; var6 < arg0->unknown_bc_; var6++)
                func_020deb24((Struct_0205faf4_9*)arg0->unknown_a4_, (short)var6);
            arg0->unknown_14_->Reset();

            if (arg0->unknown_4e5_ == 3)
            {
                arg0->unknown_0_ = arg0->unknown_10_->Allocate(BATTLE_SIZE_021e33b4);
                func_ov005_02153ba4(arg0->unknown_0_);
                func_ov005_02153954(arg0->unknown_0_, arg0->unknown_10_, arg0->unknown_c_);
#if defined(jpn)
                func_ov005_02154da8((Struct_ov005_02154da8_2*)arg0->unknown_0_, (int)var4, var5);
#else
                func_ov004_02154da8(arg0->unknown_0_, var4, var5);
#endif
            }

            arg0->unknown_2c_.CreateTypeA(arg0->unknown_10_->Allocate(0x800), 0x800);
            arg0->unknown_40_.CreateTypeA(arg0->unknown_10_->Allocate(0x100), 0x100);
#if defined(jpn)
            arg0->unknown_54_.CreateTypeA(arg0->unknown_10_->Allocate(0xc00), 0xc00);
#else
            for (int var7 = 0; var7 < 2; var7++)
            {
                arg0->unknown_640_[var7] = arg0->unknown_2c_.Allocate(0x40);
                memset(arg0->unknown_640_[var7], 0, 0x40);
            }
#endif

            arg0->unknown_68_.CreateTypeA(arg0->unknown_4_->Allocate(0x100), 0x100);
            arg0->unknown_c8_ = (Struct_ov023_021e33b4_3*)arg0->unknown_4_->Allocate(0x54);
            arg0->unknown_cc_ = (char*)arg0->unknown_4_->Allocate(SPRITE_COUNT_021e33b4 * 0x28);
            arg0->unknown_d0_ = arg0->unknown_4_->Allocate(8);
            if (arg0->unknown_0_ != NULL && arg0->unknown_d0_ != NULL && arg0->unknown_c8_ != NULL)
                func_ov005_02159c24((Struct_ov005_02159c24*)arg0->unknown_0_, arg0->unknown_d0_, arg0->unknown_c8_);

            arg0->unknown_7c_.CreateTypeA(arg0->unknown_4_->Allocate(0x300), 0x300);
            arg0->unknown_90_.CreateTypeA(arg0->unknown_4_->Allocate(0x200), 0x200);

            arg0->unknown_120_[0] = (Struct_ov023_021e33b4_2*)arg0->unknown_4_->Allocate(0xc20);
            func_ov023_021e4e8c(arg0->unknown_120_[0]);
            func_ov023_021e4f64(arg0->unknown_120_[0], arg0->unknown_4_);
            func_ov023_021e4fd8(arg0->unknown_120_[0]);
            func_ov023_021e6198(arg0->unknown_120_[0], (int)arg0->unknown_a4_);
            func_ov023_021e6150(arg0->unknown_120_[0], 1);

            arg0->unknown_120_[1] = (Struct_ov023_021e33b4_2*)arg0->unknown_4_->Allocate(0xc20);
            func_ov023_021e4e8c(arg0->unknown_120_[1]);
            func_ov023_021e4f64(arg0->unknown_120_[1], arg0->unknown_4_);
            func_ov023_021e4fd8(arg0->unknown_120_[1]);
            func_ov023_021e6198(arg0->unknown_120_[1], (int)arg0->unknown_a4_);
            func_ov023_021e6150(arg0->unknown_120_[1], 1);

            arg0->unknown_14_->Reset();
            func_020de848(arg0->unknown_a4_);
            func_020dea64(arg0->unknown_a4_, arg0->unknown_14_, var4, var5, data_ov023_021fd66c, 9);

            arg0->unknown_638_ = arg0->unknown_2c_.Allocate(0x2a0);
            memset(arg0->unknown_638_, 0, 0x2a0);
            arg0->unknown_63c_ = arg0->unknown_2c_.Allocate(0x400);
            memset(arg0->unknown_63c_, 0, 0x400);

            if (arg0->unknown_0_ != NULL)
                *(void**)((char*)arg0->unknown_0_ + 0xdf4) = arg0->unknown_a4_;

            func_0207de48(arg0->unknown_474_, 0x4000, 0x40);
            func_0207df50((Struct_0203d028*)arg0->unknown_474_);
            if (arg0->unknown_4e5_ == 3 && arg0->unknown_0_ != NULL)
                func_ov005_02153b20(arg0->unknown_0_);

            func_0207de48(arg0->unknown_404_, 0, 0);
            func_0207df50((Struct_0203d028*)arg0->unknown_404_);

            void* var8 = func_020421a0();
            func_02042b30(var8, arg0->unknown_474_);
            func_0207df90(arg0->unknown_474_);
            func_020432c4(var8);
            func_0207dfac(arg0->unknown_474_);

            arg0->unknown_138_ = func_020100bc(var0);
            func_020a2010(arg0->unknown_13c_);
            func_0202e5c0((Struct_0202e5c0*)arg0->unknown_13c_, 0xb666, 0xa800, 0x42ccc);
            func_0202e5c8((unsigned char*)arg0->unknown_13c_, 0xb666, 0xa800, 0);
            func_020a27a0(arg0->unknown_13c_);
            func_020100c4(var0, (int)arg0->unknown_13c_);
            func_020c54a4(0, 0, 0, 0);

            var2->RemoveTask(arg0->unknown_630_);
            arg0->unknown_630_ = -1;
            arg0->unknown_630_ = var2->QueueLoadFile(data_020f2a40, NULL);
            arg0->unknown_4e4_++;
        }
    }
    else if (arg0->unknown_4e4_ == 4)
    {
        if (var2->GetTaskStatus(arg0->unknown_630_))
        {
            void* var9;
            unsigned int var10;
            var2->GetLoadedFileByID(arg0->unknown_630_, &var9, &var10);
            arg0->unknown_c0_ = arg0->unknown_90_.Allocate(var10);
            memcpy(arg0->unknown_c0_, var9, var10);
            arg0->unknown_c4_ = var10;
            var2->RemoveTask(arg0->unknown_630_);
            arg0->unknown_630_ = -1;

            func_0205a444((char*)arg0->unknown_c8_);
            arg0->unknown_c8_->unknown_50_ = 0;
            arg0->unknown_c8_->inline_ov023_021e33b4(arg0->unknown_cc_, SPRITE_COUNT_021e33b4);
            arg0->unknown_c8_->unknown_3c_ = arg0->unknown_d0_;
            for (int var11 = 0; var11 < SPRITE_COUNT_021e33b4; var11++)
                func_0205a198((Struct_02043368_2*)(arg0->unknown_cc_ + var11 * 0x28));

#if defined(jpn)
            arg0->unknown_630_ = var2->QueueLoadFile(data_ov023_021fdca4, NULL);
#else
            arg0->unknown_630_ = var2->QueueLoadFileInGP2(data_ov023_021fdca4, data_ov023_021fdcb6, NULL);
#endif
            arg0->unknown_4e4_++;
        }
    }
    else if (arg0->unknown_4e4_ == 5)
    {
        if (var2->GetTaskStatus(arg0->unknown_630_))
        {
            arg0->unknown_68_.Reset();
            void* var12;
            void* var13;
            unsigned int var14;
            var2->GetLoadedFileByID(arg0->unknown_630_, &var13, &var14);
            int var15 = func_02046900((Struct_02020cb8_4*)var13);
            for (int var16 = 0; var16 < var15; var16++)
            {
                int var17;
                void* var18 = func_020467f0((Struct_02020aec*)var13, var16, &var12, &var17);
                if (var18 != NULL)
                    func_0205a528(arg0->unknown_c8_, var18, var17, &arg0->unknown_68_);
            }
            var2->RemoveTask(arg0->unknown_630_);
            arg0->unknown_630_ = -1;
            arg0->unknown_4e4_++;
        }
    }
    else if (arg0->unknown_4e4_ == 6)
    {
        if (arg0->unknown_0_ != NULL)
        {
            if (func_ov005_0215436c(arg0->unknown_0_))
                arg0->unknown_4e4_++;
        }
    }
    else if (arg0->unknown_4e4_ == 7)
    {
#if !defined(jpn)
        Struct_ov023_021e33b4_4 var19;
        func_020e46c4(&var19);
        func_020e4bf4(&var19, func_020100a8(var0));
        void* var20 = func_020421a0();
        Struct_0201099c_3* var21 = (Struct_0201099c_3*)((char*)arg0->unknown_0_ + 0xdf8);
        for (int var22 = 0; var22 < 2; var22++)
        {
            var19.unknown_b_0_ = var22;
            func_02046380(var20);
            *(Struct_ov023_021e33b4_4**)var20 = &var19;
            func_02046608(var20, 8, func_020e0434(var21, 0x226), arg0->unknown_640_[var22], 0x100, 0, 0);
        }
#endif
        arg0->unknown_630_ = var2->QueueLoadFile(data_ov023_021fdcc4, NULL);
        arg0->unknown_4e4_++;
    }
    else if (arg0->unknown_4e4_ == 8)
    {
        if (var2->GetTaskStatus(arg0->unknown_630_))
        {
            void* var23;
            unsigned int var24;
            var2->GetLoadedFileByID(arg0->unknown_630_, &var23, &var24);
            if (var23 != NULL)
            {
                arg0->unknown_7c_.Reset();
                func_ov023_021e20c0(arg0->unknown_d4_);
                func_ov023_021e20f0(arg0->unknown_d4_, &arg0->unknown_7c_, var23, var24);
                func_ov023_021e3d3c(arg0->unknown_d4_, 1, 1);
            }
            var2->RemoveTask(arg0->unknown_630_);
            arg0->unknown_630_ = -1;
            arg0->unknown_4e4_++;
        }
    }
    else
    {
        void* var25 = func_0200ff1c(GameState::GetInstance(), arg0->unknown_4fc_);
        if (var25 != NULL)
        {
            func_ov023_021e60e0(arg0->unknown_120_[0], 0x1eb);
            func_ov023_021e5974(arg0->unknown_120_[0], func_02053c6c((unsigned char*)var25), arg0->unknown_4fc_, 0, 0);
        }
        arg0->unknown_128_[0] = arg0->unknown_120_[0];
        arg0->unknown_128_[1] = arg0->unknown_120_[1];
        arg0->unknown_634_ |= 0xa1;
        func_ov023_021e49a4(arg0);
        if (arg0->unknown_4e5_ == 3 && arg0->unknown_0_ != NULL)
        {
            func_ov005_0215a960(arg0->unknown_0_);
            func_ov005_0215ae7c(arg0->unknown_0_);
        }
        func_020c555c((int)data_ov023_021fdc94);
        func_ov023_021e3d3c(arg0->unknown_d4_, 0x11, 1);
        func_ov023_021e3d3c(arg0->unknown_d4_, 0x12, 1);
        func_ov023_021e3d3c(arg0->unknown_d4_, 0x1b, 1);
        func_ov023_021e3d3c(arg0->unknown_d4_, 0x20, 1);
#if !defined(jpn)
        func_ov023_021e2ce8(arg0->unknown_4fc_, arg0->unknown_c8_);
#endif
        func_ov023_021e33a0((char*)arg0, arg0->unknown_4e5_);
        arg0->unknown_4e4_ = 0;
        arg0->unknown_634_ &= ~0x2000;
    }
}
