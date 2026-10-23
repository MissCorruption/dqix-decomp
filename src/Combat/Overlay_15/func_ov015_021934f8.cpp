#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/FontBankLoader.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"
#include "Input/Input.h"

#if defined(jpn)
#define func_020c51dc func_020c6ca8
#endif

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

struct Struct0218b810;
struct Obj02192600;
struct Struct020A2CF0;
struct Foo0207df50;
struct S_02010124;
struct Obj0203bdb0;

struct CombatController021934f8 {
    char data[0x2c8];
};

struct Controller021934f8 {
    char pad0[0x195a];
    unsigned char mode;
};

struct Battle021934f8 {
    char pad0[0x3c];
    int config[4];
    int list[6];
    char lookupA[0x70 - 0x64];
    char lookupB[0x84 - 0x70];
    void* buffer;
    SafeAllocator partsAllocator;
    SafeAllocator monstersAllocator;
    SafeAllocator soundsAllocator;
    char pad_c4[0x124 - 0xc4];
    char tables[0x194 - 0x124];
    int phase;
    int unk198;
    char pad_19c[0x1a4 - 0x19c];
    int quitRequested;
    char pad_1a8[0x22c - 0x1a8];
    unsigned long long frameAccum;
    unsigned long long prevTime;
    unsigned long long curTime;
    unsigned long long avgDelta;
    float fps;
    char pad_250[0x268 - 0x250];
    char scratch[0x52];
};

extern "C" void func_0200fb84(int*, int);
extern "C" void func_020c39a0(short*, int);
extern "C" void* func_0203bd08();
extern "C" void func_0203bd24(char*);
void LockStagedTextureVRAMCopying();
extern "C" void func_020ca458(unsigned int, unsigned int, unsigned int);
extern "C" void func_020c391c(int, int, int);
extern "C" void func_020c3984(unsigned int);
void UpdateVRAMStagingVRAMBanks();
void UnlockStagedTextureVRAMCopying();
void Finish3DRendering();
extern "C" void func_020c51dc();
extern "C" void func_020c537c();
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_02028ddc(void*);
extern "C" void func_02028d68(int);
extern "C" void func_02028dec(int);
extern "C" void func_020bb48c(unsigned int, int);
extern "C" void func_020bb780(void*, int);
extern "C" void func_ov015_02192600(struct Obj02192600*);
extern "C" void func_020c5588(int, int, int, int, int);
extern "C" void func_ov015_0218b810(struct Struct0218b810*);
extern "C" void func_ov015_0218ba44(void*, int);
extern "C" void* memset(void*, int, unsigned int);
extern "C" void func_020de848(void*);
extern "C" void* ExtractFileFromGP2(const char*, const char*, unsigned int*);
extern "C" void func_020dea64(void*, SafeAllocator*, void*, unsigned int, const void*, int);
extern "C" void func_0206efc4(void*);
extern "C" void func_0206efd8(void*, void*);
extern "C" void func_020709d8(void*);
extern "C" void func_020709ec(void*, void*);
extern "C" void func_0202df68(void*);
extern "C" void func_020a2cf0(struct Struct020A2CF0*);
extern "C" void func_020a2010(void*);
extern "C" void func_020a27a0(void*);
extern "C" void func_020100c4(GameState*, int);
extern "C" void func_ov015_02192544(void*);
extern "C" void func_0205ea20(void*, int);
extern "C" void func_020c9820();
extern "C" void func_020c38d4();
extern "C" void func_02010124(S_02010124*);
extern "C" void func_020c3a0c(int);
unsigned long long GetCurrentTimestamp();
extern "C" void* func_020421a0();
extern "C" void func_02042b30(void*, void*);
extern "C" void func_0207df50(struct Foo0207df50*);
extern "C" void func_0207df90(char*);
extern "C" void func_020432c4(void*);
extern "C" void func_0207dfac(char*);
extern "C" void func_0204500c(void*, const void*, int, int);
extern "C" void func_0204359c(void*, int);
extern "C" void func_020439b0(void*, int);
extern "C" void func_ov015_02192700(void*);
extern "C" void func_02012de4(AllocatorUnion*);
extern "C" void func_02012efc();
extern "C" void func_020bc028(int);
extern "C" void func_ov015_02190e88(void*);
extern "C" void func_ov015_02191294(void*);
extern "C" void func_ov015_02191668(void*);
extern "C" void func_ov015_02190d7c(void*);
extern "C" void func_ov015_021901c8(void*);
extern "C" void func_0203bd88(void* oam);
extern "C" void func_0203aa08(void*);
extern "C" void func_020bbd9c();
extern "C" unsigned long long _ll_udiv(unsigned long long, unsigned long long);
extern "C" float func_0200c76c(unsigned long long);
extern "C" int func_020c39c8(unsigned short volatile*);
extern "C" void func_0203bdb0(Obj0203bdb0*);
extern "C" void func_020290ac(int);

