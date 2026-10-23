#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_02087574_2 {
    unsigned char unknown_0_[0x10];
    signed char unknown_10_;
    unsigned char unknown_11_[3];
};

struct Struct_02087574 {
    unsigned char unknown_0_[0xf2c];
    struct Struct_02087574_2 unknown_f2c_[3];
};

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" struct Struct_02087574_2* func_02087574(struct Struct_02087574* arg0, int arg1);

// USA: func_020875c4
extern "C" ARM void func_020875c4(
    struct Struct_02087574* arg0, int arg1, int arg2) {
    struct Struct_02087574_2* var0 = func_02087574(arg0, arg1);
    if (var0 == 0) {
        return;
    }
    GameObject* var1 = GameState::GetInstance()->GetPartyMemberByIndex(arg2);
    if (var1 == 0) {
        return;
    }
    unsigned char* var2 = (unsigned char*)func_02053c6c((unsigned char*)var1);
    if (var2 == 0) {
        return;
    }
    memcpy(var2 + 0x54 + 0x400, var0, 0x10);
    memset(var0, 0, 0x14);
    var0->unknown_10_ = -1;
}
