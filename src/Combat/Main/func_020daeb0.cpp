#include <globaldefs.h>
#if defined(jpn)
#define func_ov003_0217dc40 func_ov003_0217c8e0
#endif
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_020397c0(void* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);
extern "C" void func_020a28b0(unsigned char* obj, int mask);

extern "C" void func_ov003_0217dc40(int arg);
extern "C" void func_020dae08(void* obj);

// USA: func_020daeb0
extern "C" ARM void func_020daeb0(void* obj) {
    GameState* battle = GameState::GetInstance();
    GameResources* ov = GetGameResources();
    int field0xc = *(int*)((char*)obj + 0xc);
    if (field0xc != 0) {
        func_ov003_0217dc40(field0xc);
    }
    func_020dae08(obj);
    func_020397c0(battle->GetUnknownGameObject());
    int flagResult = func_020100f8((char*)battle);
    func_020a27ac((void*)flagResult);
    func_020a28b0((unsigned char*)flagResult, 2);
    ClearFlags04(ov, 0xc0);
    *((unsigned char*)obj + 1) = 1;
}
