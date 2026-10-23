#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "World/ZoneLootableRecord.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/OverlayId.h"
#include "Resource/ActionDataTables.h"
#include "World/LootableContainer.h"
#include "Graphics/LightingManager.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_020c51dc func_020c6ca8
#endif

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct GameResources;
struct AllocatorUnion;

extern "C" unsigned int* func_020d6c00();
extern "C" void func_020466e4(unsigned int* word, unsigned int bits);
struct FlagWord020466f4;
extern "C" void func_020466f4(FlagWord020466f4*, unsigned int);
extern "C" int func_0201201c(void* gs);
extern "C" void func_02012010(void* gs, int value);
struct FieldBlock63d6_115a8;
extern "C" unsigned char func_020115a8(FieldBlock63d6_115a8*);
struct FieldBlock63d6_115c0;
extern "C" void func_020115c0(FieldBlock63d6_115c0*);
extern "C" void func_020daf9c(int a, int b, int c, int d);
void SetMainBrightness(GameResources*, int, int);
void SetSubBrightness(GameResources*, int, int);
extern "C" void func_0200fb84(int*, int);
extern "C" char* func_02012fe4();
extern "C" void* func_0200fd0c(GameState* gs);
extern "C" void func_0201133c(char*);
extern "C" void* func_020a6084();
extern "C" void func_020a6180(void* p);
extern "C" void func_020a6194(void* p);
extern "C" void* func_0203b628();
extern "C" void func_0203b634(char*);
extern "C" void* func_0203bd08();
extern "C" void func_0203bd24(char*);
extern "C" void* func_0203cf4c();
struct Struct_0203cf58;
extern "C" void func_0203cf58(Struct_0203cf58*);
extern "C" void* func_0202ae18();
extern "C" void func_0202aec0(void* p);
extern "C" void* func_0202ae24();
extern "C" void func_0205e22c(void* p);
extern "C" void* func_02011584(void* gs);
extern "C" void func_02099898(unsigned int*);
extern "C" void func_ov017_021b2f64(unsigned char*);
extern "C" void* func_0208e0a8();
extern "C" void func_0208e4bc(char*);
extern "C" void* func_020e2ff8();
struct SlotTable020e3004;
extern "C" void func_020e3004(SlotTable020e3004*);
extern "C" void* func_020e3808();
struct Entry020e3840;
extern "C" void func_020e3814(Entry020e3840*);
extern "C" void* func_020e3580();
struct Bytes020e358c;
extern "C" void func_020e358c(Bytes020e358c*);
extern "C" char* func_0205ec34();
extern "C" char* func_02094d6c();
extern "C" unsigned char func_0200fb9c(char*);
extern "C" void func_0200fb94(char*, unsigned char);
extern "C" void func_0205facc(void* p);
extern "C" void func_02095518(char*);
extern "C" void func_020ac0dc();
extern "C" void func_02096524(void* p);
extern "C" void* func_020704fc();
struct State02070508;
extern "C" void func_02070508(State02070508*);
extern "C" void func_0209c2e0(void* p, int a, int b);
extern "C" void func_0205e944(void* p, int a);
extern "C" void* func_020d7a50();
struct ResetObj020d7a5c;
extern "C" void func_020d7a5c(ResetObj020d7a5c*);
void LockStagedTextureVRAMCopying();
void UnlockStagedTextureVRAMCopying();
void UpdateVRAMStagingVRAMBanks();
void Finish3DRendering();
extern "C" unsigned int DisableTextureImageVRAMBanks();
extern "C" unsigned int DisableTexturePaletteVRAMBanks();
extern "C" unsigned int DisableMainBGVRAMBanks();
extern "C" unsigned int DisableSubBGVRAMBanks();
extern "C" unsigned int DisableMainObjVRAMBanks();
extern "C" unsigned int DisableSubObjVRAMBanks();
extern "C" void func_ov017_0218d274(void* controller);
extern "C" void MapVRAMBanksToTexturePalette(int value);
extern "C" void MapVRAMBanksToMainBG(int v);
extern "C" void MapVRAMBanksToSubBG(int v);
extern "C" void MapVRAMBanksToMainObj(int mode);
extern "C" void MapVRAMBanksToSubObj(int value);
extern "C" void func_020c391c(int mode, int a, int b);
extern "C" void func_020c3984(unsigned int mode);
extern "C" void func_020c51dc();
extern "C" void func_020c537c();
extern "C" void func_0202ac74();
extern "C" void func_02028d68(int code);
extern "C" void func_020bb48c(unsigned int a, int b);
extern "C" void func_020bb780(void* stack, int flag);
extern "C" void func_0202c288(void* p);
extern "C" int func_0202b7d8(int*);
extern "C" void func_020100a0(GameState* gs, int value);
extern "C" unsigned char func_020100a8(GameState* gs);
struct SearchStruct0202c1a4;
extern "C" int func_0202c1a4(SearchStruct0202c1a4*);
extern "C" void func_020c555c(int);
extern "C" void func_ov017_021a02f0(void* self);
extern "C" void func_02079870(char*);
extern "C" void func_020798b8(char*);
struct Obj020995c0;
extern "C" void func_020998c4(Obj020995c0*);
extern "C" void* func_0209cb68();
struct WordList0209cbb8;
extern "C" void func_0209cbb8(WordList0209cbb8*);
extern "C" void func_0209cbcc(void* p);
extern "C" void* func_02099f60();
extern "C" void func_02099f6c(char*);
extern "C" void func_020e5058();
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_020e50ec(void* buf, unsigned int size);
extern "C" void func_020e5114();
extern "C" void func_0207de48(void* p, int a, int b);
extern "C" void func_02013718(char* p, int a, int b);
extern "C" void func_0202df68(void* p);
struct Struct020A2CF0;
extern "C" void func_020a2cf0(Struct020A2CF0*);
extern "C" void func_020a2010(void* p);
extern "C" void func_020100c4(GameState* gs, int value);
struct List02046958;
extern "C" void func_02046958(List02046958*);
extern "C" void func_ov017_021a124c(void* p);
extern "C" void func_ov017_0218f064(void* self, int id, int mask, int b, int extra);
extern "C" int func_02011ff0(void* gs, int id);
extern "C" void* func_0200ff58(GameState* gs, int id);
extern "C" void func_020546a0(void* p, int value);
extern "C" char* func_02053c6c(unsigned char*);
extern "C" int func_020aaf84(void* buf, int a, int b, int c);
extern "C" int func_020ac864(int flag);
extern "C" int func_020ab9c0(int flag);
extern "C" int func_020abca8();
struct StateBits5ccc_11544;
extern "C" void func_02011544(StateBits5ccc_11544*);
struct StateBits5ccc_11570;
extern "C" int func_02011570(StateBits5ccc_11570*);
extern "C" void* func_0208e9e8();
extern "C" void func_0208ea10(void* p, int a);
unsigned long long GetCurrentTimestamp();
extern "C" int func_02011494(char*, void*);
extern "C" int func_020dcd40();
extern "C" void func_ov017_02191108(void* self, int a, int b, int c, int d);
extern "C" void func_020897b4(int a, int b, int c, int d, int e, int f, int g, int h, int i);
extern "C" void func_0201099c(void* gs);
extern "C" void func_02070378(char*);
extern "C" void func_02010774(char*, int);
extern "C" void func_020107a8(char*, int);
extern "C" void func_020107dc(char*, int);
extern "C" void func_0206df6c(void* p, unsigned char* arr, int bit, int set);
extern "C" void func_020120f0(void* gs);
extern "C" int func_02032370(int n);
extern "C" void func_02039768(GameObject* obj, void* dst);
extern "C" short func_020100b0(GameState* gs);
extern "C" void func_020a2770(void* p, short v);
extern "C" int rand();
extern "C" void func_0201206c(void* gs, int v);
extern "C" void func_0206dfe8(void* p, int a, int b);
extern "C" void* func_02057924();
struct Foo02057930;
extern "C" void func_02057930(Foo02057930*);
extern "C" void func_02057978(Foo02057930*);
extern "C" void* func_02027ca4();
#if defined(jpn)
extern "C" void func_02028894(void* p, void* a);
#else
extern "C" void func_02028894(void* p, void* a, void* b);
#endif
extern "C" void func_020287b4(void* p);
extern "C" void* func_02039e70();
extern "C" void func_02039e7c(void* p);
struct Container0203a54c;
extern "C" void func_0203a54c(Container0203a54c*);
extern "C" void* func_020421a0();
extern "C" void func_02042c68(void* c);
extern "C" void func_02043124(void* c);
extern "C" void func_02042b30(void* c, void* p);
extern "C" void func_ov017_0219b624(void* self);
extern "C" void func_ov017_0219ba0c(void* self, int a);
struct Foo0207df50;
extern "C" void func_0207df50(Foo0207df50*);
extern "C" void func_0207df90(char*);
extern "C" void func_020432c4(void* c);
extern "C" void func_0207dfac(char*);
extern "C" void func_02020554(void* p);
extern "C" void* func_020936f8();
extern "C" void func_020938f0(void* p);
extern "C" void func_020939ac(void* p);
extern "C" void func_0206ebf4(char*);
extern "C" void* func_0207d78c();
struct Init0207d7c0;
extern "C" void func_0207d798(Init0207d7c0*);
extern "C" int func_0206dfb0(int p, unsigned char* arr, int bit);
extern "C" void func_ov017_0219bfb4(int a, int b);
extern "C" void func_ov017_0219e310(unsigned char*, int);
struct TailList020469b4;
struct TailNode020469b4;
extern "C" void func_020469b4(TailList020469b4*, TailNode020469b4*);
struct Ctx021a3498;
extern "C" void func_ov017_021a3498(Ctx021a3498*);
extern "C" void func_ov017_021baedc(void* p, int a);
extern "C" void func_ov017_021b2174(unsigned char*);
struct S021b2ba0;
extern "C" void func_ov017_021b2ba0(S021b2ba0*, char*);
extern "C" void func_ov017_021b2bd0(void* p, int a, int b);
extern "C" int GetMainBGAssignedVRAMSize();
extern "C" void func_020ca458(unsigned int value, void* dest, int count);
extern "C" void func_020c9820();
extern "C" void func_020c38d4();
struct S_02010124;
extern "C" void func_02010124(S_02010124*);
extern "C" void func_020c3a0c(int ch);
struct HeadNode02046b24;
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" void func_0206e424(void* p, int a);
extern "C" void func_ov017_021bdbf0(unsigned char*);
extern "C" void func_0202ad30();
extern "C" void func_0202adf0();
extern "C" void func_02012efc();
int IsBrightnessTransitionActive(GameResources*);
extern "C" int func_02046b08(void**);
struct Vector3i;
struct FieldBlock63d8_115d0;
extern "C" int func_020115d0(FieldBlock63d8_115d0*);
extern "C" int func_020115e8(void* gs);
extern "C" void func_02011600(void* gs);
struct Obj02071488;
extern "C" int func_02071574(unsigned int, Obj02071488*);
extern "C" int func_02011610(void* gs);
extern "C" int func_02011628(void* gs);
extern "C" void func_02011634(void* gs);
extern "C" void func_020bc028(int a);
extern "C" void func_020d84e0();
extern "C" void func_0202aff4(void* p);
extern "C" void func_02043368(void* c);
extern "C" void func_ov017_0218cbd4(void* self);
extern "C" void func_ov017_02191cc0(void* self);
extern "C" void func_ov017_02195a20(void* self);
extern "C" void func_020d9834(int flag);
extern "C" void func_0209c840(void* p);
extern "C" void func_0203aa08(void* p);
extern "C" void func_020bbd9c();
extern "C" void func_0203bd88(void* oam);
extern "C" void func_0204359c(void* c, int a);
extern "C" void func_0203dd94(char*);
extern "C" void func_ov017_0219a188(void* self);
extern "C" void func_ov017_021a63cc(void* self);
extern "C" void func_020d86d0(int a, int b);
extern "C" void func_ov017_021a4358(int p);
struct Obj0203bdb0;
extern "C" void func_0203bdb0(Obj0203bdb0*);
extern "C" int* func_ov017_021a193c(int*);
extern "C" void func_020439b0(void* c, int a);
struct Node020579ec;
extern "C" void func_020579ec(Node020579ec**);
extern "C" void func_ov017_021a63d0(void* self);
extern "C" void func_ov017_0219a18c(void* self);
extern "C" void func_0203ba74(void* p);
extern "C" void func_02027438(void* p);
struct Obj020275e4;
extern "C" void func_020275e4(Obj020275e4*);
struct ShortField0xb4_0205eac8;
extern "C" int func_0205eac8(ShortField0xb4_0205eac8*);
extern "C" void func_0205ea20(void* p, int mode);
struct Actor0209c20c;
extern "C" void func_0209c20c(Actor0209c20c*);
struct Obj_0205e8ec;
extern "C" void func_0205e8ec(Obj_0205e8ec*);
extern "C" void func_ov017_021a3ef0(void* p);
struct Struct_0203cfb4;
extern "C" void func_0203cfb4(Struct_0203cfb4*);
extern "C" void func_ov017_021a316c(void* self);
extern "C" void func_02043000(char*);
extern "C" void func_ov017_02190238(void* self);
extern "C" void func_02013750(void* p, int a);
extern "C" void func_020998ac(int*);
extern "C" void func_0209cd24(WordList0209cbb8*);
extern "C" void func_ov017_0219b938(void* self);
extern "C" void func_ov017_0219bc50(unsigned char*);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" void func_ov017_021a0790(char*);
extern "C" void func_ov017_021a0964(char*);
extern "C" void func_ov017_021a0ba8(char*);
extern "C" void func_ov017_021a0f40(char*);
extern "C" void func_ov017_021a1114(char*);
extern "C" void func_ov017_021a0d6c(char*);
extern "C" void func_ov017_021a0470(void* self);
extern "C" void func_0200fd58(GameState* gs);
extern "C" void func_020a1edc();
extern "C" void func_020a1de4();
extern "C" void func_020e5094();
extern "C" void func_ov004_0216e9cc();
extern "C" void func_ov004_0216f854();

