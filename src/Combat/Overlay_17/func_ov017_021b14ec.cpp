#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

struct Struct_020979c0;
extern "C" void func_020979f4(struct Struct_020979c0* arg0);
extern "C" void func_020a1e54(int arg0);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);

extern int data_02114e20;
extern int data_ov017_021d83ec;

struct Struct_ov017_021b14ec {
    char unknown_0_[0x8];
    SafeAllocator unknown_8_;
    struct Struct_020979c0* unknown_1c_;
};

// USA: func_ov017_021b14ec
extern "C" ARM void func_ov017_021b14ec(struct Struct_ov017_021b14ec* arg0) {
    if (arg0->unknown_1c_ != NULL) func_020979f4(arg0->unknown_1c_);
    data_ov017_021d83ec = 0;

    void* var0 = arg0->unknown_8_.GetSignedAllocator();
    if (var0) {
        arg0->unknown_8_.Destroy();
        func_02012da4((AllocatorUnion*)&data_02114e20, var0);
    }

    func_020a1e54(1);
    func_020a1f4c(1);
    int var1 = func_020100f8((char*)GameState::GetInstance());
    if (var1 != 0) func_020a27ac((void*)var1);
}
