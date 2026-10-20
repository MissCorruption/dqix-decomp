#include <globaldefs.h>
#include "System/Graphics.h"
#include "System/Matrix.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/NarcHandle.h"
#include "Memory/SafeAllocator.h"
#include "Resource/MessageSystem.h"
#include "Graphics/NSBXX/RenderConfig.h"
#include "Combat/MapDisplay.h"

#if defined(jpn)
#define func_020c51dc func_020c6ca8
#endif

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

struct ClearTarget0205a234 {
    int field0;
    unsigned short field4;
};
struct Foo0207df50;
struct Struct020dfc40;
struct Container020e0310;
struct Struct020a9ea4;
struct ActiveEntry02046900;
struct Rec020467f0;
struct FlagWord020466f4;
struct Obj020444e0;
struct Obj0203bdb0;

unsigned int* GetDataPtr02114e04_020d6c00();
void DispatchWithGlobalContext020daf9c(int a, int b, int c, int d);
void InitStruct0205a444(char* obj);
void Init0205a198(Struct0205a198* obj);
void ClearField0And40205a234(ClearTarget0205a234* obj);
extern "C" void func_020c39a0(short* reg, int value);
void SetWord0x0_0200fb84(int* obj, int value);
char* GetData02105254_0203b628();
void ClearThreeRegions0203b634(char* obj);
extern "C" void* func_0203bd08(void);
void InitBattleContext0203bd24(char* ctx);
void LockStagedTextureVRAMCopying();
extern "C" unsigned int DisableTextureImageVRAMBanks();
extern "C" unsigned int DisableTexturePaletteVRAMBanks();
extern "C" unsigned int DisableMainBGVRAMBanks();
extern "C" unsigned int DisableSubBGVRAMBanks();
extern "C" unsigned int DisableMainObjVRAMBanks();
extern "C" unsigned int DisableSubObjVRAMBanks();
extern "C" void MapVRAMBanksToTextureImage(int banks);
void ConfigurePairMode020bb48c(unsigned int mode, int installHandlers);
extern "C" void MapVRAMBanksToTexturePalette(int banks);
extern "C" void MapVRAMBanksToMainBG(int banks);
void SetDispcntModeAndFlags020c391c(int mode, int a, int b);
extern "C" void MapVRAMBanksToMainObj(int banks);
void UpdateVRAMStagingVRAMBanks();
void UnlockStagedTextureVRAMCopying();
void Finish3DRendering();
extern "C" void func_020c51dc();
void ResetMatrixStacks020c537c();
void Set3DClearColor_020c5588(int color, int alpha, int depth, int polygonId, int fogEnable);
void ComputeAndLoadMatrix020c5770(int, int, int, int, int, int, int, int, void*);
void InitGlobalStateAndInstallHandlers020bb780(void* arg, int flag);
extern "C" void func_0207de48(void* obj, int a, int b);
MessageSystem* GetGlobalField0x1c020421a0();
extern "C" void func_02042c68(MessageSystem* g);
extern "C" void func_02043124(MessageSystem* g);
void SetField0x1e28_02042b30(void* g, void* tables);
void CopyInternalFields0207df50(Foo0207df50* obj);
void RestorePairTables0207df90(char* obj);
extern "C" void func_020432c4(MessageSystem* g);
void BackupPairTables0207dfac(char* obj);
void* AllocateAligned4_02012d88(AllocatorUnion* alloc, unsigned int size);
void CallFunc0202f310AtField0x19e0_020440b8(char* g, void* alloc, void* data);
void ClearBuffer0202ad30();
void FlushAndClearBuffer0202adf0();
void ResetStruct020dfc40(Struct020dfc40* obj);
extern "C" void func_020dfec0(void* dest, SafeAllocator* allocator, void* fileData, unsigned int size);
const char* GetFieldByKey020e0434(Container020e0310* texts, int id);
void WriteControlAndToggle020d86d0(int a, int b);
void DelayThenSyncBit0_020c9820();
void ProcessRingJobs020bbcb4();
void UnlockAndSetMainBrightness(GameResources* res, int target, int frames);
void UnlockAndSetSubBrightness(GameResources* res, int target, int frames);
void UpdateAndApplyBrightness(GameResources* res);
void RestoreDisplayMode_020c38d4();
extern "C" void __clear(void* ptr, int size);
unsigned long long GetCurrentTimestamp();
void InitCombatSubsystems02012efc();
extern "C" int func_020457e0(MessageSystem* g);
void OrBitsIntoField0_020466e4(unsigned int* field, unsigned int bits);
void ClearStruct020a9ea4(Struct020a9ea4* obj);
int CountActiveEntries(ActiveEntry02046900* entries);
void* FindRecordByIndex(Rec020467f0* recs, int index, void** outField, int* outSize);
extern "C" void func_0205a528(void* obj, void* rec, int size, SafeAllocator* alloc);
extern "C" int func_020ab7a8(void* obj, int flag);
void ClearFlags020466f4(FlagWord020466f4* field, unsigned int bits);
void ResetAndDispatchActorContext0209c6d8(void* actor, int id);
int TriggerDispatchIfFlagOrByte_0218c240(void* scene);
int SendShortBufferOrReturnZero020aba5c(int flag);
extern "C" void func_02043368(MessageSystem* g);
extern "C" void func_020bbd9c();
void ResetGxEngineState020c52e8();
extern "C" void func_020c5414();
void SubmitGeometryJob_020c57d4(int, int, int, int, void*);
void ReleaseField0x38IfValid020444e0(Obj020444e0* obj);
extern "C" void func_ov019_0218c178(void* scene);
void CleanInvalidateOamBuffers0203bd88(void* oam);
void Forward0204359c(void* obj, int value);
void SyncMainSubOam0203bdb0(Obj0203bdb0* obj);
extern "C" void func_020439b0(MessageSystem* g, int a);
void TailForward02012da4(AllocatorUnion* alloc, void* data);
void SetByte0x4_0200fb94(char* obj, unsigned char value);
void SetWord0x7f6c_02012010(void* obj, int value);

void* LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);
extern "C" void* ExtractFileFromGP2(const char* gp2Path, const char* innerFilePath, unsigned int* outSize);

#if defined(jpn)
#define data_ov019_0218c2c0 data_ov019_0218cea0
#define data_ov019_0218c2d4 data_ov019_0218ceb4
#define data_ov019_0218c294 data_ov019_0218ce7c
#define data_ov019_0218c2a0 data_ov019_0218ce88
#define data_ov019_0218c2fe data_ov019_0218ced3
#endif
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
extern AllocatorUnion data_02114e20;
extern char data_02109bf4[];
extern char data_ov019_0218c2c0[];
extern char data_ov019_0218c2d4[];
extern char data_ov019_0218c2d8[];
extern char data_ov019_0218c2ed[];
extern char data_ov019_0218c2fe[];
extern Vector3fix data_ov019_0218c294;
extern Vector3fix data_ov019_0218c2a0;

#if defined(jpn)
struct TableA68;
struct List020727d8;
struct StreamHeader;
void* FindEntryByKey_02072a68(struct TableA68* table, int key);
void ResetListHeader020727d8(struct List020727d8* list);
extern "C" void func_020728ac(int param0, int param1, struct StreamHeader* buffer, int length, int stack5, unsigned short stack6, unsigned char stack7);
extern char data_ov019_0218ceb8[];
enum { regionalTextsSize = 0x8, regionalG2d8 = 0x228 };
#else
enum { regionalTextsSize = 0x18, regionalG2d8 = 0x2d8 };
#endif

struct TitleScene0218b5a8 {
    char resources[0x28];
    unsigned char drawn;
    char pad29[0x2c - 0x29];
    char menu[0x34 - 0x2c];
    char texts[regionalTextsSize];
    int flags;
    int loadCount;
    char icons[0x90 - 0x54];
    ClearTarget0205a234* iconTail;
    Struct0205a198* iconEntries;
    char pad98[0xa0 - 0x98];
    short iconCount;
    char padA2[0xa4 - 0xa2];
    unsigned char iconByte;
    char padA5[0xa8 - 0xa5];
    Struct0205a198 entries[14];
    ClearTarget0205a234 tail;
};

static inline void ShowText(MessageSystem* g, TitleScene0218b5a8* self, int id) {
#if defined(jpn)
    func_0204500c(g, (const char*)FindEntryByKey_02072a68((struct TableA68*)self->texts, id), 0);
#else
    func_0204500c(g, GetFieldByKey020e0434((Container020e0310*)self->texts, id), 0, 0xe3);
#endif
}

static inline void GX_SetBGCharOffset(int offset) {
    unsigned int dispcnt = DISPCNT;
    DISPCNT = (dispcnt & ~0x7000000) | (offset << 24);
}

static inline void GX_SetBGScrOffset(int offset) {
    unsigned int dispcnt = DISPCNT;
    DISPCNT = (dispcnt & ~0x38000000) | (offset << 27);
}

