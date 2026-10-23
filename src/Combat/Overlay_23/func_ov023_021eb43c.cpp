#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0205d0e0(void* arg0, int arg1);
extern "C" void func_ov023_021ecbe8(void* arg0);
extern "C" void func_ov023_021ece9c(void* arg0);

struct Struct_ov023_021fe0f0 { unsigned int unknown_0_; unsigned int unknown_4_; };
extern struct Struct_ov023_021fe0f0 data_ov023_021fe0f0[];

// USA: func_ov023_021eb43c
extern "C" ARM void func_ov023_021eb43c(void* arg0) {
    unsigned int var0 = GameState::GetInstance()->GetTickCount();
    if (var0 == 0) var0 = 1;
    if (*((unsigned char*)arg0 + 0x431) != 0) {
        func_0205d0e0((char*)arg0 + 0xc4, var0);
    }
    unsigned char var1 = *((unsigned char*)arg0 + 0x431);
    if (data_ov023_021fe0f0[var1].unknown_0_ == 0) return;
    struct Struct_ov023_021fe0f0* var2 = &data_ov023_021fe0f0[var1];
    void* var3 = (char*)arg0 + ((int)var2->unknown_4_ >> 1);
    void (*var4)(void*);
    if (var2->unknown_4_ & 1) {
        var4 = *(void(**)(void*))((char*)*(void**)var3 + var2->unknown_0_);
    } else {
        var4 = (void(*)(void*))var2->unknown_0_;
    }
    var4(var3);
    func_ov023_021ecbe8(arg0);
    func_ov023_021ece9c(arg0);
}
