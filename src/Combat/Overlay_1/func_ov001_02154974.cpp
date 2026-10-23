#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Node02154974 {
    unsigned char kind : 4;
    unsigned char index;
    short slot;
    char pad4[4];
    int key;
    char padc[0x11 - 0xc];
    char name[0x34 - 0x11];
    struct Node02154974* next;
};

struct Other02154974 {
    unsigned char type;
    char pad1[0x28 - 1];
    struct Other02154974* next;
};

struct Self02154974 {
#if defined(jpn)
    char pad0[0xcc];
#else
    char pad0[0xd0];
#endif
    struct Node02154974* nodes;
    struct Other02154974* others;
    char padd8[0xf8 - 0xd8];
    unsigned int mode : 27;
};

struct Global02154974 {
    char pad0[0x98];
    unsigned int flags;
};

struct Emitter02154974 {
    unsigned int flags;
    char pad4[0x18 - 4];
    GameObject* object;
};

struct Active02154974 {
    char pad0[0xd4];
    unsigned char active : 1;
};

extern "C" {
struct Global02154974* func_0203cf4c(void);
void func_0200fd48(GameState* gs, int id);
struct Emitter02154974* func_0203df78(void* list, int key);
int* func_0203dce4(void* list, int id);
int func_02040404(void* container, const char* name);
void func_0204039c(void* container, int index);
void func_02040504(int* entry);
void func_0203dd10(void* list, int index, int arg);
void func_ov001_0215acd4(int index);
}

extern "C" void* func_0203d004(void* list);

#if defined(jpn)
#define data_ov001_02164bd1 data_ov001_02166171
#endif
extern char data_ov001_02164bd1[];

// USA: func_ov001_02154974
extern "C" ARM void func_ov001_02154974(struct Self02154974* self) {
    GameState* gs = GameState::GetInstance();
    struct Global02154974* global = func_0203cf4c();
    GameResources* base = GetGameResources();
    struct Other02154974* other;
    struct Node02154974* node;
    struct Node02154974* walk;
    int i;

    for (other = self->others; other != 0; other = other->next) {
        for (walk = self->nodes; walk != 0; walk = walk->next) {
            if (walk->index != other->type) {
                continue;
            }
            if (walk->kind == 0 || walk->kind == 1 || walk->kind == 9 || walk->kind == 0xb || walk->kind == 0xc ||
                walk->kind == 0xd || walk->kind == 0xa || walk->kind == 4) {
                GameObject* obj = gs->GetGameObjectByIndex(walk->slot);
                if (obj != 0) {
                    Object3D* o = &obj->obj3D_;
                    unsigned char animFlags = o->animationFlags_;
                    const char* animName = (const char*)o->activeAnimationRecord_;
                    o->RemoveAnimationPackageByID(3);
                    if (o->MaybeSetRegularAnimation(animName, animFlags) == false) {
                        o->MaybeSetRegularAnimation(data_ov001_02164bd1, 0);
                    }
                }
            }
            break;
        }
    }

    i = 0;
    for (node = self->nodes; node != 0; node = node->next) {
        switch (node->kind) {
        case 5: {
            struct Emitter02154974* em = func_0203df78(global, node->key);
            if (em != 0) {
                em->flags &= ~0x10000;
            }
            break;
        }
        case 4: {
            func_0200fd48(gs, node->slot);
            struct Emitter02154974* em = func_0203df78(global, node->key);
            if (em != 0 && em->object != 0) {
                ((struct Active02154974*)em->object)->active = 0;
                em->flags &= ~0x10000;
            }
            break;
        }
        case 2:
        case 6:
        case 7:
        case 8:
            if (gs->GetGameObjectByIndex(node->slot) != 0) {
                func_0200fd48(gs, node->slot);
            }
            break;
        case 3: {
            int* entry = func_0203dce4(global, node->slot);
            if (entry != 0) {
                void* container = func_0203d004(global);
                func_0204039c(
                    container, func_02040404(container, node->name));
                func_02040504(entry);
                func_0203dd10(global, node->slot, i);
            }
            break;
        }
        case 13:
        case 12:
        case 11:
        case 10:
            break;
        }
        func_ov001_0215acd4(node->index);
    }

    if (self->mode == 0) {
        return;
    }
    if (self->mode & 1) {
        ClearFlags04(base, 8);
    }
    if (self->mode & 2) {
        ClearFlags04(base, 0x10);
    }
    if (self->mode & 4) {
        int j;
        for (j = 0; j < 4; j++) {
            GameObject* obj = gs->GetGameObjectByIndex(j);
            if (obj != 0) {
                obj->obj3D_.DisableFlag(1);
            }
        }
    }
    if (self->mode & 8) {
        ClearFlags04(base, 0x400);
    }
    if (self->mode & 0x20) {
        func_0203cf4c()->flags &= ~2;
    }
}