static inline void GX_SetVisiblePlane(int plane) {
    unsigned int dispcnt = DISPCNT;
    DISPCNT = (dispcnt & ~0x1f00) | (plane << 8);
}

static inline void GX_SetOBJVRamModeChar(int mode) {
    unsigned int dispcnt = DISPCNT;
    DISPCNT = (dispcnt & 0xffcfffef) | mode;
}

static inline void GX_SetDispSelect(int sel) {
    *(volatile unsigned short*)0x4000304 = (unsigned short)((*(volatile unsigned short*)0x4000304 & ~0x8000) | (sel << 15));
}

static inline void G2_SetBG0Priority(int priority) {
    BG0CNT = (unsigned short)((BG0CNT & ~3) | priority);
}

static inline void G3_OrthoW(int t, int b, int l, int r, int n, int f, int scaleW, void* mtx) {
    ComputeAndLoadMatrix020c5770(t, b, l, r, n, f, scaleW, 1, mtx);
}

static inline void G3_StoreMtx(int num) {
    GXFIFO_MATRIX_STORE = num;
}

static inline void G3_ViewPort(int x1, int y1, int x2, int y2) {
    *(volatile unsigned int*)0x4000580 = x1 | (y1 << 8) | (x2 << 16) | (y2 << 24);
}

static inline void GXS_DispOn() {
    DISPCNTSUB |= 0x10000;
}

static inline void G3_MtxMode(int mode) {
    GXFIFO_MATRIX_MODE = mode;
}

static inline void G3_LookAt(Vector3fix* camPos, Vector3fix* camUp, Vector3fix* target, void* mtx) {
    SubmitGeometryJob_020c57d4((int)camPos, (int)camUp, (int)target, 1, mtx);
}

