#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "NitroSDK/NSBXX/RenderConfig.h"

extern "C" int func_02032fdc(void* arg0, void* arg1, int arg2);
extern "C" void* func_0202ed74(void* arg0);
extern "C" void func_020ca528(void* ptr, void* addr);

extern "C" void func_02047448(int arg0, int arg1, int arg2);

extern int data_0210a0cc;
extern Vector3i data_020e8920;

// USA: func_02076bec
extern "C" ARM int func_02076bec(GameObject* arg0, void* arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (!arg0->obj3D_.IsVisible()) {
        return 0;
    }

    int var1 = func_02032fdc(var0, arg1, 0);
    if (*(unsigned char*)(var0 + 0x17a) == 0) {
        return var1;
    }

    GameState* var2 = GameState::GetInstance();
    void* var3 = func_020100bc(var2);

    Vector3i var4 = arg0->obj3D_.position_;
    var4.y = *(int*)(var0 + 0x170);
    RenderConfig::SetObjectPosition(&var4);

    if (var3 != 0) {
        void* var5 = func_0202ed74(var3);
        func_020ca528(var5, &data_0210a0cc);
        data_0210a010.flags &= ~0xa4;
    }

    Vector3i var6 = data_020e8920;
    RenderConfig::SetObjectScale(&var6);
    RenderConfig::SubmitToFifo();

    func_02047448(*(int*)(var0 + 0x16c), 0, 1);
    return var1;
}
