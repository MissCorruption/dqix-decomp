#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"
#include "Resource/GameResources.h"

struct Vec3 {
    int x;
    int y;
    int z;
};

struct Zone02012fe4 {
#if defined(jpn)
    char pad[0x240c];
#else
    char pad[0x23ec];
#endif
    ActiveGrottoClass activeGrotto;
};

struct ActorFlags0xc1 {
    unsigned char mode : 2;
    unsigned char rest : 6;
};

struct ActorInfo020e3f1c {
#if defined(jpn)
    const char* name;
    char pad4[0x10 - 0x4];
#else
    char pad[0x10];
#endif
    unsigned short id;
};

struct Actor020e3f1c {
    char pad0[0x44];
    struct Vec3 position;
    char pad50[0xb2 - 0x50];
    short fb2;
    char padb4[0xc1 - 0xb4];
    struct ActorFlags0xc1 flagsC1;
    char padc2[0x134 - 0xc2];
    char* name;
    char pad138[0x17d - 0x138];
    unsigned char flags17d;
    char pad17e[0x180 - 0x17e];
    struct ActorInfo020e3f1c* info;
};

struct PartyOrder020e3f1c {
    char pad[0xf78];
    unsigned char order[4];
    unsigned char count;
};

struct Camera020e3f1c {
    char pad[0x10];
    struct Vec3 target;
};

struct Display020e3f1c {
#if defined(jpn)
    char pad0[0x868];
    int busy;
    int active;
    char pad870[0x17e2 - 0x870];
#else
    char pad0[0x998];
    int busy;
    int active;
    char pad9a0[0x19b2 - 0x9a0];
#endif
    unsigned char visible;
};

struct BattleIntro020e3f1c {
    char pad0[0x8];
    unsigned short monsterIndex;
    unsigned char state;
    char padb;
    short taskId;
    unsigned char cameraMode;
};

struct Struct020dfc40 {
    unsigned char pad[0x14];
    int field_14;
};

struct Obj02076b58;
struct Bytes02033b88;
struct Obj020397cc;
struct Struct020338d4;
struct GlobalObj0202e6a8;
struct Vec3Target0202e5c0;
struct Obj0202ea4c;
struct Obj020d7aa0;
struct Obj02046574;
struct Container020e0310;

extern "C" struct Display020e3f1c* func_020421a0();
extern "C" struct Zone02012fe4* func_02012fe4();
extern "C" int func_020100f8(char* obj);
extern "C" int func_ov017_021959b4();
extern "C" void func_020e4524(char* obj);
extern "C" void func_ov004_0216fa48(void* obj);
extern "C" void func_02076b58(struct Obj02076b58* actor);
extern "C" void* func_020d6c00();
extern "C" void func_020466e4(unsigned int* word, unsigned int mask);
extern "C" void func_02033b88(struct Bytes02033b88* obj, int value);
extern "C" void func_02037d88(GameObject* obj);
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg);
extern "C" void func_020531f0(GameObject* obj);
extern "C" void func_020a27b8(unsigned char* obj);
extern "C" int func_02039874(void* obj);
extern "C" void func_020338d4(struct Struct020338d4* self, struct Vec3* target);
extern "C" void func_02039d24(unsigned char* obj);
extern "C" void func_020338b0(unsigned char* obj, int target);
extern "C" void func_0202e6a8(struct GlobalObj0202e6a8* obj, int value);
extern "C" int func_0202e800(void* obj);
extern "C" void func_0202e5c0(struct Vec3Target0202e5c0* obj, int x, int y, int z);
extern "C" void func_0202ea4c(struct Obj0202ea4c* obj);
extern "C" void func_0202e0a4(struct Camera020e3f1c* camera);
extern "C" struct Obj020d7aa0* func_020d7a50();
extern "C" void func_020d7aa0(struct Obj020d7aa0* obj);
extern "C" void func_ov017_021c3e18(int arg);
extern "C" int sprintf(char* buf, const char* fmt, ...);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void* func_020dfc2c(void* p);
extern "C" void func_020dfc40(struct Struct020dfc40* p);
extern "C" void func_020dfec0(void* dest, void* allocator, void* fileData, unsigned int size);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* ptr);
extern "C" void func_02046574(struct Obj02046574* obj, int index, char* name);
#if defined(jpn)
extern "C" void func_0204500c(void* global, void* entry, int a);
#else
extern "C" void func_0204500c(void* global, void* entry, int a, int b);
#endif
extern "C" void func_02043124(void* global);

