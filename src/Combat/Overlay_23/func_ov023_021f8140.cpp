#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0204c8f0;
struct Struct_ov023_021f8140 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0xe5 - 0xd];
    unsigned char unknown_e5_;
};

extern "C" void func_0204c87c(void* arg0, int arg1);
extern "C" void func_0204c8f0(struct Struct_0204c8f0* arg0);
extern "C" void func_ov023_021f86fc(void* arg0, void* arg1);

// USA: func_ov023_021f8140
extern "C" ARM void func_ov023_021f8140(struct Struct_ov023_021f8140* arg0, void* arg1) {
    if (arg0->unknown_c_ & 0x8) return;
    int var0 = GameState::GetInstance()->GetTickCount();
    func_0204c87c((char*)arg0 + 0x20, var0);
    func_0204c8f0((struct Struct_0204c8f0*)((char*)arg0 + 0x20));
    if (!(arg0->unknown_e5_ & 0x4)) return;
    func_ov023_021f86fc(arg0, arg1);
}
