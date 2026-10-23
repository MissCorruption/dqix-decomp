#include <globaldefs.h>
#if defined(jpn)
#define func_ov003_0217dc40 func_ov003_0217c8e0
#endif
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_020397c0(void* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);

extern "C" void func_ov003_0217dc40(int arg0);
extern "C" void func_020dae08(void* arg0);

// USA: func_020daeb0
extern "C" ARM void func_020daeb0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    int var2 = *(int*)((char*)arg0 + 0xc);
    if (var2 != 0) {
        func_ov003_0217dc40(var2);
    }
    func_020dae08(arg0);
    func_020397c0(var0->GetUnknownGameObject());
    int var3 = func_020100f8((char*)var0);
    func_020a27ac((void*)var3);
    func_020a28b0((unsigned char*)var3, 2);
    ClearFlags04(var1, 0xc0);
    *((unsigned char*)arg0 + 1) = 1;
}