extern AllocatorUnion data_02114e20;
#if defined(jpn)
struct List020727d8 {
    void* unk_0;
    void* unk_4;
};
struct TableA68;
#include "Filesystem/FileIO.h"
extern "C" int func_020d3018(const char* a, const char* b);
extern "C" void func_020727d8(struct List020727d8* list);
extern "C" void func_020728ac(void* list, void* alloc, void* buffer, int length, int a4, int a5, int a6);
extern "C" void* func_02072a68(struct TableA68* table, int key);
extern const char data_020f2e30[];
extern const char data_020f2e3b[];
extern const char data_020f2e4d[];
#else
extern const char data_020f2cd4[];
extern const char data_020f2ce4[];
#endif

static inline int FxMul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

// USA: func_020e3f1c
extern "C" ARM void func_020e3f1c(struct BattleIntro020e3f1c* intro) {
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    GameState* gs = GameState::GetInstance();
    struct Display020e3f1c* display = func_020421a0();
    FontBankLoader* mgr = func_02094a00();
    ActiveGrottoClass* grotto = &func_02012fe4()->activeGrotto;
    struct Camera020e3f1c* camera = (struct Camera020e3f1c*)func_020100f8((char*)gs);
    struct Actor020e3f1c* leader = (struct Actor020e3f1c*)gs->GetUnknownGameObject();
    GameResources* res = GetGameResources();

    if (func_ov017_021959b4()) {
        func_020e4524((char*)intro);
        return;
    }

    short bossId = -1;
    if (grotto != NULL) {
        DetailedTreasureMapData* map = grotto->GetDetailedData();
        if (map != NULL) {
            if (map->mapType_ == 1) {
                bossId = map->regular_.bossMonsterID_;
            } else if (map->mapType_ == 2) {
                bossId = map->legacy_.bossMonsterID_;
            }
        }
    }

    struct Actor020e3f1c* monster = (struct Actor020e3f1c*)gs->GetMaybeFieldMonsterByIndex(intro->monsterIndex);
    if (monster == NULL) {
        func_ov004_0216fa48(intro);
        return;
    }
    func_02076b58((struct Obj02076b58*)monster);
    func_020466e4((unsigned int*)func_020d6c00(), 2);

    int i;
    for (i = 0; i < 4; i++) {
        GameObject* member = gs->GetPartyMemberByIndex(i);
        if (member != NULL) {
            member->obj3D_.EnableFlag(0x1000000);
            member->obj3D_.DisableFlag(0x1020);
            ((struct Actor020e3f1c*)member)->flagsC1.mode |= 2;
            if (((struct Actor020e3f1c*)member)->fb2 > 0) {
                func_02033b88((struct Bytes02033b88*)member, 1);
            } else {
                func_02033b88((struct Bytes02033b88*)member, 0);
            }
            func_02037d88(member);
        }
    }

    if (intro->state == 0) {
        if (leader != NULL) {
            func_020397cc((struct Obj020397cc*)leader, 1);
            leader->fb2 = 0;
        }
        for (int j = 0; j < 4; j++) {
            GameObject* member = gs->GetPartyMemberByIndex(j);
            if (member != NULL) {
                func_020531f0(member);
            }
        }
        func_020a27b8((unsigned char*)camera);
        SetMainBrightness(res, -16, 0x1e);
#if defined(jpn)
        if (func_020d3018(monster->info->name, data_020f2e30) == 0) {
#else
        if (monster->info->id == 0x133) {
#endif
            intro->cameraMode = 2;
        } else if (monster->flags17d & 4) {
            intro->cameraMode = 1;
        }
        intro->state = 1;
    } else if (intro->state == 1) {
        if (IsMainBrightnessTransitionActive(res)) {
            return;
        }
        struct Vec3 pos = monster->position;
        struct PartyOrder020e3f1c* party = (struct PartyOrder020e3f1c*)func_02010828(gs);
        for (int k = 0; k < party->count; k++) {
            struct Actor020e3f1c* member = (struct Actor020e3f1c*)gs->GetPartyMemberByIndex(party->order[k]);
            if (member != NULL) {
                if (func_02039874(member) > 0) {
                    ((GameObject*)member)->obj3D_.SetInheritedAlpha(0);
                }
                member->position.x = pos.x;
                member->position.y = pos.y;
                member->position.z = pos.z + 0x3000;
                func_020338d4((struct Struct020338d4*)member, &monster->position);
                func_02039d24((unsigned char*)member);
            }
        }
        func_020338b0((unsigned char*)monster, (int)&leader->position);
        func_0202e6a8((struct GlobalObj0202e6a8*)camera, 0);
        int dist = func_0202e800(camera);
        struct Vec3 target = camera->target;
        if (intro->cameraMode == 1) {
            int dz = FxMul(dist, 0xddb);
            int dy = FxMul(dist, 0x599);
            func_0202e5c0((struct Vec3Target0202e5c0*)camera, target.x, target.y + dy, target.z + dz);
            func_0202ea4c((struct Obj0202ea4c*)camera);
        } else if (intro->cameraMode == 2) {
            func_0202e5c0((struct Vec3Target0202e5c0*)camera, target.x, target.y + 0x2000, target.z + 0xd800);
            func_0202ea4c((struct Obj0202ea4c*)camera);
        }
        func_0202e0a4(camera);
        func_020d7aa0(func_020d7a50());
        func_02094b34(mgr, 0x74, 0x20e, 0, 0);
        func_ov017_021c3e18(0);
        intro->state = 2;
    } else if (intro->state == 2) {
        SetMainBrightness(res, 0, 0x3c);
        intro->state = 3;
    } else if (intro->state == 3) {
        if (IsMainBrightnessTransitionActive(res)) {
            return;
        }
        if (!func_02094b4c(mgr)) {
            return;
        }
#if defined(jpn)
        intro->taskId = loader->QueueLoadFile(data_020f2e3b, NULL);
#else
        char fileName[16];
        sprintf(fileName, data_020f2cd4, bossId);
        intro->taskId = loader->QueueLoadFileInGP2(data_020f2ce4, fileName, NULL);
#endif
        intro->state = 4;
    } else if (intro->state == 4) {
        if (!loader->GetTaskStatus(intro->taskId)) {
            return;
        }
        if (loader->GetDetailedTaskStatus(intro->taskId) != 2) {
            func_ov004_0216fa48(intro);
            return;
        }
        void* fileData;
        unsigned int size;
        loader->GetLoadedFileByID(intro->taskId, &fileData, &size);
        if (fileData == NULL) {
            func_ov004_0216fa48(intro);
            return;
        }
#if defined(jpn)
        char name[16];
        sprintf(name, data_020f2e4d, bossId);
        const void* ptr = NULL;
        unsigned int len = 0;
        if (!GetFileInNarc(fileData, name, &ptr, &len, 0)) {
            return;
        }
        void* buf = func_02012d88(&data_02114e20, 0x400);
        if (buf == NULL) {
            func_ov004_0216fa48(intro);
            return;
        }
        SafeAllocator alloc;
        alloc.ResetAllocatorPointer();
        alloc.CreateTypeA(buf, 0x400);
        struct List020727d8 list;
        func_020727d8(&list);
        func_020728ac(&list, &alloc, (void*)ptr, len, 0, 0, 0);
        loader->RemoveTask(intro->taskId);
        intro->taskId = -1;
        void* entry = func_02072a68((struct TableA68*)&list, bossId);
#else
        void* buf = func_02012d88(&data_02114e20, 0x500);
        if (buf == NULL) {
            func_ov004_0216fa48(intro);
            return;
        }
        SafeAllocator alloc;
        alloc.ResetAllocatorPointer();
        alloc.CreateTypeA(buf, 0x500);
        struct Struct020dfc40 table;
        func_020dfc2c(&table);
        func_020dfc40(&table);
        func_020dfec0(&table, &alloc, fileData, size);
        loader->RemoveTask(intro->taskId);
        intro->taskId = -1;
        void* entry = (void*)func_020e0434((struct Container020e0310*)&table, bossId);
#endif
        if (entry == NULL) {
            alloc.Destroy();
            func_02012da4(&data_02114e20, buf);
            func_ov004_0216fa48(intro);
            return;
        }
        display->visible = 1;
        display->active = 1;
        func_02046574((struct Obj02046574*)display, 0, leader->name);
#if defined(jpn)
        func_0204500c(display, entry, 0);
#else
        func_0204500c(display, entry, 0, 0xe3);
#endif
        display->busy = 1;
        alloc.Destroy();
        func_02012da4(&data_02114e20, buf);
        intro->state = 5;
    } else if (intro->state == 5) {
        display->active = 1;
        if (display->busy == 0) {
            display->active = 0;
            func_02043124(display);
            func_ov004_0216fa48(intro);
        }
    }
}
