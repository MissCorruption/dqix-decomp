#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(void);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
};

struct Struct_ov017_021d446c {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_0_ : 4;
};

struct Struct_ov017_021d446c_2 {
    int unknown_0_;
    Struct_020fdd44* unknown_4_;
    GameObject* unknown_8_;
};

// USA: func_ov017_021d446c
extern "C" ARM int func_ov017_021d446c(Struct_ov017_021d446c* arg0, Struct_ov017_021d446c_2* arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02012fe4();
    struct Struct_020fdd44* var2 = func_02027ca4();

    if (arg0->unknown_0_ != *(unsigned short*)var1 && arg2 != 1) {
        return 0;
    }

    struct Struct_020fdd44* var3 = func_02028bd0(var2, arg0->unknown_0_);
    arg1->unknown_4_ = var3;
    if (var3 == 0) return 0;

    int var4 = 112 + var3->unknown_2_0_ * 12 + arg0->unknown_3_0_;
    arg1->unknown_0_ = var4;
    GameObject* var5 = var0->GetMaybeFieldMonsterByIndex(var4);
    arg1->unknown_8_ = var5;
    if (var5 == 0) return 0;

    int var6 = *(int*)((char*)var5 + 0x130);
    if (var6 == 8) return 0;
    if (var6 == 9) return 0;
    return 1;
}
