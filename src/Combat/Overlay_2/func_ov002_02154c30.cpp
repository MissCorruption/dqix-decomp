#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov002_02154c30_5 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov002_02154c30 {
    unsigned char unknown_0_[0x30];
    unsigned short unknown_30_;
    unsigned short unknown_32_;
};
struct Struct_ov002_02154c30_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x8b8];
#else
    unsigned char unknown1_0_[0x950];
#endif
    int unknown_950_;
};
struct Struct_ov002_02154c30_3 {
    unsigned char unknown_0_[0x130];
    Struct_ov002_02154c30_5 *unknown_130_;
    Struct_ov002_02154c30 *unknown_134_;
#if defined(jpn)
    unsigned char unknown_138_[0x144 - 0x138];
#else
    unsigned char unknown1_138_[0x150 - 0x138];
#endif
    Struct_ov002_02154c30_2 *unknown_150_;
};
struct Struct_ov002_02154c30_4 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_[2];
};

extern "C" int func_0202053c(void *arg0);

static inline int inline_ov002_02154c30_2(unsigned short *arg0) { return *arg0; }
static inline int inline_ov002_02154c30_3(unsigned int *arg0) { return *arg0; }
static inline int inline_ov002_02154c30(int *arg0) { return *arg0; }

// USA: func_ov002_02154c30
extern "C" ARM int func_ov002_02154c30(Struct_ov002_02154c30_4 *arg0) {
    int var0 = 0;
    void *var1    = GameState::GetInstance();
    Struct_ov002_02154c30_3 *var2;
    Struct_ov002_02154c30_4 *var3;
    int var4;
    for (var4 = 0; var4 < 4; var4++) {
        var2 = (Struct_ov002_02154c30_3 *)((GameState*)var1)->GetPartyMemberByIndex(var4);
        if (var2 == 0) continue;
        var3 = &arg0[var4];
        if (!(var3->unknown_4_ != inline_ov002_02154c30_2(&var2->unknown_130_->unknown_4_) || var3->unknown_6_ != inline_ov002_02154c30_2(&var2->unknown_134_->unknown_30_) || var3->unknown_8_ != inline_ov002_02154c30_2(&var2->unknown_130_->unknown_6_) || var3->unknown_a_ != inline_ov002_02154c30_2(&var2->unknown_134_->unknown_32_) ||
              var3->unknown_d_ != inline_ov002_02154c30(&var2->unknown_150_->unknown_950_) || var3->unknown_c_ != func_0202053c(var2) || var3->unknown_0_ != inline_ov002_02154c30_3(&var2->unknown_130_->unknown_0_)))
            continue;
        var3->unknown_4_   = var2->unknown_130_->unknown_4_;
        var3->unknown_6_   = var2->unknown_134_->unknown_30_;
        var3->unknown_8_   = var2->unknown_130_->unknown_6_;
        var3->unknown_a_   = var2->unknown_134_->unknown_32_;
        var3->unknown_d_   = var2->unknown_150_->unknown_950_;
        var3->unknown_c_   = func_0202053c(var2);
        var3->unknown_0_   = var2->unknown_130_->unknown_0_;
        var0 = 1;
    }
    return var0;
}