struct Flags02109bf4 {
    char pad[0xc8];
    unsigned char flagsC8;
};

struct Pause021d82e0 {
    unsigned char paused;
    char pad[3];
    int word4;
};

extern Flags02109bf4 data_02109bf4;
extern char data_02108760;
extern char data_ov017_021d615c;
extern char data_02114e20;
extern char data_ov017_021d736c;
extern char data_ov017_021d7378;
extern Pause021d82e0 data_ov017_021d82e0;
extern int data_02114e50;

struct Request3f8 {
    unsigned short id;
    char pad2[5];
    unsigned char flag7;
    char pad8[8];
    int pos[3];
    unsigned short dir;
    char pad1e[2];
    int value20;
    int pad24;
    int value28;
};

struct Party150 {
    char pad[0x49c];
    unsigned char active : 1;
};

struct Cursor371c {
    char pad[0x24];
    unsigned char index;
    char pad25[3];
    int count;
    int selected;
};

struct Holder021a193c {
    char* obj;
};

struct Slot373c {
    char data[0x48];
};

struct Battle0218b688 {
    char pad0[0x28];
    unsigned char running;
    char pad29[0x38 - 0x29];
    char data38[0xc4 - 0x38];
    SafeAllocator allocator;
    char dataD8[0x150 - 0xd8];
    char data150[0x27c - 0x150];
#if !defined(jpn)
    char data27c[0x2cc - 0x27c];
#endif
    char data2cc[0x87c - 0x2cc];
    char pairTables[0xf0c - 0x87c];
#if defined(jpn)
    char dataF0c[0x28f8 - 0xebc];
#else
    char dataF0c[0x2b08 - 0xf0c];
#endif
    int tableMode;
    char pad2b0c[0x2b90 - 0x2b0c];
    Foo02048004 entries[0x12];
    char pad3520[0x3634 - 0x3520];
    unsigned char colorA[0x12];
    unsigned char colorB[0x12];
    unsigned char colorC[0x12];
    char pad366a[0x36d0 - 0x366a];
    char* timedBuffer;
    char pad36d4[0x36fc - 0x36d4];
    void* nodeList;
    void* list700;
    void* list704;
    void* list708;
    void* header70c;
    char pad3710[0x371c - 0x3710];
    Cursor371c* cursor;
    char pad3720[0x3734 - 0x3720];
    char* node734;
    char pad3738[0x373c - 0x3738];
    Slot373c slots[4];
#if defined(jpn)
    char pad385c[0x3b3c - 0x385c];
#else
    char pad385c[0x3b4c - 0x385c];
#endif
    void* node3b4c;
    char pad3b50[0x3b60 - 0x3b50];
    char* node3b60;
    char pad3b64[0x4324 - 0x3b64];
    int exitRequest;
#if defined(jpn)
    char pad4328[0x4434 - 0x4328];
#else
    char pad4328[0x44c4 - 0x4328];
#endif
    void* regions;
};

