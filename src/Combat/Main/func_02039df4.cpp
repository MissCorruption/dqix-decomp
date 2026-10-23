#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02039df4_462 = 0x1c2 };
#else
enum { Enum_02039df4_462 = 0x1ce };
#endif

#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);

struct Struct_02039df4;

struct Struct_02037d88_9;

struct Struct_02037d88_8;

struct Struct_02037d88_10 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0xc2 - 6];
    unsigned char unknown_c2_0_ : 5;
    unsigned char unknown_c2_5_ : 1;
    unsigned char unknown_c2_6_ : 2;
    char unknown_c3_[Enum_02039df4_462 - 0xc3];
    unsigned char unknown_1ce_;
};

// USA: func_02039df4
extern "C" ARM void func_02039df4(struct Struct_02037d88_10* arg0) {
    int var0;
    GameObject* var1;

    if (arg0->unknown_c2_5_) return;
    var1 = func_0200ff58(GameState::GetInstance(), arg0->unknown_4_);
    if (var1 == NULL) return;
    var0 = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06() / 100;
    if (var0 != 0x2b && var0 != 0x2d && var0 != 0x40 && var0 != 0x29) return;
    arg0->unknown_1ce_ |= 4;
    ((Object3D*)((struct Struct_02037d88_9*)arg0))->TransitionInheritedAlpha(0, 0);
    ((Object3D*)((struct Struct_02037d88_8*)arg0))->SetInheritedAlpha(0);
}
