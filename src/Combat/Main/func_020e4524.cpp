#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a2718(char* actor);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);
extern "C" void func_ov004_0216fa48(char* obj);

// USA: func_020e4524
extern "C" ARM void func_020e4524(char* obj) {
    func_02043204((char*)func_020421a0());
    func_020a2718((char*)func_020100f8((char*)GameState::GetInstance()));
    SetMainBrightness(GetGameResources(), 0, 0x3c);
    func_ov004_0216fa48(obj);
}
