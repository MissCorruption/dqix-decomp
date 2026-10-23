#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int func_020ac4c0(void* arg0);

extern "C" Struct_020ac4f8 func_ov023_021e8fe8(Struct_020ac4f8 arg0, int arg1);
struct Struct_0209cf44 {
    int unknown_0_;
    union {
        int unknown_0_;
        float unknown1_0_;
        Struct_0209cf44* unknown2_0_;
    } unknown_4_;
};

extern "C" void func_ov017_021d6134(Struct_0209cf44* arg0, int arg1);

// USA: func_ov023_021e9c54
extern "C" ARM int func_ov023_021e9c54(void* arg0) {
    Struct_0209cf44* var0 = (Struct_0209cf44*)arg0;
    Struct_02061c04 var1;
    func_020ac4c0(&var1);

    Struct_020ac4f8 var2 = func_ov023_021e8fe8(var1.unknown_0_.unknown_4_, 1);

    func_ov017_021d6134(&var0[0], var2.unknown_0_);
    func_ov017_021d6134(&var0[1], var2.unknown_2_);
    return 1;
}