#if defined(jpn)
enum { RegionObjectFlags = 0x3d44, RegionMemberFlags = 0x180, RegionControllerMode = 0x10 };
#else
enum { RegionObjectFlags = 0x3dcc, RegionMemberFlags = 0x18c, RegionControllerMode = 0x18 };
#endif
#define IS_OBJ_FLAG2_SET(h) ((h)->obj != 0 ? ((*(int*)((h)->obj + RegionObjectFlags) & 2) ? 1 : 0) : 0)

// USA: func_ov017_0218b688
extern "C" ARM void func_ov017_0218b688(Battle0218b688* self) {
    char combatCtrl[0x2c8];
    char scriptOut[0x68];
    char saveInfo[8];
    unsigned char ids[4];

    SafeAllocator::GetLiveCount();
    unsigned int* flagWord = func_020d6c00();
    func_020466e4(flagWord, 0x100);
    GameState* gs = GameState::GetInstance();
    int mode = func_0201201c(gs);
    unsigned char field = func_020115a8((FieldBlock63d6_115a8*)gs);
    if (mode != 5 && field != 4 && field != 8 && field != 0xc) {
        func_020daf9c(1, 0, 1, 0);
    }
    SetMainBrightness((GameResources*)self, -16, 0);
    SetSubBrightness((GameResources*)self, -16, 0);
    func_0200fb84((int*)gs, (int)self);
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    char* bigStruct = func_02012fe4();
    Request3f8* request = (Request3f8*)func_0200fd0c(gs);
    loader->MaybeReset();
    func_0201133c((char*)gs);
    void* scriptBuf = func_020a6084();
    func_020a6180(scriptBuf);
    func_020a6194(scriptBuf);
    void* regions3 = func_0203b628();
    func_0203b634((char*)regions3);
    void* oam = func_0203bd08();
    func_0203bd24((char*)oam);
    void* extRegion = func_0203cf4c();
    func_0203cf58((Struct_0203cf58*)extRegion);
    void* search = func_0202ae18();
    func_0202aec0(search);
    SetFlags00((GameResources*)self, 2);
    func_0205e22c(func_0202ae24());
    void* buffered = func_02011584(gs);
    func_02099898((unsigned int*)buffered);
    for (int i = 0; i < 4; i++) {
        func_ov017_021b2f64((unsigned char*)&self->slots[i]);
    }
    LootableContainerManager::GetMainInstance()->Reset();
    func_0208e4bc((char*)func_0208e0a8());
    func_020e3004((SlotTable020e3004*)func_020e2ff8());
    func_020e3814((Entry020e3840*)func_020e3808());
    func_020e358c((Bytes020e358c*)func_020e3580());
    char* bits = func_0205ec34();
    char* global418 = func_02094d6c();
    if (func_020115a8((FieldBlock63d6_115a8*)gs) == 0) {
        if (func_0201201c(gs) == 5 || func_0200fb9c((char*)gs) == 4) {
            func_0205facc(bits);
            func_02095518((char*)global418);
            func_020ac0dc();
        }
        func_02096524(global418);
    }
    *(int*)(bits + 0x480) = 0;
    *(int*)(bits + 0x47c) = 0;
    func_02070508((State02070508*)func_020704fc());
    func_0209c2e0(&data_02109bf4, 0x7f, 0);
    func_0205e944(&data_02108760, 0x7f);
    data_02109bf4.flagsC8 &= ~4;
    func_020d7a5c((ResetObj020d7a5c*)func_020d7a50());
    if (func_0201201c(gs) == 5 && func_0200fb9c((char*)gs) != 9) {
        func_0200fb94((char*)gs, 6);
    }

    LockStagedTextureVRAMCopying();
    DisableTextureImageVRAMBanks();
    DisableTexturePaletteVRAMBanks();
    DisableMainBGVRAMBanks();
    DisableSubBGVRAMBanks();
    DisableMainObjVRAMBanks();
    DisableSubObjVRAMBanks();
    func_ov017_0218d274(self);
    MapVRAMBanksToTexturePalette(0x40);
    MapVRAMBanksToMainBG(0x10);
    *(volatile unsigned int*)0x4000000 &= ~0x7000000;
    *(volatile unsigned int*)0x4000000 &= ~0x38000000;
    *(volatile unsigned short*)0x400000a = (*(volatile unsigned short*)0x400000a & 0x43) | 4;
    *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | 0x1300;
    func_020c391c(1, 0, 1);
    func_020c3984(0);
    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1300;
    MapVRAMBanksToSubBG(0x80);
    unsigned short* subBgcnt = (unsigned short*)0x4001008;
    subBgcnt[0] = (subBgcnt[0] & 0x43) | 0x4e00;
    subBgcnt[1] = (subBgcnt[1] & 0x43) | 0xd00;
    MapVRAMBanksToMainObj(0x20);
    *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & 0xffcfffef) | 0x10;
    MapVRAMBanksToSubObj(0x100);
    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & 0xffcfffef) | 0x10;
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
    *(unsigned short*)0x4000304 &= ~0x8000;
    Finish3DRendering();
    func_020c51dc();
    func_020c537c();
    unsigned short* subPrio = (unsigned short*)0x4001008;
    *(unsigned short*)0x400000a &= ~3;
    *(unsigned short*)0x4000008 = (*(unsigned short*)0x4000008 & ~3) | 1;
    subPrio[0] = (subPrio[0] & ~3) | 1;
    subPrio[1] = (subPrio[1] & ~3) | 2;
    subPrio[2] = (subPrio[2] & ~3);
    func_0202ac74();
    func_02028d68(3);
    func_020bb48c(4, 1);
    func_020bb780((void*)0x4000, 1);

    func_0202c288(search);
    if (func_0202b7d8((int*)search) == 0) {
        func_020100a0(GameState::GetInstance(), 0);
    } else {
        GameState* inst = GameState::GetInstance();
        func_020100a0(inst, func_0202c1a4((SearchStruct0202c1a4*)search));
    }
    func_020c555c((int)&data_ov017_021d615c);
    func_ov017_021a02f0(self);
    func_020466f4((FlagWord020466f4*)flagWord, 0x100);
    ActionDataTables* regions4 = func_020797dc();
    func_02079870((char*)regions4);
    func_02079900(regions4, (SafeAllocator*)self->data150);
    func_020998c4((Obj020995c0*)buffered);
    void* wordList = func_0209cb68();
    func_0209cbb8((WordList0209cbb8*)wordList);
    func_0209cbcc(wordList);
    func_02099f6c((char*)func_02099f60());
    func_0204719c(&self->entries[11]);
    int ownAllocator = 0;
