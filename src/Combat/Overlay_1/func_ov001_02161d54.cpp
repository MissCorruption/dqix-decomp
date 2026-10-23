#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov001_02161d54 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

extern "C" int func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_02161d54
extern "C" ARM int func_ov001_02161d54(void* arg0) {
    GameObject* var0 = GameState::GetInstance()->GetProtagonist();
    struct Struct_ov001_02161d54* var1 = (struct Struct_ov001_02161d54*)func_02053c6c((unsigned char*)var0);
    int var2 = var1->unknown_49c_0_ ? 0 : 1;
    func_ov017_021d6134(arg0, var2);
    return 1;
}
