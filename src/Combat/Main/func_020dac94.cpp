#if defined(jpn)
enum { RegionalSize = 0xe0 };
#else
enum { RegionalSize = 0xe4 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void func_020a0cc4(unsigned int);
extern "C" void func_020a0c0c(void);
extern "C" int func_ov003_0217ce3c(void*);
extern "C" int func_ov017_021959b4(void);
extern "C" int func_ov003_0217daf0(void*);
extern "C" void func_ov003_0217cd24(void*, void*);
extern "C" void func_020dae08(void*);

struct Struct02012dd0;
extern "C" unsigned int func_02012dd0(struct Struct02012dd0* self);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern AllocatorUnion data_02114e20;

extern "C" void func_020a28b0(unsigned char* obj, int mask);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27b8(unsigned char* obj);
extern "C" void func_020a27ac(void* obj);
extern "C" void func_020397c0(void* obj);
extern "C" void func_020a1df8(int id);
extern "C" void func_020daeb0(void* obj);

struct Obj020397cc;
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);

struct EncounterState020dac94 {
    char pad0;
    unsigned char flag1;
    char pad2[0xa];
    void* field0xc;
    int state;
    SafeAllocator allocator;
};

// USA: func_020dac94
extern "C" ARM void func_020dac94(void* objIn, void*) {
    struct EncounterState020dac94* obj = (struct EncounterState020dac94*)objIn;
    GameState* battle = GameState::GetInstance();
    int state = obj->state;
    if (state == 0) {
        SetFlags04(GetGameResources(), 0xc0);
        unsigned int max = func_02012dd0((struct Struct02012dd0*)&data_02114e20);
        if (max < 0x6000) {
            func_020a0cc4(0x6000);
        }
        void* buf = func_02012d88(&data_02114e20, 0x6000);
        if (buf == NULL) {
            func_020a0c0c();
            obj->flag1 = 1;
            return;
        }
        obj->allocator.CreateTypeA(buf, 0x6000);
        obj->allocator.Reset();
        void* mem = obj->allocator.Allocate(RegionalSize);
        obj->field0xc = mem;
        if (mem == NULL) {
            func_020a0c0c();
            obj->flag1 = 1;
            return;
        }
        func_020a1df8(3);
        func_ov003_0217daf0(obj->field0xc);
        func_ov003_0217cd24(obj->field0xc, &obj->allocator);
        GameObject* c = battle->GetUnknownGameObject();
        func_020397cc((struct Obj020397cc*)c, 1);
        int flagResult = func_020100f8((char*)battle);
        func_020a27b8((unsigned char*)flagResult);
        obj->state = 1;
        return;
    }
    if (state == 1) {
        void* v = obj->field0xc;
        if (func_ov003_0217ce3c(v) == 0) {
            obj->state = 2;
        }
        if (func_ov017_021959b4() != 0) {
            func_020daeb0(objIn);
            obj->state = 3;
        }
        return;
    }
    if (state != 2) {
        return;
    }
    func_020dae08(objIn);
    GameObject* c = battle->GetUnknownGameObject();
    func_020397c0(c);
    int flagResult = func_020100f8((char*)battle);
    func_020a27ac((void*)flagResult);
    func_020a28b0((unsigned char*)flagResult, 2);
    ClearFlags04(GetGameResources(), 0xc0);
    obj->state = -1;
}
