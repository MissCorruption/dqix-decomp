#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"
#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" {
void func_0207dfc8(void *, void *);
void _ZN13SafeAllocator5ResetEv(void *);
void func_0207df50(void *);
void func_0207df90(void *);
void func_0207dfac(void *);
void func_02059f38(void *, void *);
void func_020407b4(void *, int, int, int);
int func_02098210(int, int);
unsigned short *func_02012fe4(void);
}

#if defined(jpn)
#define data_ov003_0217fdfa data_ov003_0217e613
#endif
extern const char data_ov003_0217fdfa[];
extern const char data_ov003_0217fe16[];

struct GO02158754 {
    char pad0[2];
    short f2;
};

struct PM02158754 {
    char pad0[4];
    short f4;
};

struct Ctrl02158754 {
    void *alloc;
    char pad4[0x100 - 4];
#if defined(jpn)
    char pad100[0xf3];
#else
    char pad100[0xf7];
#endif
    signed char f1f7;
    char pad1f8[0x208 - 0x1f8];
    unsigned char state;
    char pad209[3];
    int task;
    char st210[0x280 - 0x210];
    char obj280[0x32c - 0x280];
    int f32c;
};

#if defined(jpn)
enum { regionalOffset0 = 0x27c, regionalOffset1 = 0x860 };
#else
enum { regionalOffset0 = 0x2cc, regionalOffset1 = 0x840 };
#endif

// USA: func_ov003_02158754
extern "C" ARM int func_ov003_02158754(struct Ctrl02158754 *self) {
    BackgroundLoader *loader = BackgroundLoader::GetInstance();
    if (self->state == 0) {
        loader->AddFence();
        self->task  = loader->QueueLoadFile(data_ov003_0217fdfa, 0);
        self->state = self->state + 1;
    } else if (self->state == 1) {
        if (loader->GetTaskStatus(self->task) == 0) {
            return 0;
        }
        void *file        = 0;
        unsigned int size = 0;
        loader->GetLoadedFileByID(self->task, &file, &size);
        char *res = (char *) GetGameResources();
        func_0207dfc8(res + regionalOffset0, self->st210);
        _ZN13SafeAllocator5ResetEv((char *) self->alloc + 0x8c);
        func_0207df50(self->st210);
        func_0207df90(self->st210);
        Object3D *obj = (Object3D *) self->obj280;
        obj->Initialize();
        ObjectArchiveLoadInfo info;
        info.fileData  = file;
        info.unk_8     = size;
        info.allocator = (SafeAllocator *) ((char *) self->alloc + 0x8c);
        info.unk_10    = 1;
        obj->LoadFromCHRArchive(&info);
        GameState *gs         = GameState::GetInstance();
        Object3D *pm          = (Object3D *) gs->GetPartyMemberByIndex(self->f1f7);
        struct GO02158754 *go = (struct GO02158754 *) gs->GetGameObjectByIndex(self->f1f7 * 0xc + 0x14);
        unsigned short *d     = func_02012fe4();
        unsigned int id       = d[0];
        if (pm->IsVisible() && pm->GetInheritedAlpha() != 0 && id != 10000) {
            if (TestFlags04((GameResources*)res, 4) == 0 || ((struct PM02158754 *) pm)->f4 == 0) {
                func_02059f38(obj, (char *) pm + 0x44);
                const Vector3fix &sc2 = pm->GetScale();
                obj->SetScale(&sc2);
                obj->MaybeSetRegularAnimation(data_ov003_0217fe16, 9);
                obj->EnableFlag(0x40000);
            } else {
                if (go != 0 && func_02098210((int) ((char *) d + regionalOffset1), id) != 0) {
                    if (go->f2 == 0x2347 || go->f2 == 0x2348 || go->f2 == 0x2349) {
                        if (go->f2 == 0x2347) {
                            func_020407b4(obj, 0x2347 - 0x2200, 0x266, -13230);
                        } else if (go->f2 == 0x2348) {
                            func_020407b4(obj, -7823, 0x266, -13230);
                        } else if (go->f2 == 0x2349) {
                            func_020407b4(obj, 0x2d70, 0x266, -13230);
                        }
                        const Vector3fix &sc = pm->GetScale();
                        obj->SetScale(&sc);
                        obj->MaybeSetRegularAnimation(data_ov003_0217fe16, 9);
                        obj->EnableFlag(0x40000);
                    }
                }
            }
        } else {
            obj->EnableFlag(1);
        }
        func_0207dfac(self->st210);
        self->f32c = 1;
        loader->RemoveTask(self->task);
        self->task  = -1;
        self->state = 0;
        return 1;
    }
    return 0;
}
