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

struct ScriptNode0218caa8 {
    unsigned short id;
    unsigned char padding2[2];
    int value;
    const char* mainName;
    const char* subName;
    unsigned char flags;
    unsigned char fade;
    short scene;
};

struct DisplayContext0218caa8 {
    int mode;
    unsigned char padding4[4];
    void* owner;
    unsigned char paddingc[4];
    int negativeScene;
    unsigned char padding14[0x20];
    ScriptNode0218caa8* node;
    unsigned char padding38[8];
    int displayState[2];
};

struct BackgroundGraphics {
    unsigned char padding0[0x1c];
    unsigned char screen : 4;
    unsigned char layer : 4;
    unsigned char padding1d;
    unsigned char padding1e[2];
};

struct List0204af64;
struct AllocTarget0204b12c;
struct Foo0204af38;
struct Rec020467f0;
struct ActiveEntry02046900;
struct Obj0204b8d0;
struct List0204b0e8;
struct Struct0200fb08;

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
extern "C" void func_0204af64(List0204af64*);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b12c(AllocTarget0204b12c*, SafeAllocator*);
extern "C" void func_0204af38(Foo0204af38*, int, SafeAllocator*);
extern "C" int func_02046900(ActiveEntry02046900*);
extern "C" void* func_020467f0(Rec020467f0*, int, void**, int*);
extern "C" int func_0200fb08(Struct0200fb08*);
extern "C" void func_0204b8d0(Obj0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
extern "C" void func_0204b0e8(List0204b0e8*, void*);
extern "C" void func_020c9820();
extern "C" void func_020ca458(unsigned int, void*, unsigned int);
extern "C" void func_0204b5b4(BackgroundGraphics*, int);
extern "C" void func_0204b174(BackgroundGraphics*, void*, SafeAllocator*, unsigned int);
extern "C" void func_ov016_0218c04c(char*, void*);

#if !defined(jpn)
extern DisplayContext0218caa8 data_ov016_0219d0c0;
#endif
extern int data_ov016_0219d0cc;
extern int data_02109bf4;
extern AllocatorUnion data_02114e20;
extern const char data_ov016_0219d030[];

#if defined(jpn)
struct ScriptNodeJ0218caa8 {
    unsigned short id;
    unsigned char padding2[2];
    int value;
    const char* mainName;
    const char* subName;
    short scene;
};

struct DisplayContextJ0218caa8 {
    void* owner;
    unsigned char padding4[0xc];
    ScriptNodeJ0218caa8* node;
    int mode;
    int negativeScene;
    unsigned char padding1c[0x4c - 0x1c];
    int displayState[2];
};

struct SelfTag0204b3a0;
extern "C" void func_0204b2e0(void*, char*);
extern "C" void func_0204b3a0(SelfTag0204b3a0*, char*);
extern "C" void func_ov016_0218ca98(char*);
extern const char data_ov016_0219cf00[];
extern DisplayContextJ0218caa8 data_ov016_0219d0c0;

// USA: func_ov016_0218caa8
extern "C" ARM void func_ov016_0218caa8(char* name, void* owner, ScriptNodeJ0218caa8* node, int mode)
{
    data_ov016_0219d0c0.node = node;
    data_ov016_0219d0c0.displayState[0] = 0;
    data_ov016_0219d0c0.displayState[1] = 0;
    data_ov016_0219d0c0.negativeScene = node->scene < 0;
    data_ov016_0219d0c0.mode = mode;
    func_020c39a0((short*)0x0400006c, -16);
    func_020c39a0((short*)0x0400106c, -16);
    SetInterruptHandler(1, (const void*)func_ov016_0218be1c);
    EnableSpecificInterrupts(0x60078);
    unsigned short previousMasterEnable = IRQ_MASTER_ENABLE;
    IRQ_MASTER_ENABLE = 1;
    func_020c3864(1);
    GameState* gameState = GameState::GetInstance();
    if (func_0201201c(gameState) == 5)
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
        unsigned short backgroundControl = BG0CNTSUB;
        backgroundControl &= 0x43;
        backgroundControl |= 0xf00;
        BG0CNTSUB = backgroundControl;
        SUB_BG0_SCROLL = 0;

        int task;
        BackgroundLoader* loader = BackgroundLoader::GetInstance();
        loader->MaybeReset();
        task = loader->QueueLoadFile(data_ov016_0219cf00, NULL);
        void* recordName;
        void* archive;
        unsigned int archiveLength;
        for (;;)
        {
            if (loader->GetTaskStatus(task) != 0)
            {
                loader->GetLoadedFileByID(task, &archive, &archiveLength);
                int count = func_02046900((ActiveEntry02046900*)archive);
                BackgroundGraphics background;
                func_0204af64((List0204af64*)&background);
                background.screen = 1;
                background.layer = 0;
                func_0204b5b4(&background, 0);
                func_0204b11c((unsigned char*)&background, 0);
                for (int index = 0; index < count; index++)
                {
                    int recordLength;
                    char* record = (char*)func_020467f0((Rec020467f0*)archive, index, &recordName, &recordLength);
                    if (record != NULL)
                    {
                        func_0204b2e0(&background, record);
                        func_0204b3a0((SelfTag0204b3a0*)&background, record);
                    }
                }
                loader->RemoveTask(task);
                break;
            }
            loader->RemoveAllLocks();
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
    data_ov016_0219d0c0.owner = owner;
    func_020c39a0((short*)0x0400006c, 0);
    func_020c39a0((short*)0x0400106c, 0);
    func_ov016_0218ca98(name);
    SetInterruptHandler(1, (const void*)func_02012bd8);
}
#else
// USA: func_ov016_0218caa8
extern "C" ARM void func_ov016_0218caa8(char* name, void* owner, ScriptNode0218caa8* node, int mode, void* script)
{
    func_020c39a0((short*)0x0400006c, -16);
    func_020c39a0((short*)0x0400106c, -16);
    data_ov016_0219d0c0.node = node;
    data_ov016_0219d0c0.displayState[0] = 0;
    data_ov016_0219d0c0.displayState[1] = 0;
    data_ov016_0219d0c0.negativeScene = node->scene < 0;
    data_ov016_0219d0c0.mode = mode;
    func_020bc078(&data_ov016_0219d0cc);
    if (data_ov016_0219d0c0.node->flags == 0)
    {
        func_0203aa44(&data_02109bf4);
        func_0203aaf8(&data_02109bf4, (void*)(int)data_ov016_0219d0c0.node->scene, NULL);
    }
    SetInterruptHandler(1, (const void*)func_ov016_0218be1c);
    EnableSpecificInterrupts(0x60078);
    unsigned short previousMasterEnable = IRQ_MASTER_ENABLE;
    IRQ_MASTER_ENABLE = 1;
    func_020c3864(1);
    GameState* gameState = GameState::GetInstance();
    if (func_0201201c(gameState) == 5)
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
        unsigned short backgroundControl = BG0CNTSUB;
        backgroundControl &= 0x43;
        backgroundControl |= 0xf00;
        BG0CNTSUB = backgroundControl;
        SUB_BG0_SCROLL = 0;

        void* buffer = func_02012d88(&data_02114e20, 0x2000);
        SafeAllocator allocator;
        allocator.ResetAllocatorPointer();
        allocator.ResetAllocatorPointer();
        allocator.CreateTypeA(buffer, 0x2000);
        BackgroundGraphics background;
        func_0204af64((List0204af64*)&background);
        background.screen = 1;
        background.layer = 0;
        func_0204b5b4(&background, 0);
        func_0204b11c((unsigned char*)&background, 0);
        func_0204b12c((AllocTarget0204b12c*)&background, &allocator);
        func_0204af38((Foo0204af38*)&background, 5, &allocator);
        int task;
        BackgroundLoader* loader = BackgroundLoader::GetInstance();
        loader->MaybeReset();
        task = loader->QueueLoadFile(data_ov016_0219d030, NULL);
        void* recordName;
        void* archive;
        unsigned int archiveLength;
        for (;;)
        {
            if (loader->GetTaskStatus(task) != 0)
            {
                loader->GetLoadedFileByID(task, &archive, &archiveLength);
                int count = func_02046900((ActiveEntry02046900*)archive);
                for (int index = 0; index < count; index++)
                {
                    int recordLength;
                    void* record = func_020467f0((Rec020467f0*)archive, index, &recordName, &recordLength);
                    if (record != NULL)
                    {
                        func_0204b174(&background, record, &allocator, recordLength);
                    }
                }
                loader->RemoveTask(task);
                int selection = 0;
                switch (func_0200fb08((Struct0200fb08*)gameState))
                {
                case 2:
                    selection = 1;
                    break;
                case 3:
                    selection = 3;
                    break;
                case 4:
                    selection = 2;
                    break;
                case 5:
                    selection = 4;
                    break;
                }
                func_0204b8d0((Obj0204b8d0*)&background, 0, 0, 0, 0, 0, 32, 25, 0xffff);
                if (selection > 0)
                {
                    func_0204b8d0((Obj0204b8d0*)&background, (unsigned char)selection, 0, 0, 0, 17, 32, 25, 0xffff);
                }
                func_0204b0e8((List0204b0e8*)&background, NULL);
                break;
            }
            loader->RemoveAllLocks();
        }
        if (allocator.GetSignedAllocator() != NULL)
        {
            allocator.Destroy();
        }
        if (buffer != NULL)
        {
            func_02012da4(&data_02114e20, buffer);
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
    data_ov016_0219d0c0.owner = owner;
    func_020c39a0((short*)0x0400006c, 0);
    func_020c39a0((short*)0x0400106c, 0);
    func_ov016_0218c04c(name, script);
    SetInterruptHandler(1, (const void*)func_02012bd8);
}
#endif
