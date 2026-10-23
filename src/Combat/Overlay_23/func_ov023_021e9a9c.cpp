#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020cf0fc(int arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

struct Struct_ov023_021e9a9c {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 11;
};

// USA: func_ov023_021e9a9c
extern "C" ARM int func_ov023_021e9a9c(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e9a9c_1692=0x43c};
#else
 enum {Enum_ov023_021e9a9c_1692=0x69c};
#endif
    void* var0 = GameState::GetInstance();
    int var1[4];
    func_020cf0fc((int)var1);

    Struct_ov023_021e9a9c* var2 = (Struct_ov023_021e9a9c*)((char*)var0 + 0x5000 + Enum_ov023_021e9a9c_1692);

    if (var1[1] == (int)var2->unknown_1_4_ && var1[2] == (int)var2->unknown_2_0_) {
        func_ov017_021d6134(arg0, 1);
    } else {
        func_ov017_021d6134(arg0, 0);
    }
    return 1;
}
