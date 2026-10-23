#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_0218d5c8(unsigned char* obj);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern "C" void func_020397c0(void* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a2794(void* obj);

extern int data_02114e20;

struct Obj_021ae760 {
    unsigned char pad0;
    unsigned char field1;
    unsigned char pad1[9];
    unsigned char fieldB;
    unsigned char pad2[0x20];
    SafeAllocator allocator;
};

// USA: func_ov017_021ae760
extern "C" ARM void func_ov017_021ae760(struct Obj_021ae760* self) {
    void* h = GetGameResources();
    self->field1 = 1;
    unsigned char flag = self->fieldB;
    if (flag != 0 && h != NULL) {
        func_ov017_0218d5c8((unsigned char*)h);
        void* p = self->allocator.GetSignedAllocator();
        if (p != NULL) {
            self->allocator.Destroy();
            func_02012da4((AllocatorUnion*)&data_02114e20, p);
        }
        self->fieldB = 0;
    }

    GameState* bs = GameState::GetInstance();
    GameObject* c = bs->GetUnknownGameObject();
    if (c != NULL) {
        func_020397c0(c);
    }
    int flagResult = func_020100f8((char*)bs);
    if (flagResult != 0) {
        func_020a2794((void*)flagResult);
    }

    if (h == NULL) return;
    ClearFlags04((GameResources*)h, 0x80);
}
