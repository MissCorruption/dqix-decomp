#include <globaldefs.h>
#include "GameState/Field3b0.h"

#if defined(jpn)
enum { kSceneHeapSize = 0x1e384, kSceneObjectSize = 0xb44, kGlobalColorOffset = 0x8c, kGlobalWordOffset = 0x608, kGlobalStateOffset = 0x228, kGlobalFlagOffset = 0x236 };
#else
enum { kSceneHeapSize = 0x1e388, kSceneObjectSize = 0xb48, kGlobalColorOffset = 0x6c, kGlobalWordOffset = 0x508, kGlobalStateOffset = 0x2d8, kGlobalFlagOffset = 0x2e6 };
#endif

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/LoadToVRAM.h"
#include "NitroSDK/OverlayId.h"
#include "NitroSDK/VRAM.h"
#include "World/Object3D.h"
#include "Resource/Brightness.h"

struct AllocatorUnion;
struct Obj020397cc;
struct Obj021c0820;
struct S_e830;
struct SubBgControlBackup02074b64;
struct Struct02074bd0;
struct Struct02074bf4;
struct HeadList020469f8;
struct HeadNode020469f8;

struct GXDispCnt {
    unsigned int low : 24;
    unsigned int bgCharBase : 3;
    unsigned int bgScrBase : 3;
    unsigned int extPltt : 2;
};

struct Scene021c0850 {
    char pad0[0xb13];
    unsigned char kind;
    short x;
    short y;
    union {
        unsigned int flags;
        struct {
            unsigned int bit0 : 1;
            unsigned int bits1 : 17;
            unsigned int bit18 : 1;
            unsigned int rest : 13;
        } bits;
    };
    char padB1c[0xc];
    unsigned char b28;
    unsigned char b29;
};

struct SceneSwap021c0850 {
    char pad0;
    unsigned char done;
    char pad2[6];
    SafeAllocator allocator;
    Scene021c0850* scene;
    int state;
    unsigned char b24;
    unsigned char b25;
    unsigned char b26;
    char pad27;
    short x;
    short y;
    char controlBackup[0x10];
    unsigned char b3c;
    unsigned char b3d;
    char pad3e[2];
    int visiblePlanes;
    int subVisiblePlanes;
    int bgBanks;
    int subBgBanks;
    char pad50[8];
    int textureBanks;
    int paletteBanks;
    int bgScrBase;
    int bgCharBase;
    int dispCntFlags;
    char pad6c[4];
    int pairTable[10];
    int globalPair[2];
    unsigned int textureSize;
    unsigned int paletteSize;
    unsigned short clearColor;
    char padAa[2];
    int word;
    int field4;
    int field8;
    void* fieldB8;
    unsigned char bbc;
};

