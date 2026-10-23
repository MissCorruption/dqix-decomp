#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" int func_0200fb8c(int* arg0);
int IsSubBrightnessTransitionActive(GameResources*);

struct Struct_02074bf4;
extern "C" void func_02074bf4(struct Struct_02074bf4*);

struct Struct_0208ba54;
extern "C" void func_0208ba54(struct Struct_0208ba54*);

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
extern "C" void func_020dc2d0(int);

struct Struct_0208d340 {
    char unknown_0_[0xb8];
    int unknown_b8_;
    char unknown_bc_[0xd5 - 0xbc];
    unsigned char unknown_d5_;
    char unknown_d6_[0xda - 0xd6];
    unsigned short unknown_da_;
};

// USA: func_0208d340
extern "C" ARM void func_0208d340(struct Struct_0208d340* arg0) {
    int var0 = func_0200fb8c((int*)GameState::GetInstance());

    if (arg0->unknown_d5_ == 0) {
        if (!(arg0->unknown_da_ & 0x10)) {
            SetSubBrightness((GameResources*)var0, -16, 8);
        }
        arg0->unknown_d5_ = arg0->unknown_d5_ + 1;
        return;
    }
    if (arg0->unknown_d5_ == 1) {
        if (IsSubBrightnessTransitionActive((GameResources*)var0) == 0) {
            arg0->unknown_d5_ = arg0->unknown_d5_ + 1;
        }
        return;
    }
    if (arg0->unknown_d5_ == 2) {
        arg0->unknown_da_ = arg0->unknown_da_ & ~4;
        func_02074bf4((struct Struct_02074bf4*)((char*)arg0 + 0x2c));
        func_020dc2d0(0);
        arg0->unknown_d5_ = arg0->unknown_d5_ + 1;
        return;
    }
    if (arg0->unknown_d5_ != 3) return;

    int* var1 = (int*)0x4001000;
    *var1 = (*var1 & ~0x1f00) | (arg0->unknown_b8_ << 8);
    *(short*)((char*)var1 + 0x50) = 0;
    arg0->unknown_d5_ = arg0->unknown_d5_ + 1;
    func_0208ba54((struct Struct_0208ba54*)arg0);
    ClearFlags00((GameResources*)(func_0200fb8c((int*)GameState::GetInstance())), 0x6000);
}
