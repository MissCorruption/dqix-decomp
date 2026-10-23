#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct Struct_02048cf0 { int unknown_0_; int unknown_4_; };
extern "C" struct Struct_02048cf0 func_ov000_0216f74c(int* arg0);

// USA: func_ov025_021e1540
extern "C" ARM unsigned char func_ov025_021e1540(int arg0) {
    GameObject* var0 = GameState::GetInstance()->GetGameObjectByIndex(arg0);
    int var1 = 0;
    if (var0 != NULL) {
        Vector3fix var2 = var0->obj3D_.position_;
        var2.y = 0;
        fix32_t var3 = 0x400000;
        int var4;
        for (var4 = 0; var4 < 0x51; var4++) {
            if (var4 % 18 == 17) {
                continue;
            }
            Struct_02048cf0 var5 = func_ov000_0216f74c(&var4);
            Vector3fix var6 = {0};
            var6.x = var5.unknown_0_;
            var6.z = var5.unknown_4_;
            fix32_t var7 = Vector3fix_Distance(&var2, &var6);
            if (var7 < var3) {
                var1 = var4;
                var3 = var7;
            }
        }
    }
    return var1;
}
