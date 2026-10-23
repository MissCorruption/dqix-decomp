#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" int func_02075910(int arg0, void* arg1, int arg2, int arg3);
extern "C" int func_01ff85b8(void* arg0, int arg1);

struct Struct_020a94f8 {
    unsigned char unknown_0_[4];
    char unknown_4_[12];
};
struct Struct_020a94f8_2 {
    int unknown_0_;
    Struct_020a94f8 unknown_4_;
};
extern char data_020f1be8;

// USA: func_020a94f8
extern "C" ARM int func_020a94f8(struct Struct_020a94f8_2* arg0, int arg1) {
    int var0 = arg1 ? 0x8010 : 0x10;
    if (!func_02075910(var0, arg0, sizeof(*arg0), 0)) {
        return 0;
    }
    GameState* var1 = GameState::GetInstance();
    if (strcmp(arg0->unknown_4_.unknown_4_, &data_020f1be8) == 0) {
        var1->unknown_5cc8_ = arg1 ? 3 : 2;
        return 0;
    }
    if (func_01ff85b8(&arg0->unknown_4_, sizeof(arg0->unknown_4_)) != arg0->unknown_0_) {
        var1->unknown_5cc8_ = arg1 ? 3 : 2;
        return 0;
    }
    return 1;
}
