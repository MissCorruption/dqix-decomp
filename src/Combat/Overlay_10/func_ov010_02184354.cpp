#include "Resource/ActionDataTables.h"
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Resource/MessageSystem.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define data_ov010_02184a80 data_ov010_02185b40
#define data_ov010_02184aa6 data_ov010_02185b54
#endif

extern AllocatorUnion data_02114e20;
extern int data_02108760;
extern const char data_ov010_02184a80[];
extern const char data_ov010_02184a95[];
extern const char data_ov010_02184aa6[];

struct Struct021842d8;
extern "C" void func_ov010_021842d8(struct Struct021842d8* obj);

struct Obj020397cc;
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);

struct List020727d8 {
    void* entries;
    short capacity;
    short count;
};
extern "C" void func_020727d8(struct List020727d8* list);
extern "C" void func_020728ac(void* list, void* alloc, void* buffer, int length, int a4, int a5, int a6);

struct TableA68;
extern "C" void* func_02072a68(struct TableA68* table, int key);

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern "C" void func_0205ebc0(void* obj, int a, int b);
extern "C" void func_0205ebfc(void* obj, int a, int b);
extern "C" void func_0205ebec(void* obj);

struct ColorHolder0204bd7c;
extern "C" unsigned short func_0204bd7c(struct ColorHolder0204bd7c* obj);

struct SearchEntry {
    unsigned short key;
    unsigned char pad2[0xc];
    unsigned char lowPair : 2;
    unsigned char kind : 4;
    unsigned char highPair : 2;
    unsigned char padf;
};
struct SearchTable;
extern "C" struct SearchEntry* func_02099950(struct SearchTable* table, int key);

extern "C" void* func_02033fa0(void* obj);
extern "C" void* func_02011584(void* obj);
extern "C" int func_020100a8(GameState* b);
extern "C" void* func_020120a0(char* base, unsigned int index);
extern "C" unsigned char func_020100b0(GameState* battleStruct);

struct Flags020340b4;
extern "C" void func_020340b4(struct Flags020340b4* p);

extern "C" void func_020e4bf4(void* obj, int combatantId);
extern "C" void func_02046380(void* global);
extern "C" int func_020457e0(void* global);

struct Foo0207df50;
extern "C" void func_0207df50(struct Foo0207df50* p);
extern "C" void func_0207df90(char* obj);
extern "C" void func_0207dfac(char* obj);

struct NodeList02057de0;
extern "C" void* func_02057924(void);
extern "C" int func_02057de0(struct NodeList02057de0* list, int a1, SafeAllocator* alloc, int a2, int a3);
extern "C" int func_02057fb4(void* list, int id, void* params);

struct Vector3i;

extern "C" void* func_02079e2c(char* p, int key);

struct Obj02048350;
extern "C" int func_02048350(struct Obj02048350* obj, int amount);

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" int func_0202c508(void* obj);

struct Vec3s02184354 { short x; short y; short z; };
extern "C" void func_ov017_021d360c(int a, unsigned char b, int c, struct Vec3s02184354 d);

struct MoveRecord02184354 {
    unsigned short id;
    unsigned char pad2[6];
    struct MoveInfo02184354* info;
};
struct MoveInfo02184354 {
    unsigned char pad0[0xc];
    unsigned char category : 4;
    unsigned char categoryHi : 4;
    unsigned char pad0d;
    unsigned char flagsLow : 6;
    unsigned char isSelfTargeting : 1;
    unsigned char flagHi : 1;
};

struct Actor02184354 {
    unsigned char pad0[0xc];
    unsigned char combatantId;
};
extern "C" MessageSystem* func_020421a0(void);

struct TableEntry02184354 {
    unsigned char pad0[8];
    unsigned int amount : 8;
    unsigned int amountHi : 24;
};

struct Vec3i02184354 { int x; int y; int z; };

struct Params02078484 {
    unsigned char f00;
    unsigned char pad01[0xf];
    unsigned char f10;
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
    short f12;
    short f14;
    short f16;
    short f18;
    short f1a;
    short f1c;
    short pad1e;
    int f20; int f24; int f28;
    int f2c; int f30; int f34;
    int f38; int f3c; int f40;
    int f44; int f48; int f4c;
};

struct Ctx02184354 {
    unsigned char state;
    unsigned char visible;
    unsigned short waitFrames;
    int taskId;
    int nodeId;
    struct List020727d8 list;
    SafeAllocator alloc;
};

