#include <globaldefs.h>
#include "NitroSDK/Graphics.h"

static inline unsigned long ReadDisplay(volatile unsigned int* p) { return *p; }
static inline void WriteDisplay(volatile unsigned int* p, unsigned int value) { *p = value; }

#if defined(jpn)
enum { kGlobalDisplayOffset = 0x608, kControllerBackupOffset = 0x1c4c, kSceneAllocatorSize = 0x48e10, kSceneSize = 0xd90, kSceneSlotOffset = 0xd4c };
#else
enum { kGlobalDisplayOffset = 0x508, kControllerBackupOffset = 0x1e28, kSceneAllocatorSize = 0x4b238, kSceneSize = 0xdb8, kSceneSlotOffset = 0xd88 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/OverlayId.h"

#if defined(jpn)
#define func_020c51dc func_020c6ca8
#endif

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

struct AllocatorUnion;
struct Foo0207df50;
struct S_02010124;
struct Obj0203bdb0;
struct GameResources;
struct Actor0209c3b4;
struct Actor0209c678;
struct Actor0209c20c;

extern "C" void func_020a1df8(int value);
extern "C" void func_020a1e54(int value);
extern "C" void func_020a1940(unsigned int id);
extern "C" void func_0200fb84(int* obj, int value);
extern "C" void func_020c39a0(short* reg, int value);
extern "C" void* func_0203bd08(void);
extern "C" void func_0203bd24(char* context);
extern "C" int* func_0203bd14();
extern "C" int func_0203be4c(void* context);
extern "C" void func_0203c35c(int* ptr);
extern "C" void MapVRAMBanksToLCDC(unsigned short mask);
extern "C" void func_020ca458(unsigned int value, void* dest, int count);
extern "C" int DisableLCDCMappedVRAMBanks(void);
void Finish3DRendering();
extern "C" void func_020c51dc();
extern "C" void func_020c537c();
void LockStagedTextureVRAMCopying();
void UnlockStagedTextureVRAMCopying();
void UpdateVRAMStagingVRAMBanks();
extern "C" void MapVRAMBanksToTextureImage(int handle);
extern "C" void func_020bb48c(unsigned int a, int b);
extern "C" void MapVRAMBanksToTexturePalette(int value);
extern "C" void func_020bb780(void* stack, int flag);
extern "C" void MapVRAMBanksToMainBG(int v);
extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void MapVRAMBanksToMainObj(int mode);
extern "C" void MapVRAMBanksToSubObj(int value);
extern "C" void func_020c391c(int mode, int a, int b);
extern "C" void func_020c3984(unsigned int mode);
extern "C" void func_020c5588(int a, int b, int c, int d, int e);
extern "C" void func_020c555c(int table);
extern "C" void func_0207de48(void* p, int a, int b);
extern "C" void* func_020421a0();
extern "C" void func_02042c68(void* controller);
extern "C" void func_02043124(void* obj);
extern "C" void func_020440a4(void* controller);
extern "C" void func_0207df50(Foo0207df50* obj);
extern "C" void func_0207df90(char* obj);
extern "C" void func_020432c4(void* controller);
extern "C" void func_0207dfac(char* obj);
extern "C" void func_020100a0(GameState* gs, int value);
extern "C" int func_020100a8(GameState* gs);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_ov009_0218454c(void* scene, int a, int b);
extern "C" void* func_02010954(char* gs);
extern "C" void func_ov009_021842a0(void* scene, SafeAllocator* allocator);
extern "C" void func_0209c3b4(Actor0209c3b4* actor, int state);
extern "C" void func_020c9820();
extern "C" void func_020c38d4();
extern "C" void func_02010124(S_02010124* obj);
extern "C" int func_0200fb9c(char* gs);
extern "C" void func_02012efc();
extern "C" void func_ov021_0218bb30(void* self);
extern "C" void func_020bbcb4();
extern "C" void func_ov009_02184ca4(void* scene);
extern "C" void func_0203bdb0(Obj0203bdb0* obj);
void UpdateAndApplyBrightness(GameResources* resources);
extern "C" void func_ov009_02184848(void* scene);
extern "C" void func_0209c678(Actor0209c678* actor, int state);
extern "C" void func_0203ad88(void* a, void* b, int c);
extern "C" void func_0203aa08(void* obj);
extern "C" void func_0209c20c(Actor0209c20c* actor);
extern "C" void func_02043000(char* controller);
extern char data_02114e20;
extern char data_02109bf4;
extern int data_02114e50;

struct EdgeColors0218b5fc {
    unsigned short colors[8];
};

extern EdgeColors0218b5fc data_ov021_0218bbc4;

struct Battle0218b5fc {
    char pad0[0x28];
    unsigned char running;
    char pad1[0x2c - 0x29];
    SafeAllocator allocator;
    void* scene;
    char state44[0xb4 - 0x44];
    char* slot;
    int quit;
};

struct Obj0218baf8;
extern "C" void func_ov021_0218baf8(Obj0218baf8* obj);

// USA: func_ov021_0218b5fc
extern "C" ARM void func_ov021_0218b5fc(Battle0218b5fc* self) {
#if !defined(jpn)
    func_020a1df8(3);
#endif
    func_020a1940(OVERLAY_ID(9));
    func_020a1940(OVERLAY_ID(23));
    GameState* gs = GameState::GetInstance();
    func_0200fb84((int*)gs, (int)self);
    func_020c39a0((short*)0x400006c, -16);
    func_020c39a0((short*)0x400106c, -16);
    BackgroundLoader::GetInstance()->MaybeReset();
    void* context = func_0203bd08();
    func_0203bd24((char*)context);
    *(int*)context = 0;
    int* global = func_0203bd14();
    *global = func_0203be4c(context) + 0x200;
    func_0203c35c(global);
    global[kGlobalDisplayOffset / 4] = 0x7000;
    MapVRAMBanksToLCDC(0x1ff);
    func_020ca458(0, (void*)0x6800000, 0xa4000);
    DisableLCDCMappedVRAMBanks();
    Finish3DRendering();
    func_020c51dc();
    func_020c537c();
    LockStagedTextureVRAMCopying();
    MapVRAMBanksToTextureImage(1);
    func_020bb48c(1, 1);
    MapVRAMBanksToTexturePalette(0x40);
    func_020bb780((void*)0x4000, 1);
    MapVRAMBanksToMainBG(0x10);
    MapVRAMBanksToSubBG(4);
    MapVRAMBanksToMainObj(0x20);
    unsigned int display = ReadDisplay(&DISPCNT);
#if defined(jpn)
    display = (display & 0xffcfffef) | 0x10;
#else
    display &= 0xffcfffef;
    display |= 0x10;
#endif
    WriteDisplay(&DISPCNT, display);
    MapVRAMBanksToSubObj(8);
    DISPCNTSUB = (DISPCNTSUB & 0xffcfffef) | 0x10;
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
    display = ReadDisplay(&DISPCNT);
    display = (display & ~0x1f00) | 0x1f00;
    WriteDisplay(&DISPCNT, display);
    func_020c391c(1, 0, 1);

    BG1CNT = (BG1CNT & 0x43) | 0x1d00;
    BG2CNT = (BG2CNT & 0x43) | 0x1e08;
    BG3CNT = (BG3CNT & 0x43) | 0x1f0c;
    BG0CNT = (BG0CNT & ~3) | 2;
    BG1CNT = (BG1CNT & ~3) | 3;
    BG2CNT = (BG2CNT & ~3) | 1;
    BG3CNT = BG3CNT & ~3;
    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1700;
    func_020c3984(0);

    BG0CNTSUB = (BG0CNTSUB & 0x43) | 0x1d00;
    BG1CNTSUB = (BG1CNTSUB & 0x43) | 0x1e10;
    BG2CNTSUB = (BG2CNTSUB & 0x43) | 0x1f18;
    BG0CNTSUB = (BG0CNTSUB & ~3) | 2;
    BG1CNTSUB = (BG1CNTSUB & ~3) | 1;
    BG2CNTSUB = BG2CNTSUB & ~3;
    BG3CNTSUB = (BG3CNTSUB & ~3) | 3;
    *(unsigned short*)0x4000304 |= 0x8000;
    func_020c5588(0, 0, 0x7fff, 0, 0);

    EdgeColors0218b5fc edges = data_ov021_0218bbc4;
    func_020c555c((int)&edges);
    func_0207de48(self->state44, 0x4000, 0x40);
    void* controller = func_020421a0();
    func_02042c68(controller);
    func_02043124(controller);
    func_020440a4(controller);
    *(char**)((char*)controller + kControllerBackupOffset) = self->state44;
    func_0207df50((Foo0207df50*)self->state44);
    func_0207df90(self->state44);
    func_020432c4(controller);
    func_0207dfac(self->state44);
    func_020100a0(gs, 0);
    self->allocator.CreateTypeA(func_02012d88((AllocatorUnion*)&data_02114e20, kSceneAllocatorSize), kSceneAllocatorSize);
    self->allocator.Reset();
    self->scene = self->allocator.Allocate(kSceneSize);
    func_ov009_0218454c(self->scene, 0, 0);
    self->slot = (char*)func_02010954((char*)gs);
    *(short*)(self->slot + 0x568) = func_020100a8(gs);
    *(char**)((char*)self->scene + kSceneSlotOffset) = self->slot;
    func_ov009_021842a0(self->scene, &self->allocator);
    func_0209c3b4((Actor0209c3b4*)&data_02109bf4, 2);
    func_020c9820();
    func_020c38d4();
    DISPCNTSUB |= 0x10000;
    func_02010124((S_02010124*)gs);

    for (;;) {
        if (func_0200fb9c((char*)gs) == 0 || self->quit != 0) {
            break;
        }
        func_02012efc();
        func_ov021_0218baf8((Obj0218baf8*)self);
        func_ov021_0218bb30(self);
        self->running = 1;
        func_020c9820();
        func_020bbcb4();
        func_ov009_02184ca4(self->scene);
        func_0203bdb0((Obj0203bdb0*)func_0203bd08());
        UpdateAndApplyBrightness((GameResources*)self);
        data_02114e50++;
        gs->CalculateDeltaTime(0x411b);
    }

    func_ov009_02184848(self->scene);
    func_0209c678((Actor0209c678*)&data_02109bf4, 0);
    func_0203ad88(&data_02109bf4, 0, 0);
    func_0203aa08(&data_02109bf4);
    func_0209c20c((Actor0209c20c*)&data_02109bf4);
    func_02043000((char*)controller);
    func_0207df50((Foo0207df50*)self->state44);
    func_0200fb84((int*)gs, 0);
#if !defined(jpn)
    func_020a1e54(1);
#endif
}
