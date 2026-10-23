#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern AllocatorUnion data_02114e20;

extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_020397c0(void* arg0);

extern "C" void* func_02057924();
extern "C" void func_02057f00(void* arg0, int arg1);
extern "C" void func_ov010_021842a0(void* arg0);

struct Struct_ov010_021842d8 {
    unsigned char unknown_0_[4];
    int unknown_4_;
    unsigned char unknown_8_[0xc];
    SafeAllocator unknown_14_;
};

// USA: func_ov010_021842d8
extern "C" ARM void func_ov010_021842d8(struct Struct_ov010_021842d8* arg0) {
    func_02057f00(func_02057924(), 0x11);
    void* var0 = arg0->unknown_14_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_14_.Destroy();
        func_02012da4(&data_02114e20, var0);
    }
    if (arg0->unknown_4_ >= 0) {
        int var1 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var1))->RemoveTask((int)(arg0->unknown_4_));
        arg0->unknown_4_ = -1;
    }
    GameObject* var2 = GameState::GetInstance()->GetUnknownGameObject();
    if (var2 != NULL) {
        func_020397c0(var2);
    }
    func_ov010_021842a0(arg0);
}
