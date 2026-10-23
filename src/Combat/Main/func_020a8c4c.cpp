#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void* func_02010828(GameState* arg0);
struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
extern "C" void func_ov017_021d2c34(unsigned char arg0, unsigned char arg1, unsigned char arg2);

struct Struct_020a8c4c {
    char unknown_0_[4];
    unsigned char unknown_4_;
    char unknown_5_[7];
    int unknown_c_;
};

// USA: func_020a8c4c
extern "C" ARM void func_020a8c4c(struct Struct_020a8c4c* arg0, unsigned char arg1) {
    if ((arg0->unknown_4_ & (1 << arg1)) != 0) {
        return;
    }
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    GameObject* var2 = var0->GetUnknownGameObject();
    GameObject* var3 = var0->GetPartyMemberByIndex(arg1);
    func_02010828(var0);
    if (IsBrightnessWithinValidRange(var1, false) == 0) {
        func_020397cc((struct Struct_02018300_3*)var3, 1);
        *(short*)((char*)var3 + 0xac) = 0;
        if (arg1 == var2->obj3D_.unknown_4_) {
            return;
        }
        func_ov017_021d2c34(arg1, 0, 0);
        return;
    }
    arg0->unknown_4_ |= (1 << arg1);
    *(short*)((char*)var3 + 0xac) = -arg0->unknown_c_;
    *(unsigned char*)((char*)var3 + 0xc1) |= 8;
}
