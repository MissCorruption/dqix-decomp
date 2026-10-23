#if defined(jpn)
enum {Enum_ov023_021e3f34_312=0x134, Enum_ov023_021e3f34_1252=0x4e0, Enum_ov023_021e3f34_1255=0x4e3, Enum_ov023_021e3f34_1254=0x4e2, Enum_ov023_021e3f34_230=0xe2};
#else
enum {Enum_ov023_021e3f34_312=0x138, Enum_ov023_021e3f34_1252=0x4e4, Enum_ov023_021e3f34_1255=0x4e7, Enum_ov023_021e3f34_1254=0x4e6, Enum_ov023_021e3f34_230=0xe6};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
struct GameResources;
void SetBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);
extern "C" int func_0209ca2c(void* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);
extern int data_02109bf4;

struct Struct_ov023_021e3f34 { char unknown_0_[Enum_ov023_021e3f34_312]; int unknown_138_; char unknown_13c_[Enum_ov023_021e3f34_1252 - Enum_ov023_021e3f34_312 - 4]; unsigned char unknown_4e4_; };

// USA: func_ov023_021e3f34
extern "C" ARM void func_ov023_021e3f34(struct Struct_ov023_021e3f34* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = func_0200fb8c((int*)var0);
    if (arg0->unknown_4e4_ == 0) {
        SetBrightness((GameResources*)var1, -16, 15);
        arg0->unknown_4e4_++;
    }
    if (IsBrightnessTransitionActive((GameResources*)var1)) return;
    if (func_0209ca2c(&data_02109bf4)) return;
    func_020100c4(var0, arg0->unknown_138_);
    arg0->unknown_4e4_ = 0;
    *(signed char*)((char*)arg0 + Enum_ov023_021e3f34_1255) = *(signed char*)((char*)arg0 + 0x400 + Enum_ov023_021e3f34_230);
    *(signed char*)((char*)arg0 + Enum_ov023_021e3f34_1254) = -1;
}
