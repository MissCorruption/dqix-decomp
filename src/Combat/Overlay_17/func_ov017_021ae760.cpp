#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_0218d5c8(unsigned char* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a2794(void* arg0);

extern int data_02114e20;

struct Struct_ov017_021ae760 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[9];
    unsigned char unknown_b_;
    unsigned char unknown_c_[0x20];
    SafeAllocator unknown_2c_;
};

// USA: func_ov017_021ae760
extern "C" ARM void func_ov017_021ae760(struct Struct_ov017_021ae760* arg0) {
    void* var0 = GetGameResources();
    arg0->unknown_1_ = 1;
    unsigned char var1 = arg0->unknown_b_;
    if (var1 != 0 && var0 != NULL) {
        func_ov017_0218d5c8((unsigned char*)var0);
        void* var2 = arg0->unknown_2c_.GetSignedAllocator();
        if (var2 != NULL) {
            arg0->unknown_2c_.Destroy();
            func_02012da4((AllocatorUnion*)&data_02114e20, var2);
        }
        arg0->unknown_b_ = 0;
    }

    GameState* var3 = GameState::GetInstance();
    GameObject* var4 = var3->GetUnknownGameObject();
    if (var4 != NULL) {
        func_020397c0(var4);
    }
    int var5 = func_020100f8((char*)var3);
    if (var5 != 0) {
        func_020a2794((void*)var5);
    }

    if (var0 == NULL) return;
    ClearFlags04((GameResources*)var0, 0x80);
}
