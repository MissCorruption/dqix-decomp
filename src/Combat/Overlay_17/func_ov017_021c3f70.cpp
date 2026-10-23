#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState*);
extern "C" void func_ov017_021cbeb0(unsigned char arg0, unsigned short arg1);

struct Struct_ov017_021c3f70 {
    char unknown_0_[0xf78];
    signed char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

// USA: func_ov017_021c3f70
extern "C" ARM void func_ov017_021c3f70(unsigned short arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov017_021c3f70* var1 = (struct Struct_ov017_021c3f70*)func_02010828(var0);
    int var2;
    for (var2 = 0; var2 < var1->unknown_f7c_; var2++) {
        ((void (*)(int, unsigned short))func_ov017_021cbeb0)(var1->unknown_f78_[var2], arg0);
    }
}
