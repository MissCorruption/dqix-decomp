#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov003_0217f118(void* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);

// USA: func_ov003_0217f1b8
extern "C" ARM void func_ov003_0217f1b8(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned int* var1 = (unsigned int*)((int)GetGameResources());
    func_ov003_0217f118(arg0);
    func_020397c0(var0->GetUnknownGameObject());
    int var2 = func_020100f8((char*)var0);
    func_020a27ac((void*)var2);
    func_020a28b0((unsigned char*)var2, 2);
    ClearFlags04((GameResources*)var1, 0xc0);
    arg0[1] = 1;
}
