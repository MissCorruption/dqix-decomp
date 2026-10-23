#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" void func_0202e874(unsigned char* arg0, unsigned short arg1);
struct Struct_0202df68;
extern "C" void func_0202e9a4(struct Struct_0202df68* arg0, int arg1);
extern "C" void func_0202eab8(void* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern int data_02114e20;

struct Struct_02046f84 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x24 - 8];
    SafeAllocator unknown_24_;
    int unknown_38_;
};

// USA: func_02046f84
extern "C" ARM void func_02046f84(struct Struct_02046f84* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0200fb8c((int*)var0);
    void* var1 = func_020100bc(var0);
    func_0202e874((unsigned char*)var1, 0);
    func_0202e9a4((struct Struct_0202df68*)var1, 0xf000);
    func_0202eab8(var1);

    if (arg0->unknown_38_ == 0) {
        void* var2 = arg0->unknown_24_.GetSignedAllocator();
        if (var2 != NULL) {
            arg0->unknown_24_.Reset();
            arg0->unknown_24_.Destroy();
            func_02012da4((AllocatorUnion*)&data_02114e20, var2);
        }
    }
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
}
