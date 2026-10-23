#include <globaldefs.h>
#include "GameState/Field3b0.h"
#if defined(jpn)
enum { Enum_ov000_02160b54_22004 = 0x57e4, Enum_ov000_02160b54_3784 = 0xe44, Enum_ov000_02160b54_28630 = 0x71c6, Enum_ov000_02160b54_3752 = 0xe24, Enum_ov000_02160b54_23216 = 0x5ca0 };
#else
enum { Enum_ov000_02160b54_22004 = 0x55f4, Enum_ov000_02160b54_3784 = 0xec8, Enum_ov000_02160b54_28630 = 0x6fd6, Enum_ov000_02160b54_3752 = 0xea8, Enum_ov000_02160b54_23216 = 0x5ab0 };
#endif
#include "GameState/GameState.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "Resource/Brightness.h"

extern "C" void func_02016874(void* arg0);
extern "C" void func_ov000_02161020(void* arg0);
struct Vector3i;
extern "C" int func_020a1fa8(void);
extern "C" void func_ov025_021df864(void* arg0);

// USA: func_ov000_02160b54
extern "C" ARM void func_ov000_02160b54(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned int* var1 = ((unsigned int*)GetGameResources());
    func_020100bc(var0);
    if (!(*(int*)(arg0 + Enum_ov000_02160b54_22004) & 0x200)) {
        return;
    }
    if (TestFlags04((GameResources*)var1, 0x100000) == 0) {
        func_02016874(arg0 + Enum_ov000_02160b54_3784);
    }
    func_ov000_02161020(arg0);
    if (TestFlags04((GameResources*)var1, 4) == 0) {
        GameObject* var2 = var0->GetGameObjectByIndex(*(short*)(arg0 + Enum_ov000_02160b54_28630));
        GameObject* var3 = var0->GetGameObjectByIndex(0xc8);
        if (var3 != 0) {
            if (var2 != 0) {
                *(Vector3i*)(&var3->obj3D_.position_.x) = *(Vector3i const*)(&var2->obj3D_.position_.x);
                *(Vector3i*)(&var3->obj3D_.rotation_.x) = *(Vector3i const*)(&var2->obj3D_.rotation_.x);
                const Vector3fix& var4 = var2->obj3D_.GetScale();
                ((Object3D*)((unsigned char*)var3))->SetScale(&var4);
            }
            var3->obj3D_.Draw(0);
        }
    }
    RenderConfig::SubmitToFifo();
    if (*(int*)(arg0 + Enum_ov000_02160b54_3752) != 8) {
        return;
    }
    if (func_020a1fa8() != 4) {
        return;
    }
    func_ov025_021df864(arg0 + Enum_ov000_02160b54_23216);
}
