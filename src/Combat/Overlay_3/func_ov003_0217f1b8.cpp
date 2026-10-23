#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov003_0217f118(void* obj);
extern "C" void func_020397c0(void* obj);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);
extern "C" void func_020a28b0(unsigned char* obj, int mask);

// USA: func_ov003_0217f1b8
extern "C" ARM void func_ov003_0217f1b8(unsigned char* obj) {
    GameState* battleStruct = GameState::GetInstance();
    unsigned int* p = (unsigned int*)((int)GetGameResources());
    func_ov003_0217f118(obj);
    func_020397c0(battleStruct->GetUnknownGameObject());
    int f = func_020100f8((char*)battleStruct);
    func_020a27ac((void*)f);
    func_020a28b0((unsigned char*)f, 2);
    ClearFlags04((GameResources*)p, 0xc0);
    obj[1] = 1;
}