extern "C" void func_020397cc(Obj020397cc* obj, int arg1);
extern "C" void func_020a0cc4(unsigned int size);
extern "C" void func_020a0c0c(void);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_020a1940(unsigned int id);
extern "C" void func_020a1ef0(int id);
extern "C" void func_ov008_021843f8(void* scene);
extern "C" void func_ov008_021842a0(void* scene, SafeAllocator* alloc);
struct ShortField0xb8_0209cae8;
extern "C" int func_0209cae8(ShortField0xb8_0209cae8*);
struct Actor0209c678;
extern "C" void func_0209c678(Actor0209c678*, int);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0203cf4c(void);
extern "C" void func_0203e0a0(void* g, unsigned short val);
void SetBrightness(GameResources* resources, int brightness, int duration);
void SetMainBrightness(GameResources* resources, int brightness, int duration);
int IsBrightnessTransitionActive(GameResources* resources);
extern "C" void func_02074af4(void* obj);
extern "C" void func_02074b64(SubBgControlBackup02074b64* backup);
extern "C" void func_020bb700(int* buffer);
extern "C" void func_020bb740(int* buffer);
extern "C" void func_020bb910(int* pair);
extern "C" unsigned short func_0201e830(S_e830* obj);
extern "C" void func_020100c4(GameState* gs, int v);
void LockStagedTextureVRAMCopying(void);
void UnlockStagedTextureVRAMCopying(void);
void UpdateVRAMStagingVRAMBanks(void);
extern "C" void func_020bb48c(unsigned int mode, int flag);
extern "C" void func_020c391c(int a, int b, int c);
extern "C" void func_020c3984(unsigned int mode);
extern "C" void func_020c5588(int color, int alpha, int depth, int polygonId, int fog);
extern "C" void func_020c54a4(int enable, unsigned int mode, unsigned int shift, unsigned short offset);
extern "C" void* func_0203bd08(void);
extern "C" void func_0203bd24(char* ctx);
extern "C" int* func_0203bd14(void);
extern "C" int func_0203be4c(void* ctx);
extern "C" void func_0203c35c(int* ptr);
extern "C" int func_ov017_021959b4(void);
extern "C" void func_ov008_02184a2c(char*);
extern "C" int func_ov008_02184754(void* obj);
extern "C" void func_02074bd0(Struct02074bd0* obj);
extern "C" void func_02074bf4(Struct02074bf4* obj);
extern "C" void* func_ov008_021845ac(void* obj);
extern "C" void func_ov017_0218f79c(void* res);
extern "C" void func_ov017_0219b624(GameResources* res);
extern "C" int func_020421a0(void);
struct Foo0207df50;
extern "C" void func_0207df50(Foo0207df50*);
extern "C" void func_0207df90(char* obj);
extern "C" void func_0207dfac(char* obj);
extern "C" void func_020432c4(void* controller);
extern "C" void func_ov017_0219bd1c(int a, int b, int c, int d);
extern "C" void func_ov017_021c0820(Obj021c0820*);
struct Obj021c0334;
extern "C" void func_ov017_021c0334(Obj021c0334*);
struct Obj021b14a0;
extern "C" void func_ov017_021b14a0(Obj021b14a0*);
extern "C" void func_ov017_021b1d3c(void* obj, int v);
extern "C" void func_020469f8(HeadList020469f8* list, HeadNode020469f8* node);
extern "C" void func_ov017_021c0580(void* self, int kind, const char* name, void* handler);
extern "C" int func_0209cd50(int id);
struct Actor0209c3b4;
extern "C" void func_0209c3b4(Actor0209c3b4*, int);
extern "C" void func_020397c0(void* obj);
extern "C" void func_ov017_021c07d0(void* self);
extern "C" int func_ov004_0215502c(SafeAllocator* alloc, int arg);
extern "C" int func_ov004_021560b0(SafeAllocator* alloc, int arg);
extern "C" int func_ov004_02156dc8(SafeAllocator* alloc, int arg);
extern "C" int func_ov004_021677b4(SafeAllocator* alloc, void* arg);
extern "C" int func_ov004_0216aa70(SafeAllocator* alloc, void* arg);

extern AllocatorUnion data_02114e20;
extern int data_02109bf4;
extern char data_ov017_021d7f00[];
extern char data_ov017_021d7f07[];
extern char data_ov017_021d7f12[];
extern char data_ov017_021d7f19[];
extern char data_ov017_021d7f22[];

#define POWCNT1 (*(volatile unsigned short*)0x04000304)

static inline void GX_SetDispSelect(int sel) {
    POWCNT1 = (unsigned short)((POWCNT1 & ~0x8000) | (sel << 15));
}

static inline void G2_SetBG3Priority(int priority) {
    BG3CNT = (unsigned short)((BG3CNT & ~3) | priority);
}

static inline void GXS_SetVisiblePlane(int plane) {
    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | (plane << 8);
}

static inline GXDispCnt GX_GetDispCnt(void) {
    return *(volatile GXDispCnt*)&DISPCNT;
}

