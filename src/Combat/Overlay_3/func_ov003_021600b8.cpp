#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_021600b8_796 = 0x204 };
#else
enum { Enum_ov003_021600b8_796 = 0x31c };
#endif

extern "C" int func_020100a8(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
struct Vector3i;
extern "C" void func_02032fdc(void* arg0, int arg1, int arg2);

struct Struct_ov003_021600b8 { char unknown_0_[Enum_ov003_021600b8_796]; int unknown_31c_; void* unknown_320_; };

// USA: func_ov003_021600b8
extern "C" ARM void func_ov003_021600b8(Struct_ov003_021600b8* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_31c_ == 0 || arg0->unknown_320_ == 0) return;
    int var1 = func_020100a8(var0);
    GameObject* var2 = func_0200ff1c(var0, var1);
    if (var2 == 0) return;
    *(Vector3i*)((int*)((char*)arg0->unknown_320_ + 0x44)) = *(Vector3i const*)(&var2->obj3D_.position_.x);
    *(int*)0x4000444 = 0;
    func_02032fdc(arg0->unknown_320_, 0, 0);
    *(int*)0x4000448 = 1;
}