extern AllocatorUnion data_02114e20;
extern const char* data_020f2a38;
extern const char* data_020f2a30;
extern int data_ov015_02193cdc[];
extern char data_02108760;
extern int data_ov015_02194528[];

#define POWCNT1 (*(volatile unsigned short*)0x04000304)
#define MASTER_BRIGHT ((short*)0x0400006c)
#define MASTER_BRIGHT_SUB ((short*)0x0400106c)
#define BG0HOFS_SUB (*(volatile int*)0x04001010)

// USA: func_ov015_021934f8
extern "C" ARM void func_ov015_021934f8(Battle021934f8* self)
{
    GameState* gs = GameState::GetInstance();
    if (gs == NULL)
        return;
    func_0200fb84((int*)gs, (int)self);
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    loader->MaybeReset();
    FontBankLoader* global = func_02094a00();
    func_02094b3c(global, 10);
    func_02094b3c(global, 12);
    func_02094b34(global, 0x69, 0, 0, 0);
    func_02094b38(global, 0x69);
    func_02094b38(global, 0);
    while (!func_02094b4c(global))
        loader->RemoveAllLocks();

    func_020c39a0(MASTER_BRIGHT, -16);
    func_020c39a0(MASTER_BRIGHT_SUB, -16);
    char* context = (char*)func_0203bd08();
    func_0203bd24(context);
    LockStagedTextureVRAMCopying();
    MapVRAMBanksToLCDC(0x1ff);
    func_020ca458(0, 0x6800000, 0xa4000);
    DisableLCDCMappedVRAMBanks();
    ReleaseTextureImageVRAMBanks();
    MapVRAMBanksToTextureImage(0xb);
    ReleaseTexturePaletteVRAMBanks();
    MapVRAMBanksToTexturePalette(0x60);
    DISPCNT = DISPCNT & ~DISPCNT_MASK_CHARACTER_BASE_64K;
    DISPCNT = DISPCNT & ~DISPCNT_MASK_SCREEN_BASE_64K;
    DISPCNT = (DISPCNT & ~0x1f00) | 0x100;
    func_020c391c(1, 0, 1);
    func_020c3984(0);
    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1100;
    ReleaseSubBGVRAMBanks();
    MapVRAMBanksToSubBG(4);
    ReleaseSubObjVRAMBanks();
    MapVRAMBanksToSubObj(0x100);
    DISPCNTSUB = (DISPCNTSUB & 0xffcfffef) | 0x10;
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
    func_020c39a0(MASTER_BRIGHT, 0);
    func_020c39a0(MASTER_BRIGHT_SUB, 0);
    POWCNT1 &= ~0x8000;
    Finish3DRendering();
    func_020c51dc();
    func_020c537c();
    BG1CNT = BG1CNT & ~3;
    BG0CNT = (BG0CNT & ~3) | 1;
    BG0CNTSUB = BG0CNTSUB & ~3;
    BG0HOFS_SUB = 0;
    self->buffer = func_02012d88(&data_02114e20, 0x6000);
    func_02028ddc(self->buffer);
    func_02028d68(4);
    func_02028dec(1);
    func_020bb48c(3, 1);
    func_020bb780((void*)0x8000, 1);
    func_ov015_02192600((struct Obj02192600*)self);
    func_020c5588(0x594a, 0x10, 0x7fff, 0, 0);
    func_ov015_0218b810((struct Struct0218b810*)&self->config);
    func_ov015_0218ba44(&self->config, 0);
    memset(self->scratch, 0, 0x52);

    self->partsAllocator.ResetAllocatorPointer();
    self->partsAllocator.CreateTypeA(func_02012d88(&data_02114e20, 0x17600), 0x17600);
    self->partsAllocator.Reset();
    func_020de848(self->list);
    BackgroundLoader::AddLockGlobal();
    unsigned int size;
    void* data;
    size = 0;
    data = ExtractFileFromGP2(data_020f2a38, data_020f2a30, &size);
    if (data != NULL)
        func_020dea64(self->list, &self->partsAllocator, data, size, data_ov015_02193cdc, 9);
    BackgroundLoader::RemoveLockGlobal();

    self->monstersAllocator.ResetAllocatorPointer();
    self->monstersAllocator.CreateTypeA(func_02012d88(&data_02114e20, 0x20000), 0x20000);
    self->monstersAllocator.Reset();
    func_0206efc4(self->lookupA);
    func_0206efd8(self->lookupA, &self->monstersAllocator);

    self->soundsAllocator.ResetAllocatorPointer();
    self->soundsAllocator.CreateTypeA(func_02012d88(&data_02114e20, 0x20000), 0x20000);
    self->soundsAllocator.Reset();
    func_020709d8(self->lookupB);
    func_020709ec(self->lookupB, &self->soundsAllocator);

    CombatController021934f8 combat;
    func_0202df68(&combat);
    func_020a2cf0((struct Struct020A2CF0*)&combat);
    func_020a2010(&combat);
    func_020a27a0(&combat);
    func_020100c4(gs, (int)&combat);
    func_ov015_02192544(self);
    func_0205ea20(&data_02108760, 0x65);
    func_020c9820();
    func_020c38d4();
    DISPCNTSUB = DISPCNTSUB | 0x10000;
    func_02010124((S_02010124*)gs);
    func_020c3a0c(0);
    GetCurrentTimestamp();
    Controller021934f8* controller = (Controller021934f8*)func_020421a0();
    func_02042b30(controller, self->tables);
    func_0207df50((struct Foo0207df50*)self->tables);
    func_0207df90(self->tables);
    func_020432c4(controller);
    func_0207dfac(self->tables);
    func_0204500c(controller, data_ov015_02194528, 0, 0xe3);
    controller->mode = 8;
    for (unsigned int i = 0; i < 0x10; i++)
    {
        func_0204359c(controller, 0x10);
        func_020439b0(controller, 0);
    }
    self->phase = 0;
    self->unk198 = 2;
    self->quitRequested = 0;
    func_ov015_02192700(self);
    func_02012de4(&data_02114e20);
    unsigned long long last = GetCurrentTimestamp();

    for (;;)
    {
        func_02012efc();
        int quit;
        if (g_keyManager.TestKeysHeld(4) && g_keyManager.TestKeysHeld(8))
            quit = 1;
        else if (self->quitRequested == 0 && g_keyManager.TestKeysPressed(2))
            quit = 1;
        else
            quit = 0;
        if (quit)
        {
            func_020bc028(0);
            break;
        }
        if (g_keyManager.TestKeysPressed(8))
            func_ov015_02192544(self);
        switch (self->phase)
        {
        case 0:
            func_ov015_02190e88(self);
            break;
        case 1:
            func_ov015_02191294(self);
            break;
        case 2:
            func_ov015_02191668(self);
            break;
        }
        func_ov015_02190d7c(self);
        func_ov015_021901c8(self);
        func_0203bd88(context);
        func_0203aa08(&data_02108760);
        func_020bbd9c();

        unsigned long long oldTime = self->curTime;
        self->curTime = _ll_udiv(GetCurrentTimestamp() * 64000, 33514);
        if (self->prevTime < self->curTime)
        {
            unsigned long long delta = self->curTime - self->prevTime;
            self->avgDelta = (delta + self->avgDelta) >> 1;
        }
        if (oldTime < self->curTime)
        {
            self->frameAccum += _ll_udiv(self->curTime - oldTime, 1000);
            if (self->frameAccum > 1000)
            {
                self->frameAccum = 0;
                self->fps = 1000000.0f / func_0200c76c(self->avgDelta);
            }
        }
        loader->RemoveAllLocks();
        self->prevTime = _ll_udiv(GetCurrentTimestamp() * 64000, 33514);
        if (func_020c39c8((unsigned short volatile*)MASTER_BRIGHT) > -16)
            func_020c9820();
        GetCurrentTimestamp();
        func_0203bdb0((Obj0203bdb0*)context);
        func_020290ac(1);
        gs->CalculateDeltaTime(_ll_udiv((GetCurrentTimestamp() - last) * 64000, 33514));
        last = GetCurrentTimestamp();
    }

    func_02094b38(global, 0x69);
    func_02094ab0(global);
    func_0205ea20(&data_02108760, 0x64);
    func_020a2010(&combat);
    func_020a2cf0((struct Struct020A2CF0*)&combat);
    func_0202df68(&combat);
}
