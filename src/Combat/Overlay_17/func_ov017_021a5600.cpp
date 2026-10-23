#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#define REG_DISPCNT (*(volatile unsigned int*)0x04000000)
struct Obj020397cc { char padding[0xb2]; short field_b2; };
struct FlagWord02046708;
struct ListHead02046b60;
struct SceneOptions021a5600 {
    unsigned char flag;
    char padding[3];
    int field4, field8;
};
#if defined(jpn)
enum { SceneDisplayOffset = 0x34, SceneOptionsOffset = 0x2364,
       SceneSize = 0x2378, SceneHeapSize = 0x293b8, SceneReservationSize = 0x2abd8 };
#else
enum { SceneDisplayOffset = 0x4c, SceneOptionsOffset = 0x253c,
       SceneSize = 0x2550, SceneHeapSize = 0x2a590, SceneReservationSize = 0x2bdb0 };
#endif
struct BattleState021a5600 {
    unsigned char type, complete;
    char padding2[6];
    int state;
    SafeAllocator allocator;
    unsigned char option20, option21;
    char padding22[2];
    SceneOptions021a5600 options;
};
extern "C" void func_0202738c(unsigned char*, int, int, int);
extern "C" void func_02027304(unsigned char*, int);
extern "C" void func_020a0cc4(int);
extern "C" void func_020a0c0c();
extern "C" void func_ov002_0215505c(char*);
extern "C" void func_ov002_02154d40(char*, SafeAllocator*);
extern "C" int func_ov002_02155960(char*, int);
extern "C" void func_ov002_021556fc(char*);
extern "C" void func_ov017_021a55b0(BattleState021a5600*);
extern "C" void func_ov017_02191108(GameResources*, int, int, int, int);
extern "C" FlagWord02046708* func_020d6c00();
extern "C" void func_020397cc(Obj020397cc*, int);
extern "C" unsigned char* func_020100f8(char*);
extern "C" void func_020a28a0(unsigned char*, unsigned char);
extern "C" void func_020a28b0(unsigned char*, int);
extern "C" void func_02027288(unsigned char*, int);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_020a1df8(int);
extern "C" void func_020a1ef0(int);
extern "C" void func_ov002_021556ec(void*, int, int);
extern "C" int func_02046b60(ListHead02046b60*, int);
extern "C" void func_020397c0(void*);
extern "C" void func_0202ac74();
extern "C" int func_02046708(FlagWord02046708*, unsigned int);
extern "C" void func_ov017_021a01bc(unsigned char*);
extern "C" void func_02039830(void*);
extern "C" void func_ov017_021a5974(char*);
extern AllocatorUnion data_02114e20;
extern char* data_ov017_021d83ac;
// USA: func_ov017_021a5600
extern "C" ARM void func_ov017_021a5600(BattleState021a5600* self) {
    GameState* game = GameState::GetInstance();
    GameResources* resources = GetGameResources();
    Obj020397cc* actor = (Obj020397cc*)game->GetUnknownGameObject();
    FlagWord02046708* flags = func_020d6c00();
    func_020397cc(actor, 1);
    actor->field_b2 = 0;
    SetFlags04(resources, 0xc0);
    unsigned char* action = func_020100f8((char*)game);
    func_020a28a0(action, 3);
    int ticks = game->GetTickCount();
    if (ticks < 0) ticks = 1;
    if (self->state == 0) {
        unsigned char* stopwatch = (unsigned char*)resources->unknown_ptr_36d0;
        func_02027288(stopwatch, -1);
        func_0202738c(stopwatch, 1, 2, -1);
        func_020a0cc4(SceneReservationSize);
        void* memory = func_02012d88(&data_02114e20, SceneHeapSize);
        if (!memory) {
            func_020a0c0c();
            self->complete = 1;
        } else {
            self->allocator.CreateTypeA(memory, SceneHeapSize);
            self->allocator.Reset();
            func_020a1df8(2);
            func_020a1ef0(1);
            data_ov017_021d83ac = (char*)self->allocator.Allocate(SceneSize);
            func_ov002_0215505c(data_ov017_021d83ac);
            func_ov002_021556ec(data_ov017_021d83ac, self->option20, self->option21);
            func_ov002_02154d40(data_ov017_021d83ac, &self->allocator);
            SceneOptions021a5600 options = self->options;
            char* scene = data_ov017_021d83ac;
            *reinterpret_cast<unsigned char*>(scene + SceneOptionsOffset) = options.flag;
            *reinterpret_cast<int*>(scene + SceneOptionsOffset + 4) = options.field4;
            *reinterpret_cast<int*>(scene + SceneOptionsOffset + 8) = options.field8;
            ++self->state;
        }
    } else if (self->state == 1) {
        if (func_ov002_02155960(data_ov017_021d83ac, ticks)) ++self->state;
    } else if (self->state == 2) {
        func_ov002_021556fc(data_ov017_021d83ac);
        FontBankLoader* music = func_02094a00();
        func_02094b40(music);
        func_02094ab0(music);
        func_02094b34(music, 5000, 0x6f, 1, 1);
        ++self->state;
    } else if (self->state == 3) {
        unsigned int layer = *reinterpret_cast<unsigned int*>(data_ov017_021d83ac + SceneDisplayOffset);
        REG_DISPCNT = (layer << 8) | (REG_DISPCNT & ~0x1f00);
        data_ov017_021d83ac = 0;
        func_ov017_021a55b0(self);
        int clear = 1;
        ListHead02046b60* list = (ListHead02046b60*)resources->unknown_ptr_array_36fc[0];
        if (list && (func_02046b60(list, 2) || func_02046b60(list, 47))) clear = 0;
        if (clear) {
            func_020a28b0(action, 3);
            ClearFlags04(resources, 0xc0);
            func_020397c0(actor);
        }
        func_ov017_02191108(resources, 1, 1, 0, 1);
        func_0202ac74();
        func_020a0c0c();
        if (!func_02046708(flags, 0x100000)) {
            unsigned char* stopwatch = (unsigned char*)resources->unknown_ptr_36d0;
            func_0202738c(stopwatch, 0, 2, -1);
            func_02027304(stopwatch, -1);
        }
        func_ov017_021a01bc((unsigned char*)resources);
        func_020397c0(actor);
        func_02039830(actor);
        self->complete = 1;
        func_ov017_021a5974((char*)self);
    }
}
