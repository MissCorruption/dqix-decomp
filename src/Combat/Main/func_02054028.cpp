#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02054028_448 = 0x1b4 };
#else
enum { Enum_02054028_448 = 0x1c0 };
#endif
#include "GameState/GameState.h"

struct Struct_02054028 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[Enum_02054028_448 - 6];
    unsigned short unknown_1c0_;
};

// USA: func_02054028
extern "C" ARM void func_02054028(struct Struct_02054028* arg0, int arg1) {
    arg0->unknown_1c0_ = arg1;
    GameState* var0 = GameState::GetInstance();
    short var1 = arg0->unknown_4_;
    int var2 = var1 * 0xc;
    int var3[5];
    var3[0] = var1;
    var3[1] = var2 + 0x13;
    var3[2] = var2 + 0x14;
    var3[3] = var2 + 0x15;
    var3[4] = var2 + 0x1b;
    if (arg0->unknown_1c0_ != 0) {
        for (int var4 = 0; var4 < 5; var4++) {
            GameObject* var5 = var0->GetGameObjectByIndex(var3[var4]);
            if (var5 != 0 && var5->obj3D_.pModel_ != 0) {
                var5->obj3D_.pModel_->RemoveTextures();
            }
        }
    } else {
        GameObject* var6[5] = {0};
        var6[0] = var0->GetGameObjectByIndex(var1 * 0xc + 0x17);
        var6[1] = var0->GetGameObjectByIndex(var1 * 0xc + 0x19);
        var6[3] = var0->GetGameObjectByIndex(var1 * 0xc + 0x16);
        for (int var7 = 0; var7 < 5; var7++) {
            GameObject* var8 = var0->GetGameObjectByIndex(var3[var7]);
            if (var8 != 0 && var8->obj3D_.pModel_ != 0) {
                Model3D* var9 = var8->obj3D_.pModel_;
                GameObject* var10 = var6[var7];
                if (var10 != 0 && var10->obj3D_.pModel_ != 0) {
                    var9->ApplyTexturesFromModel(var10->obj3D_.pModel_);
                }
                var9->ApplyTexturesFromModel(var9);
            }
        }
    }
}
