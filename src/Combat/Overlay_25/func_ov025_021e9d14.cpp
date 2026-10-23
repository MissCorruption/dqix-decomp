#include <globaldefs.h>
#include "GameState/GameState.h"

struct Obj0205eaa0;
struct Obj0203a48c;
struct Obj0203a588;
struct Obj02176150;

struct InitStruct02078484Struct {
    unsigned char f00;
    unsigned char pad01[0xf];
    unsigned char f10;
    unsigned char flags11;
    short f12;
    short objectId;
    short f16;
    short f18;
    short f1a;
    short f1c;
    short pad1e;
    int f20;
    int f24;
    int f28;
    Vector3fix offset;
    Vector3fix rotation;
    Vector3fix scale;
};

struct Damage021e9d14 {
    char pad0[0xc];
    short amount;
};

struct ActionNode021e9d14 {
    char pad0[0x14];
    struct Damage021e9d14* damage;
    char pad18[0x1c - 0x18];
    short targetId;
    unsigned short targetValue;
    unsigned short actorId;
    char pad22[0x24 - 0x22];
    unsigned short value;
    char pad26[0x30 - 0x26];
    struct ActionNode021e9d14* next;
};

struct Slot021e9d14 {
    char pad0[0x10];
    struct ActionNode021e9d14* head;
};

struct Gauge021e9d14 {
    char pad0[6];
    unsigned short value;
};

struct Combatant021e9d14 {
    char pad0[0x130];
    struct Gauge021e9d14* gauge;
};

struct Entry021e9d14 {
    char pad0[0xe];
    unsigned short value;
};

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f20(void* work);
extern "C" int func_ov025_021def24(void* work);
extern "C" void* func_ov000_02160f08(void* work);
extern "C" void* func_ov000_0215feb4(char* base, int threshold, int slot);
extern "C" struct Entry021e9d14* func_ov025_021dafd0(char* obj, int id);
extern "C" struct Obj0203a588* func_02039e70(void);
struct Vec3Int0203a48c;
extern "C" void func_0203a48c(Obj0203a48c*, int, Vec3Int0203a48c*, int, int, int);
extern "C" void* func_02057924(void);
extern "C" void func_02078484(struct InitStruct02078484Struct* p);
extern "C" void func_02057fb4(void* list, int id, void* config);
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern "C" void func_ov000_02176150(struct Obj02176150* obj, unsigned short val);

extern struct Obj0205eaa0 data_02108760;

// USA: func_ov025_021e9d14
extern "C" ARM void func_ov025_021e9d14(void) {
    void* work = func_ov000_02160130();
    struct Slot021e9d14* slot = (struct Slot021e9d14*)func_ov000_02160f20(work);
    if (func_ov025_021def24(work) != 0) {
        return;
    }
    GameState* battle = GameState::GetInstance();
    char* entries = (char*)func_ov000_02160f08(func_ov000_02160130());
    struct ActionNode021e9d14* node = slot->head;
    if (func_ov000_0215feb4((char*)node, 0, 5) != NULL) {
        return;
    }
    for (; node != NULL; node = node->next) {
        int id = node->actorId;
        unsigned short value = node->value;
        struct Entry021e9d14* entry = func_ov025_021dafd0(entries, id);
        GameObject* actor = battle->GetCombatantByIndex(id);
        if (actor == NULL) {
            continue;
        }
        if (node->damage != NULL) {
            int amount = -node->damage->amount;
            if (amount > 0) {
                struct Obj0203a48c* popups = (struct Obj0203a48c*)func_02039e70();
                Vector3fix pos = actor->obj3D_.position_;
                pos.y += actor->obj3D_.GetHeight();
                func_0203a48c(popups, amount, (Vec3Int0203a48c*)&pos, 3, 0, 0);
                void* list = func_02057924();
                struct InitStruct02078484Struct req;
                func_02078484(&req);
                req.offset.y += actor->obj3D_.GetHeight() / 2;
                req.objectId = id;
                func_02057fb4(list, 0x10, &req);
                func_0205eaa0(&data_02108760, 0x65, 0);
            }
        }
        int isPartyMember = (id >= 0 && id <= 3) ? 1 : 0;
        if (!isPartyMember && node->damage != NULL) {
            value = node->targetValue;
            entry = func_ov025_021dafd0(entries, node->targetId);
            actor = battle->GetCombatantByIndex(node->targetId);
        }
        if (entry != NULL && actor != NULL) {
            func_ov000_02176150((struct Obj02176150*)entry, value);
            entry->value = value;
            ((struct Combatant021e9d14*)actor)->gauge->value = value;
        }
    }
}
