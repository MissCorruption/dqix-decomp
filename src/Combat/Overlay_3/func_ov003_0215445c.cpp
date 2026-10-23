#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
int IsSubBrightnessTransitionActive(GameResources*);
struct GameResources;
void SetSubBrightness(GameResources*, int, int);
struct Struct_02074bf4;
extern "C" void func_02074e54(struct Struct_02074bf4*);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020dc2d0(int);

struct Struct_ov003_0215445c {
    char unknown_0_[0x38];
    char unknown_38_[0x58 - 0x38];
    unsigned char unknown_58_;
    char unknown_59_[0x5a - 0x59];
    unsigned char unknown_5a_;
    unsigned char unknown_5b_;
};

// USA: func_ov003_0215445c
extern "C" ARM void func_ov003_0215445c(struct Struct_ov003_0215445c* arg0) {
    int var0 = func_0200fb8c((int*)GameState::GetInstance());

    if (arg0->unknown_58_ == 0) {
        arg0->unknown_5a_ = 3;
        return;
    }
    if (arg0->unknown_5b_ == 0) {
        SetSubBrightness((GameResources*)var0, -16, 1);
        arg0->unknown_5b_ = arg0->unknown_5b_ + 1;
        return;
    }
    if (arg0->unknown_5b_ != 1) return;
    if (IsSubBrightnessTransitionActive((GameResources*)var0) != 0) return;

    func_02074e54((struct Struct_02074bf4*)((char*)arg0 + 0x38));
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 1);
    func_020dc2d0(0);
    arg0->unknown_5a_ = 3;
    arg0->unknown_5b_ = 0;
}
