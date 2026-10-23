#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

extern "C" void func_02094ab0(void);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(void* self);
extern "C" int func_02094a00(void);
extern "C" void func_020397c0(void* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a28b0(unsigned char* obj, int mask);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern "C" void func_020a0c0c(void);

extern int data_02114e20;

struct Obj021ac32c {
    char pad0[0xc];
    int field0xc;
    SafeAllocator allocator;
};

// USA: func_ov017_021ac32c
extern "C" ARM void func_ov017_021ac32c(struct Obj021ac32c* self) {
    void* ctrl = (void*)func_020421a0();
    func_02043204((char*)ctrl);
    func_02043124(ctrl);
    func_02094a00();
    func_02094ab0();
    GameState* battle = GameState::GetInstance();
    func_020397c0(battle->GetUnknownGameObject());

    void* p = self->allocator.GetSignedAllocator();
    if (p != NULL) {
        self->allocator.Destroy();
        func_02012da4((AllocatorUnion*)&data_02114e20, p);
        func_020a0c0c();
    }
    self->field0xc = 0;
    int flag = func_020100f8((char*)battle);
    if (flag == 0) return;
    func_020a28b0((unsigned char*)flag, 3);
}
