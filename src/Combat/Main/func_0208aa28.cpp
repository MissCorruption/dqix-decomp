#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" GameObject* func_0200ff94(GameState* arg0, int arg1);
extern "C" int func_020855d0(unsigned char* arg0);
extern "C" void* func_02033fa0(void* arg0);
extern "C" int func_0204bdc0(unsigned short* arg0);
extern "C" int func_0204bdd8(unsigned short* arg0);
extern "C" int func_0204bdf0(unsigned short* arg0);
extern "C" int func_0204be08(unsigned short* arg0);
extern "C" unsigned char func_02039d7c(char* arg0);

#if defined(jpn)
enum { Enum_0208aa28_336 = 0x144 };
#else
enum { Enum_0208aa28_336 = 0x150 };
#endif

// USA: func_0208aa28
extern "C" ARM int func_0208aa28(unsigned char* arg0, int arg1, int arg2) {
    ((unsigned int*)GetGameResources());
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff94(var0, arg1);
    GameObject* var2 = func_0200ff1c(var0, arg1);
    if (var1 == NULL || (**(int**)((char*)var1 + 0x130) & 1)) {
        return 0;
    }
    if (func_020855d0(*(unsigned char**)((char*)var2 + Enum_0208aa28_336)) != 0 || arg2 != 0) {
        return 0;
    }
    unsigned short* var3 = (unsigned short*)func_02033fa0(var1);
    switch (arg0[4]) {
        case 0:
            if (!func_0204bdc0(var3)) return 0;
            break;
        case 1:
            if (!func_0204bdd8(var3)) return 0;
            break;
        case 2:
            if (!func_0204bdf0(var3)) return 0;
            break;
        case 3:
            if (!func_0204be08(var3)) return 0;
            break;
        default:
            break;
    }
    GameObject* var4 = var0->GetUnknownGameObject();
    if (*(short*)((char*)var4 + 0xb2) == 0) {
        return 0;
    }
    return func_02039d7c((char*)var4) == 0 ? 1 : 0;
}
