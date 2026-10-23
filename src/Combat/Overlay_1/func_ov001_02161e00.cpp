#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" float func_ov017_021d6110(void* arg0);

struct Struct_ov001_02161e00 { char unknown_0_[0x1f8]; unsigned char unknown_1f8_; char unknown_1f9_[7]; float unknown_200_; unsigned int unknown_204_; };

// USA: func_ov001_02161e00
extern "C" ARM int func_ov001_02161e00(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov001_02161e00* var1 = (struct Struct_ov001_02161e00*)func_020100bc(var0);
    int var2 = func_ov017_021d60f4(arg0);
    float var3 = func_ov017_021d6110((char*)arg0 + 8);
    float var4 = func_ov017_021d6110((char*)arg0 + 0x10);
    int var5 = (int)(4096.0f * var4);
    if (var1 == NULL) {
        return 0;
    }
    if (var2 == 0) {
        var1->unknown_1f8_ = 0;
    } else {
        var1->unknown_1f8_ = 1;
        var1->unknown_200_ = 1.0f;
        var1->unknown_204_ = 0x1000;
        var1->unknown_200_ = var3;
        var1->unknown_204_ = var5;
    }
    return 1;
}