#if !defined(jpn)
    func_020e5058();
    void* slotBuf = func_02012d88((AllocatorUnion*)&data_02114e20, 0x1866);
    if (slotBuf != 0) {
        func_020e50ec(slotBuf, 0x1866);
    }
    func_020e5114();
#endif
    if (func_0200fb9c((char*)gs) == 9) {
        ownAllocator = 1;
        self->allocator.CreateTypeA(func_02012d88((AllocatorUnion*)&data_02114e20, 0x30000), 0x30000);
        func_0207de48(self->dataF0c, 0x10, 0x10);
    }
    func_02013718(bigStruct, (int)self->data38, (int)self->data2cc);
    func_0202df68(combatCtrl);
    func_020a2cf0((Struct020A2CF0*)combatCtrl);
    func_020a2010(combatCtrl);
    func_020100c4(gs, (int)combatCtrl);
    func_02046958((List02046958*)self->nodeList);
    func_02046958((List02046958*)self->list700);
    func_02046958((List02046958*)self->list704);
    func_ov017_021a124c(self->list708);
    int loaded;
    int ok;
    int fresh = 0;
    Cursor371c* cursor = self->cursor;
    cursor->index = fresh;
    cursor->count = fresh;
    cursor->selected = fresh - 1;
    loaded = fresh;
    int newGame = fresh;
    int showIntro = fresh;

    if (func_0200fb9c((char*)gs) != 6 && func_0200fb9c((char*)gs) != 9) {
        if (func_020115a8((FieldBlock63d6_115a8*)gs) != 0) {
            loaded = 1;
        } else {
            if (func_0200fb9c((char*)gs) == 0 || func_0200fb9c((char*)gs) == 5) {
                int isFive = func_0200fb9c((char*)gs) == 5;
                loaded = fresh = 1;
                newGame = !isFive;
                if (func_0201201c(gs) == 6) {
                    ok = 0;
                    if (func_020aaf84(saveInfo, 0, isFive, 0) != 0) {
                        if (func_020ac864(newGame == 0) != 0) {
                            ok = 1;
                            if (isFive != 0 && func_020ab9c0(0) == 0 &&
                                func_020abca8() == 0) {
                                func_02011544((StateBits5ccc_11544*)gs);
                                ok = 0;
                            }
                        } else {
                            func_02011544((StateBits5ccc_11544*)gs);
                        }
                    }
                    if (ok == 0) {
                        fresh = 0;
                        loaded = fresh;
                        newGame = fresh;
                    }
                }
            }
            if (func_0200fb9c((char*)gs) != 5) {
                func_0208ea10(func_0208e9e8(), 1);
            }
            gs->mainTimestamp_ = GetCurrentTimestamp();
            gs->altTimestamp_ = GetCurrentTimestamp();
        }

        if (loaded != 0) {
            char* save = (char*)func_02010828(gs);
            int count = func_02011494((char*)gs, ids);
            unsigned char* id;
            if (func_020115a8((FieldBlock63d6_115a8*)gs) != 0) {
                id = ids;
            } else {
                id = (unsigned char*)(save + 0xf78);
                count = *(unsigned char*)(save + 0xf7c);
            }
            for (int i = 0; i < count; i++, id++) {
                int cur = *id;
                if (cur == func_020100a8(gs)) {
                    func_ov017_0218f064(self, cur, 0x200, 1, 0);
                } else {
                    if (func_02011ff0(gs, cur) > 0) {
                        func_ov017_0218f064(self, cur, 4, 1, func_02011ff0(gs, cur));
                    } else {
                        func_ov017_0218f064(self, cur, 0x1000, 1, 0);
                    }
                    void* combatant = func_0200ff58(gs, cur);
                    if (combatant != 0) {
                        func_020546a0(combatant, func_020100a8(gs));
                    }
                }
                char* member = (char*)func_0200ff1c(gs, cur);
                if (member != 0) {
                    char* info = func_02053c6c((unsigned char*)member);
                    if (info != 0 && (*(int*)(info + 0x18) & 1)) {
                        *(int*)(member + RegionMemberFlags) |= 1;
                    }
                }
            }
            if (func_020dcd40() != 0) {
                func_ov017_02191108(self, 1, 1, 1, 1);
            }
        } else {
            func_ov017_0218f064(self, 0, 0x200, 1, 0);
            if (fresh == 0) {
                func_020897b4(0, 1, 6, 1, 1, 0, 0, 0, 0);
                func_0201099c(gs);
                g_keyManager.RefreshKeys();
                if (func_0200fb9c((char*)gs) == 0) {
                    func_02070378((char*)request);
                    request->id = 100;
                    func_02010774((char*)gs, 3);
                    func_020107a8((char*)gs, 1);
                    func_020107dc((char*)gs, 1);
                    func_0206df6c(bits, (unsigned char*)(bits + 0x8c), 0xaed, 1);
                    func_020120f0(gs);
                    GameObject* hero = gs->GetProtagonist();
                    if (hero != 0) {
                        Party150* party = (Party150*)func_02053c6c((unsigned char*)hero);
                        if (party != 0) {
                            if (g_keyManager.TestKeysHeld(0x100)) {
                                party->active = 0;
                            } else if (g_keyManager.TestKeysHeld(0x200)) {
                                party->active = 1;
                            } else {
                                party->active = (unsigned char)func_02032370(2);
                            }
                        }
                    }
                } else if (func_0200fb9c((char*)gs) == 2) {
                    func_02070378((char*)request);
                    request->id = 0x1905;
                    request->value20 = 0x53fc;
                    func_02010774((char*)gs, 1);
                    func_020107a8((char*)gs, 1);
                    func_020107dc((char*)gs, 1);
                    func_020120f0(gs);
                    char* member = (char*)func_0200ff1c(gs, 0);
                    if (member != 0) {
                        char* info = func_02053c6c((unsigned char*)member);
                        if (info != 0) {
                            *(unsigned short*)(info + 0x496) = 0x4e24;
                        }
                    }
                    showIntro = 1;
                } else {
                    func_02070378((char*)request);
                    request->id = 1;
                    request->flag7 = 1;
                    request->dir = 0;
                    request->pos[0] = 0;
                    request->pos[1] = 0;
                    request->pos[2] = 0;
                    func_02010774((char*)gs, 1);
                    func_020107a8((char*)gs, 1);
                    func_020107dc((char*)gs, 1);
                    func_020120f0(gs);
                }
            }
            if (fresh != 0) {
                char* save = (char*)func_02010828(gs);
                GameObject* hero = gs->GetProtagonist();
                if (hero != 0) {
                    func_02039768(hero, save + 0x2c8d);
                }
            }
        }
        func_ov017_02191108(self, 1, 1, 1, 1);
    }

    func_020a2770(combatCtrl, func_020100b0(gs));
    if (func_020115a8((FieldBlock63d6_115a8*)gs) == 0) {
        func_0201206c(gs, rand());
        if (func_0200fb9c((char*)gs) != 5) {
            func_0206dfe8(bits, 0x79e, 0x2bc);
        }
    }
    void* combatants = func_02057924();
    func_02057930((Foo02057930*)combatants);
    void* entryTable = func_02027ca4();
