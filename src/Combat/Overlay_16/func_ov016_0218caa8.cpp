#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/VRAM.h"

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

#define IRQ_MASTER_ENABLE (*(volatile unsigned short*)0x04000208)
#define SUB_BG0_SCROLL (*(volatile unsigned int*)0x04001010)

struct Struct_ov016_0218caa8_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[2];
    int unknown_4_;
    const char* unknown_8_;
    const char* unknown_c_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    short unknown_12_;
};

struct Struct_ov016_0219d0c0_9 {
    int unknown_0_;
    unsigned char unknown_4_[4];
    void* unknown_8_;
    unsigned char unknown_c_[4];
    int unknown_10_;
    unsigned char unknown_14_[0x20];
    Struct_ov016_0218caa8_2* unknown_34_;
    unsigned char unknown_38_[8];
    int unknown_40_[2];
};

struct Struct_ov003_021594c4 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_[2];
};

struct Struct_02020cb8;
struct Struct_0204b12c;
struct Struct_0204af38;
struct Struct_02020aec;
struct Struct_02020cb8_4;
struct Struct_0204b8d0;
struct Struct_02020cb8_2;
struct Struct_02000c9c_8;

extern "C" void func_020c39a0(short*, int);
extern "C" void func_020bc078(int*);
extern "C" void func_0203aa44(void*);
extern "C" int func_0203aaf8(void*, void*, int*);
extern "C" void func_ov016_0218be1c();
extern "C" void func_02012bd8();
extern "C" int func_020c3864(int);
extern "C" int func_0201201c(void*);
extern "C" void func_020c3984(unsigned int);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" void func_0204af64(Struct_02020cb8*);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b12c(Struct_0204b12c*, SafeAllocator*);
extern "C" void func_0204af38(Struct_0204af38*, int, SafeAllocator*);
extern "C" int func_02046900(Struct_02020cb8_4*);
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" int func_0200fb08(Struct_02000c9c_8*);
extern "C" void func_0204b8d0(Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
extern "C" void func_0204b0e8(Struct_02020cb8_2*, void*);
extern "C" void func_020c9820();
extern "C" void func_020ca458(unsigned int, void*, unsigned int);
extern "C" void func_0204b5b4(Struct_ov003_021594c4*, int);
extern "C" void func_0204b174(Struct_ov003_021594c4*, void*, SafeAllocator*, unsigned int);
extern "C" void func_ov016_0218c04c(char*, void*);

#if !defined(jpn)
extern Struct_ov016_0219d0c0_9 data_ov016_0219d0c0;
#endif
extern int data_ov016_0219d0cc;
extern int data_02109bf4;
extern AllocatorUnion data_02114e20;
extern const char data_ov016_0219d030[];

#if defined(jpn)
struct Struct_ov016_0218caa8 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[2];
    int unknown_4_;
    const char* unknown_8_;
    const char* unknown_c_;
    short unknown_10_;
};

struct Struct_ov016_0219d0c0_8 {
    void* unknown_0_;
    unsigned char unknown_4_[0xc];
    Struct_ov016_0218caa8* unknown_10_;
    int unknown_14_;
    int unknown_18_;
    unsigned char unknown_1c_[0x4c - 0x1c];
    int unknown_4c_[2];
};

struct Struct_02020cb8_6;
extern "C" void func_0204b2e0(void*, char*);
extern "C" void func_0204b3a0(Struct_02020cb8_6*, char*);
extern "C" void func_ov016_0218ca98(char*);
extern const char data_ov016_0219cf00[];
extern Struct_ov016_0219d0c0_8 data_ov016_0219d0c0;

