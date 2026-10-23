#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_0202445c_2 { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_0202445c {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[0x20];
    int unknown_38_;
    char unknown_3c_[0x570];
    int unknown_5ac_;
    int unknown_5b0_;
};

// USA: func_0202445c
extern "C" ARM void func_0202445c(struct Struct_0202445c* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (var0 == 0) return;
    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 == 0) return;

    struct Struct_0202445c_2* var2 = (struct Struct_0202445c_2*)((char*)var1 + 0x44);
    arg0->unknown_5ac_ = var2->unknown_0_;
    arg0->unknown_5b0_ = var2->unknown_8_;

    if (arg0->unknown_14_ == 3) {
        int var3 = fix32_Divide((fix32_t)(0x37000), (fix32_t)arg0->unknown_38_);
        int var4 = fix32_Divide((fix32_t)(0x1e000), (fix32_t)arg0->unknown_38_);
        if (arg0->unknown_5b0_ < 0) {
            if (arg0->unknown_5b0_ < -var3) {
                arg0->unknown_5b0_ = -(var3 + arg0->unknown_5b0_);
            } else {
                arg0->unknown_5b0_ = 0;
            }
        } else if (arg0->unknown_5b0_ > 0) {
            if (arg0->unknown_5b0_ > var4) {
                arg0->unknown_5b0_ = arg0->unknown_5b0_ - var4;
            } else {
                arg0->unknown_5b0_ = 0;
            }
        } else {
            arg0->unknown_5b0_ = 0;
        }
    } else if (arg0->unknown_14_ == 4) {
        arg0->unknown_5b0_ = var2->unknown_4_;
    }
}
