#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" void* func_ov000_02160130(void);
extern "C" void func_ov000_0216d370(int arg0, int arg1, int arg2, int arg3);

extern unsigned int data_ov025_021ef9a4;
extern unsigned int data_ov025_021ef9c0;

struct Struct_ov025_021e9778_5 {
    char unknown_0_[0x1c0];
    int unknown_1c0_;
};

// USA: func_ov025_021e9a94
extern "C" ARM void func_ov025_021e9a94(struct Struct_ov025_021e9778_5* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_020100bc(var0);
    func_0200fb8c((int*)var0);
    func_ov000_02160130();
    if (data_ov025_021ef9a4 & 1) {
        data_ov025_021ef9a4 = (data_ov025_021ef9a4 | 8) & ~1;
    }
    if (!(data_ov025_021ef9a4 & 2)) {
        return;
    }
    if (arg0->unknown_1c0_ == 0) {
        func_ov000_0216d370((int)var1, 1, 1, 1);
    }
    data_ov025_021ef9c0 += 1;
    data_ov025_021ef9a4 &= ~2;
}
