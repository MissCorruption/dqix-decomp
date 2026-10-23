#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Resource/TextQueue.h"
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "World/ZoneLootableRecord.h"
#include "Resource/GameResources.h"

struct Bytes02033b88;
struct Obj020397cc;
struct Obj02033b68;
struct Obj0205eaa0;
struct Vec3copy0202ec84;
struct Vec3Target0203a46c;
struct StructAt020473c8;
struct Container020dedd0 { unsigned int fields[4]; };
struct StructDE234_020de234 {
    int fields[4]; unsigned int low:10, mid:10, kind:8, unused:4;
};
struct State0207dfc8 { unsigned int words[28]; };
struct ResourceState021ae85c { char pad0[0x230]; State0207dfc8 spriteTables; };
struct Zone021ae85c {
#if defined(jpn)
    char pad0[0x620];
#else
    char pad0[0x600];
#endif
    Foo02048004 sprites[6];
#if defined(jpn)
    char pad930[0x2794 - 0x950];
#else
    char pad930[0x2754 - 0x930];
#endif
    Container020dedd0 container;
};
struct Controller021ae85c {
#if defined(jpn)
    char pad0[0x228];
#else
    char pad0[0x2d8];
#endif
    int field2d8; char pad2dc[0xa]; unsigned char field2e6;
};
struct Event021ae85c {
    unsigned char pad0, done; char pad2[6]; unsigned char stage, mode;
    unsigned short timer; short key; char pade[2]; int task;
    Vector3fix position; int angle, fade; Foo02048004* sprite; SafeAllocator allocator;
};
struct TextContext021ae85c {
    SafeAllocator allocator; char list[0x18]; Container020dedd0* container;
    int field30, field34;
};
extern "C" Zone021ae85c* func_02012fe4();
extern "C" void* func_0202ae18();
extern "C" int func_0202c540(void*);
extern "C" void func_ov017_021aeea8(Event021ae85c*);
extern "C" void func_02033b88(Bytes02033b88*, int);
extern "C" void func_020397cc(Obj020397cc*, int);
extern "C" void func_02033b68(Obj02033b68*, int);
extern "C" void func_0205eaa0(Obj0205eaa0*, int, int);
extern "C" StructDE234_020de234* func_020dedd0(Container020dedd0*, int);
extern "C" int func_020100a8(GameState*);
extern "C" unsigned short func_020de234(StructDE234_020de234*, int);
extern "C" void func_020397c0(void*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_0207dfc8(State0207dfc8*, State0207dfc8*);
extern "C" void func_0207df90(char*);
extern "C" void func_02047b30(void*, int, int, int);
extern "C" void func_0207dfac(char*);
extern "C" Controller021ae85c* func_020421a0();
extern "C" void __clear(void*, int);
extern "C" void* func_020de824(void*);
extern "C" void func_0207cbe8(char*);
extern "C" int func_0207d538(void*, int, int, char*, int);
extern "C" void* func_020d7a50();
extern "C" void* func_020100bc(GameState*);
extern "C" void func_0202ec84(void*, Vec3copy0202ec84*, int*, int*);
extern "C" void func_0203a46c(Vec3Target0203a46c*, int, int, int);
extern "C" void func_020473c8(StructAt020473c8*, int);
extern Obj0205eaa0 data_02108760;
#if defined(jpn)
#define data_ov017_021d79a8 data_ov017_021d80dc
#endif
extern const char data_ov017_021d79a8[];
extern AllocatorUnion data_02114e20;
static inline ResourceState021ae85c* ResourceStateBuffer021ae85c(GameResources* resources) {
    return (ResourceState021ae85c*)resources->unknown_2cc;
}

// USA: func_ov017_021ae85c
extern "C" ARM void func_ov017_021ae85c(Event021ae85c* self) {
    GameState* game = GameState::GetInstance();
    func_02012fe4();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    void* search = func_0202ae18();
    GameResources* resources = GetGameResources();
    if (func_0202c540(search)) {
        if (resources->unknown_flag_42e2) {
            func_ov017_021aeea8(self); self->done = 1; return;
        }
        if (self->mode != 1) {
            if (self->mode == 0) return;
            if (self->mode == 2) { self->done = 1; return; }
        }
    }
    if (self->stage == 0) {
        GameObject* actor = game->GetUnknownGameObject();
        if (!actor) { func_ov017_021aeea8(self); self->done = 1; return; }
        func_02033b88((Bytes02033b88*)actor, 0);
        func_020397cc((Obj020397cc*)actor, 1);
        self->timer = 5; self->stage = 1;
    } else if (self->stage == 1) {
        self->timer--;
        if (self->timer) return;
        GameObject* actor = game->GetUnknownGameObject();
        if (actor) func_02033b68((Obj02033b68*)actor, 8);
        func_0205eaa0(&data_02108760, 0x5b, 0);
        self->stage = 2; self->timer = 30;
    } else if (self->stage == 2) {
        self->timer--;
        if (self->timer) return;
        Zone021ae85c* zone = func_02012fe4();
        StructDE234_020de234* entry = func_020dedd0(&zone->container, self->key);
        if (entry) {
            self->sprite = &zone->sprites[func_020100a8(game)];
            func_02047230(self->sprite);
            char filename[0x80];
            sprintf(filename, data_ov017_021d79a8, (signed char)entry->kind, func_020de234(entry, 0));
            self->task = loader->QueueLoadFile(filename, 0);
        } else {
            func_ov017_021aeea8(self); self->done = 1;
            func_020397c0(game->GetUnknownGameObject()); return;
        }
        self->stage = 3;
    } else if (self->stage == 3) {
        if (!loader->GetTaskStatus(self->task)) return;
        void* file = 0; unsigned int length = 0;
        loader->GetLoadedFileByID(self->task, &file, &length);
        if (file) {
            void* buffer = func_02012d88(&data_02114e20, 0x100);
            if (buffer) {
                self->allocator.ResetAllocatorPointer();
                self->allocator.CreateTypeA(buffer, 0x100); self->allocator.Reset();
                func_02047230(self->sprite); func_0204719c(self->sprite);
                State0207dfc8 saved;
                func_0207dfc8(&ResourceStateBuffer021ae85c(resources)->spriteTables, &saved);
                func_0207df90((char*)&saved);
                func_02047b30(self->sprite, (int)file, length, (int)&self->allocator);
                func_0207dfac((char*)&saved);
            } else {
                func_ov017_021aeea8(self); self->done = 1;
                func_020397c0(game->GetUnknownGameObject());
                loader->RemoveTask(self->task); return;
            }
        }
        loader->RemoveTask(self->task);
        FontBankLoader* global = func_02094a00();
        func_02094b3c(global, 10);
        func_02094b30(global, 0x1f9, 0);
        self->stage = 4;
    } else if (self->stage == 4) {
        if (!func_02094b4c(func_02094a00())) return;
        func_020421a0();
        char text[0x80] = {};
        Zone021ae85c* zone = func_02012fe4();
        TextContext021ae85c context;
        context.allocator.ResetAllocatorPointer();
        func_020de824(context.list);
        func_0207cbe8((char*)&context); func_0207cbe8((char*)&context);
        context.container = &zone->container;
        if (func_0207d538(&context, 2, (unsigned short)self->key, text, 1))
#if defined(jpn)
            func_020d7e10(func_020d7a50(), text, 0, 0, 1);
#else
            func_020d7e10(func_020d7a50(), text, 0, 0, 1, 1);
#endif
        func_0205eaa0(&data_02108760, 14, 0);
        self->stage = 5; self->timer = 20; self->fade = 61;
    } else if (self->stage == 5) {
        self->timer--;
        int tick = game->GetTickCount();
        void* camera = func_020100bc(game);
        Vector3fix position = self->position;
        if (self->angle < 0x191e) self->angle += tick * 0x199;
        position.y += fix32sin(self->angle);
        int x, y;
        if (camera) {
            func_0202ec84(camera, (Vec3copy0202ec84*)&position, &x, &y);
        }
        func_0203a46c((Vec3Target0203a46c*)self->sprite, (x - 12) << 12, (y - 40) << 12, 0);
        func_020473c8((StructAt020473c8*)self->sprite, 1);
        if (!self->timer) { self->stage = 6; self->timer = 7; }
    } else if (self->stage == 6) {
        self->timer--;
        int tick = game->GetTickCount();
        void* camera = func_020100bc(game);
        Vector3fix position = self->position;
        position.y += fix32sin(self->angle);
        if (self->fade) {
            int x, y;
            if (camera) {
                func_0202ec84(camera, (Vec3copy0202ec84*)&position, &x, &y);
            }
            func_0203a46c((Vec3Target0203a46c*)self->sprite, (x - 12) << 12, (y - 40) << 12, 0);
            func_020473c8((StructAt020473c8*)self->sprite, 1);
            self->fade -= tick;
            self->sprite->field82 = self->fade > 31 ? 31 : self->fade;
            if (self->fade < 0) self->fade = 0;
        }
        if (!self->timer) { func_020421a0(); self->stage = 7; }
        else if (self->timer == 5) {
            GameObject* actor = game->GetUnknownGameObject();
            func_020397c0(actor); func_02033b68((Obj02033b68*)actor, 0);
        }
    } else if (self->stage == 7) {
        Controller021ae85c* controller = func_020421a0();
        controller->field2d8 = 0; controller->field2e6 = 1;
        func_02094ab0(func_02094a00());
        func_ov017_021aeea8(self); self->done = 1;
    }
}
