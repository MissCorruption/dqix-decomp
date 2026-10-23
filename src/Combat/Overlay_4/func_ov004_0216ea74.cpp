#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "World/Zone3D.h"
#include "Resource/Brightness.h"

struct S_e830;

struct PackedField017 {
    unsigned int low : 12;
    unsigned int f12 : 4;
    unsigned int f16 : 5;
    unsigned int f21 : 5;
    unsigned int top : 6;
};

struct Ov004Block_0216ea74 {
    unsigned int word00;
    unsigned int word04;
    unsigned int word08;
    unsigned short half0c;
    unsigned char pad0e[0x20];
    unsigned char flags2e[6];
    signed char flag34;
    PackedField017 cfg;
    unsigned char pad3c[0xc];
    unsigned int word48;
};

struct Struct02171048_0216ea74 { char pad[4]; struct Ov004Block_0216ea74* ptr; };
extern Struct02171048_0216ea74 data_ov004_02171048;

extern "C" void* func_ov011_021845f8(void* ctx, int v);
extern "C" void* func_02012fe4(void);
extern "C" int func_ov017_021b2090(PackedField017 a, PackedField017 b);
extern "C" int func_0201e830(struct S_e830* p);
extern "C" void func_020c5588(int, int, int, int, int);
extern "C" void func_020c54a4(int, unsigned int, unsigned int, unsigned short);
extern "C" int func_020cf0fc(int);
extern "C" int func_020cf1a8(int);

struct AllocatorContext0216ea74 {
    unsigned char unknown00[4];
    SafeAllocator allocator;
};

static inline S_e830* GetZonePlacementData(Zone3D* zone) {
    return (S_e830*)&zone->substruct_6c_;
}

struct DownloadedQuestState {
    unsigned char unknown00[0x44];
    PackedField017 identifier;
    unsigned char unknown48[8];
    unsigned int flags;
};

struct GameStateQuestView0216ea74 {
#if defined(jpn)
    unsigned char unknown00[0x6120];
#else
    unsigned char unknown00[0x6380];
#endif
    DownloadedQuestState quest;
};

// USA: func_ov004_0216ea74
extern "C" ARM int func_ov004_0216ea74(SafeAllocator* a) {
    GameState* bs = GameState::GetInstance();
    data_ov004_02171048.ptr = 0;
    AllocatorContext0216ea74* ctx = (AllocatorContext0216ea74*)func_ov011_021845f8(a, 0);
    if (!ctx) return 0;
    SafeAllocator* alloc = &ctx->allocator;
    struct Ov004Block_0216ea74* blk = (struct Ov004Block_0216ea74*)alloc->Allocate(sizeof(Ov004Block_0216ea74));
    data_ov004_02171048.ptr = blk;
    if (!blk) return 0;

    blk->word00 = 0;
    blk->word04 = 0;
    blk->word08 = 0;
    blk->half0c = 0x3def;
    memset(blk->pad0e, 0, 0x20);
    blk->flags2e[0] = 0;
    blk->flags2e[1] = 0;
    blk->flags2e[2] = 0;
    blk->flags2e[3] = 0;
    blk->flags2e[4] = 0;
    blk->flags2e[5] = 0;
    blk->flag34 = -1;
    memset(blk->pad3c, 0, 0xc);
    blk->word48 = 0;

    Zone3D* zone = (Zone3D*)func_02012fe4();
    if (!zone) return 0;
    S_e830* p = GetZonePlacementData(zone);
    if (!p) return 0;
    data_ov004_02171048.ptr->half0c = func_0201e830(p);

    GameResources* obj = GetGameResources();
    data_ov004_02171048.ptr->word00 = GetFlags00(obj);
    data_ov004_02171048.ptr->word04 = GetFlags04(obj);
    data_ov004_02171048.ptr->word08 = GetFlags08(obj);
    SetFlags00(obj, 4);
    SetFlags04(obj, 0x8de);

    func_020c5588(0, 0x1f, 0x7fff, 0, 0);
    func_020c54a4(0, 0, 0, 0);

    int slotA[4];
    int slotB[3];
    func_020cf0fc((int)slotA);
    func_020cf1a8((int)slotB);

    data_ov004_02171048.ptr->cfg.low = slotA[0] + 0x7d0;
    data_ov004_02171048.ptr->cfg.f12 = slotA[1];
    data_ov004_02171048.ptr->cfg.f16 = slotA[2];
    data_ov004_02171048.ptr->cfg.f21 = slotB[0];
    data_ov004_02171048.ptr->cfg.top = slotB[1];

    DownloadedQuestState* quest = &((GameStateQuestView0216ea74*)bs)->quest;
    if (quest->flags & 1) {
        if (func_ov017_021b2090(quest->identifier, data_ov004_02171048.ptr->cfg) != 0) {
            data_ov004_02171048.ptr->flags2e[2] = 1;
        }
    }
    return 0;
}