// USA: func_ov017_021c0850
extern "C" ARM void func_ov017_021c0850(SceneSwap021c0850* self) {
    GameState* gs = GameState::GetInstance();
    GameResources* res = GetGameResources();
    GameObject* leader = gs->GetUnknownGameObject();
    func_020397cc((Obj020397cc*)leader, 1);

    if (self->state == 0) {
        func_020a0cc4(kSceneHeapSize);
        void* buffer = func_02012d88(&data_02114e20, kSceneHeapSize);
        if (buffer == NULL) {
            func_020a0c0c();
            self->done = 1;
            return;
        }
        self->allocator.CreateTypeA(buffer, kSceneHeapSize);
        self->allocator.Reset();
        self->scene = (Scene021c0850*)self->allocator.Allocate(kSceneObjectSize);
        if (self->scene == NULL) {
            func_020a0c0c();
            self->done = 1;
            return;
        }
        func_020a1940(OVERLAY_ID(8));
        func_020a1ef0(1);
        func_ov008_021843f8(self->scene);
        func_ov008_021842a0(self->scene, &self->allocator);
        self->scene->b28 = self->b24;
        self->scene->b29 = self->b25;
        self->scene->x = self->x;
        self->scene->y = self->y;
        Scene021c0850* scene = self->scene;
        if (self->b26) {
            scene->flags |= 0x40000;
        } else {
            scene->flags &= ~0x40000;
        }
        if (self->bbc) {
            self->scene->flags |= 1;
            if (func_0209cae8((ShortField0xb8_0209cae8*)&data_02109bf4) != 0x29) {
                func_0209c678((Actor0209c678*)&data_02109bf4, 0xf);
            }
        }
        unsigned short* id = (unsigned short*)func_02012fe4();
        func_0203e0a0(func_0203cf4c(), *id);
        if (GetBrightness((GameResources*)res, false) != -0x10
            || GetBrightness((GameResources*)res, true) != -0x10) {
            SetBrightness(res, -0x10, 0xf);
        }
        self->state++;
    } else if (self->state == 1) {
        if (IsBrightnessTransitionActive(res)) {
            return;
        }
        if (!self->bbc) {
            self->state++;
            return;
        }
        self->b3c = 0;
        self->b3d = 0;
        func_02074af4(self->controlBackup);
        self->visiblePlanes = (DISPCNT & 0x1f00) >> 8;
        func_02074b64((SubBgControlBackup02074b64*)self->controlBackup);
        self->subVisiblePlanes = (DISPCNTSUB & 0x1f00) >> 8;
        self->bgBanks = GetMainBGVRAMBanks();
        self->subBgBanks = GetSubBGVRAMBanks();
        self->textureBanks = GetTextureImageVRAMBanks();
        self->paletteBanks = GetTexturePaletteVRAMBanks();
        self->textureSize = GetTextureImageAssignedVRAMSize();
        self->paletteSize = GetTexturePaletteAssignedVRAMSize();
        func_020bb700(self->pairTable);
        func_020bb910(self->globalPair);
        GXDispCnt dispCnt = GX_GetDispCnt();
        self->bgScrBase = dispCnt.bgScrBase;
        self->bgCharBase = dispCnt.bgCharBase;
        self->dispCntFlags = DISPCNT & 0x300010;
        self->clearColor = func_0201e830((S_e830*)((char*)func_02012fe4() + kGlobalColorOffset));
        self->word = GetFlags00(res);
        self->field4 = GetFlags04(res);
        self->field8 = GetFlags08(res);
        self->fieldB8 = func_020100bc(gs);
        self->state++;
    } else if (self->state == 2) {
        LockStagedTextureVRAMCopying();
        DisableSubBGVRAMBanks();
        DisableSubObjVRAMBanks();
        DisableTextureImageVRAMBanks();
        GX_SetDispSelect(0);
        MapVRAMBanksToTextureImage(1);
        func_020bb48c(1, 1);
        MapVRAMBanksToSubBG(4);
        MapVRAMBanksToSubObj(0x100);
        DISPCNTSUB = (DISPCNTSUB & 0xffcfffef) | 0x10;
        UpdateVRAMStagingVRAMBanks();
        UnlockStagedTextureVRAMCopying();
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1300;
        func_020c391c(1, 0, 1);
        BG1CNT = (BG1CNT & 0x43) | 0x1e00;
        BG0CNT = (BG0CNT & ~3) | 1;
        BG1CNT = (BG1CNT & ~3) | 2;
        BG2CNT = (BG2CNT & ~3) | 3;
        G2_SetBG3Priority(0);
        ColorEffect_ConfigureAlphaBlend(0x04000050, 1, 2, 0xf, 0x1f);
        GXS_SetVisiblePlane(0x13);
        func_020c3984(0);
        BG0CNTSUB = (BG0CNTSUB & 0x43) | 0xe00;
        BG1CNTSUB = (BG1CNTSUB & 0x43) | 0xf08;
        BG0CNTSUB = (BG0CNTSUB & ~3) | 1;
        BG1CNTSUB = BG1CNTSUB & ~3;
        BG2CNTSUB = (BG2CNTSUB & ~3) | 2;
        BG3CNTSUB = (BG3CNTSUB & ~3) | 3;
        SetFlags00(res, 4);
        SetFlags04(res, 0x8de);
        func_020c5588(0, 0, 0x7fff, 0, 0);
        func_020c54a4(0, 0, 0, 0);
        char* context = (char*)func_0203bd08();
        func_0203bd24(context);
        *(int*)context = 0;
        int* global = func_0203bd14();
        *global = func_0203be4c(context) + 0x200;
        func_0203c35c(global);
        global[kGlobalWordOffset / 4] = 0x7000;
        self->state++;
    } else if (self->state == 3) {
        if (func_ov017_021959b4()) {
            func_ov008_02184a2c((char*)self->scene);
        }
        if (func_ov008_02184754(self->scene)) {
            self->state++;
        }
    } else if (self->state == 4) {
        LockStagedTextureVRAMCopying();
        DisableSubBGVRAMBanks();
        DisableTextureImageVRAMBanks();
        MapVRAMBanksToSubBG(self->subBgBanks);
        MapVRAMBanksToTextureImage(self->textureBanks);
        func_020bb48c((unsigned short)(self->textureSize >> 17), 1);
        func_020bb740(self->pairTable);
        UpdateVRAMStagingVRAMBanks();
        UnlockStagedTextureVRAMCopying();
        DISPCNT = (DISPCNT & ~0x1f00) | (self->visiblePlanes << 8);
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | (self->subVisiblePlanes << 8);
        func_02074bd0((Struct02074bd0*)self->controlBackup);
        func_02074bf4((Struct02074bf4*)self->controlBackup);
        func_020c5588(self->clearColor, 0x10, 0x7fff, 0, 0);
        func_ov008_021845ac(self->scene);
        char blank[0x20];
        memset(blank, 0, 0x20);
        CleanInvalidateCacheRange(blank, 0x20);
        LoadToMainBG1CharacterData(blank, 0, 0x20);
        ClearFlags00(res, -1);
        ClearFlags04(res, -1);
        ClearFlags08(res, -1);
        SetFlags00(res, self->word);
        SetFlags04(res, self->field4);
        SetFlags08(res, self->field8);
        func_ov017_0218f79c(res);
        func_020100c4(gs, (int)self->fieldB8);
        GameState* state = GameState::GetInstance();
        int index = 0x70;
        for (int i = 0; i < 0x30; i++) {
            GameObject* monster = state->GetMaybeFieldMonsterByIndex(index);
            if (monster) {
                monster->obj3D_.StageTextureData();
            }
            index++;
        }
        func_ov017_0219b624(res);
        char* fields = res->unknown_2cc;
        void* controller = (void*)func_020421a0();
        func_0207df50((Foo0207df50*)(fields + 0x5b0));
        func_0207df90(fields + 0x5b0);
        func_020432c4(controller);
        func_0207dfac(fields + 0x5b0);
        if (self->scene->kind == 0) {
            func_ov017_0219bd1c(1, 0, 0, 0);
        }
        self->state++;
    } else if (self->state == 5) {
        self->b3c = 0;
        self->b3d = 0;
        func_02074af4(self->controlBackup);
        func_02074b64((SubBgControlBackup02074b64*)self->controlBackup);
        self->b25 = self->scene->b29;
        self->b26 = (self->scene->flags & 0x40000) != 0;
        self->x = self->scene->x;
        self->y = self->scene->y;
        GameResources* res2 = GetGameResources();
        HeadList020469f8* list = (HeadList020469f8*)res2->unknown_ptr_array_36fc[0];
        HeadNode020469f8* node;
        switch (self->scene->kind) {
        case 1:
            func_ov017_021c0820((Obj021c0820*)self);
            self->b24 = 0;
            node = (HeadNode020469f8*)res2->unknown_ptr_array_3afc[15];
            func_ov017_021c0334((Obj021c0334*)node);
            func_020469f8(list, node);
            return;
        case 2:
            func_ov017_021c0580(self, 1, data_ov017_021d7f00, (void*)func_ov004_0215502c);
            return;
        case 3:
            func_ov017_021c0580(self, 2, data_ov017_021d7f07, (void*)func_ov004_021560b0);
            return;
        case 4:
            func_ov017_021c0820((Obj021c0820*)self);
            self->b24 = 3;
            node = (HeadNode020469f8*)res2->unknown_ptr_array_3afc[18];
            func_ov017_021b14a0((Obj021b14a0*)node);
            func_ov017_021b1d3c(node, 1);
            func_020469f8(list, node);
            return;
        case 5:
            func_ov017_021c0580(self, 4, data_ov017_021d7f12, (void*)func_ov004_02156dc8);
            return;
        case 6:
            func_ov017_021c0580(self, 5, data_ov017_021d7f19, (void*)func_ov004_021677b4);
            return;
        case 7:
            func_ov017_021c0580(self, 6, data_ov017_021d7f22, (void*)func_ov004_0216aa70);
            return;
        case 0: {
            SetMainBrightness(res, 0, 0xf);
            func_0209c3b4((Actor0209c3b4*)&data_02109bf4, func_0209cd50(*(unsigned short*)func_02012fe4()));
            char* global = (char*)func_020421a0();
            *(int*)(global + kGlobalStateOffset) = 0;
            *(unsigned char*)(global + kGlobalFlagOffset) = 1;
            break;
        }
        }
        self->state++;
    } else {
        if (IsBrightnessTransitionActive(res)) {
            return;
        }
        if (self->scene->kind == 0) {
            func_020397c0(leader);
        } else {
            func_020397cc((Obj020397cc*)leader, 1);
        }
        func_ov017_021c07d0(self);
        func_020a0c0c();
        self->done = 1;
    }
}
