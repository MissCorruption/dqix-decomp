#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ad2c(int arg0);
struct Struct_ov001_0215bcc0;
extern int data_ov001_02165769;

// USA: func_ov001_0215bcc0
extern "C" ARM int func_ov001_0215bcc0(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    (int)BackgroundLoader::GetInstance();
    int var1;
    int var2 = func_ov001_0215ad2c(func_ov017_021d60f4(arg0));
    var1 = 3;
    if (arg1 >= 2) {
        var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    }
    GameObject* var3 = var0->GetGameObjectByIndex(var2);
    if (var3 == NULL) return 0;
    unsigned char var4 = var3->obj3D_.animationFlags_;
    void* var5 = var3->obj3D_.activeAnimationRecord_;
    ((Object3D*)((struct Struct_ov001_0215bcc0*)var3))->RemoveAnimationPackageByID(var1);
    if (var3->obj3D_.MaybeSetRegularAnimation((char const*)((int)var5), var4) == 0) {
        var3->obj3D_.MaybeSetRegularAnimation((char const*)((int)&data_ov001_02165769), 0);
    }
    return 1;
}
