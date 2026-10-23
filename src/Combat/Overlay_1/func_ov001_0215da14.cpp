#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" void func_ov017_021d6148(void* arg0, float arg1);

struct Struct_02047b40_8 { int unknown_0_[3]; };

// USA: func_ov001_0215da14
extern "C" ARM int func_ov001_0215da14(char* arg0) {
    int var0;
    GameState* var1 = GameState::GetInstance();
    void* var2 = func_020100bc(var1);
    if (var2 == NULL) {
        var0 = 0;
    } else {
        struct Struct_02047b40_8 var3 = *(struct Struct_02047b40_8*)((char*)var2 + 4);
        func_ov017_021d6148(arg0, (float)var3.unknown_0_[0] / 4096.0f);
        func_ov017_021d6148(arg0 + 8, (float)var3.unknown_0_[1] / 4096.0f);
        func_ov017_021d6148(arg0 + 0x10, (float)var3.unknown_0_[2] / 4096.0f);
        var0 = 1;
    }
    return var0;
}
