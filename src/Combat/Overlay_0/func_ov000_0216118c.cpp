#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_0216118c_3096 = 0xb94, Enum_ov000_0216118c_668 = 0x218, Enum_ov000_0216118c_3208 = 0xc04 };
#else
enum { Enum_ov000_0216118c_3096 = 0xc18, Enum_ov000_0216118c_668 = 0x29c, Enum_ov000_0216118c_3208 = 0xc88 };
#endif
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov000_021626a0(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_0216d600(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" void func_0202e694(void* arg0, int* arg1);
extern "C" void func_ov000_0216f1e4(void* arg0, int* arg1, int arg2, int arg3);

struct Struct_ov000_0216118c { int unknown_0_[3]; };

// USA: func_ov000_0216118c
extern "C" ARM void func_ov000_0216118c(void* arg0, int arg1) {
    GameState::GetInstance();
    ((int)GetGameResources());
    func_ov000_021626a0(arg0, 0x26, 0);
    func_ov000_0216d600((char*)arg0 + Enum_ov000_0216118c_3096, 1, 1, 0, 0, 0, 0, 1);
    if (arg1 == 0) {
        return;
    }
    int* var0 = *(int**)((char*)arg0 + Enum_ov000_0216118c_668);
    if (*(int*)((char*)var0 + 0x8000 + 0xe20) != 0) {
        return;
    }
    struct Struct_ov000_0216118c var1 = *(struct Struct_ov000_0216118c*)((char*)arg0 + Enum_ov000_0216118c_3208);
    struct Struct_ov000_0216118c var2 = var1;
    var2.unknown_0_[1] += 0x800;
    var2.unknown_0_[2] += 0x3000;
    func_0202e694((char*)arg0 + Enum_ov000_0216118c_3096, var2.unknown_0_);
    func_ov000_0216f1e4((char*)arg0 + Enum_ov000_0216118c_3096, var1.unknown_0_, 0xf33, 0);
}