// USA: func_ov016_0218caa8
extern "C" ARM void func_ov016_0218caa8(char* arg0, void* arg1, Struct_ov016_0218caa8* arg2, int arg3)
{
    data_ov016_0219d0c0.unknown_10_ = arg2;
    data_ov016_0219d0c0.unknown_4c_[0] = 0;
    data_ov016_0219d0c0.unknown_4c_[1] = 0;
    data_ov016_0219d0c0.unknown_18_ = arg2->unknown_10_ < 0;
    data_ov016_0219d0c0.unknown_14_ = arg3;
    func_020c39a0((short*)0x0400006c, -16);
    func_020c39a0((short*)0x0400106c, -16);
    SetInterruptHandler(1, (const void*)func_ov016_0218be1c);
    EnableSpecificInterrupts(0x60078);
    unsigned short var0 = IRQ_MASTER_ENABLE;
    IRQ_MASTER_ENABLE = 1;
    func_020c3864(1);
    GameState* var1 = GameState::GetInstance();
    if (func_0201201c(var1) == 5)
    {
        MapVRAMBanksToLCDC(0x1ff);
        func_020ca458(0, (void*)0x06800000, 0xa4000);
        func_020ca458(0xc0, (void*)0x07000000, 0x400);
        func_020ca458(0, (void*)0x05000000, 0x400);
        func_020ca458(0xc0, (void*)0x07000400, 0x400);
        func_020ca458(0, (void*)0x05000400, 0x400);
        MapVRAMBanksToLCDC(3);
        MapVRAMBanksToSubBG(0x80);
        func_020c3984(0);
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x100;
        BG0CNTSUB &= ~3;
        unsigned short var2 = BG0CNTSUB;
        var2 &= 0x43;
        var2 |= 0xf00;
        BG0CNTSUB = var2;
        SUB_BG0_SCROLL = 0;

        int var3;
        BackgroundLoader* var4 = BackgroundLoader::GetInstance();
        var4->MaybeReset();
        var3 = var4->QueueLoadFile(data_ov016_0219cf00, NULL);
        void* var5;
        void* var6;
        unsigned int var7;
        for (;;)
        {
            if (var4->GetTaskStatus(var3) != 0)
            {
                var4->GetLoadedFileByID(var3, &var6, &var7);
                int var8 = func_02046900((Struct_02020cb8_4*)var6);
                Struct_ov003_021594c4 var9;
                func_0204af64((Struct_02020cb8*)&var9);
                var9.unknown_1c_0_ = 1;
                var9.unknown_1c_4_ = 0;
                func_0204b5b4(&var9, 0);
                func_0204b11c((unsigned char*)&var9, 0);
                for (int var10 = 0; var10 < var8; var10++)
                {
                    int var11;
                    char* var12 = (char*)func_020467f0((Struct_02020aec*)var6, var10, &var5, &var11);
                    if (var12 != NULL)
                    {
                        func_0204b2e0(&var9, var12);
                        func_0204b3a0((Struct_02020cb8_6*)&var9, var12);
                    }
                }
                var4->RemoveTask(var3);
                break;
            }
            var4->RemoveAllLocks();
        }
    }
    else
    {
        MapVRAMBanksToLCDC(0x1ff);
        func_020ca458(0, (void*)0x06800000, 0xa4000);
        DisableLCDCMappedVRAMBanks();
        func_020ca458(0xc0, (void*)0x07000000, 0x400);
        func_020ca458(0, (void*)0x05000000, 0x400);
        func_020ca458(0xc0, (void*)0x07000400, 0x400);
        func_020ca458(0, (void*)0x05000400, 0x400);
        MapVRAMBanksToLCDC(0x1ff);
    }
    func_020c9820();
    data_ov016_0219d0c0.unknown_0_ = arg1;
    func_020c39a0((short*)0x0400006c, 0);
    func_020c39a0((short*)0x0400106c, 0);
    func_ov016_0218ca98(arg0);
    SetInterruptHandler(1, (const void*)func_02012bd8);
}
#else
// USA: func_ov016_0218caa8
extern "C" ARM void func_ov016_0218caa8(char* arg0, void* arg1, Struct_ov016_0218caa8_2* arg2, int arg3, void* arg4)
{
    func_020c39a0((short*)0x0400006c, -16);
    func_020c39a0((short*)0x0400106c, -16);
    data_ov016_0219d0c0.unknown_34_ = arg2;
    data_ov016_0219d0c0.unknown_40_[0] = 0;
    data_ov016_0219d0c0.unknown_40_[1] = 0;
    data_ov016_0219d0c0.unknown_10_ = arg2->unknown_12_ < 0;
    data_ov016_0219d0c0.unknown_0_ = arg3;
    func_020bc078(&data_ov016_0219d0cc);
    if (data_ov016_0219d0c0.unknown_34_->unknown_10_ == 0)
    {
        func_0203aa44(&data_02109bf4);
        func_0203aaf8(&data_02109bf4, (void*)(int)data_ov016_0219d0c0.unknown_34_->unknown_12_, NULL);
    }
    SetInterruptHandler(1, (const void*)func_ov016_0218be1c);
    EnableSpecificInterrupts(0x60078);
    unsigned short var13 = IRQ_MASTER_ENABLE;
    IRQ_MASTER_ENABLE = 1;
    func_020c3864(1);
    GameState* var14 = GameState::GetInstance();
    if (func_0201201c(var14) == 5)
    {
        MapVRAMBanksToLCDC(0x1ff);
        func_020ca458(0, (void*)0x06800000, 0xa4000);
        func_020ca458(0xc0, (void*)0x07000000, 0x400);
        func_020ca458(0, (void*)0x05000000, 0x400);
        func_020ca458(0xc0, (void*)0x07000400, 0x400);
        func_020ca458(0, (void*)0x05000400, 0x400);
        MapVRAMBanksToLCDC(3);
        MapVRAMBanksToSubBG(0x80);
        func_020c3984(0);
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x100;
        BG0CNTSUB &= ~3;
        unsigned short var15 = BG0CNTSUB;
        var15 &= 0x43;
        var15 |= 0xf00;
        BG0CNTSUB = var15;
        SUB_BG0_SCROLL = 0;

        void* var16 = func_02012d88(&data_02114e20, 0x2000);
        SafeAllocator var17;
        var17.ResetAllocatorPointer();
        var17.ResetAllocatorPointer();
        var17.CreateTypeA(var16, 0x2000);
        Struct_ov003_021594c4 var18;
        func_0204af64((Struct_02020cb8*)&var18);
        var18.unknown_1c_0_ = 1;
        var18.unknown_1c_4_ = 0;
        func_0204b5b4(&var18, 0);
        func_0204b11c((unsigned char*)&var18, 0);
        func_0204b12c((Struct_0204b12c*)&var18, &var17);
        func_0204af38((Struct_0204af38*)&var18, 5, &var17);
        int var19;
        BackgroundLoader* var20 = BackgroundLoader::GetInstance();
        var20->MaybeReset();
        var19 = var20->QueueLoadFile(data_ov016_0219d030, NULL);
        void* var21;
        void* var22;
        unsigned int var23;
        for (;;)
        {
            if (var20->GetTaskStatus(var19) != 0)
            {
                var20->GetLoadedFileByID(var19, &var22, &var23);
                int var24 = func_02046900((Struct_02020cb8_4*)var22);
                for (int var25 = 0; var25 < var24; var25++)
                {
                    int var26;
                    void* var27 = func_020467f0((Struct_02020aec*)var22, var25, &var21, &var26);
                    if (var27 != NULL)
                    {
                        func_0204b174(&var18, var27, &var17, var26);
                    }
                }
                var20->RemoveTask(var19);
                int var28 = 0;
                switch (func_0200fb08((Struct_02000c9c_8*)var14))
                {
                case 2:
                    var28 = 1;
                    break;
                case 3:
                    var28 = 3;
                    break;
                case 4:
                    var28 = 2;
                    break;
                case 5:
                    var28 = 4;
                    break;
                }
                func_0204b8d0((Struct_0204b8d0*)&var18, 0, 0, 0, 0, 0, 32, 25, 0xffff);
                if (var28 > 0)
                {
                    func_0204b8d0((Struct_0204b8d0*)&var18, (unsigned char)var28, 0, 0, 0, 17, 32, 25, 0xffff);
                }
                func_0204b0e8((Struct_02020cb8_2*)&var18, NULL);
                break;
            }
            var20->RemoveAllLocks();
        }
        if (var17.GetSignedAllocator() != NULL)
        {
            var17.Destroy();
        }
        if (var16 != NULL)
        {
            func_02012da4(&data_02114e20, var16);
        }
    }
    else
    {
        MapVRAMBanksToLCDC(0x1ff);
        func_020ca458(0, (void*)0x06800000, 0xa4000);
        DisableLCDCMappedVRAMBanks();
        func_020ca458(0xc0, (void*)0x07000000, 0x400);
        func_020ca458(0, (void*)0x05000000, 0x400);
        func_020ca458(0xc0, (void*)0x07000400, 0x400);
        func_020ca458(0, (void*)0x05000400, 0x400);
        MapVRAMBanksToLCDC(0x1ff);
    }
    func_020c9820();
    data_ov016_0219d0c0.unknown_8_ = arg1;
    func_020c39a0((short*)0x0400006c, 0);
    func_020c39a0((short*)0x0400106c, 0);
    func_ov016_0218c04c(arg0, arg4);
    SetInterruptHandler(1, (const void*)func_02012bd8);
}
#endif
