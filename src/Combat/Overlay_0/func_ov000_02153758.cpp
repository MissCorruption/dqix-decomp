#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff94(GameState*, int);
struct Struct_0206f01c_2;
extern "C" void* func_0206f4f0(struct Struct_0206f01c_2* arg0, int arg1);

// USA: func_ov000_02153758
extern "C" ARM void* func_ov000_02153758(void* arg0, int arg1) {
    int var0 = (arg1 >= 0 && arg1 <= 3);
    if (var0) return 0;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200ff94(var1, arg1);
    if (var2 == 0) return 0;
    int var3 = *(int*)((char*)arg0 + 0x8000 + 0xe18);
    short var4 = var2->obj3D_.unknown_2_;
    return func_0206f4f0((struct Struct_0206f01c_2*)((char*)var3 + 0x678), var4);
}
