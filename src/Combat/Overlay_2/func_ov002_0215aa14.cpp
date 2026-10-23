#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0203970c(void* arg0, int arg1, int arg2);

#if defined(jpn)
#define SUB_BASE_0215aa14 0x1b00
struct Struct_ov002_0215aa14 { char unknown_0_[0x40]; signed char unknown_7c_; };
#else
#define SUB_BASE_0215aa14 0x1c00
struct Struct_ov002_0215aa14 { char unknown_0_[0x7c]; signed char unknown_7c_; };
#endif

// USA: func_ov002_0215aa14
extern "C" ARM void func_ov002_0215aa14(char* arg0) {
    GameObject* var0 = GameState::GetInstance()->GetProtagonist();
    if (!var0) return;
    for (int var1 = 0; var1 < 7; var1++) {
        struct Struct_ov002_0215aa14* var2 = (struct Struct_ov002_0215aa14*)(arg0 + var1 + SUB_BASE_0215aa14);
        func_0203970c(var0, var1, var2->unknown_7c_);
    }
}
