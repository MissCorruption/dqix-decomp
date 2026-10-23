#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_020397c0(void* arg0);
extern "C" void func_ov017_021bf490(void*);
extern "C" int func_020421a0();
extern "C" void func_ov017_0218d5ac(void* arg0);

typedef int (*Type_ov017_021bf534)(void*);
struct Struct_ov017_021d6cc4 { Type_ov017_021bf534 unknown_0_[9]; };
extern Struct_ov017_021d6cc4 data_ov017_021d6cc4;

struct Struct_ov017_021bf534 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_;
};

// USA: func_ov017_021bf534
extern "C" ARM void func_ov017_021bf534(struct Struct_ov017_021bf534* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021bf534_728=0x228};
#else
 enum {Enum_ov017_021bf534_728=0x2d8};
#endif
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    GameResources* var2 = GetGameResources();
    if (var2) {
        func_ov017_0218d5ac(var2);
    }

    Struct_ov017_021d6cc4 var3 = data_ov017_021d6cc4;
    Type_ov017_021bf534 var4 = var3.unknown_0_[arg0->unknown_a_];
    if (var4) {
        arg0->unknown_a_ = (unsigned char)var4(arg0);
    } else {
        if (var1) {
            func_020397c0(var1);
        }
        func_ov017_021bf490(arg0);
        arg0->unknown_1_ = 1;
        *(int*)((char*)func_020421a0() + Enum_ov017_021bf534_728) = 0;
    }
}