#if defined(jpn)
    func_02028894(entryTable, self->dataD8);
#else
    func_02028894(entryTable, self->dataD8, self->data27c);
#endif
    void* battleArrays = func_02039e70();
    func_02039e7c(battleArrays);
    void* controller = func_020421a0();
    func_02042c68(controller);
    func_02043124(controller);
    func_02042b30(controller, self->pairTables);
    func_ov017_0219b624(self);
    func_ov017_0219ba0c(self, 0);
    func_0207df50((Foo0207df50*)self->pairTables);
    func_0207df90((char*)self->pairTables);
    func_020432c4(controller);
    func_0207dfac((char*)self->pairTables);
    if (func_0200fb9c((char*)gs) != 6 && func_0200fb9c((char*)gs) != 9) {
        self->colorA[0] = 0xd4;
        self->colorB[0] = 8;
        self->colorC[0] = 0;
        self->colorA[1] = 0xc0;
        self->colorB[1] = 8;
        self->colorC[1] = 0;
    }
    func_02020554(self->timedBuffer);
    *(int*)(self->timedBuffer + 0x5a4) |= 1;
    void* handle = func_020936f8();
    func_020938f0(handle);
    func_0206ebf4((char*)self->regions);
    void* structArray = func_0207d78c();
    func_0207d798((Init0207d7c0*)structArray);
    char* lighting = (char*)LightingManager::GetInstance();
    *(float*)(lighting + 0x94) = gs->GetDayTimer();
    *(int*)(lighting + 0x98) = gs->GetTimeOfDay();
    if (func_0200fb9c((char*)gs) != 6 && func_0200fb9c((char*)gs) != 9) {
        char* flagBits = func_0205ec34();
        if (func_0206dfb0((int)flagBits, (unsigned char*)(flagBits + 0x8c), 0x1142) != 0) {
            newGame = 0;
        }
        if (newGame == 1) {
            func_ov017_0219bfb4(1, 0);
        } else {
            func_ov017_0219e310((unsigned char*)self->header70c, 0);
            func_020469b4((TailList020469b4*)self->nodeList, (TailNode020469b4*)self->header70c);
            func_ov017_021a3498((Ctx021a3498*)self->nodeList);
            if (func_0206dfb0((int)flagBits, (unsigned char*)(flagBits + 0x8c), 0x1142) != 0) {
                func_ov017_021baedc(self->node734, 1);
                *(unsigned short*)(self->node734 + 8) = 0x730a;
                func_020469b4((TailList020469b4*)self->nodeList, (TailNode020469b4*)self->node734);
            }
        }
    }
    if (func_0200fb9c((char*)gs) == 6 || func_0200fb9c((char*)gs) == 9) {
        void* node = self->node3b4c;
        func_ov017_021b2174((unsigned char*)node);
        if (func_0200fb9c((char*)gs) == 6) {
            func_ov017_021b2ba0((S021b2ba0*)node, (char*)&data_ov017_021d736c);
            func_ov017_021b2bd0(node, (int)func_ov004_0216e9cc, OVERLAY_ID(4));
        } else if (func_0200fb9c((char*)gs) == 9) {
            func_ov017_021b2ba0((S021b2ba0*)node, (char*)&data_ov017_021d7378);
            func_ov017_021b2bd0(node, (int)func_ov004_0216f854, OVERLAY_ID(4));
        }
        func_020469b4((TailList020469b4*)self->nodeList, (TailNode020469b4*)node);
    }
    func_020ca458(0, (void*)0x6000000, GetMainBGAssignedVRAMSize());
    func_020c9820();
    func_020c38d4();
    *(volatile unsigned int*)0x4001000 |= 0x10000;
    func_02010124((S_02010124*)gs);
    func_020c3a0c(0);
    unsigned long long last = GetCurrentTimestamp();
    void* list = self->list700;
    while (func_02046b24((HeadNode02046b24**)list) == 0x13) {
        loader->RemoveAllLocks();
        func_ov017_021a3498((Ctx021a3498*)list);
    }
    func_0206e424(bits, 0);
    if (showIntro != 0) {
        func_ov017_021bdbf0((unsigned char*)self->node3b60);
        self->node3b60[0x11] = 2;
        func_020469b4((TailList020469b4*)self->nodeList, (TailNode020469b4*)self->node3b60);
    }
    if (func_020115a8((FieldBlock63d6_115a8*)gs) != 0) {
        func_020115c0((FieldBlock63d6_115c0*)gs);
    }
    FontBankLoader* global400 = func_02094a00();
    func_0202ad30();
    func_0202adf0();

    for (;;) {
        int flag4000 = 0;
        if (TestFlags00((GameResources*)self, 0x4000) != 0) {
            flag4000 = 1;
        }
        func_02012efc();
        GameState::GetInstance();
        func_0205ec34();
        func_02094b4c(global400);
        int quit = 0;
        if (self->exitRequest == 1) {
            self->exitRequest = 0;
            quit = 1;
        }
        if (func_02011570((StateBits5ccc_11570*)gs) != 0) {
            if (IsBrightnessTransitionActive((GameResources*)self) == 0) {
                quit = 1;
            }
        }
        if (func_020115a8((FieldBlock63d6_115a8*)gs) != 0 && func_02046b08((void**)self->nodeList) != 0) {
            quit = 1;
            func_02070378((char*)request);
            request->id = *(unsigned short*)bigStruct;
            request->flag7 = quit;
            GameObject* obj = gs->GetUnknownGameObject();
            if (obj != 0) {
                *(Vector3i*)request->pos = *(Vector3i const*)((char*)obj + 0x44);
                request->dir = obj->obj3D_.rotation_.y;
            }
            if (func_020115d0((FieldBlock63d8_115d0*)gs) != 0) {
                request->value20 = func_020115e8(gs);
                func_02011600(gs);
                if (func_02071574((unsigned short)request->value20, (Obj02071488*)scriptOut) != 0) {
                    request->id = *(unsigned short*)(scriptOut + 0xe);
                    request->flag7 = 0;
                }
            }
            if (func_02011610(gs) != 0) {
                request->value28 = func_02011628(gs);
                func_02011634(gs);
            }
        }
        if (quit != 0) {
            if (func_0200fb9c((char*)gs) != 2) {
                func_020bc028(0);
            }
            func_020d84e0();
            func_0202aff4(search);
            SetMainBrightness((GameResources*)self, -16, 0);
            SetSubBrightness((GameResources*)self, -16, 0);
            if (func_0200fb9c((char*)gs) == 8) {
                SetMainBrightness((GameResources*)self, 16, 0);
                SetSubBrightness((GameResources*)self, 16, 0);
            }
            break;
        }
        func_02043368(controller);
        func_ov017_0218cbd4(self);
        func_ov017_02191cc0(self);
        if (data_ov017_021d82e0.paused == 0 && TestFlags04((GameResources*)self, 1) == 0) {
            func_ov017_02195a20(self);
        }
        if (flag4000 != 0) {
            func_020d9834(1);
        }
        func_0209c840(&data_02109bf4);
        func_0203aa08(&data_02108760);
        func_020bbd9c();
        func_0203bd88(oam);
        func_0204359c(controller, RegionControllerMode);
        if (flag4000 != 0) {
            func_020d9834(1);
        } else {
            func_020d9834(0);
        }
        loader->RemoveAllLocks();
        func_0203dd94((char*)extRegion);
        func_ov017_0219a188(self);
        func_ov017_021a63cc(self);
        if (data_ov017_021d82e0.paused == 0) {
            int speed = gs->currentNumTicks_;
            for (int f = 1; f < 2 - speed; f++) {
                func_020c9820();
            }
            func_020d86d0(1, 0);
            self->running = 1;
            func_020c9820();
        }
        if (data_ov017_021d82e0.paused != 0) {
            gs->CalculateDeltaTime(0);
        } else {
            unsigned long long now = GetCurrentTimestamp();
            gs->CalculateDeltaTime(((now - last) * 64000) / 33514);
        }
        last = GetCurrentTimestamp();
        data_02114e50++;
        func_ov017_021a4358((int)self->nodeList);
        func_0203bdb0((Obj0203bdb0*)oam);
        int allow = 1;
        if (func_02046b24((HeadNode02046b24**)self->nodeList) == 2) {
            Holder021a193c* holder = (Holder021a193c*)func_ov017_021a193c((int*)self->list708);
            if (holder != 0 && IS_OBJ_FLAG2_SET(holder)) {
                allow = 0;
            }
        }
        func_020439b0(controller, allow);
        func_020579ec((Node020579ec**)combatants);
        func_ov017_021a63d0(self);
        func_ov017_0219a18c(self);
        func_0203ba74(regions3);
        func_02027438(self->timedBuffer);
#if !defined(jpn)
        func_020275e4((Obj020275e4*)self->timedBuffer);
#endif
        if (flag4000 != 0) {
            func_020d9834(1);
        }
    }

    if (func_02011570((StateBits5ccc_11570*)gs) != 0) {
        SetMainBrightness((GameResources*)self, -16, 0);
        SetSubBrightness((GameResources*)self, -16, 0);
    }
    if (func_0200fb9c((char*)gs) != 2) {
        if (func_0205eac8((ShortField0xb4_0205eac8*)&data_02108760) != 100) {
            func_0205ea20(&data_02108760, 100);
        }
        func_0209c20c((Actor0209c20c*)&data_02109bf4);
        func_0205e8ec((Obj_0205e8ec*)&data_02108760);
        func_020bbd9c();
    }
    data_02109bf4.flagsC8 &= ~4;
    func_ov017_021a3ef0(self->nodeList);
    func_0203cfb4((Struct_0203cfb4*)extRegion);
    func_ov017_021a316c(self);
    for (int i = 0; i < 0x12; i++) {
        func_02047230(&self->entries[i]);
    }
    func_020798b8((char*)regions4);
    func_02043000((char*)controller);
    func_020939ac(handle);
    func_0203a54c((Container0203a54c*)battleArrays);
    func_02057978((Foo02057930*)combatants);
    func_020287b4(entryTable);
    func_ov017_02190238(self);
    func_02013750(bigStruct, 1);
    func_020998ac((int*)buffered);
    func_0209cd24((WordList0209cbb8*)wordList);
    func_0207d798((Init0207d7c0*)structArray);
    func_ov017_0219b938(self);
    func_ov017_0219bc50((unsigned char*)self);
    if (func_0200fb9c((char*)gs) == 9 && ownAllocator == 1) {
        void* signedAlloc = self->allocator.GetSignedAllocator();
        if (signedAlloc != 0) {
            self->allocator.Destroy();
            func_02012da4((AllocatorUnion*)&data_02114e20, signedAlloc);
        }
        func_0200fb94((char*)gs, 6);
        func_02012010(gs, 2);
    }
    int tableMode = self->tableMode;
    if (tableMode == 0) {
        func_ov017_021a0790((char*)self);
    } else if (tableMode == 1) {
        func_ov017_021a0964((char*)self);
    } else if (tableMode == 2) {
        func_ov017_021a0ba8((char*)self);
    } else if (tableMode == 3) {
        func_ov017_021a0f40((char*)self);
    } else if (tableMode == 4) {
        func_ov017_021a1114((char*)self);
    } else if (tableMode == 5) {
        func_ov017_021a0d6c((char*)self);
    }
    func_ov017_021a0470(self);
    func_0200fd58(gs);
    func_020a1edc();
    func_020a1de4();
    *(volatile unsigned int*)0x4000000 &= ~0xe000;
    data_ov017_021d82e0.word4 = 0;
#if !defined(jpn)
    func_020e5094();
#endif
    SafeAllocator::GetLiveCount();
    func_0200fb84((int*)gs, 0);
    func_020a2010(combatCtrl);
    func_020a2cf0((Struct020A2CF0*)combatCtrl);
    func_0202df68(combatCtrl);
}
