#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0209cf44 {
    int unknown_0_;
    union {
        int unknown_0_;
        float unknown1_0_;
        Struct_0209cf44* unknown2_0_;
    } unknown_4_;
};

struct Struct_ov023_021e93e0 {
    char unknown_0_[0x464];
    unsigned char unknown_464_[32];
    char unknown_484_[4];
    short unknown_488_[10];
    unsigned char unknown_49c_0_ : 1;
};

struct Struct_ov023_021e93e0_2 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_ov023_021e93e0* unknown_150_;
};

extern "C" int func_ov017_021d60f4(Struct_0209cf44* arg0);
extern "C" GameObject* func_ov023_021e8f28(int arg0);
extern "C" void func_ov017_021d6134(Struct_0209cf44* arg0, int arg1);

extern "C" ARM int func_ov023_021e93e0(void* arg0) {
    Struct_0209cf44* var0 = (Struct_0209cf44*)arg0;
    GameState::GetInstance();
    GameObject* var1 = func_ov023_021e8f28(func_ov017_021d60f4(&var0[0]));
    if (var1 == NULL) return 0;
    Struct_ov023_021e93e0* var2 = ((Struct_ov023_021e93e0_2*)var1)->unknown_150_;
    func_ov017_021d6134(&var0[1], var2->unknown_49c_0_);
    return 1;
}