// USA: func_ov010_02184354
extern "C" ARM int func_ov010_02184354(struct Ctx02184354* obj) {
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    MessageSystem* presenter = func_020421a0();
    GameState* bs = GameState::GetInstance();
    GameObject* caster;
    struct MoveRecord02184354* move;
#if defined(jpn)
    struct Actor02184354* actorInfo = *(Actor02184354**)((char*)GetGameResources() + 0x3988);
#else
    struct Actor02184354* actorInfo = *(Actor02184354**)((char*)GetGameResources() + 0x3ba8);
#endif
    caster = bs->GetPartyMemberByIndex(actorInfo->combatantId);
    GameObject* active = bs->GetPartyMemberByIndex(func_020100b0(bs));
    void* scene = func_0202ae18();
    void* ov17 = GetGameResources();
    move = (struct MoveRecord02184354*)func_02012fe4();
#if defined(jpn)
    char message[200];
#endif

    if (caster == NULL || active == NULL) {
        func_ov010_021842d8((struct Struct021842d8*)obj);
        return 1;
    }

    unsigned char state = obj->state;
    if (state == 0) {
        func_020397cc((struct Obj020397cc*)active, 1);
        void* buffer = func_02012d88(&data_02114e20, 0x7800);
        if (buffer == NULL) {
            func_ov010_021842d8((struct Struct021842d8*)obj);
            return 1;
        }
        obj->alloc.CreateTypeA(buffer, 0x7800);
#if defined(jpn)
        obj->taskId = loader->QueueLoadFile(data_ov010_02184a80, NULL);
#else
        obj->taskId = loader->QueueLoadFileInGP2(data_ov010_02184a80, data_ov010_02184a95, NULL);
#endif
        obj->state = 1;
    } else if (state == 1) {
        if (loader->GetTaskStatus(obj->taskId) == 0) return 0;
        if (loader->GetDetailedTaskStatus(obj->taskId) != 2) {
            func_ov010_021842d8((struct Struct021842d8*)obj);
            return 1;
        }
        void* filePtr;
        unsigned int fileLen;
        loader->GetLoadedFileByID(obj->taskId, &filePtr, &fileLen);
        func_020727d8(&obj->list);
        func_020728ac(&obj->list, &obj->alloc, filePtr, fileLen, 0, 0, 0);
        loader->RemoveTask(obj->taskId);

        unsigned short* slot = (unsigned short*)func_020120a0((char*)bs, func_020100a8(bs));
        if (slot == NULL) {
            func_ov010_021842d8((struct Struct021842d8*)obj);
            return 1;
        }
        struct MoveInfo02184354* info = move->info;
        if (info == NULL) {
            func_ov010_021842d8((struct Struct021842d8*)obj);
            return 1;
        }

        unsigned char visible = 1;
        obj->visible = visible;
        if (info->category == 0) {
            void* colour = func_02033fa0(caster);
            if (colour != NULL) {
                struct SearchTable* table = (struct SearchTable*)func_02011584(bs);
                struct SearchEntry* entry = func_02099950(table,
                    func_0204bd7c((struct ColorHolder0204bd7c*)colour));
                if (entry != NULL) {
                    if (entry->kind != 0) obj->visible = 0;
                }
            }
        } else {
            struct MoveInfo02184354* self = move->info;
            if (self != NULL) {
                if (self->isSelfTargeting == 0) visible = 0;
                obj->visible = visible;
            }
        }

        int key;
        if (obj->visible == 0) {
            obj->state = 3;
            key = 2;
        } else if (*slot != 0) {
            obj->state = 2;
            key = 1;
        } else {
            key = 0;
            obj->state = 4;
            func_0205eaa0((struct Obj0205eaa0*)&data_02108760, 0x64, key);
        }

        void* entry = func_02072a68((struct TableA68*)&obj->list, (short)key);
#if defined(jpn)
        sprintf(message, (const char*)entry, *(char**)((char*)caster + 0x134));
        func_0204500c(presenter, message, 0);
        presenter->active = 1;
#else
        struct Vec3i02184354 casterObj;
        func_020e4bf4(&casterObj, actorInfo->combatantId);
        func_02046380(presenter);
        *(void**)presenter = &casterObj;
        func_0204500c(presenter, (const char*)entry, 0, 0xe3);
        presenter->active = 1;
#endif
    } else if (state == 2) {
#if defined(jpn)
        if (presenter->active != 0) return 0;
#else
        if (presenter->active != 0) return 0;
#endif
        if (func_020457e0(presenter) == 0) {
            void* entry = func_02072a68((struct TableA68*)&obj->list, 0);
#if defined(jpn)
            sprintf(message, (const char*)entry, *(char**)((char*)caster + 0x134));
            func_0204500c(presenter, message, 0);
            presenter->active = 1;
#else
            struct Vec3i02184354 casterObj;
            func_020e4bf4(&casterObj, actorInfo->combatantId);
            func_02046380(presenter);
            *(void**)presenter = &casterObj;
            func_0204500c(presenter, (const char*)entry, 0, 0xe3);
            presenter->active = 1;
#endif
            func_0205eaa0((struct Obj0205eaa0*)&data_02108760, 0x64, 0);
            unsigned short* slot = (unsigned short*)func_020120a0((char*)bs, func_020100a8(bs));
            if (slot != NULL) *slot = 0;
            obj->state = 4;
        } else {
            func_ov010_021842d8((struct Struct021842d8*)obj);
            return 1;
        }
    } else if (state == 4) {
        obj->taskId = loader->QueueLoadFile(data_ov010_02184aa6, NULL);
        obj->state = 5;
        obj->waitFrames = 0;
    } else if (state == 5) {
        if (loader->GetTaskStatus(obj->taskId) == 0) return 0;
        if (loader->GetDetailedTaskStatus(obj->taskId) != 2) {
            func_ov010_021842d8((struct Struct021842d8*)obj);
            return 1;
        }
        if (obj->waitFrames < 0xf) {
            obj->waitFrames = obj->waitFrames + 1;
            return 0;
        }
        func_0205ebc0(&data_02108760, 0x74, 0x74);
        func_0205ebfc(&data_02108760, 0, 0);

        void* filePtr;
        unsigned int fileLen;
        loader->GetLoadedFileByID(obj->taskId, &filePtr, &fileLen);

#if defined(jpn)
        char* stage = (char*)ov17 + 0x27c;
#else
        char* stage = (char*)ov17 + 0x2cc;
#endif
        struct Vec3i02184354 pos = *(struct Vec3i02184354*)((char*)caster + 0x44);
        func_0207df50((struct Foo0207df50*)(stage + 0xc40));
        func_0207df90(stage + 0xc40);
        void* nodes = func_02057924();
        func_02057de0((struct NodeList02057de0*)nodes, 0x11, &obj->alloc,
                                      (int)filePtr, (int)fileLen);
        func_0207dfac(stage + 0xc40);

        struct Vec3i02184354 scale;
        scale.x = 0x10a;
        scale.y = 0x10a;
        scale.z = 0x10a;

        struct Params02078484 params;
        params.f00 = 0;
        params.f10 = 1;
        params.f12 = 0;
        params.f14 = -1;
        params.f16 = -1;
        params.f18 = -1;
        params.f1a = -1;
        params.f1c = -0x1000;
        params.f20 = 0;
        params.f24 = 0;
        params.f28 = 0;
        params.f2c = 0;
        params.f30 = 0;
        params.f34 = 0;
        params.f38 = 0;
        params.f3c = 0;
        params.f40 = 0;
        params.f44 = 0x1000;
        params.f48 = 0x1000;
        params.f4c = 0x1000;
        params.b0 = 0;
        params.b1 = 0;
        params.b2 = 1;
        params.b3 = 0;
        params.b4 = 0;
        params.b5 = 0;
        params.b6 = 0;
        params.b7 = 0;

        *(Vector3i*)&params.f2c = *(Vector3i const*)&pos.x;
        *(Vector3i*)&params.f44 = *(Vector3i const*)&scale.x;
        obj->nodeId = func_02057fb4(nodes, 0x11, &params);

        struct Vec3s02184354 anchor;
        anchor.x = (short)(pos.x >> 4);
        anchor.y = (short)(pos.y >> 4);
        anchor.z = (short)(pos.z >> 4);

        if (func_0202c508(scene) != 0) {
            unsigned short* slot = (unsigned short*)func_020120a0((char*)bs, func_020100a8(bs));
            if (slot != NULL) {
                slot[0] = move->id;
                slot[1] = anchor.x;
                slot[2] = anchor.y;
                slot[3] = anchor.z;
            }
        }

        struct TableEntry02184354* row =
            (struct TableEntry02184354*)func_02079e2c((char*)func_020797dc(), 0xd2);
        if (row != NULL) {
            func_02048350((struct Obj02048350*)caster, row->amount);
        }
        GameObject* target = bs->GetUnknownGameObject();
        if (target != NULL) {
            func_020340b4((struct Flags020340b4*)target);
        }
        func_ov017_021d360c(0, func_020100a8(bs), move->id, anchor);
        obj->state = 3;
    } else if (state == 3) {
        GameState* now = GameState::GetInstance();
        int finished = 0;
        if (obj->visible != 0) {
#if defined(jpn)
            if (now->GetGameObjectByIndex(obj->nodeId) == NULL && presenter->active == 0) {
#else
            if (now->GetGameObjectByIndex(obj->nodeId) == NULL && presenter->active == 0) {
#endif
                finished = 1;
            }
        } else {
#if defined(jpn)
            if (presenter->active == 0) finished = 1;
#else
            if (presenter->active == 0) finished = 1;
#endif
        }
        if (finished != 0) {
            func_ov010_021842d8((struct Struct021842d8*)obj);
            func_0205ebec(&data_02108760);
            return 1;
        }
    }
    return 0;
}
