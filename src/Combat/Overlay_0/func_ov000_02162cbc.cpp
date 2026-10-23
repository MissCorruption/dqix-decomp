#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02049efc_2;

struct Struct_ov000_02162cbc_3 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x22 - 0x18];
    unsigned short unknown_22_0_ : 2;
    unsigned short unknown_22_2_ : 4;

    unsigned int inline_ov000_02162cbc() { return unknown_14_; }
    unsigned char inline_ov000_02162cbc_2() { return unknown_22_2_; }
    unsigned char inline_ov000_02162cbc_3() { return unknown_22_0_; }
};

struct Struct_ov000_02162cbc {
    char unknown_0_[0xc1];
    unsigned char unknown_c1_;
    char unknown_c2_[0x138 - 0xc2];
    Struct_ov000_02162cbc_3* unknown_138_;
};

struct Struct_ov000_02162cbc_2 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    void* unknown_29c_;
};

extern "C" int func_ov000_02153e40(void* arg0, short* arg1, int arg2, int arg3);
extern "C" void func_02049efc(struct Struct_02049efc_2* arg0);
extern "C" void func_ov000_02162dc4(Struct_ov000_02162cbc_2* arg0, GameObject* arg1, Struct_ov000_02162cbc* arg2, unsigned int arg3,
                                    int arg4, int arg5, unsigned long long arg6, int arg7);

// USA: func_ov000_02162cbc
extern "C" ARM void func_ov000_02162cbc(Struct_ov000_02162cbc_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    short var1[12];
    int var2 = func_ov000_02153e40(arg0->unknown_29c_, var1, 0xc, 0);
    for (int var3 = 0; var3 < var2; var3++) {
        Struct_ov000_02162cbc* var4 = (Struct_ov000_02162cbc*)var0->GetCombatantByIndex(var1[var3]);
        if (!var4) continue;
        func_02049efc((struct Struct_02049efc_2*)var4);
        if (var4->unknown_138_->unknown_14_ & 1) continue;
        var4->unknown_c1_ &= ~0xf0;
        func_ov000_02162dc4(arg0, NULL, var4, var4->unknown_138_->inline_ov000_02162cbc(), var4->unknown_138_->inline_ov000_02162cbc_2(), var4->unknown_138_->inline_ov000_02162cbc_3(), 0, 0);
    }
}
