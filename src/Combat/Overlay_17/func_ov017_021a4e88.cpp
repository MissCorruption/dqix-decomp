#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

typedef Vector3fix Vec3_021a4e88;

struct Shape021a4e88 {
    Vec3_021a4e88 center;
    int radius;
};

struct Zone021a4e88 {
    int id;
    int maxX;
    int maxZ;
    int minX;
    int minZ;
    Zone021a4e88* next;
};

struct Info021a4e88 {
    char pad0[0xb];
    unsigned char linkKey;
    char padc[0x40 - 0xc];
    Zone021a4e88* zones;
    char pad44[0x5c - 0x44];
    Shape021a4e88* shape;
};

struct Entry021a4e88 {
    unsigned int flags;
};

struct Obj021a4e88 {
    char pad0[0x44];
    Vec3_021a4e88 pos;
    Vec3_021a4e88 rot;
};

struct Res021a4e88 {
#if defined(jpn)
    char pad0[0x3e60];
#else
    char pad0[0x4080];
#endif
    int busy;
};

extern "C" void* func_0203cf4c(void);
extern "C" void __clear(void* p, int n);
struct EntryList_203dce4;
extern "C" Entry021a4e88* func_0203dce4(EntryList_203dce4*, int);
extern "C" void func_02040648(unsigned int*);
extern "C" void func_02040658(unsigned int*);
extern "C" void func_02040bcc(char*);
struct Vec3_020406f8;
struct Node020406f8;
extern "C" void func_020406f8(Vec3_020406f8* out, Node020406f8* n);
struct S02040538;
extern "C" Info021a4e88* func_02040538(S02040538*);
extern "C" Entry021a4e88* func_0203df78(void* list, int key);
extern "C" int func_020535c8(signed char*);
struct Vec3;
extern "C" short func_ov017_021a4700(Vec3*, int, Vec3*);
extern "C" unsigned char* func_02040528(int*);
int fix32abs(int x);

static inline short GetAngleToEntry(Vec3_021a4e88* pos, int base, Entry021a4e88* e) {
    Vec3_021a4e88 cur;
    func_020406f8((Vec3_020406f8*)&cur, (Node020406f8*)e);
    return func_ov017_021a4700((Vec3*)pos, base, (Vec3*)&cur);
}

// USA: func_ov017_021a4e88
extern "C" ARM int func_ov017_021a4e88(int checkKind, unsigned short* outId) {
    GameState* gs = GameState::GetInstance();
    void* list = func_0203cf4c();
    Res021a4e88* res = (Res021a4e88*)GetGameResources();
    Obj021a4e88* obj = (Obj021a4e88*)gs->GetUnknownGameObject();
    if (obj == NULL) {
        return -1;
    }
    Vec3_021a4e88 pos = obj->pos;
    Vec3_021a4e88 rot = obj->rot;
    int result = -1;
    int bestAngle = 0x3244;
    int range = 0x1c00;
    unsigned short ids[0x20];
    __clear(ids, sizeof(ids));
    int bestIdx = -1;
    short best = 0x3244;
    for (int i = 0; i < 0x20; i++) {
        Entry021a4e88* e = func_0203dce4((EntryList_203dce4*)list, i);
        if (e == NULL) {
            continue;
        }
        func_02040648((unsigned int*)e);
        int hidden;
        if (e->flags & 0x40000) {
            hidden = 1;
        } else {
            hidden = 0;
        }
        e->flags &= ~0x40000;
        Vec3_021a4e88 epos = ((Vec3_021a4e88 (*)(Entry021a4e88*))func_020406f8)(e);
        int inZone = 0;
        int reach = 0x1800;
        Info021a4e88* info = func_02040538((S02040538*)e);
        if (info != NULL) {
            if (info->shape != NULL) {
                Vector3fix_Add(&epos, &info->shape->center, &epos);
                reach = info->shape->radius + 0x1000;
                range = info->shape->radius + 0x1400;
            }
            for (Zone021a4e88* z = info->zones; z != NULL; z = z->next) {
                if (pos.x < z->maxX && pos.z < z->maxZ && pos.x > z->minX && pos.z > z->minZ) {
                    ids[i] = z->id;
                    inZone = 1;
                    break;
                }
            }
        }
        if (inZone == 0) {
            if (reach < fix32abs(pos.x - epos.x)) {
                continue;
            }
            if (reach < fix32abs(pos.z - epos.z)) {
                continue;
            }
        }
        if (hidden) {
            e->flags |= 0x40000;
        }
        func_02040658((unsigned int*)e);
        func_02040bcc((char*)e);
        if (info->linkKey != 0) {
            Entry021a4e88* link = func_0203df78(list, info->linkKey);
            if (link != NULL) {
                func_02040658((unsigned int*)link);
                func_02040bcc((char*)link);
                link->flags |= 0x20000;
            }
        }
        if ((e->flags & 0x200) || res->busy != 0) {
            continue;
        }
        if (func_020535c8((signed char*)obj)) {
            continue;
        }
        int angle = (short)fix32abs(GetAngleToEntry(&pos, (short)rot.y, e));
        if (angle > best) {
            continue;
        }
        if (inZone) {
            result = i;
            bestIdx = i;
            best = angle;
            continue;
        }
        unsigned char* data = func_02040528((int*)e);
        if (checkKind == 0 || data[2] == 1) {
            continue;
        }
        if (Vector3fix_Distance(&pos, &epos) < range && angle < 0x3244 && angle < bestAngle) {
            bestAngle = angle;
            result = i;
            bestIdx = i;
            best = angle;
        }
    }
    if (bestIdx >= 0) {
        *outId = ids[bestIdx];
    }
    return result;
}
