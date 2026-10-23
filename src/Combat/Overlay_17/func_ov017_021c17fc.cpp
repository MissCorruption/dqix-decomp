#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/OverlayId.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { ArenaSize = 0x2d0fc, ScenePlanes = 0x14, SceneReady = 0x14f8, SceneSize = 0x14fc };
#else
enum { ArenaSize = 0x2e4c0, ScenePlanes = 0x1c, SceneReady = 0x14bc, SceneSize = 0x14c0 };
#endif

struct AllocatorUnion;
struct Obj020397cc;

extern "C" void func_020397cc(Obj020397cc* obj, int flag);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a28a0(unsigned char* obj, unsigned char mask);
extern "C" void func_020a28b0(unsigned char* obj, int mask);
extern "C" void func_020397c0(void* obj);
extern "C" void func_020a0cc4(unsigned int size);
extern "C" void func_020a0c0c(void);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_020a1940(unsigned int id);
extern "C" void func_020a1df8(int value);
extern "C" void func_020a1ef0(int value);
extern "C" void func_ov012_021843d4(void* scene);
extern "C" void func_ov012_02184884(void* scene, SafeAllocator* allocator);
extern "C" int func_ov012_02184acc(void* scene, unsigned int tick);
extern "C" void func_ov012_02185af0(void* scene);
extern "C" void func_020dc2d0(int mode);
extern "C" void func_ov017_021a5530(char* obj);
extern "C" void func_ov017_0218d77c(GameResources* res, int flag);
extern char data_02114e20;

struct Scene021c17fc {
    char pad0[ScenePlanes];
    int planes;
    char pad1[SceneReady - ScenePlanes - 4];
    unsigned char ready;
};

struct Task021c17fc {
    char pad0;
    unsigned char failed;
    char pad1[8 - 2];
    SafeAllocator allocator;
    unsigned char step;
    unsigned char restore;
    char pad2[0x20 - 0x1e];
    Scene021c17fc* scene;
};

extern "C" void func_ov017_021c1a24(Task021c17fc* task);

// USA: func_ov017_021c17fc
extern "C" ARM void func_ov017_021c17fc(Task021c17fc* task) {
    GameState* gs = GameState::GetInstance();
    GameResources* res = GetGameResources();
    GameObject* unknown = gs->GetUnknownGameObject();
    func_020397cc((Obj020397cc*)unknown, 1);
    SetFlags04(res, 0xc0);
    unsigned char* flags = (unsigned char*)func_020100f8((char*)gs);
    func_020a28a0(flags, 3);
    if (task->step == 0) {
        func_020a0cc4(ArenaSize);
        void* buffer = func_02012d88((AllocatorUnion*)&data_02114e20, ArenaSize);
        if (buffer == NULL) {
            func_020a0c0c();
            task->failed = 1;
            return;
        }
        task->allocator.CreateTypeA(buffer, ArenaSize);
        task->allocator.Reset();
#if !defined(jpn)
        if (task->restore) {
            func_020a1df8(3);
        }
#endif
        func_020a1940(OVERLAY_ID(12));
        func_020a1ef0(1);
        task->scene = (Scene021c17fc*)task->allocator.Allocate(SceneSize);
        func_ov012_021843d4(task->scene);
        func_ov012_02184884(task->scene, &task->allocator);
        task->step++;
        return;
    }
    if (task->step == 1) {
        if (func_ov012_02184acc(task->scene, gs->GetTickCount())) {
            task->step++;
        }
        return;
    }
    if (task->step == 2) {
        func_ov012_02185af0(task->scene);
        task->step++;
        return;
    }
    if (task->step != 3) {
        return;
    }
    unsigned char ready = task->scene->ready;
    *(volatile unsigned int*)0x4000000 = (task->scene->planes << 8) | (*(volatile unsigned int*)0x4000000 & ~0x1f00);
    func_ov017_021c1a24(task);
    func_020dc2d0(0);
    if (task->restore) {
        if (ready) {
            func_020397c0(unknown);
            func_020a28b0(flags, 3);
            ClearFlags04(res, 0xc0);
        } else {
            func_ov017_021a5530((char*)res);
        }
    } else {
        func_ov017_0218d77c(res, 1);
    }
    func_020a0c0c();
    task->failed = 1;
}
