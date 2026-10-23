#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" int func_02094a00(void);
extern "C" void func_02094ab0(void);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_ov017_021a9fa0(int arg0);

// USA: func_ov017_021a9f58
extern "C" ARM void func_ov017_021a9f58(int arg0) {
    GameState* var0 = GameState::GetInstance();
    func_02043204((char*)(long)func_020421a0());
    func_02094a00();
    func_02094ab0();
    SetMainBrightness(GetGameResources(), 0, 0x14);
    func_020397c0(var0->GetUnknownGameObject());
    func_ov017_021a9fa0(arg0);
}