// USA: func_ov019_0218b5a8
extern "C" ARM void func_ov019_0218b5a8(TitleScene0218b5a8* self) {
    GameState* gs = GameState::GetInstance();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    unsigned int* inputFlags = GetDataPtr02114e04_020d6c00();
    DispatchWithGlobalContext020daf9c(0, 0, 1, 0);
    self->flags = 0;
    self->loadCount = 0;
    InitStruct0205a444(self->icons);
    for (int i = 0; i < 14; i++) {
        Init0205a198(&self->entries[i]);
    }
    ClearField0And40205a234(&self->tail);
    func_020c39a0((short*)0x400006c, -16);
    func_020c39a0((short*)0x400106c, -16);
    SetWord0x0_0200fb84((int*)gs, (int)self);
    loader->MaybeReset();
    ClearThreeRegions0203b634(GetData02105254_0203b628());
    void* ctx = func_0203bd08();
    InitBattleContext0203bd24((char*)ctx);
    LockStagedTextureVRAMCopying();
    DisableTextureImageVRAMBanks();
    DisableTexturePaletteVRAMBanks();
    DisableMainBGVRAMBanks();
    DisableSubBGVRAMBanks();
    DisableMainObjVRAMBanks();
    DisableSubObjVRAMBanks();
    MapVRAMBanksToTextureImage(0xf);
    ConfigurePairMode020bb48c(4, 1);
    MapVRAMBanksToTexturePalette(0x40);
    MapVRAMBanksToMainBG(0x10);
    GX_SetBGCharOffset(0);
    GX_SetBGScrOffset(0);
    BG1CNT = (BG1CNT & 0x43) | 4;
    GX_SetVisiblePlane(0x11);
    SetDispcntModeAndFlags020c391c(1, 0, 1);
    MapVRAMBanksToMainObj(0x20);
    GX_SetOBJVRamModeChar(0x10);
    GX_SetDispSelect(0);
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
    Finish3DRendering();
    func_020c51dc();
    ResetMatrixStacks020c537c();
    G2_SetBG0Priority(0);
    Set3DClearColor_020c5588(0, 0x1f, 0x7fff, 0, 0);
    G3_OrthoW(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, NULL);
    G3_StoreMtx(0);
    G3_ViewPort(0, 0, 255, 191);
    ConfigurePairMode020bb48c(4, 1);
    InitGlobalStateAndInstallHandlers020bb780((void*)0x4000, 1);

    char tables[0x70];
    char savedTables[0x70];
    func_0207de48(tables, 0x4000, 0x20);
    func_0207de48(savedTables, 0x4000, 0x20);
    MessageSystem* g = GetGlobalField0x1c020421a0();
    func_02042c68(g);
    func_02043124(g);
    SetField0x1e28_02042b30(g, tables);
    CopyInternalFields0207df50((Foo0207df50*)tables);
    RestorePairTables0207df90(tables);
    func_020432c4(g);
    BackupPairTables0207dfac(tables);

    unsigned int size;
    BackgroundLoader::AddLockGlobal();
    if (LoadFileIntoMemory(data_ov019_0218c2c0, data_0211e33c, &size) == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    void* buffer = AllocateAligned4_02012d88(&data_02114e20, 0x19000);
    SafeAllocator alloc;
    alloc.ResetAllocatorPointer();
    alloc.CreateTypeA(buffer, 0x19000);
    NarcHandle narc;
    if (narc.Initialize(data_ov019_0218c2d4, data_0211e33c)) {
        RestorePairTables0207df90(savedTables);
        CallFunc0202f310AtField0x19e0_020440b8((char*)g, &alloc, data_0211e33c);
        BackupPairTables0207dfac(savedTables);
        narc.Destroy();
    }
    ClearBuffer0202ad30();
    FlushAndClearBuffer0202adf0();
    *(int*)((char*)g + regionalG2d8) = 0;
#if defined(jpn)
    if (LoadFileIntoMemory(data_ov019_0218ceb8, data_0211e33c, &size) == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    ResetListHeader020727d8((struct List020727d8*)self->texts);
    func_020728ac((int)self->texts, (int)&alloc, (struct StreamHeader*)data_0211e33c, size, 0, 0, 0);
#else
    void* strings = ExtractFileFromGP2(data_ov019_0218c2d8, data_ov019_0218c2ed, &size);
    if (strings == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    ResetStruct020dfc40((Struct020dfc40*)self->texts);
    func_020dfec0(self->texts, &alloc, strings, size);
#endif
    BackgroundLoader::RemoveLockGlobal();

    int state = 0;
    unsigned char mode = gs->unknown_5cc8_;
    if (mode == 0) {
        ShowText(g, self, 0);
    } else if (mode == 1) {
        ShowText(g, self, 1);
    } else if (mode == 2) {
        ShowText(g, self, 2);
        state = 1;
    } else if (mode == 4) {
        ShowText(g, self, 10);
    } else {
        ShowText(g, self, 8);
        state = 8;
    }
    g->active = 1;
    WriteControlAndToggle020d86d0(0, 1);
    DelayThenSyncBit0_020c9820();
    ProcessRingJobs020bbcb4();
    UnlockAndSetMainBrightness((GameResources*)self, 0, 5);
    UnlockAndSetSubBrightness((GameResources*)self, -16, 1);
    UpdateAndApplyBrightness((GameResources*)self);
    RestoreDisplayMode_020c38d4();
    GXS_DispOn();

    Vector3fix target = data_ov019_0218c294;
    Vector3fix eye;
    __clear(&eye, sizeof(eye));
    Vector3fix up = data_ov019_0218c2a0;
    int running = 1;
    unsigned long long last = GetCurrentTimestamp();

    for (;;) {
        InitCombatSubsystems02012efc();
        switch (state) {
        case 1:
            if (g->active == 0) {
                if (func_020457e0(g) == 0) {
                    OrBitsIntoField0_020466e4(inputFlags, 0x80);
                    ShowText(g, self, 5);
                    ClearStruct020a9ea4((Struct020a9ea4*)self->menu);
                    state = 3;
                } else if (func_020457e0(g) == 1) {
                    ShowText(g, self, 3);
                    state = 2;
                }
                g->active = 1;
            }
            break;
        case 2:
            if (g->active == 0) {
                if (func_020457e0(g) == 0) {
                    ShowText(g, self, 4);
                    state = 9;
                } else if (func_020457e0(g) == 1) {
                    ShowText(g, self, 2);
                    state = 1;
                }
                g->active = 1;
            }
            break;
        case 3:
            if (g->mode == 4) {
                BackgroundLoader::AddLockGlobal();
                BackgroundLoader::FreeAllocationsGlobal();
                if (self->loadCount == 0) {
                    if (LoadFileIntoMemory(data_ov019_0218c2fe, data_0211e33c, &size) == NULL) {
                        BackgroundLoader::RemoveLockGlobal();
                        return;
                    }
                    InitStruct0205a444(self->icons);
                    for (int i = 0; i < 14; i++) {
                        Init0205a198(&self->entries[i]);
                    }
                    ClearField0And40205a234(&self->tail);
                    self->iconByte = 0;
                    self->iconEntries = self->entries;
                    self->iconCount = 14;
                    self->iconTail = &self->tail;
                    void* data = data_0211e33c;
                    int count = CountActiveEntries((ActiveEntry02046900*)data);
                    for (int i = 0; i < count; i++) {
                        void* field;
                        int recSize;
                        void* rec = FindRecordByIndex((Rec020467f0*)data, i, &field, &recSize);
                        func_0205a528(self->icons, rec, recSize, &alloc);
                    }
                    self->flags |= 1;
                    self->loadCount++;
                } else if (self->loadCount == 1) {
                    int result = func_020ab7a8(self->menu, 1);
                    if (result == 1) {
                        ShowText(g, self, 0);
                        g->active = 1;
                        ClearFlags020466f4((FlagWord020466f4*)inputFlags, 0x80);
                        self->flags &= ~1;
                        state = 0;
                    } else if (result == 2) {
                        ShowText(g, self, 1);
                        g->active = 1;
                        ClearFlags020466f4((FlagWord020466f4*)inputFlags, 0x80);
                        self->flags &= ~1;
                        state = 0;
                    } else if (result == 3) {
                        ClearFlags020466f4((FlagWord020466f4*)inputFlags, 0x80);
                        state = 6;
                    } else if (result == 5) {
                        ClearFlags020466f4((FlagWord020466f4*)inputFlags, 0x80);
                        state = 4;
                    }
                    BackgroundLoader::RemoveLockGlobal();
                }
            }
            break;
        case 4:
            self->flags &= ~1;
            if (g->active == 0) {
                ShowText(g, self, 7);
                g->active = 1;
                ResetAndDispatchActorContext0209c6d8(data_02109bf4, 0x35);
                state = 5;
            }
            break;
        case 5:
            if (g->active == 0) {
                running = 0;
            }
            break;
        case 6:
            self->flags &= ~1;
            if (g->active == 0) {
                if (gs->unknown_5cc8_ == 0) {
                    ShowText(g, self, 0);
                    state = 0;
                } else {
                    ShowText(g, self, 6);
                    ResetAndDispatchActorContext0209c6d8(data_02109bf4, 0x3d);
                    state = 7;
                }
                g->active = 1;
            }
            break;
        case 7:
            self->flags &= ~1;
            if (g->active == 0) {
                ShowText(g, self, 4);
                state = 9;
                g->active = 1;
            }
            break;
        case 9:
            if (g->active == 0) {
                running = 0;
            }
            break;
        case 8:
            self->flags &= ~1;
            if (g->mode == 3 && TriggerDispatchIfFlagOrByte_0218c240(self) != 0) {
                if (SendShortBufferOrReturnZero020aba5c(1) == 0) {
                    ShowText(g, self, 1);
                    state = 0;
                } else {
                    ShowText(g, self, 9);
                    state = 9;
                }
            }
            break;
        }
        if (!running) {
            break;
        }
        UpdateAndApplyBrightness((GameResources*)self);
        loader->RemoveAllLocks();
        if (!(self->flags & 1)) {
            func_02043368(g);
        }
        if (g->mode != 3 && !(state == 3 && g->mode == 4)) {
            g->Forward020444d4(1);
        }
        func_020bbd9c();
        ResetGxEngineState020c52e8();
        func_020c5414();
        RenderConfig::Reset();
        DISP3DCNT = (DISP3DCNT & ~0x3000) | 8;
        DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x10;
        G3_MtxMode(0);
        G3_LookAt(&eye, &up, &target, NULL);
        G3_OrthoW(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, NULL);
        G3_MtxMode(2);
        ReleaseField0x38IfValid020444e0((Obj020444e0*)g);
        func_ov019_0218c178(self);
        CleanInvalidateOamBuffers0203bd88(ctx);
        Forward0204359c(g, 0x10);
        WriteControlAndToggle020d86d0(0, 1);
        self->drawn = 1;
        DelayThenSyncBit0_020c9820();
        SyncMainSubOam0203bdb0((Obj0203bdb0*)ctx);
        func_020439b0(g, 1);
        gs->CalculateDeltaTime((GetCurrentTimestamp() - last) * 64 * 1000 / 33514);
        last = GetCurrentTimestamp();
    }

    alloc.Destroy();
    TailForward02012da4(&data_02114e20, buffer);
    SetByte0x4_0200fb94((char*)gs, 6);
    SetWord0x7f6c_02012010(gs, 0);
}
