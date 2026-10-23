#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

extern "C" void func_02094ab0(void);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(void* arg0);
extern "C" int func_02094a00(void);
extern "C" void func_020397c0(void* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_020a0c0c(void);

extern int data_02114e20;

struct Struct_ov017_021ac32c {
    char unknown_0_[0xc];
    int unknown_c_;
    SafeAllocator unknown_10_;
};

// USA: func_ov017_021ac32c
extern "C" ARM void func_ov017_021ac32c(struct Struct_ov017_021ac32c* arg0) {
    void* var0 = (void*)func_020421a0();
    func_02043204((char*)var0);
    func_02043124(var0);
    func_02094a00();
    func_02094ab0();
    GameState* var1 = GameState::GetInstance();
    func_020397c0(var1->GetUnknownGameObject());

    void* var2 = arg0->unknown_10_.GetSignedAllocator();
    if (var2 != NULL) {
        arg0->unknown_10_.Destroy();
        func_02012da4((AllocatorUnion*)&data_02114e20, var2);
        func_020a0c0c();
    }
    arg0->unknown_c_ = 0;
    int var3 = func_020100f8((char*)var1);
    if (var3 == 0) return;
    func_020a28b0((unsigned char*)var3, 3);
}
